// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnersThumbnailRenderer() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer();
// End Cross Module References
	void UVoxelMeshSpawnerThumbnailRenderer::StaticRegisterNativesUVoxelMeshSpawnerThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMeshSpawnerThumbnailRenderer);
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_NoRegister()
	{
		return UVoxelMeshSpawnerThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::ClassParams = {
		&UVoxelMeshSpawnerThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelMeshSpawnerThumbnailRenderer>()
	{
		return UVoxelMeshSpawnerThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerThumbnailRenderer);
	void UVoxelAssetSpawnerThumbnailRenderer::StaticRegisterNativesUVoxelAssetSpawnerThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelAssetSpawnerThumbnailRenderer);
	UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_NoRegister()
	{
		return UVoxelAssetSpawnerThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetSpawnerThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::ClassParams = {
		&UVoxelAssetSpawnerThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelAssetSpawnerThumbnailRenderer>()
	{
		return UVoxelAssetSpawnerThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetSpawnerThumbnailRenderer);
	void UVoxelSpawnerGroupThumbnailRenderer::StaticRegisterNativesUVoxelSpawnerGroupThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSpawnerGroupThumbnailRenderer);
	UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_NoRegister()
	{
		return UVoxelSpawnerGroupThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerGroupThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::ClassParams = {
		&UVoxelSpawnerGroupThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelSpawnerGroupThumbnailRenderer>()
	{
		return UVoxelSpawnerGroupThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerGroupThumbnailRenderer);
	void UVoxelMeshSpawnerGroupThumbnailRenderer::StaticRegisterNativesUVoxelMeshSpawnerGroupThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMeshSpawnerGroupThumbnailRenderer);
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_NoRegister()
	{
		return UVoxelMeshSpawnerGroupThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerGroupThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::ClassParams = {
		&UVoxelMeshSpawnerGroupThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelMeshSpawnerGroupThumbnailRenderer>()
	{
		return UVoxelMeshSpawnerGroupThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerGroupThumbnailRenderer);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer, UVoxelMeshSpawnerThumbnailRenderer::StaticClass, TEXT("UVoxelMeshSpawnerThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerThumbnailRenderer), 3333521239U) },
		{ Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer, UVoxelAssetSpawnerThumbnailRenderer::StaticClass, TEXT("UVoxelAssetSpawnerThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetSpawnerThumbnailRenderer), 1885391495U) },
		{ Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer, UVoxelSpawnerGroupThumbnailRenderer::StaticClass, TEXT("UVoxelSpawnerGroupThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerGroupThumbnailRenderer), 3988241596U) },
		{ Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer, UVoxelMeshSpawnerGroupThumbnailRenderer::StaticClass, TEXT("UVoxelMeshSpawnerGroupThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerGroupThumbnailRenderer), 459007362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h_1072985473(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
