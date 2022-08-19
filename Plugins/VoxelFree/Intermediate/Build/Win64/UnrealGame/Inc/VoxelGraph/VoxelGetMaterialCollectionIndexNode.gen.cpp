// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGetMaterialCollectionIndexNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVoxelNode_GetMaterialCollectionIndex::StaticRegisterNativesUVoxelNode_GetMaterialCollectionIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetMaterialCollectionIndex);
	UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_NoRegister()
	{
		return UVoxelNode_GetMaterialCollectionIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelAssetPickerNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "Comment", "// Retrieve the index of a material function or a material instance in the voxel world material collection\n" },
		{ "DisplayName", "Get Material Collection Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ToolTip", "Retrieve the index of a material function or a material instance in the voxel world material collection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetMaterialCollectionIndex, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetMaterialCollectionIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::ClassParams = {
		&UVoxelNode_GetMaterialCollectionIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetMaterialCollectionIndex>()
	{
		return UVoxelNode_GetMaterialCollectionIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetMaterialCollectionIndex);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex, UVoxelNode_GetMaterialCollectionIndex::StaticClass, TEXT("UVoxelNode_GetMaterialCollectionIndex"), &Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetMaterialCollectionIndex), 1871344382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h_2133586811(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
