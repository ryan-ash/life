// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelWhiteNoiseNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWhiteNoiseNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise();
// End Cross Module References
	void UVoxelNode_2DWhiteNoise::StaticRegisterNativesUVoxelNode_2DWhiteNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_2DWhiteNoise);
	UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise_NoRegister()
	{
		return UVoxelNode_2DWhiteNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|White Noise" },
		{ "Comment", "// 2D White Noise\n" },
		{ "DisplayName", "2D White Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ToolTip", "2D White Noise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DWhiteNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::ClassParams = {
		&UVoxelNode_2DWhiteNoise::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DWhiteNoise>()
	{
		return UVoxelNode_2DWhiteNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DWhiteNoise);
	void UVoxelNode_3DWhiteNoise::StaticRegisterNativesUVoxelNode_3DWhiteNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_3DWhiteNoise);
	UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise_NoRegister()
	{
		return UVoxelNode_3DWhiteNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|White Noise" },
		{ "Comment", "// 3D White Noise\n" },
		{ "DisplayName", "3D White Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ToolTip", "3D White Noise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DWhiteNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::ClassParams = {
		&UVoxelNode_3DWhiteNoise::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_3DWhiteNoise>()
	{
		return UVoxelNode_3DWhiteNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DWhiteNoise);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_2DWhiteNoise, UVoxelNode_2DWhiteNoise::StaticClass, TEXT("UVoxelNode_2DWhiteNoise"), &Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DWhiteNoise), 2468213109U) },
		{ Z_Construct_UClass_UVoxelNode_3DWhiteNoise, UVoxelNode_3DWhiteNoise::StaticClass, TEXT("UVoxelNode_3DWhiteNoise"), &Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_3DWhiteNoise), 3753168231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h_86626318(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
