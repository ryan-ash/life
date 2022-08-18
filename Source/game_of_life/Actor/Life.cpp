#include "Life.h"

void ALife::Initialize()
{
    Texture = NewObject<UDynamicTexture>(this, TEXT("Texture"));
    Texture->Initialize(Height, Width, FLinearColor::Black, TextureFilter::TF_Nearest);

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
            Texture->SetPixel(Y, Width - X - 1, CellValue ? FLinearColor::White : FLinearColor::Black);
        }
        Cells.Add(Row);
    }
}

void ALife::SetCell(int32 X, int32 Y, bool Value)
{
    Cells[Y][X] = Value;
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
            Texture->SetPixel(Y, Width - X - 1, WillBeAlive ? FLinearColor::White : FLinearColor::Black);
        }
        NewCells.Add(Row);
    }
    Cells = NewCells;

    Iteration++;
    Texture->UpdateTexture();
}
