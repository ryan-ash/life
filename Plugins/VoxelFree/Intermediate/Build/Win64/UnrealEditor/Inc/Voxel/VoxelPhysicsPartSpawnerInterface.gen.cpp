// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPhysicsPartSpawnerInterface() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial;
class UScriptStruct* FVoxelPositionValueMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPositionValueMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPositionValueMaterial>()
{
	return FVoxelPositionValueMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPositionValueMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material_MetaData)) }; // 1161269177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPositionValueMaterial",
		sizeof(FVoxelPositionValueMaterial),
		alignof(FVoxelPositionValueMaterial),
		Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial.InnerSingleton;
	}
	void UVoxelPhysicsPartSpawnerResult::StaticRegisterNativesUVoxelPhysicsPartSpawnerResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPhysicsPartSpawnerResult);
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister()
	{
		return UVoxelPhysicsPartSpawnerResult::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelPhysicsPartSpawnerResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::ClassParams = {
		&UVoxelPhysicsPartSpawnerResult::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult()
	{
		if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelPhysicsPartSpawnerResult>()
	{
		return UVoxelPhysicsPartSpawnerResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawnerResult);
	void UVoxelPhysicsPartSpawner::StaticRegisterNativesUVoxelPhysicsPartSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPhysicsPartSpawner);
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister()
	{
		return UVoxelPhysicsPartSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelPhysicsPartSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::ClassParams = {
		&UVoxelPhysicsPartSpawner::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner()
	{
		if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelPhysicsPartSpawner>()
	{
		return UVoxelPhysicsPartSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawner);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics::ScriptStructInfo[] = {
		{ FVoxelPositionValueMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewStructOps, TEXT("VoxelPositionValueMaterial"), &Z_Registration_Info_UScriptStruct_VoxelPositionValueMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPositionValueMaterial), 1818394122U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult, UVoxelPhysicsPartSpawnerResult::StaticClass, TEXT("UVoxelPhysicsPartSpawnerResult"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawnerResult), 1537324960U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawner, UVoxelPhysicsPartSpawner::StaticClass, TEXT("UVoxelPhysicsPartSpawner"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawner), 1511861105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_4024666070(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
