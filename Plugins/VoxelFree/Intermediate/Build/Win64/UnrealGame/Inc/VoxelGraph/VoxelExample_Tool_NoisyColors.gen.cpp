// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Tool_NoisyColors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Tool_NoisyColors() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UVoxelExample_Tool_NoisyColors::StaticRegisterNativesUVoxelExample_Tool_NoisyColors()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_Tool_NoisyColors);
	UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_NoRegister()
	{
		return UVoxelExample_Tool_NoisyColors::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Tool_NoisyColors.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Tool_NoisyColors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Tool_NoisyColors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Tool_NoisyColors, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Tool_NoisyColors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::ClassParams = {
		&UVoxelExample_Tool_NoisyColors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.OuterSingleton, Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Tool_NoisyColors>()
	{
		return UVoxelExample_Tool_NoisyColors::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Tool_NoisyColors);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Tool_NoisyColors, UVoxelExample_Tool_NoisyColors::StaticClass, TEXT("UVoxelExample_Tool_NoisyColors"), &Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Tool_NoisyColors), 1465682323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h_3834214642(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
