// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelHeightmapSamplerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapSamplerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
// End Cross Module References
	void UVoxelNode_HeightmapSampler::StaticRegisterNativesUVoxelNode_HeightmapSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_HeightmapSampler);
	UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler_NoRegister()
	{
		return UVoxelNode_HeightmapSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFloatHeightmap_MetaData[];
#endif
		static void NewProp_bFloatHeightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloatHeightmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapFloat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapUINT16_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapUINT16;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenter_MetaData[];
#endif
		static void NewProp_bCenter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Heightmap" },
		{ "Comment", "// Heightmap sampler\n" },
		{ "DisplayName", "Heightmap Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelHeightmapSamplerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
		{ "ToolTip", "Heightmap sampler" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_SetBit(void* Obj)
	{
		((UVoxelNode_HeightmapSampler*)Obj)->bFloatHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap = { "bFloatHeightmap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_HeightmapSampler), &Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "DisplayName", "Heightmap (float)" },
		{ "EditCondition", "bFloatHeightmap" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat = { "HeightmapFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, HeightmapFloat), Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "DisplayName", "Heightmap (uint16)" },
		{ "EditCondition", "!bFloatHeightmap" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16 = { "HeightmapUINT16", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, HeightmapUINT16), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType = { "SamplerType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, SamplerType), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_MetaData)) }; // 3821440732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "Comment", "// If true, the heightmap will be centered\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
		{ "ToolTip", "If true, the heightmap will be centered" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_SetBit(void* Obj)
	{
		((UVoxelNode_HeightmapSampler*)Obj)->bCenter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter = { "bCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_HeightmapSampler), &Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_HeightmapSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::ClassParams = {
		&UVoxelNode_HeightmapSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_HeightmapSampler>()
	{
		return UVoxelNode_HeightmapSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_HeightmapSampler);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_HeightmapSampler, UVoxelNode_HeightmapSampler::StaticClass, TEXT("UVoxelNode_HeightmapSampler"), &Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_HeightmapSampler), 2609696365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h_4235930084(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
