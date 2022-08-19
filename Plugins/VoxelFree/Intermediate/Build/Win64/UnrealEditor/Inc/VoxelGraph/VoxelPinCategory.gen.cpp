// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelPinCategory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPinCategory() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelPinCategory;
	static UEnum* EVoxelPinCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelPinCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelPinCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelPinCategory"));
		}
		return Z_Registration_Info_UEnum_EVoxelPinCategory.OuterSingleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPinCategory>()
	{
		return EVoxelPinCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::Enumerators[] = {
		{ "EVoxelPinCategory::Exec", (int64)EVoxelPinCategory::Exec },
		{ "EVoxelPinCategory::Boolean", (int64)EVoxelPinCategory::Boolean },
		{ "EVoxelPinCategory::Int", (int64)EVoxelPinCategory::Int },
		{ "EVoxelPinCategory::Float", (int64)EVoxelPinCategory::Float },
		{ "EVoxelPinCategory::Material", (int64)EVoxelPinCategory::Material },
		{ "EVoxelPinCategory::Color", (int64)EVoxelPinCategory::Color },
		{ "EVoxelPinCategory::Seed", (int64)EVoxelPinCategory::Seed },
		{ "EVoxelPinCategory::Wildcard", (int64)EVoxelPinCategory::Wildcard },
		{ "EVoxelPinCategory::Vector", (int64)EVoxelPinCategory::Vector },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::Enum_MetaDataParams[] = {
		{ "Boolean.Name", "EVoxelPinCategory::Boolean" },
		{ "Color.Name", "EVoxelPinCategory::Color" },
		{ "Exec.Name", "EVoxelPinCategory::Exec" },
		{ "Float.Name", "EVoxelPinCategory::Float" },
		{ "Int.Name", "EVoxelPinCategory::Int" },
		{ "Material.Name", "EVoxelPinCategory::Material" },
		{ "ModuleRelativePath", "Public/VoxelPinCategory.h" },
		{ "Seed.Name", "EVoxelPinCategory::Seed" },
		{ "Vector.Hidden", "" },
		{ "Vector.Name", "EVoxelPinCategory::Vector" },
		{ "Wildcard.Hidden", "" },
		{ "Wildcard.Name", "EVoxelPinCategory::Wildcard" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		"EVoxelPinCategory",
		"EVoxelPinCategory",
		Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory()
	{
		if (!Z_Registration_Info_UEnum_EVoxelPinCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelPinCategory.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelPinCategory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDataPinCategory;
	static UEnum* EVoxelDataPinCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataPinCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelDataPinCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelDataPinCategory"));
		}
		return Z_Registration_Info_UEnum_EVoxelDataPinCategory.OuterSingleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelDataPinCategory>()
	{
		return EVoxelDataPinCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::Enumerators[] = {
		{ "EVoxelDataPinCategory::Boolean", (int64)EVoxelDataPinCategory::Boolean },
		{ "EVoxelDataPinCategory::Int", (int64)EVoxelDataPinCategory::Int },
		{ "EVoxelDataPinCategory::Float", (int64)EVoxelDataPinCategory::Float },
		{ "EVoxelDataPinCategory::Material", (int64)EVoxelDataPinCategory::Material },
		{ "EVoxelDataPinCategory::Color", (int64)EVoxelDataPinCategory::Color },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::Enum_MetaDataParams[] = {
		{ "Boolean.Name", "EVoxelDataPinCategory::Boolean" },
		{ "Color.Name", "EVoxelDataPinCategory::Color" },
		{ "Float.Name", "EVoxelDataPinCategory::Float" },
		{ "Int.Name", "EVoxelDataPinCategory::Int" },
		{ "Material.Name", "EVoxelDataPinCategory::Material" },
		{ "ModuleRelativePath", "Public/VoxelPinCategory.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		"EVoxelDataPinCategory",
		"EVoxelDataPinCategory",
		Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataPinCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDataPinCategory.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelDataPinCategory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelPinCategory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelPinCategory_h_Statics::EnumInfo[] = {
		{ EVoxelPinCategory_StaticEnum, TEXT("EVoxelPinCategory"), &Z_Registration_Info_UEnum_EVoxelPinCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3800992571U) },
		{ EVoxelDataPinCategory_StaticEnum, TEXT("EVoxelDataPinCategory"), &Z_Registration_Info_UEnum_EVoxelDataPinCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2997497038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelPinCategory_h_2983181481(TEXT("/Script/VoxelGraph"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelPinCategory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelPinCategory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
