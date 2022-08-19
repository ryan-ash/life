// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VDI_Capsule_Graph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVDI_Capsule_Graph() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Capsule_Graph_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Capsule_Graph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVDI_Capsule_Graph::StaticRegisterNativesUVDI_Capsule_Graph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVDI_Capsule_Graph);
	UClass* Z_Construct_UClass_UVDI_Capsule_Graph_NoRegister()
	{
		return UVDI_Capsule_Graph::StaticClass();
	}
	struct Z_Construct_UClass_UVDI_Capsule_Graph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVDI_Capsule_Graph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Capsule_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Relative to the radius\n" },
		{ "DisplayName", "Noise Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude = { "Noise_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVDI_Capsule_Graph, Noise_Amplitude), METADATA_PARAMS(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVDI_Capsule_Graph, Seed), METADATA_PARAMS(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVDI_Capsule_Graph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Capsule_Graph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::ClassParams = {
		&UVDI_Capsule_Graph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVDI_Capsule_Graph()
	{
		if (!Z_Registration_Info_UClass_UVDI_Capsule_Graph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVDI_Capsule_Graph.OuterSingleton, Z_Construct_UClass_UVDI_Capsule_Graph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVDI_Capsule_Graph.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVDI_Capsule_Graph>()
	{
		return UVDI_Capsule_Graph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Capsule_Graph);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVDI_Capsule_Graph, UVDI_Capsule_Graph::StaticClass, TEXT("UVDI_Capsule_Graph"), &Z_Registration_Info_UClass_UVDI_Capsule_Graph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVDI_Capsule_Graph), 22650410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h_105382539(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
