// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelHeightSplitterNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightSplitterNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelNode_HeightSplitter::StaticRegisterNativesUVoxelNode_HeightSplitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_HeightSplitter);
	UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter_NoRegister()
	{
		return UVoxelNode_HeightSplitter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSplits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSplits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "// Splits a float input based on different layers, and outputs the strength of each layer\n// Input heights must be ordered! \n" },
		{ "DisplayName", "Height Splitter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ToolTip", "Splits a float input based on different layers, and outputs the strength of each layer\nInput heights must be ordered!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits = { "NumSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightSplitter, NumSplits), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_HeightSplitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::ClassParams = {
		&UVoxelNode_HeightSplitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.OuterSingleton, Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_HeightSplitter>()
	{
		return UVoxelNode_HeightSplitter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_HeightSplitter);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_HeightSplitter, UVoxelNode_HeightSplitter::StaticClass, TEXT("UVoxelNode_HeightSplitter"), &Z_Registration_Info_UClass_UVoxelNode_HeightSplitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_HeightSplitter), 4184079466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h_1500836333(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
