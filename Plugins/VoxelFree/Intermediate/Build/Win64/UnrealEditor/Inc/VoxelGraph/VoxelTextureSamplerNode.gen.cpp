// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelTextureSamplerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTextureSamplerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TextureSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TextureSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// End Cross Module References
	void UVoxelNode_TextureSampler::StaticRegisterNativesUVoxelNode_TextureSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_TextureSampler);
	UClass* Z_Construct_UClass_UVoxelNode_TextureSampler_NoRegister()
	{
		return UVoxelNode_TextureSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_TextureSampler_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[];
#endif
		static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// Texture sampler. Inputs are in the texture dimension, not between 0 and 1\n" },
		{ "DisplayName", "Texture Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "Keywords", "constant parameter" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "Texture sampler. Inputs are in the texture dimension, not between 0 and 1" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_TextureSampler, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
	{
		((UVoxelNode_TextureSampler*)Obj)->bBilinearInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_TextureSampler), &Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_TextureSampler, Mode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_MetaData)) }; // 3821440732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_TextureSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::ClassParams = {
		&UVoxelNode_TextureSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_TextureSampler()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_TextureSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_TextureSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_TextureSampler.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_TextureSampler>()
	{
		return UVoxelNode_TextureSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_TextureSampler);
	void UVoxelNode_VoxelTextureSampler::StaticRegisterNativesUVoxelNode_VoxelTextureSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_VoxelTextureSampler);
	UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_NoRegister()
	{
		return UVoxelNode_VoxelTextureSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[];
#endif
		static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// Voxel Texture sampler. Inputs are in the texture dimension, not between 0 and 1\n// The voxel texture can only be set in BP\n// You can create a voxel texture from another graph, or using erosion\n" },
		{ "DisplayName", "Voxel Texture Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "Keywords", "constant parameter" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "Voxel Texture sampler. Inputs are in the texture dimension, not between 0 and 1\nThe voxel texture can only be set in BP\nYou can create a voxel texture from another graph, or using erosion" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
	{
		((UVoxelNode_VoxelTextureSampler*)Obj)->bBilinearInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_VoxelTextureSampler), &Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_VoxelTextureSampler, Mode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_MetaData)) }; // 3821440732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture_MetaData[] = {
		{ "Comment", "// For parameters to work\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "For parameters to work" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_VoxelTextureSampler, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture_MetaData)) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoxelTextureSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::ClassParams = {
		&UVoxelNode_VoxelTextureSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_VoxelTextureSampler>()
	{
		return UVoxelNode_VoxelTextureSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoxelTextureSampler);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_TextureSampler, UVoxelNode_TextureSampler::StaticClass, TEXT("UVoxelNode_TextureSampler"), &Z_Registration_Info_UClass_UVoxelNode_TextureSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_TextureSampler), 2125788113U) },
		{ Z_Construct_UClass_UVoxelNode_VoxelTextureSampler, UVoxelNode_VoxelTextureSampler::StaticClass, TEXT("UVoxelNode_VoxelTextureSampler"), &Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_VoxelTextureSampler), 3151313940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h_4239996469(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
