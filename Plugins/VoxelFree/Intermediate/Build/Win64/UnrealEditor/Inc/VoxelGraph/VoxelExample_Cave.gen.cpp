// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Cave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Cave() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cave_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cave();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_Cave::StaticRegisterNativesUVoxelExample_Cave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_Cave);
	UClass* Z_Construct_UClass_UVoxelExample_Cave_NoRegister()
	{
		return UVoxelExample_Cave::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Cave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_Noise_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom_Noise_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_Noise_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bottom_Noise_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Global_Height_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Top_Noise_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_Top_Merge_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom_Top_Merge_Smoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Merge_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Merge_Smoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Noise_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Noise_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cave_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cave_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cave_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cave_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cave_Walls_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cave_Walls_Smoothness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Cave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Cave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency_MetaData[] = {
		{ "Category", "Bottom Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Bottom Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency = { "Bottom_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale_MetaData[] = {
		{ "Category", "Bottom Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Bottom Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale = { "Bottom_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Bottom Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Seed = { "Bottom_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Noise_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Global Height Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Seed = { "Global_Height_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Seed = { "Top_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Top_Noise_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Top_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale = { "Top_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Top_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness_MetaData[] = {
		{ "Category", "Bottom & Top Merge" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Bottom Top Merge Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness = { "Bottom_Top_Merge_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Top_Merge_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Global Height Merge Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness = { "Global_Height_Merge_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Merge_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Global Height Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency = { "Global_Height_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Global Height Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale = { "Global_Height_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Global Height Offset" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset = { "Global_Height_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Offset), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Cave Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height = { "Cave_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Cave_Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Cave Radius" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius = { "Cave_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Cave_Radius), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Cave Walls Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness = { "Cave_Walls_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Cave_Walls_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Cave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Cave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Cave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Cave_Statics::ClassParams = {
		&UVoxelExample_Cave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Cave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Cave()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_Cave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Cave.OuterSingleton, Z_Construct_UClass_UVoxelExample_Cave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_Cave.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Cave>()
	{
		return UVoxelExample_Cave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Cave);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Cave, UVoxelExample_Cave::StaticClass, TEXT("UVoxelExample_Cave"), &Z_Registration_Info_UClass_UVoxelExample_Cave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Cave), 2082903603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cave_h_3596720082(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Cave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
