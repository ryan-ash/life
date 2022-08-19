// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGeneratorMergeNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorMergeNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
// End Cross Module References
	void UVoxelNode_GeneratorMerge::StaticRegisterNativesUVoxelNode_GeneratorMerge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GeneratorMerge);
	UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge_NoRegister()
	{
		return UVoxelNode_GeneratorMerge::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Generators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::Class_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "DisplayName", "Generator Merge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorMergeNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, Outputs), Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_MetaData)) }; // 4293812930
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) }; // 3987947468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_MetaData)) }; // 3987947468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GeneratorMerge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::ClassParams = {
		&UVoxelNode_GeneratorMerge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.OuterSingleton, Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GeneratorMerge>()
	{
		return UVoxelNode_GeneratorMerge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GeneratorMerge);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GeneratorMerge, UVoxelNode_GeneratorMerge::StaticClass, TEXT("UVoxelNode_GeneratorMerge"), &Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GeneratorMerge), 3203073066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h_3350261284(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
