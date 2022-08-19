// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelSeedNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSeedNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSeedNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSeedNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Seed_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Seed();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddSeeds_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddSeeds();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds();
// End Cross Module References
	void UVoxelSeedNode::StaticRegisterNativesUVoxelSeedNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSeedNode);
	UClass* Z_Construct_UClass_UVoxelSeedNode_NoRegister()
	{
		return UVoxelSeedNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSeedNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSeedNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSeedNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSeedNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSeedNode_Statics::ClassParams = {
		&UVoxelSeedNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSeedNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelSeedNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSeedNode.OuterSingleton, Z_Construct_UClass_UVoxelSeedNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSeedNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelSeedNode>()
	{
		return UVoxelSeedNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSeedNode);
	void UVoxelNode_Seed::StaticRegisterNativesUVoxelNode_Seed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_Seed);
	UClass* Z_Construct_UClass_UVoxelNode_Seed_NoRegister()
	{
		return UVoxelNode_Seed::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Seed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Seed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Seed parameter\n" },
		{ "DisplayName", "Seed" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Seed parameter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Seed, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Seed, Name_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Seed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Seed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Seed_Statics::ClassParams = {
		&UVoxelNode_Seed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_Seed()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_Seed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_Seed.OuterSingleton, Z_Construct_UClass_UVoxelNode_Seed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_Seed.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_Seed>()
	{
		return UVoxelNode_Seed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Seed);
	void UVoxelNode_AddSeeds::StaticRegisterNativesUVoxelNode_AddSeeds()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_AddSeeds);
	UClass* Z_Construct_UClass_UVoxelNode_AddSeeds_NoRegister()
	{
		return UVoxelNode_AddSeeds::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_AddSeeds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSeedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Combine seeds by hashing them\n" },
		{ "DisplayName", "Hash Seeds" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "Keywords", "combine add seed" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Combine seeds by hashing them" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_AddSeeds>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::ClassParams = {
		&UVoxelNode_AddSeeds::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_AddSeeds()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_AddSeeds.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_AddSeeds.OuterSingleton, Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_AddSeeds.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_AddSeeds>()
	{
		return UVoxelNode_AddSeeds::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_AddSeeds);
	void UVoxelNode_MakeSeeds::StaticRegisterNativesUVoxelNode_MakeSeeds()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_MakeSeeds);
	UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds_NoRegister()
	{
		return UVoxelNode_MakeSeeds::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOutputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSeedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Make several new seeds from a single one\n" },
		{ "DisplayName", "Make Seeds" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "Keywords", "make combine add seed" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Make several new seeds from a single one" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "32" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_MakeSeeds, NumOutputs), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeSeeds>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::ClassParams = {
		&UVoxelNode_MakeSeeds::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeSeeds>()
	{
		return UVoxelNode_MakeSeeds::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeSeeds);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSeedNode, UVoxelSeedNode::StaticClass, TEXT("UVoxelSeedNode"), &Z_Registration_Info_UClass_UVoxelSeedNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSeedNode), 2129366326U) },
		{ Z_Construct_UClass_UVoxelNode_Seed, UVoxelNode_Seed::StaticClass, TEXT("UVoxelNode_Seed"), &Z_Registration_Info_UClass_UVoxelNode_Seed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_Seed), 1988502670U) },
		{ Z_Construct_UClass_UVoxelNode_AddSeeds, UVoxelNode_AddSeeds::StaticClass, TEXT("UVoxelNode_AddSeeds"), &Z_Registration_Info_UClass_UVoxelNode_AddSeeds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_AddSeeds), 448929015U) },
		{ Z_Construct_UClass_UVoxelNode_MakeSeeds, UVoxelNode_MakeSeeds::StaticClass, TEXT("UVoxelNode_MakeSeeds"), &Z_Registration_Info_UClass_UVoxelNode_MakeSeeds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeSeeds), 444431686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h_2161328151(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
