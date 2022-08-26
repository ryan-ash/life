#pragma once

#include <CoreMinimal.h>
#include <EngineUtils.h>
#include <JsonObjectConverter.h>
#include <Kismet/BlueprintFunctionLibrary.h>

#include "Types/LifeMaker.h"

#include "ConfigHelpers.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(_Config, Log, All);


UCLASS(Blueprintable)
class UConfigHelpers : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable)
    static void SaveLocalLifeMaker(FLifeMaker LifeMaker);

    UFUNCTION(BlueprintPure)
    static FLifeMaker GetLocalLifeMaker();

    template<typename T>
    static void SaveObjectToJsonFile(const T& Struct, const FString& FileName);

    template<typename T>
    static T LoadObjectFromJson(const FString& FileName);

};

template<typename T>
void UConfigHelpers::SaveObjectToJsonFile(const T& Struct, const FString& FileName)
{
    const FString FolderName("Saved");
    const FString FileNameJson = FileName + ".json";
    const FString FilePath = FPaths::Combine(FPaths::ProjectUserDir(), FolderName, FileNameJson);

    const TSharedPtr<FJsonObject> PresetJson = FJsonObjectConverter::UStructToJsonObject(Struct);
    FString OutputString;
    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    const bool SerializeSuccess = FJsonSerializer::Serialize(PresetJson.ToSharedRef(), Writer);
    check(SerializeSuccess);
    FFileHelper::SaveStringToFile(OutputString, *FilePath);
}

template<typename T>
T UConfigHelpers::LoadObjectFromJson(const FString& FileName)
{
    const FString Directory = "Saved";
    const FString FilePath = FPaths::Combine(FPaths::ProjectUserDir(), Directory, FileName + ".json");

    T Config;

    FString JsonString;
    if(!FPaths::FileExists(FilePath))
    {
        UE_LOG(_Config, Warning, TEXT("File %s doesn't exist!"), *FileName);
        return Config;
    }

    const bool LoadingSuccess = FFileHelper::LoadFileToString(JsonString, *FilePath);
    if(!LoadingSuccess)
    {
        UE_LOG(_Config, Warning, TEXT("Can't load %s.json!"), *FileName);
        return Config;
    }

    const bool ParseSuccess = FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &Config, 0, 0);
    if (!ParseSuccess)
    {
        UE_LOG(_Config, Warning, TEXT("Can't parse %s.json!"), *FileName);
    }

    return Config;
}
