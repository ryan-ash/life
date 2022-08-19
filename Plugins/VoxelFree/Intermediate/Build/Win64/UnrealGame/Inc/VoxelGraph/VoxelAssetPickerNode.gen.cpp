// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelAssetPickerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetPickerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelAssetPickerNode::StaticRegisterNativesUVoxelAssetPickerNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelAssetPickerNode);
	UClass* Z_Construct_UClass_UVoxelAssetPickerNode_NoRegister()
	{
		return UVoxelAssetPickerNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelAssetPickerNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelAssetPickerNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetPickerNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelAssetPickerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelAssetPickerNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelAssetPickerNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetPickerNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetPickerNode_Statics::ClassParams = {
		&UVoxelAssetPickerNode::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetPickerNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetPickerNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelAssetPickerNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelAssetPickerNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetPickerNode.OuterSingleton, Z_Construct_UClass_UVoxelAssetPickerNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelAssetPickerNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelAssetPickerNode>()
	{
		return UVoxelAssetPickerNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetPickerNode);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelAssetPickerNode, UVoxelAssetPickerNode::StaticClass, TEXT("UVoxelAssetPickerNode"), &Z_Registration_Info_UClass_UVoxelAssetPickerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetPickerNode), 617109128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h_199241721(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
