// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActorHelper.h"
#include "Voxel/Public/VoxelWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemActorHelper() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelPlaceableItemActorHelper::StaticRegisterNativesUVoxelPlaceableItemActorHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPlaceableItemActorHelper);
	UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper_NoRegister()
	{
		return UVoxelPlaceableItemActorHelper::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelPlaceableItemActorHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActorHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemActorHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::ClassParams = {
		&UVoxelPlaceableItemActorHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper()
	{
		if (!Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.OuterSingleton, Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelPlaceableItemActorHelper>()
	{
		return UVoxelPlaceableItemActorHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemActorHelper);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPlaceableItemActorHelper, UVoxelPlaceableItemActorHelper::StaticClass, TEXT("UVoxelPlaceableItemActorHelper"), &Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPlaceableItemActorHelper), 3193079629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h_2864582824(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
