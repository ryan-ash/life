// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorInit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorInit() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGeneratorInit;
class UScriptStruct* FVoxelGeneratorInit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorInit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGeneratorInit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorInit, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorInit"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGeneratorInit.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorInit>()
{
	return FVoxelGeneratorInit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorldSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorInit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, WorldSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_MetaData)) }; // 571681279
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_MetaData)) }; // 4293812930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorInit",
		sizeof(FVoxelGeneratorInit),
		alignof(FVoxelGeneratorInit),
		Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorInit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGeneratorInit.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGeneratorInit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGeneratorInit::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewStructOps, TEXT("VoxelGeneratorInit"), &Z_Registration_Info_UScriptStruct_VoxelGeneratorInit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorInit), 940443676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h_4094155221(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
