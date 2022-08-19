// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelDataAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory();
// End Cross Module References
	void UVoxelDataAssetFactory::StaticRegisterNativesUVoxelDataAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDataAssetFactory);
	UClass* Z_Construct_UClass_UVoxelDataAssetFactory_NoRegister()
	{
		return UVoxelDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFactory_Statics::ClassParams = {
		&UVoxelDataAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelDataAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDataAssetFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFactory>()
	{
		return UVoxelDataAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFactory);
	void UVoxelDataAssetFromMeshImporterFactory::StaticRegisterNativesUVoxelDataAssetFromMeshImporterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDataAssetFromMeshImporterFactory);
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister()
	{
		return UVoxelDataAssetFromMeshImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshImporter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshImporter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter = { "MeshImporter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAssetFromMeshImporterFactory, MeshImporter), Z_Construct_UClass_AVoxelMeshImporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMeshImporterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromMeshImporterFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromMeshImporterFactory>()
	{
		return UVoxelDataAssetFromMeshImporterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMeshImporterFactory);
	void UVoxelDataAssetFromMagicaVoxFactory::StaticRegisterNativesUVoxelDataAssetFromMagicaVoxFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDataAssetFromMagicaVoxFactory);
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister()
	{
		return UVoxelDataAssetFromMagicaVoxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePalette_MetaData[];
#endif
		static void NewProp_bUsePalette_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePalette;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "Comment", "// If false, the material index will be set to the palette index (Single Index material config)\n// If true, the palette will be read and the color will be imported instead (RGB material config)\n// If you're not sure, leave to true\n" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
		{ "ToolTip", "If false, the material index will be set to the palette index (Single Index material config)\nIf true, the palette will be read and the color will be imported instead (RGB material config)\nIf you're not sure, leave to true" },
	};
#endif
	void Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit(void* Obj)
	{
		((UVoxelDataAssetFromMagicaVoxFactory*)Obj)->bUsePalette = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette = { "bUsePalette", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDataAssetFromMagicaVoxFactory), &Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMagicaVoxFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromMagicaVoxFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromMagicaVoxFactory>()
	{
		return UVoxelDataAssetFromMagicaVoxFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMagicaVoxFactory);
	void UVoxelDataAssetFromRawVoxFactory::StaticRegisterNativesUVoxelDataAssetFromRawVoxFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDataAssetFromRawVoxFactory);
	UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_NoRegister()
	{
		return UVoxelDataAssetFromRawVoxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromRawVoxFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromRawVoxFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromRawVoxFactory>()
	{
		return UVoxelDataAssetFromRawVoxFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromRawVoxFactory);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataAssetFactory, UVoxelDataAssetFactory::StaticClass, TEXT("UVoxelDataAssetFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFactory), 4210852668U) },
		{ Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory, UVoxelDataAssetFromMeshImporterFactory::StaticClass, TEXT("UVoxelDataAssetFromMeshImporterFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFromMeshImporterFactory), 601315078U) },
		{ Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory, UVoxelDataAssetFromMagicaVoxFactory::StaticClass, TEXT("UVoxelDataAssetFromMagicaVoxFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFromMagicaVoxFactory), 3138047266U) },
		{ Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory, UVoxelDataAssetFromRawVoxFactory::StaticClass, TEXT("UVoxelDataAssetFromRawVoxFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFromRawVoxFactory), 2266851038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h_3275302876(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
