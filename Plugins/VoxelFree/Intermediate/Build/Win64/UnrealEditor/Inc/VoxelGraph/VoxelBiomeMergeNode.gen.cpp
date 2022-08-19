// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelBiomeMergeNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBiomeMergeNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelNode_BiomeMerge::StaticRegisterNativesUVoxelNode_BiomeMerge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_BiomeMerge);
	UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge_NoRegister()
	{
		return UVoxelNode_BiomeMerge::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Biomes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Biomes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Biomes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::Class_MetaDataParams[] = {
		{ "Category", "Biomes" },
		{ "Comment", "// Merge biomes by generating nodes to do so.\n// Will also generate function separators, so you need to make all your data go through this\n// (check the Additional Data field)\n" },
		{ "DisplayName", "Biome Merge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBiomeMergeNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMergeNode.h" },
		{ "ToolTip", "Merge biomes by generating nodes to do so.\nWill also generate function separators, so you need to make all your data go through this\n(check the Additional Data field)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_Inner = { "Biomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMergeNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes = { "Biomes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMerge, Biomes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMergeNode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMerge, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BiomeMerge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::ClassParams = {
		&UVoxelNode_BiomeMerge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.OuterSingleton, Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_BiomeMerge>()
	{
		return UVoxelNode_BiomeMerge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BiomeMerge);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_BiomeMerge, UVoxelNode_BiomeMerge::StaticClass, TEXT("UVoxelNode_BiomeMerge"), &Z_Registration_Info_UClass_UVoxelNode_BiomeMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_BiomeMerge), 2082374196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h_930189532(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
