// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerGroup() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerGroup_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerGroup();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild;
class UScriptStruct* FVoxelSpawnerGroupChild::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerGroupChild"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerGroupChild>()
{
	return FVoxelSpawnerGroupChild::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerGroupChild>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerGroupChild, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerGroupChild, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerGroupChild",
		sizeof(FVoxelSpawnerGroupChild),
		alignof(FVoxelSpawnerGroupChild),
		Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild.InnerSingleton;
	}
	void UVoxelSpawnerGroup::StaticRegisterNativesUVoxelSpawnerGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSpawnerGroup);
	UClass* Z_Construct_UClass_UVoxelSpawnerGroup_NoRegister()
	{
		return UVoxelSpawnerGroup::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeProbabilitiesOnEdit_MetaData[];
#endif
		static void NewProp_bNormalizeProbabilitiesOnEdit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeProbabilitiesOnEdit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Probabilities do not need to be normalized, although it might be harder to understand what's happening if they're not\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "ToolTip", "Probabilities do not need to be normalized, although it might be harder to understand what's happening if they're not" },
	};
#endif
	void Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_SetBit(void* Obj)
	{
		((UVoxelSpawnerGroup*)Obj)->bNormalizeProbabilitiesOnEdit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit = { "bNormalizeProbabilitiesOnEdit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSpawnerGroup), &Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild, METADATA_PARAMS(nullptr, 0) }; // 260664290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerGroup, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_MetaData)) }; // 260664290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::ClassParams = {
		&UVoxelSpawnerGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerGroup()
	{
		if (!Z_Registration_Info_UClass_UVoxelSpawnerGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerGroup.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSpawnerGroup.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawnerGroup>()
	{
		return UVoxelSpawnerGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerGroup);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics::ScriptStructInfo[] = {
		{ FVoxelSpawnerGroupChild::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewStructOps, TEXT("VoxelSpawnerGroupChild"), &Z_Registration_Info_UScriptStruct_VoxelSpawnerGroupChild, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerGroupChild), 260664290U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawnerGroup, UVoxelSpawnerGroup::StaticClass, TEXT("UVoxelSpawnerGroup"), &Z_Registration_Info_UClass_UVoxelSpawnerGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerGroup), 1755418093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_4119210070(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
