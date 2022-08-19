// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGraphAssetNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphAssetNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphAssetNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphAssetNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetValue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetValue();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// End Cross Module References
	void UVoxelGraphAssetNode::StaticRegisterNativesUVoxelGraphAssetNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphAssetNode);
	UClass* Z_Construct_UClass_UVoxelGraphAssetNode_NoRegister()
	{
		return UVoxelGraphAssetNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphAssetNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGenerator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphAssetNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Graph Asset" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// Generator to sample from when not used as an asset. Useful to preview. Not used when compiled to C++\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ReconstructNode", "" },
		{ "ToolTip", "Generator to sample from when not used as an asset. Useful to preview. Not used when compiled to C++" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator = { "DefaultGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphAssetNode, DefaultGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator_MetaData)) }; // 3987947468
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphAssetNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphAssetNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::ClassParams = {
		&UVoxelGraphAssetNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphAssetNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphAssetNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphAssetNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphAssetNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphAssetNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphAssetNode>()
	{
		return UVoxelGraphAssetNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphAssetNode);
	void UVoxelNode_EditGetValue::StaticRegisterNativesUVoxelNode_EditGetValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_EditGetValue);
	UClass* Z_Construct_UClass_UVoxelNode_EditGetValue_NoRegister()
	{
		return UVoxelNode_EditGetValue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the previous generator value. Only for graph assets\n" },
		{ "DisplayName", "Get Previous Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the previous generator value. Only for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::ClassParams = {
		&UVoxelNode_EditGetValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetValue()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_EditGetValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetValue.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_EditGetValue.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetValue>()
	{
		return UVoxelNode_EditGetValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetValue);
	void UVoxelNode_EditGetMaterial::StaticRegisterNativesUVoxelNode_EditGetMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_EditGetMaterial);
	UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial_NoRegister()
	{
		return UVoxelNode_EditGetMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the previous generator material. Only for graph assets\n" },
		{ "DisplayName", "Get Previous Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the previous generator material. Only for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::ClassParams = {
		&UVoxelNode_EditGetMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetMaterial>()
	{
		return UVoxelNode_EditGetMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetMaterial);
	void UVoxelNode_EditGetCustomOutput::StaticRegisterNativesUVoxelNode_EditGetCustomOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_EditGetCustomOutput);
	UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_NoRegister()
	{
		return UVoxelNode_EditGetCustomOutput::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the previous generator custom output. Only for graph assets\n" },
		{ "DisplayName", "Get Previous Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the previous generator custom output. Only for graph assets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_EditGetCustomOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetCustomOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::ClassParams = {
		&UVoxelNode_EditGetCustomOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetCustomOutput>()
	{
		return UVoxelNode_EditGetCustomOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetCustomOutput);
	void UVoxelNode_EditGetHardness::StaticRegisterNativesUVoxelNode_EditGetHardness()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_EditGetHardness);
	UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness_NoRegister()
	{
		return UVoxelNode_EditGetHardness::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "Comment", "// Get the material hardness\n" },
		{ "DisplayName", "Get Hardness" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the material hardness" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetHardness>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::ClassParams = {
		&UVoxelNode_EditGetHardness::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetHardness>()
	{
		return UVoxelNode_EditGetHardness::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetHardness);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphAssetNode, UVoxelGraphAssetNode::StaticClass, TEXT("UVoxelGraphAssetNode"), &Z_Registration_Info_UClass_UVoxelGraphAssetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphAssetNode), 1836589636U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetValue, UVoxelNode_EditGetValue::StaticClass, TEXT("UVoxelNode_EditGetValue"), &Z_Registration_Info_UClass_UVoxelNode_EditGetValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetValue), 2960111993U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetMaterial, UVoxelNode_EditGetMaterial::StaticClass, TEXT("UVoxelNode_EditGetMaterial"), &Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetMaterial), 1022621583U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetCustomOutput, UVoxelNode_EditGetCustomOutput::StaticClass, TEXT("UVoxelNode_EditGetCustomOutput"), &Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetCustomOutput), 3533650099U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetHardness, UVoxelNode_EditGetHardness::StaticClass, TEXT("UVoxelNode_EditGetHardness"), &Z_Registration_Info_UClass_UVoxelNode_EditGetHardness, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetHardness), 2869692967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h_623169117(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
