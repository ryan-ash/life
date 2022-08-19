// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelGraphMacroAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphMacroAssetFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
// End Cross Module References
	void UVoxelGraphMacroAssetFactory::StaticRegisterNativesUVoxelGraphMacroAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphMacroAssetFactory);
	UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory_NoRegister()
	{
		return UVoxelGraphMacroAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelGraphMacroAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelGraphMacroAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::ClassParams = {
		&UVoxelGraphMacroAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGraphMacroAssetFactory>()
	{
		return UVoxelGraphMacroAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroAssetFactory);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphMacroAssetFactory, UVoxelGraphMacroAssetFactory::StaticClass, TEXT("UVoxelGraphMacroAssetFactory"), &Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroAssetFactory), 1334106668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h_4144719607(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
