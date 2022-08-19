// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelHeightmapAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapAssetFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos();
// End Cross Module References
	void UVoxelHeightmapAssetFloatFactory::StaticRegisterNativesUVoxelHeightmapAssetFloatFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHeightmapAssetFloatFactory);
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_NoRegister()
	{
		return UVoxelHeightmapAssetFloatFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelHeightmapAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_MetaData)) }; // 3015711227
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2090197943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, LayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_MetaData)) }; // 2090197943
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, AssetName), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetFloatFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::ClassParams = {
		&UVoxelHeightmapAssetFloatFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelHeightmapAssetFloatFactory>()
	{
		return UVoxelHeightmapAssetFloatFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetFloatFactory);
	void UVoxelHeightmapAssetUINT16Factory::StaticRegisterNativesUVoxelHeightmapAssetUINT16Factory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHeightmapAssetUINT16Factory);
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_NoRegister()
	{
		return UVoxelHeightmapAssetUINT16Factory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Heightmap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Heightmap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapsInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapsInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapsInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VoxelHeightmapAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16Factory, Heightmap), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16Factory, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_MetaData)) }; // 3015711227
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_Inner = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, METADATA_PARAMS(nullptr, 0) }; // 1027243463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "DisplayName", "Weightmaps" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16Factory, WeightmapsInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_MetaData)) }; // 1027243463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetUINT16Factory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::ClassParams = {
		&UVoxelHeightmapAssetUINT16Factory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory()
	{
		if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelHeightmapAssetUINT16Factory>()
	{
		return UVoxelHeightmapAssetUINT16Factory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetUINT16Factory);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory, UVoxelHeightmapAssetFloatFactory::StaticClass, TEXT("UVoxelHeightmapAssetFloatFactory"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetFloatFactory), 2602715418U) },
		{ Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory, UVoxelHeightmapAssetUINT16Factory::StaticClass, TEXT("UVoxelHeightmapAssetUINT16Factory"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetUINT16Factory), 4203376849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h_791390713(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
