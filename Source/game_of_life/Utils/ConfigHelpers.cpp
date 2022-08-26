#include "ConfigHelpers.h"

DEFINE_LOG_CATEGORY(_Config)

void UConfigHelpers::SaveLocalLifeMaker(FLifeMaker LifeMaker)
{
    SaveObjectToJsonFile<FLifeMaker>(LifeMaker, "LocalLifeMaker");
}

FLifeMaker UConfigHelpers::GetLocalLifeMaker()
{
    return LoadObjectFromJson<FLifeMaker>("LocalLifeMaker");
}
