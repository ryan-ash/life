// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelCurveNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCurveNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Curve_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Curve();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CurveColor_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CurveColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
// End Cross Module References
	void UVoxelNode_Curve::StaticRegisterNativesUVoxelNode_Curve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_Curve);
	UClass* Z_Construct_UClass_UVoxelNode_Curve_NoRegister()
	{
		return UVoxelNode_Curve::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Curve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Curve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Curve_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "// Apply a float curve\n" },
		{ "DisplayName", "Float Curve" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCurveNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
		{ "ToolTip", "Apply a float curve" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
		{ "NonNull", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Curve, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Curve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Curve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Curve_Statics::ClassParams = {
		&UVoxelNode_Curve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Curve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_Curve()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_Curve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_Curve.OuterSingleton, Z_Construct_UClass_UVoxelNode_Curve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_Curve.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_Curve>()
	{
		return UVoxelNode_Curve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Curve);
	void UVoxelNode_CurveColor::StaticRegisterNativesUVoxelNode_CurveColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_CurveColor);
	UClass* Z_Construct_UClass_UVoxelNode_CurveColor_NoRegister()
	{
		return UVoxelNode_CurveColor::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_CurveColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_CurveColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CurveColor_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "// Apply a color curve\n// TODO option to output color\n" },
		{ "DisplayName", "Color Curve" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCurveNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
		{ "ToolTip", "Apply a color curve\nTODO option to output color" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
		{ "NonNull", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CurveColor, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_CurveColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CurveColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CurveColor_Statics::ClassParams = {
		&UVoxelNode_CurveColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_CurveColor()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_CurveColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_CurveColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_CurveColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_CurveColor.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_CurveColor>()
	{
		return UVoxelNode_CurveColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CurveColor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_Curve, UVoxelNode_Curve::StaticClass, TEXT("UVoxelNode_Curve"), &Z_Registration_Info_UClass_UVoxelNode_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_Curve), 313092407U) },
		{ Z_Construct_UClass_UVoxelNode_CurveColor, UVoxelNode_CurveColor::StaticClass, TEXT("UVoxelNode_CurveColor"), &Z_Registration_Info_UClass_UVoxelNode_CurveColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_CurveColor), 4234562400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h_2293402783(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
