// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Details/VoxelGeneratorPickerCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorPickerCustomization() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool();
// End Cross Module References
	void UVoxelGeneratorPickerEditorData::StaticRegisterNativesUVoxelGeneratorPickerEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGeneratorPickerEditorData);
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData_NoRegister()
	{
		return UVoxelGeneratorPickerEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Details/VoxelGeneratorPickerCustomization.h" },
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject = { "GeneratorObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, GeneratorObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorParameter, METADATA_PARAMS(nullptr, 0) }; // 1174236656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_MetaData)) }; // 1174236656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance = { "BlueprintInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, BlueprintInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorPickerEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::ClassParams = {
		&UVoxelGeneratorPickerEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData()
	{
		if (!Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGeneratorPickerEditorData>()
	{
		return UVoxelGeneratorPickerEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorPickerEditorData);
	void UVoxelGeneratorPickerBlueprintPool::StaticRegisterNativesUVoxelGeneratorPickerBlueprintPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGeneratorPickerBlueprintPool);
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_NoRegister()
	{
		return UVoxelGeneratorPickerBlueprintPool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blueprints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blueprints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Details/VoxelGeneratorPickerCustomization.h" },
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_Inner = { "Blueprints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints = { "Blueprints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerBlueprintPool, Blueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorPickerBlueprintPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::ClassParams = {
		&UVoxelGeneratorPickerBlueprintPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool()
	{
		if (!Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGeneratorPickerBlueprintPool>()
	{
		return UVoxelGeneratorPickerBlueprintPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorPickerBlueprintPool);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGeneratorPickerEditorData, UVoxelGeneratorPickerEditorData::StaticClass, TEXT("UVoxelGeneratorPickerEditorData"), &Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorPickerEditorData), 865068297U) },
		{ Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool, UVoxelGeneratorPickerBlueprintPool::StaticClass, TEXT("UVoxelGeneratorPickerBlueprintPool"), &Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorPickerBlueprintPool), 397666383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h_2036817147(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
