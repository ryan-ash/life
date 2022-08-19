// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraph_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VoxelGraph;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VoxelGraph()
	{
		if (!Z_Registration_Info_UPackage__Script_VoxelGraph.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VoxelGraph",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC1B84BD5,
				0x942F0A5F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VoxelGraph.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VoxelGraph.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VoxelGraph(Z_Construct_UPackage__Script_VoxelGraph, TEXT("/Script/VoxelGraph"), Z_Registration_Info_UPackage__Script_VoxelGraph, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1B84BD5, 0x942F0A5F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
