// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_Craters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_Craters() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Craters_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Craters();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVG_Example_Craters::StaticRegisterNativesUVG_Example_Craters()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVG_Example_Craters);
	UClass* Z_Construct_UClass_UVG_Example_Craters_NoRegister()
	{
		return UVG_Example_Craters::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_Craters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_Craters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Craters_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Craters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Craters.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Craters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Craters, Radius), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_Craters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Craters>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Craters_Statics::ClassParams = {
		&UVG_Example_Craters::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Craters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_Craters()
	{
		if (!Z_Registration_Info_UClass_UVG_Example_Craters.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_Craters.OuterSingleton, Z_Construct_UClass_UVG_Example_Craters_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVG_Example_Craters.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_Craters>()
	{
		return UVG_Example_Craters::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Craters);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_Craters, UVG_Example_Craters::StaticClass, TEXT("UVG_Example_Craters"), &Z_Registration_Info_UClass_UVG_Example_Craters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_Craters), 2420127105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h_1937883991(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
