#pragma once

#include <CoreMinimal.h>

#include "CellBlock.generated.h"

USTRUCT(BlueprintType)
struct FCellBlock
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int32> Cells;

};