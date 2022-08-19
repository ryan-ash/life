// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNodeStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNodeStructs() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelNamedDataPin();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelNamedDataPin;
class UScriptStruct* FVoxelNamedDataPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelNamedDataPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelNamedDataPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelNamedDataPin, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelNamedDataPin"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelNamedDataPin.OuterSingleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelNamedDataPin>()
{
	return FVoxelNamedDataPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelNamedDataPin>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelNamedDataPin, Type), Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_MetaData)) }; // 2997497038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelNamedDataPin, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelNamedDataPin",
		sizeof(FVoxelNamedDataPin),
		alignof(FVoxelNamedDataPin),
		Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelNamedDataPin()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelNamedDataPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelNamedDataPin.InnerSingleton, Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelNamedDataPin.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h_Statics::ScriptStructInfo[] = {
		{ FVoxelNamedDataPin::StaticStruct, Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewStructOps, TEXT("VoxelNamedDataPin"), &Z_Registration_Info_UScriptStruct_VoxelNamedDataPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelNamedDataPin), 2631361276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h_2867729329(TEXT("/Script/VoxelGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
