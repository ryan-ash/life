// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelGraphNodes/VoxelGraphNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode_Base() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
// End Cross Module References
	void UVoxelGraphNode_Base::StaticRegisterNativesUVoxelGraphNode_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphNode_Base);
	UClass* Z_Construct_UClass_UVoxelGraphNode_Base_NoRegister()
	{
		return UVoxelGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphNodeInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode_Base.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Base_Statics::ClassParams = {
		&UVoxelGraphNode_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphNode_Base()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphNode_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode_Base.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphNode_Base.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelGraphNode_Base>()
	{
		return UVoxelGraphNode_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode_Base);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode_Base, UVoxelGraphNode_Base::StaticClass, TEXT("UVoxelGraphNode_Base"), &Z_Registration_Info_UClass_UVoxelGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode_Base), 1015916159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h_3859576777(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
