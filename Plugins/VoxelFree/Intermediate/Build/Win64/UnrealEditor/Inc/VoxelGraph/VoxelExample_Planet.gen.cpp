// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Planet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Planet() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Planet_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Planet();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UVoxelExample_Planet::StaticRegisterNativesUVoxelExample_Planet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_Planet);
	UClass* Z_Construct_UClass_UVoxelExample_Planet_NoRegister()
	{
		return UVoxelExample_Planet::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Planet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Noise_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetColorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlanetColorCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetCurve_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlanetCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Planet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Planet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Planet, Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Seed = { "Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Planet, Noise_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Strength" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Strength = { "Noise_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Planet, Noise_Strength), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetColorCurve_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlanetColorCurve" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetColorCurve = { "PlanetColorCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Planet, PlanetColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetColorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetColorCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetCurve_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlanetCurve" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetCurve = { "PlanetCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Planet, PlanetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Planet, Radius), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Planet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Noise_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetColorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_PlanetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Planet_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Planet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Planet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Planet_Statics::ClassParams = {
		&UVoxelExample_Planet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Planet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Planet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Planet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Planet()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_Planet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Planet.OuterSingleton, Z_Construct_UClass_UVoxelExample_Planet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_Planet.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Planet>()
	{
		return UVoxelExample_Planet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Planet);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Planet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Planet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Planet, UVoxelExample_Planet::StaticClass, TEXT("UVoxelExample_Planet"), &Z_Registration_Info_UClass_UVoxelExample_Planet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Planet), 2409782249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Planet_h_3190582835(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Planet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Planet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
