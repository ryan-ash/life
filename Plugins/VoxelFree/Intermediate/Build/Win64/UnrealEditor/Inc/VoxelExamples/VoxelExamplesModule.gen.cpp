// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelExamples/Public/VoxelExamplesModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExamplesModule() {}
// Cross Module References
	VOXELEXAMPLES_API UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy_NoRegister();
	VOXELEXAMPLES_API UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelExamples();
// End Cross Module References
	void UVoxelExamplesModuleDummy::StaticRegisterNativesUVoxelExamplesModuleDummy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelExamplesModuleDummy);
	UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy_NoRegister()
	{
		return UVoxelExamplesModuleDummy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelExamples,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// UBT doesn't like not having any UObject in a module\n" },
		{ "IncludePath", "VoxelExamplesModule.h" },
		{ "ModuleRelativePath", "Public/VoxelExamplesModule.h" },
		{ "ToolTip", "UBT doesn't like not having any UObject in a module" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExamplesModuleDummy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::ClassParams = {
		&UVoxelExamplesModuleDummy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy()
	{
		if (!Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.OuterSingleton, Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.OuterSingleton;
	}
	template<> VOXELEXAMPLES_API UClass* StaticClass<UVoxelExamplesModuleDummy>()
	{
		return UVoxelExamplesModuleDummy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExamplesModuleDummy);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelExamples_Public_VoxelExamplesModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelExamples_Public_VoxelExamplesModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExamplesModuleDummy, UVoxelExamplesModuleDummy::StaticClass, TEXT("UVoxelExamplesModuleDummy"), &Z_Registration_Info_UClass_UVoxelExamplesModuleDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExamplesModuleDummy), 1026562609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelExamples_Public_VoxelExamplesModule_h_829534827(TEXT("/Script/VoxelExamples"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelExamples_Public_VoxelExamplesModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelExamples_Public_VoxelExamplesModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
