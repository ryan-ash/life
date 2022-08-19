// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_Erosion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_Erosion() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Erosion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Erosion();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVG_Example_Erosion::StaticRegisterNativesUVG_Example_Erosion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVG_Example_Erosion);
	UClass* Z_Construct_UClass_UVG_Example_Erosion_NoRegister()
	{
		return UVG_Example_Erosion::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_Erosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Erosion_Material_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Erosion_Material_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Erosion_Material_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Erosion_Material_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Erosion_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Erosion_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rocks_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Rocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snow_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Snow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valleys_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Valleys_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_Erosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Erosion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Material Offset" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset = { "Erosion_Material_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Material_Offset), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Material Strength" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength = { "Erosion_Material_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Material_Strength), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Strength" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength = { "Erosion_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Strength), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Height), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Rocks" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks = { "Rocks", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Rocks), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Snow" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow = { "Snow", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Snow), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Valleys Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height = { "Valleys_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Valleys_Height), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_Erosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Erosion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Erosion_Statics::ClassParams = {
		&UVG_Example_Erosion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_Erosion()
	{
		if (!Z_Registration_Info_UClass_UVG_Example_Erosion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_Erosion.OuterSingleton, Z_Construct_UClass_UVG_Example_Erosion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVG_Example_Erosion.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_Erosion>()
	{
		return UVG_Example_Erosion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Erosion);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_Erosion, UVG_Example_Erosion::StaticClass, TEXT("UVG_Example_Erosion"), &Z_Registration_Info_UClass_UVG_Example_Erosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_Erosion), 1896445476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h_2745686260(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
