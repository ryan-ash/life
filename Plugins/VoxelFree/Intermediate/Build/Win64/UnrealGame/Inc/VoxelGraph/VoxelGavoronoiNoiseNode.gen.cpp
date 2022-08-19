// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGavoronoiNoiseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGavoronoiNoiseNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DErosion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DErosion();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal();
// End Cross Module References
	void UVoxelNode_2DGavoronoiNoise::StaticRegisterNativesUVoxelNode_2DGavoronoiNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_2DGavoronoiNoise);
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_NoRegister()
	{
		return UVoxelNode_2DGavoronoiNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Jitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Gavoronoi Noise" },
		{ "Comment", "// 2D Gavoronoi Noise\n// This noise can be directed, and is used to fake erosion\n// See https://www.shadertoy.com/view/llsGWl\n" },
		{ "DisplayName", "2D Gavoronoi Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Gavoronoi Noise\nThis noise can be directed, and is used to fake erosion\nSee https:www.shadertoy.com/view/llsGWl" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Gavoronoi Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DGavoronoiNoise, Jitter), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGavoronoiNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::ClassParams = {
		&UVoxelNode_2DGavoronoiNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DGavoronoiNoise>()
	{
		return UVoxelNode_2DGavoronoiNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGavoronoiNoise);
	void UVoxelNode_2DGavoronoiNoiseFractal::StaticRegisterNativesUVoxelNode_2DGavoronoiNoiseFractal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_2DGavoronoiNoiseFractal);
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_NoRegister()
	{
		return UVoxelNode_2DGavoronoiNoiseFractal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Jitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeFractal,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Gavoronoi Noise" },
		{ "Comment", "// 2D Gavoronoi Noise Fractal\n// This noise can be directed, and is used to fake erosion\n// See https://www.shadertoy.com/view/llsGWl\n" },
		{ "DisplayName", "2D Gavoronoi Noise Fractal" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Gavoronoi Noise Fractal\nThis noise can be directed, and is used to fake erosion\nSee https:www.shadertoy.com/view/llsGWl" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Gavoronoi Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DGavoronoiNoiseFractal, Jitter), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGavoronoiNoiseFractal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::ClassParams = {
		&UVoxelNode_2DGavoronoiNoiseFractal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DGavoronoiNoiseFractal>()
	{
		return UVoxelNode_2DGavoronoiNoiseFractal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGavoronoiNoiseFractal);
	void UVoxelNode_2DErosion::StaticRegisterNativesUVoxelNode_2DErosion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_2DErosion);
	UClass* Z_Construct_UClass_UVoxelNode_2DErosion_NoRegister()
	{
		return UVoxelNode_2DErosion::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DErosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Jitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DErosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Erosion" },
		{ "Comment", "// 2D Erosion\n// Add this to your noise to fake erosion\n// From https://www.shadertoy.com/view/MtGcWh\n" },
		{ "DisplayName", "2D Erosion" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Erosion\nAdd this to your noise to fake erosion\nFrom https:www.shadertoy.com/view/MtGcWh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Erosion settings" },
		{ "Comment", "// Controls the jitter of the noise used for the \"ravines\"\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "Controls the jitter of the noise used for the \"ravines\"" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DErosion, Jitter), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DErosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DErosion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DErosion_Statics::ClassParams = {
		&UVoxelNode_2DErosion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DErosion()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_2DErosion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DErosion.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DErosion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_2DErosion.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DErosion>()
	{
		return UVoxelNode_2DErosion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DErosion);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise, UVoxelNode_2DGavoronoiNoise::StaticClass, TEXT("UVoxelNode_2DGavoronoiNoise"), &Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DGavoronoiNoise), 1595303247U) },
		{ Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal, UVoxelNode_2DGavoronoiNoiseFractal::StaticClass, TEXT("UVoxelNode_2DGavoronoiNoiseFractal"), &Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DGavoronoiNoiseFractal), 3383677661U) },
		{ Z_Construct_UClass_UVoxelNode_2DErosion, UVoxelNode_2DErosion::StaticClass, TEXT("UVoxelNode_2DErosion"), &Z_Registration_Info_UClass_UVoxelNode_2DErosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DErosion), 675377896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h_3802676357(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
