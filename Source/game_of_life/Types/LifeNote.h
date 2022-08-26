#pragma once

#include <CoreMinimal.h>

#include "CellBlock.h"

#include "LifeNote.generated.h"

USTRUCT(BlueprintType)
struct FLifeNote
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName FolderID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<int32, FCellBlock> Life;
};
