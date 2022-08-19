// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelBoolVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBoolVector() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoolVector();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelBoolVector;
class UScriptStruct* FVoxelBoolVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelBoolVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelBoolVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBoolVector, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBoolVector"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelBoolVector.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelBoolVector>()
{
	return FVoxelBoolVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelBoolVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBoolVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FVoxelBoolVector*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FVoxelBoolVector*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FVoxelBoolVector*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelBoolVector",
		sizeof(FVoxelBoolVector),
		alignof(FVoxelBoolVector),
		Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoolVector()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelBoolVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelBoolVector.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelBoolVector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelBoolVector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelBoolVector_h_Statics::ScriptStructInfo[] = {
		{ FVoxelBoolVector::StaticStruct, Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewStructOps, TEXT("VoxelBoolVector"), &Z_Registration_Info_UScriptStruct_VoxelBoolVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBoolVector), 3215661613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelBoolVector_h_384590283(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelBoolVector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelBoolVector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
