// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMultiplayer/VoxelMultiplayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMultiplayerInterface() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelMultiplayerInterface::StaticRegisterNativesUVoxelMultiplayerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMultiplayerInterface);
	UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister()
	{
		return UVoxelMultiplayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMultiplayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelMultiplayer/VoxelMultiplayerInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelMultiplayer/VoxelMultiplayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMultiplayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::ClassParams = {
		&UVoxelMultiplayerInterface::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMultiplayerInterface()
	{
		if (!Z_Registration_Info_UClass_UVoxelMultiplayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMultiplayerInterface.OuterSingleton, Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMultiplayerInterface.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelMultiplayerInterface>()
	{
		return UVoxelMultiplayerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMultiplayerInterface);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMultiplayerInterface, UVoxelMultiplayerInterface::StaticClass, TEXT("UVoxelMultiplayerInterface"), &Z_Registration_Info_UClass_UVoxelMultiplayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMultiplayerInterface), 1603863982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h_3961534460(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
