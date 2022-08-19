// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHelpers_init() {}
	VOXELHELPERS_API UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VoxelHelpers;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VoxelHelpers()
	{
		if (!Z_Registration_Info_UPackage__Script_VoxelHelpers.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VoxelHelpers",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA58290C2,
				0xAA88E1E1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VoxelHelpers.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VoxelHelpers.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VoxelHelpers(Z_Construct_UPackage__Script_VoxelHelpers, TEXT("/Script/VoxelHelpers"), Z_Registration_Info_UPackage__Script_VoxelHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA58290C2, 0xAA88E1E1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
