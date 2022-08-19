// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelObjectArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelObjectArchive() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry;
class UScriptStruct* FVoxelObjectArchiveEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelObjectArchiveEntry"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelObjectArchiveEntry>()
{
	return FVoxelObjectArchiveEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelObjectArchiveEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Entry" },
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelObjectArchiveEntry, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Entry" },
		{ "Comment", "// Zero is reserved for nullptr\n" },
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
		{ "ToolTip", "Zero is reserved for nullptr" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelObjectArchiveEntry, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelObjectArchiveEntry",
		sizeof(FVoxelObjectArchiveEntry),
		alignof(FVoxelObjectArchiveEntry),
		Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry.InnerSingleton, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelObjectArchive_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelObjectArchive_h_Statics::ScriptStructInfo[] = {
		{ FVoxelObjectArchiveEntry::StaticStruct, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewStructOps, TEXT("VoxelObjectArchiveEntry"), &Z_Registration_Info_UScriptStruct_VoxelObjectArchiveEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelObjectArchiveEntry), 3046812469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelObjectArchive_h_3527947882(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelObjectArchive_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelObjectArchive_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
