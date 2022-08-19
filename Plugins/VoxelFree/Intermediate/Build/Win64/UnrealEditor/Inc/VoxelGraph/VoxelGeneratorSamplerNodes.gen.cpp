// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGeneratorSamplerNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorSamplerNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput();
// End Cross Module References
	void UVoxelNode_GeneratorSamplerBase::StaticRegisterNativesUVoxelNode_GeneratorSamplerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GeneratorSamplerBase);
	UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_NoRegister()
	{
		return UVoxelNode_GeneratorSamplerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GeneratorSamplerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::ClassParams = {
		&UVoxelNode_GeneratorSamplerBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GeneratorSamplerBase>()
	{
		return UVoxelNode_GeneratorSamplerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GeneratorSamplerBase);
	void UVoxelNode_SingleGeneratorSamplerBase::StaticRegisterNativesUVoxelNode_SingleGeneratorSamplerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_SingleGeneratorSamplerBase);
	UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_NoRegister()
	{
		return UVoxelNode_SingleGeneratorSamplerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_SingleGeneratorSamplerBase, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator_MetaData)) }; // 3987947468
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SingleGeneratorSamplerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::ClassParams = {
		&UVoxelNode_SingleGeneratorSamplerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SingleGeneratorSamplerBase>()
	{
		return UVoxelNode_SingleGeneratorSamplerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SingleGeneratorSamplerBase);
	void UVoxelNode_GetGeneratorValue::StaticRegisterNativesUVoxelNode_GetGeneratorValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetGeneratorValue);
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue_NoRegister()
	{
		return UVoxelNode_GetGeneratorValue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::ClassParams = {
		&UVoxelNode_GetGeneratorValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetGeneratorValue>()
	{
		return UVoxelNode_GetGeneratorValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorValue);
	void UVoxelNode_GetGeneratorMaterial::StaticRegisterNativesUVoxelNode_GetGeneratorMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetGeneratorMaterial);
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_NoRegister()
	{
		return UVoxelNode_GetGeneratorMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::ClassParams = {
		&UVoxelNode_GetGeneratorMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetGeneratorMaterial>()
	{
		return UVoxelNode_GetGeneratorMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorMaterial);
	void UVoxelNode_GetGeneratorCustomOutput::StaticRegisterNativesUVoxelNode_GetGeneratorCustomOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetGeneratorCustomOutput);
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_NoRegister()
	{
		return UVoxelNode_GetGeneratorCustomOutput::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics
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
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetGeneratorCustomOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorCustomOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::ClassParams = {
		&UVoxelNode_GetGeneratorCustomOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetGeneratorCustomOutput>()
	{
		return UVoxelNode_GetGeneratorCustomOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorCustomOutput);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase, UVoxelNode_GeneratorSamplerBase::StaticClass, TEXT("UVoxelNode_GeneratorSamplerBase"), &Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GeneratorSamplerBase), 3920820207U) },
		{ Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase, UVoxelNode_SingleGeneratorSamplerBase::StaticClass, TEXT("UVoxelNode_SingleGeneratorSamplerBase"), &Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SingleGeneratorSamplerBase), 2397657363U) },
		{ Z_Construct_UClass_UVoxelNode_GetGeneratorValue, UVoxelNode_GetGeneratorValue::StaticClass, TEXT("UVoxelNode_GetGeneratorValue"), &Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetGeneratorValue), 749682982U) },
		{ Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial, UVoxelNode_GetGeneratorMaterial::StaticClass, TEXT("UVoxelNode_GetGeneratorMaterial"), &Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetGeneratorMaterial), 637218588U) },
		{ Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput, UVoxelNode_GetGeneratorCustomOutput::StaticClass, TEXT("UVoxelNode_GetGeneratorCustomOutput"), &Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetGeneratorCustomOutput), 1338871716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h_1648350090(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
