// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEditorDefault_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VoxelEditorDefault;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault()
	{
		if (!Z_Registration_Info_UPackage__Script_VoxelEditorDefault.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VoxelEditorDefault",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xA36B45DA,
				0x91FE98A7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VoxelEditorDefault.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VoxelEditorDefault.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VoxelEditorDefault(Z_Construct_UPackage__Script_VoxelEditorDefault, TEXT("/Script/VoxelEditorDefault"), Z_Registration_Info_UPackage__Script_VoxelEditorDefault, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA36B45DA, 0x91FE98A7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
