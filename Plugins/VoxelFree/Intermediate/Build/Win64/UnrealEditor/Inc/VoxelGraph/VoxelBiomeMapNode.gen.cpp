// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelBiomeMapNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBiomeMapNode() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FBiomeMapElement();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BiomeMapElement;
class UScriptStruct* FBiomeMapElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BiomeMapElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BiomeMapElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBiomeMapElement, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("BiomeMapElement"));
	}
	return Z_Registration_Info_UScriptStruct_BiomeMapElement.OuterSingleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FBiomeMapElement>()
{
	return FBiomeMapElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBiomeMapElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBiomeMapElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBiomeMapElement, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBiomeMapElement, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"BiomeMapElement",
		sizeof(FBiomeMapElement),
		alignof(FBiomeMapElement),
		Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBiomeMapElement()
	{
		if (!Z_Registration_Info_UScriptStruct_BiomeMapElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BiomeMapElement.InnerSingleton, Z_Construct_UScriptStruct_FBiomeMapElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BiomeMapElement.InnerSingleton;
	}
	void UVoxelNode_BiomeMapSampler::StaticRegisterNativesUVoxelNode_BiomeMapSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_BiomeMapSampler);
	UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler_NoRegister()
	{
		return UVoxelNode_BiomeMapSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Biomes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Biomes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Biomes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Biomes" },
		{ "Comment", "// Find the strength of biomes from a biome map. Note: Alpha is ignored when computing the color distance\n" },
		{ "DisplayName", "Biome Map Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ToolTip", "Find the strength of biomes from a biome map. Note: Alpha is ignored when computing the color distance" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "// Distance = Max(Abs(ColorA - ColorB)). Values with a distance below or equal to this will be set to 1, value strictly above to 0\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ToolTip", "Distance = Max(Abs(ColorA - ColorB)). Values with a distance below or equal to this will be set to 1, value strictly above to 0" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Threshold), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_Inner = { "Biomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBiomeMapElement, METADATA_PARAMS(nullptr, 0) }; // 3438483046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes = { "Biomes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Biomes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_MetaData)) }; // 3438483046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BiomeMapSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::ClassParams = {
		&UVoxelNode_BiomeMapSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_BiomeMapSampler>()
	{
		return UVoxelNode_BiomeMapSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BiomeMapSampler);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics::ScriptStructInfo[] = {
		{ FBiomeMapElement::StaticStruct, Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewStructOps, TEXT("BiomeMapElement"), &Z_Registration_Info_UScriptStruct_BiomeMapElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBiomeMapElement), 3438483046U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_BiomeMapSampler, UVoxelNode_BiomeMapSampler::StaticClass, TEXT("UVoxelNode_BiomeMapSampler"), &Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_BiomeMapSampler), 2674834784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_4144783984(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
