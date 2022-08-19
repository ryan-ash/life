// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphOutputs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphOutputs() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphOutput;
class UScriptStruct* FVoxelGraphOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphOutput, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelGraphOutput"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphOutput.OuterSingleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelGraphOutput>()
{
	return FVoxelGraphOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Outputs" },
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphOutput, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Outputs" },
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphOutput, Category), Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_MetaData)) }; // 2997497038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphOutput, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphOutput, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelGraphOutput",
		sizeof(FVoxelGraphOutput),
		alignof(FVoxelGraphOutput),
		Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphOutput.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphOutput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphOutputs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphOutputs_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGraphOutput::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewStructOps, TEXT("VoxelGraphOutput"), &Z_Registration_Info_UScriptStruct_VoxelGraphOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphOutput), 308729498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphOutputs_h_971841185(TEXT("/Script/VoxelGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphOutputs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphOutputs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
