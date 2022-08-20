// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelDataAssetSamplerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetSamplerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
// End Cross Module References
	void UVoxelNode_DataAssetSampler::StaticRegisterNativesUVoxelNode_DataAssetSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_DataAssetSampler);
	UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler_NoRegister()
	{
		return UVoxelNode_DataAssetSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[];
#endif
		static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Heightmap" },
		{ "Comment", "// Voxel data asset sampler\n" },
		{ "DisplayName", "Data Asset Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ToolTip", "Voxel data asset sampler" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "NonNull", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_DataAssetSampler, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
	{
		((UVoxelNode_DataAssetSampler*)Obj)->bBilinearInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_DataAssetSampler), &Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataAssetSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::ClassParams = {
		&UVoxelNode_DataAssetSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_DataAssetSampler>()
	{
		return UVoxelNode_DataAssetSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataAssetSampler);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_DataAssetSampler, UVoxelNode_DataAssetSampler::StaticClass, TEXT("UVoxelNode_DataAssetSampler"), &Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_DataAssetSampler), 3010669305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h_2524746886(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS