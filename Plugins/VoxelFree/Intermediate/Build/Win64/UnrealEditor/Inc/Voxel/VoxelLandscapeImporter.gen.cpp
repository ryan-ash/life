// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelImporters/VoxelLandscapeImporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLandscapeImporter() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelLandscapeImporter_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelLandscapeImporter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo;
class UScriptStruct* FVoxelLandscapeImporterLayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeImporterLayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLandscapeImporterLayerInfo>()
{
	return FVoxelLandscapeImporterLayerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeImporterLayerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeImporterLayerInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeImporterLayerInfo, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_MetaData)) }; // 1494340730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeImporterLayerInfo, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLandscapeImporterLayerInfo",
		sizeof(FVoxelLandscapeImporterLayerInfo),
		alignof(FVoxelLandscapeImporterLayerInfo),
		Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo.InnerSingleton;
	}
	void AVoxelLandscapeImporter::StaticRegisterNativesAVoxelLandscapeImporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelLandscapeImporter);
	UClass* Z_Construct_UClass_AVoxelLandscapeImporter_NoRegister()
	{
		return AVoxelLandscapeImporter::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelLandscapeImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelLandscapeImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelLandscapeImporter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking" },
		{ "IncludePath", "VoxelImporters/VoxelLandscapeImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelLandscapeImporter, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelLandscapeImporter, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_MetaData)) }; // 3015711227
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2090197943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelLandscapeImporter, LayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_MetaData)) }; // 2090197943
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelLandscapeImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelLandscapeImporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::ClassParams = {
		&AVoxelLandscapeImporter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelLandscapeImporter()
	{
		if (!Z_Registration_Info_UClass_AVoxelLandscapeImporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelLandscapeImporter.OuterSingleton, Z_Construct_UClass_AVoxelLandscapeImporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelLandscapeImporter.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelLandscapeImporter>()
	{
		return AVoxelLandscapeImporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelLandscapeImporter);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics::ScriptStructInfo[] = {
		{ FVoxelLandscapeImporterLayerInfo::StaticStruct, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewStructOps, TEXT("VoxelLandscapeImporterLayerInfo"), &Z_Registration_Info_UScriptStruct_VoxelLandscapeImporterLayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLandscapeImporterLayerInfo), 2090197943U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelLandscapeImporter, AVoxelLandscapeImporter::StaticClass, TEXT("AVoxelLandscapeImporter"), &Z_Registration_Info_UClass_AVoxelLandscapeImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelLandscapeImporter), 696655726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_3012750799(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
