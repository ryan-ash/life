// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelMaterialIndices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialIndices() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelMaterialIndices;
class UScriptStruct* FVoxelMaterialIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelMaterialIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelMaterialIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterialIndices, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterialIndices"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelMaterialIndices.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMaterialIndices>()
{
	return FVoxelMaterialIndices::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UStruct to use it in TMap for GC\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialIndices.h" },
		{ "ToolTip", "UStruct to use it in TMap for GC" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterialIndices>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMaterialIndices",
		sizeof(FVoxelMaterialIndices),
		alignof(FVoxelMaterialIndices),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelMaterialIndices.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelMaterialIndices.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelMaterialIndices.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h_Statics::ScriptStructInfo[] = {
		{ FVoxelMaterialIndices::StaticStruct, Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::NewStructOps, TEXT("VoxelMaterialIndices"), &Z_Registration_Info_UScriptStruct_VoxelMaterialIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMaterialIndices), 2121677541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h_533578119(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
