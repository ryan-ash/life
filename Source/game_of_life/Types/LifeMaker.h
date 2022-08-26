#pragma once

#include <CoreMinimal.h>

#include "LifeNote.h"
#include "LifeNoteFolder.h"

#include "LifeMaker.generated.h"

USTRUCT(BlueprintType)
struct FLifeMaker
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FLifeNoteFolder> NoteFolders;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FLifeNote> Notes;
};
