// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNodeHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNodeHelper() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
// End Cross Module References
	void UVoxelNodeHelper::StaticRegisterNativesUVoxelNodeHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNodeHelper);
	UClass* Z_Construct_UClass_UVoxelNodeHelper_NoRegister()
	{
		return UVoxelNodeHelper::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNodeHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNodeHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNodeHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeHelper_Statics::ClassParams = {
		&UVoxelNodeHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNodeHelper()
	{
		if (!Z_Registration_Info_UClass_UVoxelNodeHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNodeHelper.OuterSingleton, Z_Construct_UClass_UVoxelNodeHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNodeHelper.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNodeHelper>()
	{
		return UVoxelNodeHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeHelper);
	void UVoxelSetterNode::StaticRegisterNativesUVoxelSetterNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSetterNode);
	UClass* Z_Construct_UClass_UVoxelSetterNode_NoRegister()
	{
		return UVoxelSetterNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSetterNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSetterNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Setter nodes" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSetterNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSetterNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSetterNode_Statics::ClassParams = {
		&UVoxelSetterNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSetterNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelSetterNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSetterNode.OuterSingleton, Z_Construct_UClass_UVoxelSetterNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSetterNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelSetterNode>()
	{
		return UVoxelSetterNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSetterNode);
	void UVoxelPureNode::StaticRegisterNativesUVoxelPureNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPureNode);
	UClass* Z_Construct_UClass_UVoxelPureNode_NoRegister()
	{
		return UVoxelPureNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPureNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPureNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPureNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPureNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPureNode_Statics::ClassParams = {
		&UVoxelPureNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPureNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelPureNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPureNode.OuterSingleton, Z_Construct_UClass_UVoxelPureNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPureNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelPureNode>()
	{
		return UVoxelPureNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPureNode);
	void UVoxelNodeWithDependencies::StaticRegisterNativesUVoxelNodeWithDependencies()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNodeWithDependencies);
	UClass* Z_Construct_UClass_UVoxelNodeWithDependencies_NoRegister()
	{
		return UVoxelNodeWithDependencies::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNodeWithDependencies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeWithDependencies>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::ClassParams = {
		&UVoxelNodeWithDependencies::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNodeWithDependencies()
	{
		if (!Z_Registration_Info_UClass_UVoxelNodeWithDependencies.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNodeWithDependencies.OuterSingleton, Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNodeWithDependencies.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNodeWithDependencies>()
	{
		return UVoxelNodeWithDependencies::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeWithDependencies);
	void UVoxelNodeWithContext::StaticRegisterNativesUVoxelNodeWithContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNodeWithContext);
	UClass* Z_Construct_UClass_UVoxelNodeWithContext_NoRegister()
	{
		return UVoxelNodeWithContext::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNodeWithContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNodeWithContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithDependencies,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNodeWithContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeWithContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeWithContext_Statics::ClassParams = {
		&UVoxelNodeWithContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNodeWithContext()
	{
		if (!Z_Registration_Info_UClass_UVoxelNodeWithContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNodeWithContext.OuterSingleton, Z_Construct_UClass_UVoxelNodeWithContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNodeWithContext.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNodeWithContext>()
	{
		return UVoxelNodeWithContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeWithContext);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNodeHelper, UVoxelNodeHelper::StaticClass, TEXT("UVoxelNodeHelper"), &Z_Registration_Info_UClass_UVoxelNodeHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNodeHelper), 2314884504U) },
		{ Z_Construct_UClass_UVoxelSetterNode, UVoxelSetterNode::StaticClass, TEXT("UVoxelSetterNode"), &Z_Registration_Info_UClass_UVoxelSetterNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSetterNode), 2081950151U) },
		{ Z_Construct_UClass_UVoxelPureNode, UVoxelPureNode::StaticClass, TEXT("UVoxelPureNode"), &Z_Registration_Info_UClass_UVoxelPureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPureNode), 1448127393U) },
		{ Z_Construct_UClass_UVoxelNodeWithDependencies, UVoxelNodeWithDependencies::StaticClass, TEXT("UVoxelNodeWithDependencies"), &Z_Registration_Info_UClass_UVoxelNodeWithDependencies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNodeWithDependencies), 658345781U) },
		{ Z_Construct_UClass_UVoxelNodeWithContext, UVoxelNodeWithContext::StaticClass, TEXT("UVoxelNodeWithContext"), &Z_Registration_Info_UClass_UVoxelNodeWithContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNodeWithContext), 3163761040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h_934718198(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
