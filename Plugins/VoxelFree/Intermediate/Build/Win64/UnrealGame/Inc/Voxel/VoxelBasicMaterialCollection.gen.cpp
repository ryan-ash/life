// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBasicMaterialCollection() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer;
class UScriptStruct* FVoxelBasicMaterialCollectionLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBasicMaterialCollectionLayer"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelBasicMaterialCollectionLayer>()
{
	return FVoxelBasicMaterialCollectionLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBasicMaterialCollectionLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicMaterialCollectionLayer, LayerIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial = { "LayerMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicMaterialCollectionLayer, LayerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelBasicMaterialCollectionLayer",
		sizeof(FVoxelBasicMaterialCollectionLayer),
		alignof(FVoxelBasicMaterialCollectionLayer),
		Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer.InnerSingleton;
	}
	void UVoxelBasicMaterialCollection::StaticRegisterNativesUVoxelBasicMaterialCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelBasicMaterialCollection);
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection_NoRegister()
	{
		return UVoxelBasicMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) }; // 3490079243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_MetaData)) }; // 3490079243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicMaterialCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::ClassParams = {
		&UVoxelBasicMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection()
	{
		if (!Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.OuterSingleton, Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelBasicMaterialCollection>()
	{
		return UVoxelBasicMaterialCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicMaterialCollection);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics::ScriptStructInfo[] = {
		{ FVoxelBasicMaterialCollectionLayer::StaticStruct, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewStructOps, TEXT("VoxelBasicMaterialCollectionLayer"), &Z_Registration_Info_UScriptStruct_VoxelBasicMaterialCollectionLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBasicMaterialCollectionLayer), 3490079243U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBasicMaterialCollection, UVoxelBasicMaterialCollection::StaticClass, TEXT("UVoxelBasicMaterialCollection"), &Z_Registration_Info_UClass_UVoxelBasicMaterialCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBasicMaterialCollection), 1791325187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_641940595(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
