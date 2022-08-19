// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelCooking/VoxelCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCookedData() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookedData();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelCookedData;
class UScriptStruct* FVoxelCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelCookedData, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelCookedData.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelCookedData>()
{
	return FVoxelCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookedData.h" },
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelCookedData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelCookedData",
		sizeof(FVoxelCookedData),
		alignof(FVoxelCookedData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelCookedData.InnerSingleton, Z_Construct_UScriptStruct_FVoxelCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookedData_h_Statics::ScriptStructInfo[] = {
		{ FVoxelCookedData::StaticStruct, Z_Construct_UScriptStruct_FVoxelCookedData_Statics::NewStructOps, TEXT("VoxelCookedData"), &Z_Registration_Info_UScriptStruct_VoxelCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelCookedData), 1342229161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookedData_h_3941475648(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
