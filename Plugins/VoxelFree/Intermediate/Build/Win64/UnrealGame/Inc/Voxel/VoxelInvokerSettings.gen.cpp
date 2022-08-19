// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelInvokerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelInvokerSettings() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelInvokerSettings;
class UScriptStruct* FVoxelInvokerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelInvokerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelInvokerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInvokerSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInvokerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelInvokerSettings.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInvokerSettings>()
{
	return FVoxelInvokerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[];
#endif
		static void NewProp_bUseForLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODToSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[];
#endif
		static void NewProp_bUseForCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionsBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionsBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[];
#endif
		static void NewProp_bUseForNavmesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavmeshBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavmeshBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInvokerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
	{
		((FVoxelInvokerSettings*)Obj)->bUseForLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, LODToSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds = { "LODBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, LODBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds_MetaData)) }; // 1090131275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
	{
		((FVoxelInvokerSettings*)Obj)->bUseForCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds = { "CollisionsBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, CollisionsBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds_MetaData)) }; // 1090131275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
	{
		((FVoxelInvokerSettings*)Obj)->bUseForNavmesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds = { "NavmeshBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, NavmeshBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds_MetaData)) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInvokerSettings",
		sizeof(FVoxelInvokerSettings),
		alignof(FVoxelInvokerSettings),
		Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelInvokerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelInvokerSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelInvokerSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelInvokerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelInvokerSettings_h_Statics::ScriptStructInfo[] = {
		{ FVoxelInvokerSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewStructOps, TEXT("VoxelInvokerSettings"), &Z_Registration_Info_UScriptStruct_VoxelInvokerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelInvokerSettings), 3645020599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelInvokerSettings_h_1697065602(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelInvokerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelInvokerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
