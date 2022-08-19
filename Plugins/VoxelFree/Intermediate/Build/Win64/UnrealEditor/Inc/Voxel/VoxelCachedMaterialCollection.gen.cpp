// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCachedMaterialCollection() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices();
// End Cross Module References
	void UVoxelCachedMaterialCollection::StaticRegisterNativesUVoxelCachedMaterialCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelCachedMaterialCollection);
	UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection_NoRegister()
	{
		return UVoxelCachedMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMaterials_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_ValueProp = { "CachedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_Key_KeyProp = { "CachedMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelMaterialIndices, METADATA_PARAMS(nullptr, 0) }; // 2121677541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials = { "CachedMaterials", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelCachedMaterialCollection, CachedMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_MetaData)) }; // 2121677541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCachedMaterialCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::ClassParams = {
		&UVoxelCachedMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection()
	{
		if (!Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.OuterSingleton, Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelCachedMaterialCollection>()
	{
		return UVoxelCachedMaterialCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCachedMaterialCollection);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelCachedMaterialCollection, UVoxelCachedMaterialCollection::StaticClass, TEXT("UVoxelCachedMaterialCollection"), &Z_Registration_Info_UClass_UVoxelCachedMaterialCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCachedMaterialCollection), 370283013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h_1868969925(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
