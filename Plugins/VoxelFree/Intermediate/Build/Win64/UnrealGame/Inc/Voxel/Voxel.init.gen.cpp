// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxel_init() {}
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Voxel;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Voxel()
	{
		if (!Z_Registration_Info_UPackage__Script_Voxel.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Voxel",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5FA50AA9,
				0xE4A61D16,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Voxel.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Voxel.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Voxel(Z_Construct_UPackage__Script_Voxel, TEXT("/Script/Voxel"), Z_Registration_Info_UPackage__Script_Voxel, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5FA50AA9, 0xE4A61D16));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
