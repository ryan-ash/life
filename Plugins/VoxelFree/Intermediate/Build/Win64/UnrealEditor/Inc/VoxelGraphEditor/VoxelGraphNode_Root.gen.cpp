// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelGraphNodes/VoxelGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode_Root() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Root_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Root();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
// End Cross Module References
	void UVoxelGraphNode_Root::StaticRegisterNativesUVoxelGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphNode_Root);
	UClass* Z_Construct_UClass_UVoxelGraphNode_Root_NoRegister()
	{
		return UVoxelGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode_Root.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Root_Statics::ClassParams = {
		&UVoxelGraphNode_Root::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode_Root.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphNode_Root.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelGraphNode_Root>()
	{
		return UVoxelGraphNode_Root::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode_Root);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode_Root, UVoxelGraphNode_Root::StaticClass, TEXT("UVoxelGraphNode_Root"), &Z_Registration_Info_UClass_UVoxelGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode_Root), 2577309845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h_4067851728(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
