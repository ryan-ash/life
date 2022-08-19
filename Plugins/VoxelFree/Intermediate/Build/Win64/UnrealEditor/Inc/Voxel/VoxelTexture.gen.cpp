// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTexture() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelFloatTexture;
class UScriptStruct* FVoxelFloatTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelFloatTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelFloatTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFloatTexture, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFloatTexture"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelFloatTexture.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFloatTexture>()
{
	return FVoxelFloatTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFloatTexture>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFloatTexture",
		sizeof(FVoxelFloatTexture),
		alignof(FVoxelFloatTexture),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelFloatTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelFloatTexture.InnerSingleton, Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelFloatTexture.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelColorTexture;
class UScriptStruct* FVoxelColorTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelColorTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelColorTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelColorTexture, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelColorTexture"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelColorTexture.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelColorTexture>()
{
	return FVoxelColorTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelColorTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelColorTexture>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelColorTexture",
		sizeof(FVoxelColorTexture),
		alignof(FVoxelColorTexture),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelColorTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelColorTexture.InnerSingleton, Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelColorTexture.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTexture_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTexture_h_Statics::ScriptStructInfo[] = {
		{ FVoxelFloatTexture::StaticStruct, Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::NewStructOps, TEXT("VoxelFloatTexture"), &Z_Registration_Info_UScriptStruct_VoxelFloatTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelFloatTexture), 3479360562U) },
		{ FVoxelColorTexture::StaticStruct, Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::NewStructOps, TEXT("VoxelColorTexture"), &Z_Registration_Info_UScriptStruct_VoxelColorTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelColorTexture), 605601977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTexture_h_2123946962(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTexture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTexture_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
