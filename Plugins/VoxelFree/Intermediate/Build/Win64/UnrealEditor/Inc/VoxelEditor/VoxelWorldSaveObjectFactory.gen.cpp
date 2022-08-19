// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelWorldSaveObjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldSaveObjectFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
// End Cross Module References
	void UVoxelWorldSaveObjectFactory::StaticRegisterNativesUVoxelWorldSaveObjectFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelWorldSaveObjectFactory);
	UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory_NoRegister()
	{
		return UVoxelWorldSaveObjectFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelWorldSaveObjectFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelWorldSaveObjectFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldSaveObjectFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::ClassParams = {
		&UVoxelWorldSaveObjectFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory()
	{
		if (!Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.OuterSingleton, Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelWorldSaveObjectFactory>()
	{
		return UVoxelWorldSaveObjectFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldSaveObjectFactory);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelWorldSaveObjectFactory, UVoxelWorldSaveObjectFactory::StaticClass, TEXT("UVoxelWorldSaveObjectFactory"), &Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelWorldSaveObjectFactory), 3709573402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h_529484849(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
