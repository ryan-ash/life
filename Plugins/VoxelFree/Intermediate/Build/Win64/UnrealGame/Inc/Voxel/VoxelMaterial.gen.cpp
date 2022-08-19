// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterial() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelMaterialMask_BP;
	static UEnum* EVoxelMaterialMask_BP_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMaterialMask_BP"));
		}
		return Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialMask_BP>()
	{
		return EVoxelMaterialMask_BP_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enumerators[] = {
		{ "EVoxelMaterialMask_BP::R", (int64)EVoxelMaterialMask_BP::R },
		{ "EVoxelMaterialMask_BP::G", (int64)EVoxelMaterialMask_BP::G },
		{ "EVoxelMaterialMask_BP::B", (int64)EVoxelMaterialMask_BP::B },
		{ "EVoxelMaterialMask_BP::A", (int64)EVoxelMaterialMask_BP::A },
		{ "EVoxelMaterialMask_BP::U0", (int64)EVoxelMaterialMask_BP::U0 },
		{ "EVoxelMaterialMask_BP::V0", (int64)EVoxelMaterialMask_BP::V0 },
		{ "EVoxelMaterialMask_BP::U1", (int64)EVoxelMaterialMask_BP::U1 },
		{ "EVoxelMaterialMask_BP::V1", (int64)EVoxelMaterialMask_BP::V1 },
		{ "EVoxelMaterialMask_BP::U2", (int64)EVoxelMaterialMask_BP::U2 },
		{ "EVoxelMaterialMask_BP::V2", (int64)EVoxelMaterialMask_BP::V2 },
		{ "EVoxelMaterialMask_BP::U3", (int64)EVoxelMaterialMask_BP::U3 },
		{ "EVoxelMaterialMask_BP::V3", (int64)EVoxelMaterialMask_BP::V3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EVoxelMaterialMask_BP::A" },
		{ "B.Name", "EVoxelMaterialMask_BP::B" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Voxel Material Mask" },
		{ "G.Name", "EVoxelMaterialMask_BP::G" },
		{ "ModuleRelativePath", "Public/VoxelMaterial.h" },
		{ "R.Name", "EVoxelMaterialMask_BP::R" },
		{ "U0.Name", "EVoxelMaterialMask_BP::U0" },
		{ "U1.Name", "EVoxelMaterialMask_BP::U1" },
		{ "U2.Name", "EVoxelMaterialMask_BP::U2" },
		{ "U3.Name", "EVoxelMaterialMask_BP::U3" },
		{ "V0.Name", "EVoxelMaterialMask_BP::V0" },
		{ "V1.Name", "EVoxelMaterialMask_BP::V1" },
		{ "V2.Name", "EVoxelMaterialMask_BP::V2" },
		{ "V3.Name", "EVoxelMaterialMask_BP::V3" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelMaterialMask_BP",
		"EVoxelMaterialMask_BP",
		Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP()
	{
		if (!Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelMaterial;
class UScriptStruct* FVoxelMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelMaterial.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMaterial>()
{
	return FVoxelMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO Make not compatible with BP and have a serialization-safe BP version of it\n" },
		{ "ModuleRelativePath", "Public/VoxelMaterial.h" },
		{ "ToolTip", "TODO Make not compatible with BP and have a serialization-safe BP version of it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterial>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMaterial",
		sizeof(FVoxelMaterial),
		alignof(FVoxelMaterial),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelMaterial.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics::EnumInfo[] = {
		{ EVoxelMaterialMask_BP_StaticEnum, TEXT("EVoxelMaterialMask_BP"), &Z_Registration_Info_UEnum_EVoxelMaterialMask_BP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2392012413U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics::ScriptStructInfo[] = {
		{ FVoxelMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelMaterial_Statics::NewStructOps, TEXT("VoxelMaterial"), &Z_Registration_Info_UScriptStruct_VoxelMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMaterial), 1161269177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_3603035986(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelMaterial_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
