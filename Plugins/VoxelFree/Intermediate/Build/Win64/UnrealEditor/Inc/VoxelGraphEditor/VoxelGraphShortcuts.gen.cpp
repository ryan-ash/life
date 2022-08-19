// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelGraphShortcuts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphShortcuts() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphShortcuts_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphShortcuts();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding;
class UScriptStruct* FVoxelGraphEditorKeyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphEditorKeyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphEditorKeyBinding>()
{
	return FVoxelGraphEditorKeyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCtrlDown_MetaData[];
#endif
		static void NewProp_bCtrlDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrlDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAltDown_MetaData[];
#endif
		static void NewProp_bAltDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShiftDown_MetaData[];
#endif
		static void NewProp_bShiftDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphEditorKeyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit(void* Obj)
	{
		((FVoxelGraphEditorKeyBinding*)Obj)->bCtrlDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown = { "bCtrlDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelGraphEditorKeyBinding), &Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_SetBit(void* Obj)
	{
		((FVoxelGraphEditorKeyBinding*)Obj)->bAltDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown = { "bAltDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelGraphEditorKeyBinding), &Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit(void* Obj)
	{
		((FVoxelGraphEditorKeyBinding*)Obj)->bShiftDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown = { "bShiftDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelGraphEditorKeyBinding), &Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphEditorKeyBinding, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key_MetaData)) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphEditorKeyBinding, Class), Z_Construct_UClass_UVoxelNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		nullptr,
		&NewStructOps,
		"VoxelGraphEditorKeyBinding",
		sizeof(FVoxelGraphEditorKeyBinding),
		alignof(FVoxelGraphEditorKeyBinding),
		Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding.InnerSingleton;
	}
	void UVoxelGraphShortcuts::StaticRegisterNativesUVoxelGraphShortcuts()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphShortcuts);
	UClass* Z_Construct_UClass_UVoxelGraphShortcuts_NoRegister()
	{
		return UVoxelGraphShortcuts::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphShortcuts_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcuts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shortcuts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shortcuts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphShortcuts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphShortcuts_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphShortcuts.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_Inner = { "Shortcuts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding, METADATA_PARAMS(nullptr, 0) }; // 1623737829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts = { "Shortcuts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphShortcuts, Shortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_MetaData)) }; // 1623737829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphShortcuts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphShortcuts>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphShortcuts_Statics::ClassParams = {
		&UVoxelGraphShortcuts::StaticClass,
		"EditorKeyBindings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphShortcuts()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphShortcuts.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphShortcuts.OuterSingleton, Z_Construct_UClass_UVoxelGraphShortcuts_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphShortcuts.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelGraphShortcuts>()
	{
		return UVoxelGraphShortcuts::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphShortcuts);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGraphEditorKeyBinding::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewStructOps, TEXT("VoxelGraphEditorKeyBinding"), &Z_Registration_Info_UScriptStruct_VoxelGraphEditorKeyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphEditorKeyBinding), 1623737829U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphShortcuts, UVoxelGraphShortcuts::StaticClass, TEXT("UVoxelGraphShortcuts"), &Z_Registration_Info_UClass_UVoxelGraphShortcuts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphShortcuts), 3206264186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_3029681617(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
