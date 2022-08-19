// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGenerator() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
// End Cross Module References
	void UVoxelGenerator::StaticRegisterNativesUVoxelGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGenerator);
	UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister()
	{
		return UVoxelGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UVoxelGenerator is used to create a FVoxelGeneratorInstance\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
		{ "ToolTip", "A UVoxelGenerator is used to create a FVoxelGeneratorInstance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGenerator_Statics::ClassParams = {
		&UVoxelGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGenerator()
	{
		if (!Z_Registration_Info_UClass_UVoxelGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGenerator.OuterSingleton, Z_Construct_UClass_UVoxelGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGenerator.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelGenerator>()
	{
		return UVoxelGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGenerator);
	void UVoxelTransformableGenerator::StaticRegisterNativesUVoxelTransformableGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelTransformableGenerator);
	UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister()
	{
		return UVoxelTransformableGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Generator that can be moved around\n" },
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
		{ "ToolTip", "Generator that can be moved around" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGenerator_Statics::ClassParams = {
		&UVoxelTransformableGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableGenerator()
	{
		if (!Z_Registration_Info_UClass_UVoxelTransformableGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTransformableGenerator.OuterSingleton, Z_Construct_UClass_UVoxelTransformableGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelTransformableGenerator.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableGenerator>()
	{
		return UVoxelTransformableGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGenerator);
	void UVoxelTransformableGeneratorWithBounds::StaticRegisterNativesUVoxelTransformableGeneratorWithBounds()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelTransformableGeneratorWithBounds);
	UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_NoRegister()
	{
		return UVoxelTransformableGeneratorWithBounds::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGeneratorWithBounds>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::ClassParams = {
		&UVoxelTransformableGeneratorWithBounds::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds()
	{
		if (!Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.OuterSingleton, Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableGeneratorWithBounds>()
	{
		return UVoxelTransformableGeneratorWithBounds::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGeneratorWithBounds);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGenerator, UVoxelGenerator::StaticClass, TEXT("UVoxelGenerator"), &Z_Registration_Info_UClass_UVoxelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGenerator), 1295652449U) },
		{ Z_Construct_UClass_UVoxelTransformableGenerator, UVoxelTransformableGenerator::StaticClass, TEXT("UVoxelTransformableGenerator"), &Z_Registration_Info_UClass_UVoxelTransformableGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTransformableGenerator), 1273792246U) },
		{ Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds, UVoxelTransformableGeneratorWithBounds::StaticClass, TEXT("UVoxelTransformableGeneratorWithBounds"), &Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTransformableGeneratorWithBounds), 3250659197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h_3024596951(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
