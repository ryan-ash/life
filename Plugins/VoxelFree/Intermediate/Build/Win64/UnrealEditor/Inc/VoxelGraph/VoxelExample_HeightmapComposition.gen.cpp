// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_HeightmapComposition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_HeightmapComposition() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
// End Cross Module References
	void UVoxelExample_HeightmapComposition::StaticRegisterNativesUVoxelExample_HeightmapComposition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExample_HeightmapComposition);
	UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition_NoRegister()
	{
		return UVoxelExample_HeightmapComposition::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flip_X_MetaData[];
#endif
		static void NewProp_Flip_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Flip_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flip_Y_MetaData[];
#endif
		static void NewProp_Flip_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Flip_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x0_y0_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x0_y0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x0_y1_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x0_y1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x1_y0_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x1_y0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x1_y1_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x1_y1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_HeightmapComposition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Depth below the heightmap\n" },
		{ "DisplayName", "Depth" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
		{ "ToolTip", "Depth below the heightmap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, Depth), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Flip X" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_SetBit(void* Obj)
	{
		((UVoxelExample_HeightmapComposition*)Obj)->Flip_X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X = { "Flip_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelExample_HeightmapComposition), &Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Flip Y" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_SetBit(void* Obj)
	{
		((UVoxelExample_HeightmapComposition*)Obj)->Flip_Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y = { "Flip_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelExample_HeightmapComposition), &Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "heightmap x0 y0" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0 = { "heightmap_x0_y0", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x0_y0), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "heightmap x0 y1" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1 = { "heightmap_x0_y1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x0_y1), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "heightmap x1 y0" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0 = { "heightmap_x1_y0", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x1_y0), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "heightmap x1 y1" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1 = { "heightmap_x1_y1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x1_y1), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Size of the heightmaps\n" },
		{ "DisplayName", "Size X" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
		{ "ToolTip", "Size of the heightmaps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X = { "Size_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, Size_X), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Size of the heightmaps\n" },
		{ "DisplayName", "Size Y" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
		{ "ToolTip", "Size of the heightmaps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y = { "Size_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, Size_Y), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_HeightmapComposition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::ClassParams = {
		&UVoxelExample_HeightmapComposition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition()
	{
		if (!Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.OuterSingleton, Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_HeightmapComposition>()
	{
		return UVoxelExample_HeightmapComposition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_HeightmapComposition);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_HeightmapComposition, UVoxelExample_HeightmapComposition::StaticClass, TEXT("UVoxelExample_HeightmapComposition"), &Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_HeightmapComposition), 370302710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h_168582399(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
