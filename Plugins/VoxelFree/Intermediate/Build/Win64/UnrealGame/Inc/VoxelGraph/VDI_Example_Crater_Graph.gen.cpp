// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VDI_Example_Crater_Graph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVDI_Example_Crater_Graph() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Example_Crater_Graph_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Example_Crater_Graph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVDI_Example_Crater_Graph::StaticRegisterNativesUVDI_Example_Crater_Graph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVDI_Example_Crater_Graph);
	UClass* Z_Construct_UClass_UVDI_Example_Crater_Graph_NoRegister()
	{
		return UVDI_Example_Crater_Graph::StaticClass();
	}
	struct Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Example_Crater_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Example_Crater_Graph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Example_Crater_Graph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::ClassParams = {
		&UVDI_Example_Crater_Graph::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVDI_Example_Crater_Graph()
	{
		if (!Z_Registration_Info_UClass_UVDI_Example_Crater_Graph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVDI_Example_Crater_Graph.OuterSingleton, Z_Construct_UClass_UVDI_Example_Crater_Graph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVDI_Example_Crater_Graph.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVDI_Example_Crater_Graph>()
	{
		return UVDI_Example_Crater_Graph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Example_Crater_Graph);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Example_Crater_Graph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Example_Crater_Graph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVDI_Example_Crater_Graph, UVDI_Example_Crater_Graph::StaticClass, TEXT("UVDI_Example_Crater_Graph"), &Z_Registration_Info_UClass_UVDI_Example_Crater_Graph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVDI_Example_Crater_Graph), 3199947154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Example_Crater_Graph_h_1756563914(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Example_Crater_Graph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VDI_Example_Crater_Graph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS