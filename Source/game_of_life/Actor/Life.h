#pragma once

#include <CoreMinimal.h>

#include "Types/CellBlock.h"
#include "Types/WrapMode.h"
#include "Utils/DynamicTexture.h"

#include "Life.generated.h"


UCLASS(BlueprintType)
class GAME_OF_LIFE_API ALife : public AActor
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (UIMin = "1", UIMax = "9000", ClampMin = "1", ClampMax = "9000"))
    int32 Width = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (UIMin = "1", UIMax = "9000", ClampMin = "1", ClampMax = "9000"))
    int32 Height = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UDynamicTexture* LifeTexture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UDynamicTexture* AshTexture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
    TMap<int32, FCellBlock> CellsAliveAtStart;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
    TMap<int32, FCellBlock> Ash;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
    int32 Iteration = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
    EWrapMode WrapMode = EWrapMode::Finite;

    UFUNCTION(BlueprintCallable)
    void Initialize();

    UFUNCTION(BlueprintCallable)
    void AddAsh(int32 X, int32 Y);

    UFUNCTION(BlueprintCallable)
    float GetAshPercentage();

    UFUNCTION(BlueprintCallable)
    void SetCell(int32 X, int32 Y, bool Value);

    UFUNCTION(BlueprintPure)
    bool GetCell(int32 X, int32 Y);

    UFUNCTION(BlueprintPure)
    int32 GetAliveNeighbors(int32 X, int32 Y);

    UFUNCTION(BlueprintCallable)
    void LifeIteration();

    UFUNCTION(BlueprintCallable)
    void Reset();

    UFUNCTION(BlueprintCallable)
    void DrawShapeInTexture(UDynamicTexture* Texture, TMap<int32, FCellBlock> Shape, FLinearColor Color, int32 RowStart, int32 ColumnStart);

private:

    TArray<TArray<bool>> Cells;
};
