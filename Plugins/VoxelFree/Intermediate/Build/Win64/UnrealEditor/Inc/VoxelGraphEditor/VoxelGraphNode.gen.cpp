// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelGraphNodes/VoxelGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
// End Cross Module References
	void UVoxelGraphNode::StaticRegisterNativesUVoxelGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphNode);
	UClass* Z_Construct_UClass_UVoxelGraphNode_NoRegister()
	{
		return UVoxelGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode = { "VoxelNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNode, VoxelNode), Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Statics::ClassParams = {
		&UVoxelGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphNode.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelGraphNode>()
	{
		return UVoxelGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode, UVoxelGraphNode::StaticClass, TEXT("UVoxelGraphNode"), &Z_Registration_Info_UClass_UVoxelGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode), 3389522210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h_3878385837(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
