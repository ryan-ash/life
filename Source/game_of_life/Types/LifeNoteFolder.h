#pragma once

#include <CoreMinimal.h>

#include "LifeNoteFolder.generated.h"

USTRUCT(BlueprintType)
struct FLifeNoteFolder
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName FolderID;
};
