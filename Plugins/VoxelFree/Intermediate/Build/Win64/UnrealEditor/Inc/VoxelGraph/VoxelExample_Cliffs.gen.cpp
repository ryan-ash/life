// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Cliffs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Cliffs() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cliffs_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cliffs();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_Cliffs::StaticRegisterNativesUVoxelExample_Cliffs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_Cliffs);
	UClass* Z_Construct_UClass_UVoxelExample_Cliffs_NoRegister()
	{
		return UVoxelExample_Cliffs::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Cliffs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cliffs_Slope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cliffs_Slope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overhangs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Overhangs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Base_Shape_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Base_Shape_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Base_Shape_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sides_Noise_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Top_Noise_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sides_Noise_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sides_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Cliffs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Cliffs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Cliffs Slope" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope = { "Cliffs_Slope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Cliffs_Slope), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Overhangs" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs = { "Overhangs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Overhangs), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency_MetaData[] = {
		{ "Category", "Base Shape" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Base Shape Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency = { "Base_Shape_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset_MetaData[] = {
		{ "Category", "Base Shape" },
		{ "Comment", "// < 0 : more holes; > 0: less holes\n" },
		{ "DisplayName", "Base Shape Offset" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "ToolTip", "< 0 : more holes; > 0: less holes" },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset = { "Base_Shape_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Offset), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Base Shape Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed = { "Base_Shape_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Sides Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed = { "Sides_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed = { "Top_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude_MetaData[] = {
		{ "Category", "Side Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Sides Noise Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude = { "Sides_Noise_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Amplitude), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency_MetaData[] = {
		{ "Category", "Side Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Sides Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency = { "Sides_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale = { "Top_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Cliffs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Cliffs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::ClassParams = {
		&UVoxelExample_Cliffs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Cliffs()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_Cliffs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Cliffs.OuterSingleton, Z_Construct_UClass_UVoxelExample_Cliffs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_Cliffs.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Cliffs>()
	{
		return UVoxelExample_Cliffs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Cliffs);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Cliffs, UVoxelExample_Cliffs::StaticClass, TEXT("UVoxelExample_Cliffs"), &Z_Registration_Info_UClass_UVoxelExample_Cliffs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Cliffs), 1532998323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h_1088138107(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
