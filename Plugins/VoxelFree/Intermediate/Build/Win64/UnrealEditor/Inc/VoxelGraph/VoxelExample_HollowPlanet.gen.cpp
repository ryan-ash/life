// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_HollowPlanet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_HollowPlanet() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_HollowPlanet::StaticRegisterNativesUVoxelExample_HollowPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_HollowPlanet);
	UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet_NoRegister()
	{
		return UVoxelExample_HollowPlanet::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intersection_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intersection_Smoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_IQ_Noise_MetaData[];
#endif
		static void NewProp_Use_IQ_Noise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_IQ_Noise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_HollowPlanet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Intersection Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness = { "Intersection_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Intersection_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Above 0: More ground. Below zero: less ground\n" },
		{ "DisplayName", "Noise Bias" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
		{ "ToolTip", "Above 0: More ground. Below zero: less ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias = { "Noise_Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Bias), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency = { "Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale = { "Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Radius), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Use IQ Noise" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_SetBit(void* Obj)
	{
		((UVoxelExample_HollowPlanet*)Obj)->Use_IQ_Noise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise = { "Use_IQ_Noise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelExample_HollowPlanet), &Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_HollowPlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::ClassParams = {
		&UVoxelExample_HollowPlanet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.OuterSingleton, Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_HollowPlanet>()
	{
		return UVoxelExample_HollowPlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_HollowPlanet);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_HollowPlanet, UVoxelExample_HollowPlanet::StaticClass, TEXT("UVoxelExample_HollowPlanet"), &Z_Registration_Info_UClass_UVoxelExample_HollowPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_HollowPlanet), 3153084283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h_2035216523(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
