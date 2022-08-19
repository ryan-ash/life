// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_FastCraters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_FastCraters() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_FastCraters_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_FastCraters();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVG_Example_FastCraters::StaticRegisterNativesUVG_Example_FastCraters()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVG_Example_FastCraters);
	UClass* Z_Construct_UClass_UVG_Example_FastCraters_NoRegister()
	{
		return UVG_Example_FastCraters::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_FastCraters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_FastCraters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_FastCraters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_FastCraters.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_FastCraters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_FastCraters>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_FastCraters_Statics::ClassParams = {
		&UVG_Example_FastCraters::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_FastCraters()
	{
		if (!Z_Registration_Info_UClass_UVG_Example_FastCraters.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_FastCraters.OuterSingleton, Z_Construct_UClass_UVG_Example_FastCraters_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVG_Example_FastCraters.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_FastCraters>()
	{
		return UVG_Example_FastCraters::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_FastCraters);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_FastCraters, UVG_Example_FastCraters::StaticClass, TEXT("UVG_Example_FastCraters"), &Z_Registration_Info_UClass_UVG_Example_FastCraters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_FastCraters), 2306292531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h_1629591613(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
