// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_LayeredPlanet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_LayeredPlanet() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UVoxelExample_LayeredPlanet::StaticRegisterNativesUVoxelExample_LayeredPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_LayeredPlanet);
	UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet_NoRegister()
	{
		return UVoxelExample_LayeredPlanet::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_None1_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_None1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slice_Mode_MetaData[];
#endif
		static void NewProp_Slice_Mode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Slice_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_LayeredPlanet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_LayeredPlanet, Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1 = { "None1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_LayeredPlanet, None1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_LayeredPlanet, Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Slice Mode" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_SetBit(void* Obj)
	{
		((UVoxelExample_LayeredPlanet*)Obj)->Slice_Mode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode = { "Slice_Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelExample_LayeredPlanet), &Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_LayeredPlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::ClassParams = {
		&UVoxelExample_LayeredPlanet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.OuterSingleton, Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_LayeredPlanet>()
	{
		return UVoxelExample_LayeredPlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_LayeredPlanet);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_LayeredPlanet, UVoxelExample_LayeredPlanet::StaticClass, TEXT("UVoxelExample_LayeredPlanet"), &Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_LayeredPlanet), 2205861441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h_2634605666(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
