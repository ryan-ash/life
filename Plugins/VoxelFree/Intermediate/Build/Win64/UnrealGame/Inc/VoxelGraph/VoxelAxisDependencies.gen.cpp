// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelAxisDependencies.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAxisDependencies() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies;
	static UEnum* EVoxelFunctionAxisDependencies_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelFunctionAxisDependencies"));
		}
		return Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.OuterSingleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelFunctionAxisDependencies>()
	{
		return EVoxelFunctionAxisDependencies_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enumerators[] = {
		{ "EVoxelFunctionAxisDependencies::X", (int64)EVoxelFunctionAxisDependencies::X },
		{ "EVoxelFunctionAxisDependencies::XYWithCache", (int64)EVoxelFunctionAxisDependencies::XYWithCache },
		{ "EVoxelFunctionAxisDependencies::XYWithoutCache", (int64)EVoxelFunctionAxisDependencies::XYWithoutCache },
		{ "EVoxelFunctionAxisDependencies::XYZWithCache", (int64)EVoxelFunctionAxisDependencies::XYZWithCache },
		{ "EVoxelFunctionAxisDependencies::XYZWithoutCache", (int64)EVoxelFunctionAxisDependencies::XYZWithoutCache },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAxisDependencies.h" },
		{ "X.Name", "EVoxelFunctionAxisDependencies::X" },
		{ "XYWithCache.Comment", "// X was run\n" },
		{ "XYWithCache.Name", "EVoxelFunctionAxisDependencies::XYWithCache" },
		{ "XYWithCache.ToolTip", "X was run" },
		{ "XYWithoutCache.Comment", "// X wasn't run\n" },
		{ "XYWithoutCache.Name", "EVoxelFunctionAxisDependencies::XYWithoutCache" },
		{ "XYWithoutCache.ToolTip", "X wasn't run" },
		{ "XYZWithCache.Comment", "// XY was run\n" },
		{ "XYZWithCache.Name", "EVoxelFunctionAxisDependencies::XYZWithCache" },
		{ "XYZWithCache.ToolTip", "XY was run" },
		{ "XYZWithoutCache.Comment", "// XY wasn't run\n" },
		{ "XYZWithoutCache.Name", "EVoxelFunctionAxisDependencies::XYZWithoutCache" },
		{ "XYZWithoutCache.ToolTip", "XY wasn't run" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		"EVoxelFunctionAxisDependencies",
		"EVoxelFunctionAxisDependencies",
		Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies()
	{
		if (!Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelAxisDependencies_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelAxisDependencies_h_Statics::EnumInfo[] = {
		{ EVoxelFunctionAxisDependencies_StaticEnum, TEXT("EVoxelFunctionAxisDependencies"), &Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 733466077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelAxisDependencies_h_1309019921(TEXT("/Script/VoxelGraph"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelAxisDependencies_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelAxisDependencies_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
