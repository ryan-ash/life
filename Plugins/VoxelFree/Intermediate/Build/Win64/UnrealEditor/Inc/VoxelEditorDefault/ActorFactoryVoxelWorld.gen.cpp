// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditorDefault/Public/ActorFactoryVoxelWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVoxelWorld() {}
// Cross Module References
	VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelWorld_NoRegister();
	VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelWorld();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault();
// End Cross Module References
	void UActorFactoryVoxelWorld::StaticRegisterNativesUActorFactoryVoxelWorld()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryVoxelWorld);
	UClass* Z_Construct_UClass_UActorFactoryVoxelWorld_NoRegister()
	{
		return UActorFactoryVoxelWorld::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVoxelWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelWorld.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelWorld.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::ClassParams = {
		&UActorFactoryVoxelWorld::StaticClass,
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
		0x001030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVoxelWorld()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryVoxelWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVoxelWorld.OuterSingleton, Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryVoxelWorld.OuterSingleton;
	}
	template<> VOXELEDITORDEFAULT_API UClass* StaticClass<UActorFactoryVoxelWorld>()
	{
		return UActorFactoryVoxelWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelWorld);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVoxelWorld, UActorFactoryVoxelWorld::StaticClass, TEXT("UActorFactoryVoxelWorld"), &Z_Registration_Info_UClass_UActorFactoryVoxelWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVoxelWorld), 628694631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h_3482822145(TEXT("/Script/VoxelEditorDefault"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
