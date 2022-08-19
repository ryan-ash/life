// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Thumbnails/VoxelDataAssetThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetThumbnailRenderer() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
// End Cross Module References
	void UVoxelDataAssetThumbnailRenderer::StaticRegisterNativesUVoxelDataAssetThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDataAssetThumbnailRenderer);
	UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_NoRegister()
	{
		return UVoxelDataAssetThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelDataAssetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelDataAssetThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::ClassParams = {
		&UVoxelDataAssetThumbnailRenderer::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetThumbnailRenderer>()
	{
		return UVoxelDataAssetThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetThumbnailRenderer);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer, UVoxelDataAssetThumbnailRenderer::StaticClass, TEXT("UVoxelDataAssetThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetThumbnailRenderer), 1916466693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h_3185437863(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
