#include "Life.h"

void ALife::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PaintTexture || !EraseTexture)
    {
        return;
    }

    const float Step = DeltaTime / HeatTextureDecayLength;
    for (int32 I = 0; I < Height; I++)
    {
        for (int32 J = 0; J < Width; J++)
        {
            const float NewPaintPixel = FMath::Max(PaintTexture->GetPixel(I, J).R - Step, 0.f);
            PaintTexture->SetPixel(I, J, FLinearColor(NewPaintPixel, NewPaintPixel, NewPaintPixel, 1.f));
            const float NewErasePixel = FMath::Max(EraseTexture->GetPixel(I, J).R - Step, 0.f);
            EraseTexture->SetPixel(I, J, FLinearColor(NewErasePixel, NewErasePixel, NewErasePixel, 1.f));
        }
    }
    PaintTexture->UpdateTexture();
    EraseTexture->UpdateTexture();
}

void ALife::Initialize()
{
    if (!LifeTexture)
    {
        LifeTexture = NewObject<UDynamicTexture>(this, TEXT("LifeTexture"));
        AshTexture = NewObject<UDynamicTexture>(this, TEXT("AshTexture"));
        PaintTexture = NewObject<UDynamicTexture>(this, TEXT("PaintTexture"));
        EraseTexture = NewObject<UDynamicTexture>(this, TEXT("EraseTexture"));
        LifeTexture->Initialize(Height, Width, FLinearColor::Black, TextureFilter::TF_Nearest);
        AshTexture->Initialize(Height, Width, FLinearColor::Black, TextureFilter::TF_Nearest);
        PaintTexture->Initialize(Height, Width, FLinearColor::Black, TextureFilter::TF_Nearest);
        EraseTexture->Initialize(Height, Width, FLinearColor::Black, TextureFilter::TF_Nearest);
    }

    for (int32 Y = 0; Y < Height; Y++)
    {
        TArray<bool> Row;
        for (int32 X = 0; X < Width; X++)
        {
            const bool CellValue = [&]()
            {
                if (auto RowCellBlock = CellsAliveAtStart.Find(Y))
                {
                    if (RowCellBlock->Cells.Contains(X))
                    {
                        return true;
                    }
                }
                return false;
            }();
            Row.Add(CellValue);
            if (CellValue)
            {
                AshTexture->SetPixel(Y, Width - X - 1, FLinearColor::Gray);
                AddAsh(X, Y);
            }
            LifeTexture->SetPixel(Y, Width - X - 1, CellValue ? FLinearColor::White : FLinearColor::Black);
        }
        Cells.Add(Row);
    }
}

void ALife::AddAsh(int32 X, int32 Y)
{
    if (!Ash.Contains(Y))
    {
        Ash.Add(Y, FCellBlock());
    }
    Ash[Y].Cells.Add(X);
    AshTexture->SetPixel(Y, Width - X - 1, FLinearColor::Gray);
}

float ALife::GetAshPercentage()
{
    int32 AshCount = 0;
    for (auto AshRow : Ash)
    {
        AshCount += AshRow.Value.Cells.Num();
    }
    return AshCount / (float)(Width * Height);
}

void ALife::SetCell(int32 X, int32 Y, bool Value)
{
    const int32 FinalX = FMath::Clamp(X, 0, Width - 1);
    const int32 FinalY = FMath::Clamp(Y, 0, Height - 1);
    Cells[FinalY][FinalX] = Value;
    AddAsh(FinalX, FinalY);
    LifeTexture->SetPixel(FinalY, Width - FinalX - 1, Value ? FLinearColor::White : FLinearColor::Black);
    LifeTexture->UpdateTexture();
    if (Value)
    {
        PaintTexture->SetPixel(FinalY, Width - FinalX - 1, FLinearColor::White);
    }
    else
    {
        EraseTexture->SetPixel(FinalY, Width - FinalX - 1, FLinearColor::White);
    }
}

bool ALife::GetCell(int32 X, int32 Y)
{
    return Cells[Y][X];
}

int32 ALife::GetAliveNeighbors(int32 X, int32 Y)
{
    int32 AliveNeighbors = 0;
    for (int32 XOffset = -1; XOffset <= 1; XOffset++)
    {
        for (int32 YOffset = -1; YOffset <= 1; YOffset++)
        {
            const int32 NeighborX = X + XOffset;
            const int32 NeighborY = Y + YOffset;
            if (WrapMode == EWrapMode::Finite)
                if (NeighborX < 0 || NeighborX >= Width || NeighborY < 0 || NeighborY >= Height)
                    continue;
            if (XOffset == 0 && YOffset == 0)
                continue;

            int32 FinalNeighborX = NeighborX;
            int32 FinalNeighborY = NeighborY;
            if (WrapMode == EWrapMode::Portal)
            {
                if (NeighborX < 0)
                    FinalNeighborX = Width - 1;
                else if (NeighborX >= Width)
                    FinalNeighborX = 0;
                if (NeighborY < 0)
                    FinalNeighborY = Height - 1;
                else if (NeighborY >= Height)
                    FinalNeighborY = 0;
            }

            if (GetCell(FinalNeighborX, FinalNeighborY))
            {
                AliveNeighbors++;
            }
        }
    }
    return AliveNeighbors;
}

void ALife::LifeIteration()
{
    TArray<TArray<bool>> NewCells;
    for (int32 Y = 0; Y < Height; Y++)
    {
        TArray<bool> Row;
        for (int32 X = 0; X < Width; X++)
        {
            int32 NumNeighbors = GetAliveNeighbors(X, Y);
            const bool WillBeAlive = GetCell(X, Y) ? (NumNeighbors == 2 || NumNeighbors == 3) : (NumNeighbors == 3);
            Row.Add(WillBeAlive);
            if (WillBeAlive)
            {
                AddAsh(X, Y);
            }
            LifeTexture->SetPixel(Y, Width - X - 1, WillBeAlive ? FLinearColor::White : FLinearColor::Black);
        }
        NewCells.Add(Row);
    }
    Cells = NewCells;

    Iteration++;
    LifeTexture->UpdateTexture();
    AshTexture->UpdateTexture();
}

void ALife::Reset()
{
    Ash.Empty();
    Cells.Empty();
    AshTexture->Fill(FLinearColor::Black);
    Iteration = 0;
    Initialize();
    LifeTexture->UpdateTexture();
    AshTexture->UpdateTexture();
}

void ALife::DrawShapeInTexture(UDynamicTexture* Texture, TMap<int32, FCellBlock> Shape, FLinearColor Color, int32 RowStart, int32 ColumnStart)
{
    if (!IsValid(Texture))
    {
        return;
    }

    Texture->Fill(FLinearColor::Black);
    for (auto& ShapeRow : Shape)
    {
        for (auto& ShapeColumn : ShapeRow.Value.Cells)
        {
            const int32 FinalY = FMath::Clamp(RowStart + ShapeRow.Key, 0, Height - 1);
            const int32 FinalX = FMath::Clamp(Width - (ColumnStart + ShapeColumn) - 1, 0, Width - 1);
            Texture->SetPixel(FinalY, FinalX, Color);
        }
    }
    Texture->UpdateTexture();
}
