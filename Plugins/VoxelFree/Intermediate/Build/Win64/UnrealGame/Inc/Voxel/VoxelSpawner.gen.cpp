// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawner() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave();
// End Cross Module References
	void UVoxelSpawner::StaticRegisterNativesUVoxelSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSpawner);
	UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister()
	{
		return UVoxelSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenInstancesInVoxel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenInstancesInVoxel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedOverride_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SeedOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Average distance between the instances, in voxels\n// Num Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\n// Not a density because the values would be too small to store in a float\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
		{ "ToolTip", "Average distance between the instances, in voxels\nNum Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\nNot a density because the values would be too small to store in a float" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel = { "DistanceBetweenInstancesInVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawner, DistanceBetweenInstancesInVoxel), METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride_MetaData[] = {
		{ "Comment", "// Use this if you create the spawner at runtime\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
		{ "ToolTip", "Use this if you create the spawner at runtime" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride = { "SeedOverride", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawner, SeedOverride), METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawner_Statics::ClassParams = {
		&UVoxelSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawner()
	{
		if (!Z_Registration_Info_UClass_UVoxelSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawner.OuterSingleton, Z_Construct_UClass_UVoxelSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSpawner.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawner>()
	{
		return UVoxelSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawner);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSpawnersSave;
class UScriptStruct* FVoxelSpawnersSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSpawnersSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSpawnersSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnersSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnersSave"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSpawnersSave.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnersSave>()
{
	return FVoxelSpawnersSave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnersSave>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnersSave",
		sizeof(FVoxelSpawnersSave),
		alignof(FVoxelSpawnersSave),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSpawnersSave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSpawnersSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSpawnersSave.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics::ScriptStructInfo[] = {
		{ FVoxelSpawnersSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::NewStructOps, TEXT("VoxelSpawnersSave"), &Z_Registration_Info_UScriptStruct_VoxelSpawnersSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnersSave), 1223769412U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawner, UVoxelSpawner::StaticClass, TEXT("UVoxelSpawner"), &Z_Registration_Info_UClass_UVoxelSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawner), 3936997814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_4066482437(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
