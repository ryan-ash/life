// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerOutputsConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerOutputsConfig() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelSpawnerOutputsConfig::StaticRegisterNativesUVoxelSpawnerOutputsConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSpawnerOutputsConfig);
	UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister()
	{
		return UVoxelSpawnerOutputsConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerOutputsConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerOutputsConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerOutputsConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::ClassParams = {
		&UVoxelSpawnerOutputsConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig()
	{
		if (!Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawnerOutputsConfig>()
	{
		return UVoxelSpawnerOutputsConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerOutputsConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawnerOutputsConfig, UVoxelSpawnerOutputsConfig::StaticClass, TEXT("UVoxelSpawnerOutputsConfig"), &Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerOutputsConfig), 1909546588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h_3660760010(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
