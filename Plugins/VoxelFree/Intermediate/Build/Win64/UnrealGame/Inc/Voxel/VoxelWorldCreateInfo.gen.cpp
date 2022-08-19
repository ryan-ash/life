// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldCreateInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldCreateInfo() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo;
class UScriptStruct* FVoxelWorldCreateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelWorldCreateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelWorldCreateInfo>()
{
	return FVoxelWorldCreateInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSave_MetaData[];
#endif
		static void NewProp_bOverrideSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideData_MetaData[];
#endif
		static void NewProp_bOverrideData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelWorldCreateInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If OverrideSave is true, the world will load SaveOverride instead of the save object\n" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
		{ "ToolTip", "If OverrideSave is true, the world will load SaveOverride instead of the save object" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_SetBit(void* Obj)
	{
		((FVoxelWorldCreateInfo*)Obj)->bOverrideSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave = { "bOverrideSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelWorldCreateInfo), &Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If OverrideSave is true, the world will load SaveOverride instead of the save object\n" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
		{ "ToolTip", "If OverrideSave is true, the world will load SaveOverride instead of the save object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride = { "SaveOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldCreateInfo, SaveOverride), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride_MetaData)) }; // 1559596185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If bOverrideData is true, will use DataSource data instead of creating a new data\n" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
		{ "ToolTip", "If bOverrideData is true, will use DataSource data instead of creating a new data" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_SetBit(void* Obj)
	{
		((FVoxelWorldCreateInfo*)Obj)->bOverrideData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData = { "bOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelWorldCreateInfo), &Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride = { "DataOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldCreateInfo, DataOverride), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelWorldCreateInfo",
		sizeof(FVoxelWorldCreateInfo),
		alignof(FVoxelWorldCreateInfo),
		Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo.InnerSingleton, Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldCreateInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldCreateInfo_h_Statics::ScriptStructInfo[] = {
		{ FVoxelWorldCreateInfo::StaticStruct, Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewStructOps, TEXT("VoxelWorldCreateInfo"), &Z_Registration_Info_UScriptStruct_VoxelWorldCreateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelWorldCreateInfo), 309591030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldCreateInfo_h_4241500328(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldCreateInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldCreateInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
