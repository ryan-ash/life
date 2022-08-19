// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEdGraph() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelEdGraph_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
// End Cross Module References
	void UVoxelEdGraph::StaticRegisterNativesUVoxelEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelEdGraph);
	UClass* Z_Construct_UClass_UVoxelEdGraph_NoRegister()
	{
		return UVoxelEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelEdGraph.h" },
		{ "ModuleRelativePath", "Private/VoxelEdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEdGraph_Statics::ClassParams = {
		&UVoxelEdGraph::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEdGraph()
	{
		if (!Z_Registration_Info_UClass_UVoxelEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelEdGraph.OuterSingleton, Z_Construct_UClass_UVoxelEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelEdGraph.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelEdGraph>()
	{
		return UVoxelEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEdGraph);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelEdGraph, UVoxelEdGraph::StaticClass, TEXT("UVoxelEdGraph"), &Z_Registration_Info_UClass_UVoxelEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelEdGraph), 1596495289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelEdGraph_h_1134291023(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
