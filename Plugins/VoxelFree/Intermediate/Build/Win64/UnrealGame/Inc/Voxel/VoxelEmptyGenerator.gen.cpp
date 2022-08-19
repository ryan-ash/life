// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelEmptyGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEmptyGenerator() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelEmptyGenerator::StaticRegisterNativesUVoxelEmptyGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelEmptyGenerator);
	UClass* Z_Construct_UClass_UVoxelEmptyGenerator_NoRegister()
	{
		return UVoxelEmptyGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEmptyGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEmptyGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Empty world, can be used to remove voxels\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelEmptyGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelEmptyGenerator.h" },
		{ "ToolTip", "Empty world, can be used to remove voxels" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEmptyGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEmptyGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEmptyGenerator_Statics::ClassParams = {
		&UVoxelEmptyGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEmptyGenerator()
	{
		if (!Z_Registration_Info_UClass_UVoxelEmptyGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelEmptyGenerator.OuterSingleton, Z_Construct_UClass_UVoxelEmptyGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelEmptyGenerator.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelEmptyGenerator>()
	{
		return UVoxelEmptyGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEmptyGenerator);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelEmptyGenerator, UVoxelEmptyGenerator::StaticClass, TEXT("UVoxelEmptyGenerator"), &Z_Registration_Info_UClass_UVoxelEmptyGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelEmptyGenerator), 1603899243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h_209061505(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
