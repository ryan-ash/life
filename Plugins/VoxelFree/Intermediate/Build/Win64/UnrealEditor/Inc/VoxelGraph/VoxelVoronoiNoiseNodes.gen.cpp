// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelVoronoiNoiseNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelVoronoiNoiseNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise();
// End Cross Module References
	void UVoxelNode_VoronoiNoiseBase::StaticRegisterNativesUVoxelNode_VoronoiNoiseBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_VoronoiNoiseBase);
	UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_NoRegister()
	{
		return UVoxelNode_VoronoiNoiseBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeNeighbors_MetaData[];
#endif
		static void NewProp_bComputeNeighbors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNeighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Dimension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_MetaData[] = {
		{ "Category", "Voronoi settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ReconstructNode", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_SetBit(void* Obj)
	{
		((UVoxelNode_VoronoiNoiseBase*)Obj)->bComputeNeighbors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors = { "bComputeNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_VoronoiNoiseBase), &Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_VoronoiNoiseBase, Dimension), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoronoiNoiseBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::ClassParams = {
		&UVoxelNode_VoronoiNoiseBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_VoronoiNoiseBase>()
	{
		return UVoxelNode_VoronoiNoiseBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoronoiNoiseBase);
	void UVoxelNode_2DVoronoiNoise::StaticRegisterNativesUVoxelNode_2DVoronoiNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_2DVoronoiNoise);
	UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_NoRegister()
	{
		return UVoxelNode_2DVoronoiNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Voronoi Noise" },
		{ "Comment", "// 2D Voronoi Noise\n" },
		{ "DisplayName", "2D Voronoi Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ToolTip", "2D Voronoi Noise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DVoronoiNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::ClassParams = {
		&UVoxelNode_2DVoronoiNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DVoronoiNoise>()
	{
		return UVoxelNode_2DVoronoiNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DVoronoiNoise);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase, UVoxelNode_VoronoiNoiseBase::StaticClass, TEXT("UVoxelNode_VoronoiNoiseBase"), &Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_VoronoiNoiseBase), 213629465U) },
		{ Z_Construct_UClass_UVoxelNode_2DVoronoiNoise, UVoxelNode_2DVoronoiNoise::StaticClass, TEXT("UVoxelNode_2DVoronoiNoise"), &Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DVoronoiNoise), 2465815387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h_2976881258(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
