#pragma once

#include <CoreMinimal.h>

UENUM(BlueprintType)
enum class EWrapMode : uint8
{
    Finite,
    Portal,
    Infinite
};
