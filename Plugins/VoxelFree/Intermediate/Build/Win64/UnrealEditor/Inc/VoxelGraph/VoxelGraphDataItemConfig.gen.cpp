// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphDataItemConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphDataItemConfig() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelGraphDataItemConfig::StaticRegisterNativesUVoxelGraphDataItemConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphDataItemConfig);
	UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister()
	{
		return UVoxelGraphDataItemConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphDataItemConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphDataItemConfig.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelGraphDataItemConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphDataItemConfig, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphDataItemConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::ClassParams = {
		&UVoxelGraphDataItemConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.OuterSingleton, Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphDataItemConfig>()
	{
		return UVoxelGraphDataItemConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphDataItemConfig);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphDataItemConfig, UVoxelGraphDataItemConfig::StaticClass, TEXT("UVoxelGraphDataItemConfig"), &Z_Registration_Info_UClass_UVoxelGraphDataItemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphDataItemConfig), 2617797084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h_1609777522(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
