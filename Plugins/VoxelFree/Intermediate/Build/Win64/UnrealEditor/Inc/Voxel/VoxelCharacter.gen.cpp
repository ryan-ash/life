// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCharacter() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelCharacter_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void AVoxelCharacter::StaticRegisterNativesAVoxelCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelCharacter);
	UClass* Z_Construct_UClass_AVoxelCharacter_NoRegister()
	{
		return AVoxelCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VoxelCharacter.h" },
		{ "ModuleRelativePath", "Public/VoxelCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelCharacter_Statics::ClassParams = {
		&AVoxelCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelCharacter()
	{
		if (!Z_Registration_Info_UClass_AVoxelCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelCharacter.OuterSingleton, Z_Construct_UClass_AVoxelCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelCharacter.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelCharacter>()
	{
		return AVoxelCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelCharacter);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelCharacter, AVoxelCharacter::StaticClass, TEXT("AVoxelCharacter"), &Z_Registration_Info_UClass_AVoxelCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelCharacter), 4143133372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCharacter_h_1982600400(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
