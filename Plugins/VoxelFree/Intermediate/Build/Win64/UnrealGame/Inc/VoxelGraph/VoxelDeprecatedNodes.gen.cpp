// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelDeprecatedNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDeprecatedNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XI_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XI();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YI_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YI();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZI_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZI();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance();
// End Cross Module References
	void UVoxelNode_MakeMaterialFromSingleIndex::StaticRegisterNativesUVoxelNode_MakeMaterialFromSingleIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_MakeMaterialFromSingleIndex);
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_NoRegister()
	{
		return UVoxelNode_MakeMaterialFromSingleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromSingleIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::ClassParams = {
		&UVoxelNode_MakeMaterialFromSingleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeMaterialFromSingleIndex>()
	{
		return UVoxelNode_MakeMaterialFromSingleIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromSingleIndex);
	void UVoxelNode_GetDoubleIndex::StaticRegisterNativesUVoxelNode_GetDoubleIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetDoubleIndex);
	UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex_NoRegister()
	{
		return UVoxelNode_GetDoubleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetDoubleIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::ClassParams = {
		&UVoxelNode_GetDoubleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetDoubleIndex>()
	{
		return UVoxelNode_GetDoubleIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetDoubleIndex);
	void UVoxelNode_MakeMaterialFromColor::StaticRegisterNativesUVoxelNode_MakeMaterialFromColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_MakeMaterialFromColor);
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_NoRegister()
	{
		return UVoxelNode_MakeMaterialFromColor::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::ClassParams = {
		&UVoxelNode_MakeMaterialFromColor::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeMaterialFromColor>()
	{
		return UVoxelNode_MakeMaterialFromColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromColor);
	void UVoxelNode_MakeMaterialFromDoubleIndex::StaticRegisterNativesUVoxelNode_MakeMaterialFromDoubleIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_MakeMaterialFromDoubleIndex);
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_NoRegister()
	{
		return UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromDoubleIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::ClassParams = {
		&UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeMaterialFromDoubleIndex>()
	{
		return UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromDoubleIndex);
	void UVoxelNode_CreateDoubleIndexMaterial::StaticRegisterNativesUVoxelNode_CreateDoubleIndexMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_CreateDoubleIndexMaterial);
	UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_NoRegister()
	{
		return UVoxelNode_CreateDoubleIndexMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Create Double Index Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CreateDoubleIndexMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::ClassParams = {
		&UVoxelNode_CreateDoubleIndexMaterial::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.OuterSingleton, Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_CreateDoubleIndexMaterial>()
	{
		return UVoxelNode_CreateDoubleIndexMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CreateDoubleIndexMaterial);
	void UVoxelNode_SetDoubleIndex::StaticRegisterNativesUVoxelNode_SetDoubleIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_SetDoubleIndex);
	UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex_NoRegister()
	{
		return UVoxelNode_SetDoubleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Set Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetDoubleIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::ClassParams = {
		&UVoxelNode_SetDoubleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetDoubleIndex>()
	{
		return UVoxelNode_SetDoubleIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetDoubleIndex);
	void UVoxelNode_WorldGeneratorSampler::StaticRegisterNativesUVoxelNode_WorldGeneratorSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_WorldGeneratorSampler);
	UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_NoRegister()
	{
		return UVoxelNode_WorldGeneratorSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldGenerator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Seeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Seeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Generator Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSampler, WorldGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator_MetaData)) }; // 3987947468
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSampler, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldGeneratorSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::ClassParams = {
		&UVoxelNode_WorldGeneratorSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_WorldGeneratorSampler>()
	{
		return UVoxelNode_WorldGeneratorSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldGeneratorSampler);
	void UVoxelNode_XI::StaticRegisterNativesUVoxelNode_XI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_XI);
	UClass* Z_Construct_UClass_UVoxelNode_XI_NoRegister()
	{
		return UVoxelNode_XI::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_XI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_XI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "X (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_XI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_XI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_XI_Statics::ClassParams = {
		&UVoxelNode_XI::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_XI()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_XI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_XI.OuterSingleton, Z_Construct_UClass_UVoxelNode_XI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_XI.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_XI>()
	{
		return UVoxelNode_XI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_XI);
	void UVoxelNode_YI::StaticRegisterNativesUVoxelNode_YI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_YI);
	UClass* Z_Construct_UClass_UVoxelNode_YI_NoRegister()
	{
		return UVoxelNode_YI::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_YI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_YI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Y (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_YI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_YI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_YI_Statics::ClassParams = {
		&UVoxelNode_YI::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_YI()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_YI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_YI.OuterSingleton, Z_Construct_UClass_UVoxelNode_YI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_YI.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_YI>()
	{
		return UVoxelNode_YI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_YI);
	void UVoxelNode_ZI::StaticRegisterNativesUVoxelNode_ZI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_ZI);
	UClass* Z_Construct_UClass_UVoxelNode_ZI_NoRegister()
	{
		return UVoxelNode_ZI::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_ZI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_ZI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Z (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_ZI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ZI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ZI_Statics::ClassParams = {
		&UVoxelNode_ZI::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_ZI()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_ZI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ZI.OuterSingleton, Z_Construct_UClass_UVoxelNode_ZI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_ZI.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_ZI>()
	{
		return UVoxelNode_ZI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ZI);
	void UVoxelNode_PerlinWormDistance::StaticRegisterNativesUVoxelNode_PerlinWormDistance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_PerlinWormDistance);
	UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance_NoRegister()
	{
		return UVoxelNode_PerlinWormDistance::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Perlin Worm Distance" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_PerlinWormDistance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::ClassParams = {
		&UVoxelNode_PerlinWormDistance::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.OuterSingleton, Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_PerlinWormDistance>()
	{
		return UVoxelNode_PerlinWormDistance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_PerlinWormDistance);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex, UVoxelNode_MakeMaterialFromSingleIndex::StaticClass, TEXT("UVoxelNode_MakeMaterialFromSingleIndex"), &Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeMaterialFromSingleIndex), 3541396942U) },
		{ Z_Construct_UClass_UVoxelNode_GetDoubleIndex, UVoxelNode_GetDoubleIndex::StaticClass, TEXT("UVoxelNode_GetDoubleIndex"), &Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetDoubleIndex), 2945761202U) },
		{ Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor, UVoxelNode_MakeMaterialFromColor::StaticClass, TEXT("UVoxelNode_MakeMaterialFromColor"), &Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeMaterialFromColor), 160064677U) },
		{ Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex, UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass, TEXT("UVoxelNode_MakeMaterialFromDoubleIndex"), &Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeMaterialFromDoubleIndex), 1227729541U) },
		{ Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial, UVoxelNode_CreateDoubleIndexMaterial::StaticClass, TEXT("UVoxelNode_CreateDoubleIndexMaterial"), &Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_CreateDoubleIndexMaterial), 2918930523U) },
		{ Z_Construct_UClass_UVoxelNode_SetDoubleIndex, UVoxelNode_SetDoubleIndex::StaticClass, TEXT("UVoxelNode_SetDoubleIndex"), &Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetDoubleIndex), 2746836858U) },
		{ Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler, UVoxelNode_WorldGeneratorSampler::StaticClass, TEXT("UVoxelNode_WorldGeneratorSampler"), &Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_WorldGeneratorSampler), 3410411747U) },
		{ Z_Construct_UClass_UVoxelNode_XI, UVoxelNode_XI::StaticClass, TEXT("UVoxelNode_XI"), &Z_Registration_Info_UClass_UVoxelNode_XI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_XI), 1315903616U) },
		{ Z_Construct_UClass_UVoxelNode_YI, UVoxelNode_YI::StaticClass, TEXT("UVoxelNode_YI"), &Z_Registration_Info_UClass_UVoxelNode_YI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_YI), 1235480963U) },
		{ Z_Construct_UClass_UVoxelNode_ZI, UVoxelNode_ZI::StaticClass, TEXT("UVoxelNode_ZI"), &Z_Registration_Info_UClass_UVoxelNode_ZI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ZI), 2758828608U) },
		{ Z_Construct_UClass_UVoxelNode_PerlinWormDistance, UVoxelNode_PerlinWormDistance::StaticClass, TEXT("UVoxelNode_PerlinWormDistance"), &Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_PerlinWormDistance), 1475539470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h_2860519937(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
