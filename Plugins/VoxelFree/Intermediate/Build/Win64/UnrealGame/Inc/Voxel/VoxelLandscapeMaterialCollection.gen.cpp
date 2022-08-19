// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLandscapeMaterialCollection() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer;
class UScriptStruct* FVoxelLandscapeMaterialCollectionLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeMaterialCollectionLayer"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLandscapeMaterialCollectionLayer>()
{
	return FVoxelLandscapeMaterialCollectionLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionLayer, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLandscapeMaterialCollectionLayer",
		sizeof(FVoxelLandscapeMaterialCollectionLayer),
		alignof(FVoxelLandscapeMaterialCollectionLayer),
		Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation;
class UScriptStruct* FVoxelLandscapeMaterialCollectionPermutation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeMaterialCollectionPermutation"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLandscapeMaterialCollectionPermutation>()
{
	return FVoxelLandscapeMaterialCollectionPermutation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionPermutation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Names, FVoxelLandscapeMaterialCollectionPermutation), STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionPermutation, Names), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLandscapeMaterialCollectionPermutation",
		sizeof(FVoxelLandscapeMaterialCollectionPermutation),
		alignof(FVoxelLandscapeMaterialCollectionPermutation),
		Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation.InnerSingleton;
	}
	void UVoxelLandscapeMaterialCollection::StaticRegisterNativesUVoxelLandscapeMaterialCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelLandscapeMaterialCollection);
	UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection_NoRegister()
	{
		return UVoxelLandscapeMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialsToBlendAtOnce_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMaterialsToBlendAtOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCache_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndicesToLayers_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndicesToLayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicesToLayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IndicesToLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "UIMax", "6" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce = { "MaxMaterialsToBlendAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, MaxMaterialsToBlendAtOnce), METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) }; // 932422465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_MetaData)) }; // 932422465
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_ValueProp = { "MaterialCache", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_Key_KeyProp = { "MaterialCache_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, METADATA_PARAMS(nullptr, 0) }; // 3077698136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache = { "MaterialCache", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, MaterialCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_MetaData)) }; // 3077698136
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_ValueProp = { "IndicesToLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) }; // 932422465
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_Key_KeyProp = { "IndicesToLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers = { "IndicesToLayers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, IndicesToLayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_MetaData)) }; // 932422465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLandscapeMaterialCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::ClassParams = {
		&UVoxelLandscapeMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection()
	{
		if (!Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.OuterSingleton, Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelLandscapeMaterialCollection>()
	{
		return UVoxelLandscapeMaterialCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLandscapeMaterialCollection);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics::ScriptStructInfo[] = {
		{ FVoxelLandscapeMaterialCollectionLayer::StaticStruct, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewStructOps, TEXT("VoxelLandscapeMaterialCollectionLayer"), &Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLandscapeMaterialCollectionLayer), 932422465U) },
		{ FVoxelLandscapeMaterialCollectionPermutation::StaticStruct, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewStructOps, TEXT("VoxelLandscapeMaterialCollectionPermutation"), &Z_Registration_Info_UScriptStruct_VoxelLandscapeMaterialCollectionPermutation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLandscapeMaterialCollectionPermutation), 3077698136U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLandscapeMaterialCollection, UVoxelLandscapeMaterialCollection::StaticClass, TEXT("UVoxelLandscapeMaterialCollection"), &Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLandscapeMaterialCollection), 1230236469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_3681651943(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
