// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Ravines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Ravines() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Ravines_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Ravines();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_Ravines::StaticRegisterNativesUVoxelExample_Ravines()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_Ravines);
	UClass* Z_Construct_UClass_UVoxelExample_Ravines_NoRegister()
	{
		return UVoxelExample_Ravines::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Ravines_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__3D_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__3D_Noise_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__3D_Noise_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__3D_Noise_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_Transition_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom_Transition_Smoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_Transition_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Transition_Smoothness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Ravines_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Ravines_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Ravines.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "3D Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency = { "_3D_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Ravines, _3D_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "3D Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed = { "_3D_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Ravines, _3D_Noise_Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Bottom Transition Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness = { "Bottom_Transition_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Ravines, Bottom_Transition_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Ravines, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Transition Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness = { "Top_Transition_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Ravines, Top_Transition_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Ravines_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Ravines>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::ClassParams = {
		&UVoxelExample_Ravines::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Ravines_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Ravines()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_Ravines.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Ravines.OuterSingleton, Z_Construct_UClass_UVoxelExample_Ravines_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_Ravines.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Ravines>()
	{
		return UVoxelExample_Ravines::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Ravines);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Ravines, UVoxelExample_Ravines::StaticClass, TEXT("UVoxelExample_Ravines"), &Z_Registration_Info_UClass_UVoxelExample_Ravines, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Ravines), 2430908621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h_1616625898(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
