// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/DummyObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyObject() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
// End Cross Module References
	void UDEPRECATED_GraphEditorDummyObject::StaticRegisterNativesUDEPRECATED_GraphEditorDummyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GraphEditorDummyObject);
	UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_NoRegister()
	{
		return UDEPRECATED_GraphEditorDummyObject::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Random class to make UHT happy\n" },
		{ "IncludePath", "DummyObject.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DummyObject.h" },
		{ "ToolTip", "Random class to make UHT happy" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GraphEditorDummyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::ClassParams = {
		&UDEPRECATED_GraphEditorDummyObject::StaticClass,
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
		0x060002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UDEPRECATED_GraphEditorDummyObject>()
	{
		return UDEPRECATED_GraphEditorDummyObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GraphEditorDummyObject);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_DummyObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_DummyObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject, UDEPRECATED_GraphEditorDummyObject::StaticClass, TEXT("UDEPRECATED_GraphEditorDummyObject"), &Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GraphEditorDummyObject), 2044492539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_DummyObject_h_2583668409(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_DummyObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_DummyObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
