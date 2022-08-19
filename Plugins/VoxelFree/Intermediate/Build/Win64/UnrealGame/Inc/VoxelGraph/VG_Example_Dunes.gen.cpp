// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_Dunes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_Dunes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Dunes_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Dunes();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVG_Example_Dunes::StaticRegisterNativesUVG_Example_Dunes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVG_Example_Dunes);
	UClass* Z_Construct_UClass_UVG_Example_Dunes_NoRegister()
	{
		return UVG_Example_Dunes::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_Dunes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dune_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Dune_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_Dunes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Dunes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// The direction of the noise. Will be normalized\n" },
		{ "DisplayName", "Direction X" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
		{ "ToolTip", "The direction of the noise. Will be normalized" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X = { "Direction_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Direction_X), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// The direction of the noise. Will be normalized\n" },
		{ "DisplayName", "Direction Y" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
		{ "ToolTip", "The direction of the noise. Will be normalized" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y = { "Direction_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Direction_Y), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Dune Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency = { "Dune_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Dune_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Height), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency = { "Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_Dunes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Dunes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Dunes_Statics::ClassParams = {
		&UVG_Example_Dunes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_Dunes()
	{
		if (!Z_Registration_Info_UClass_UVG_Example_Dunes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_Dunes.OuterSingleton, Z_Construct_UClass_UVG_Example_Dunes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVG_Example_Dunes.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_Dunes>()
	{
		return UVG_Example_Dunes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Dunes);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_Dunes, UVG_Example_Dunes::StaticClass, TEXT("UVG_Example_Dunes"), &Z_Registration_Info_UClass_UVG_Example_Dunes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_Dunes), 1440128609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h_2766415557(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
