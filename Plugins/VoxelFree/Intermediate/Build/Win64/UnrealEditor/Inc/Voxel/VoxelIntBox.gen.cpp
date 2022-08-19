// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelIntBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelIntBox() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelIntBox;
class UScriptStruct* FVoxelIntBox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelIntBox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelIntBox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelIntBox, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelIntBox"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelIntBox.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelIntBox>()
{
	return FVoxelIntBox::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelIntBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Box with int32 coordinates\n */" },
		{ "HasNativeBreak", "Voxel.VoxelIntBoxLibrary.BreakIntBox" },
		{ "HasNativeMake", "Voxel.VoxelIntBoxLibrary.MakeIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "A Box with int32 coordinates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelIntBox>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Min of the box. Inclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "Min of the box. Inclusive" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelIntBox, Min), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Max of the box. Exclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "Max of the box. Exclusive" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelIntBox, Max), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelIntBox",
		sizeof(FVoxelIntBox),
		alignof(FVoxelIntBox),
		Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelIntBox.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelIntBox.InnerSingleton, Z_Construct_UScriptStruct_FVoxelIntBox_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelIntBox.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity;
class UScriptStruct* FVoxelIntBoxWithValidity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelIntBoxWithValidity"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelIntBoxWithValidity>()
{
	return FVoxelIntBoxWithValidity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Voxel Int Box with a IsValid flag\n" },
		{ "HasNativeBreak", "Voxel.VoxelIntBoxLibrary.BreakIntBoxWithValidity" },
		{ "HasNativeMake", "Voxel.VoxelIntBoxLibrary.MakeIntBoxWithValidity" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "Voxel Int Box with a IsValid flag" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelIntBoxWithValidity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelIntBoxWithValidity, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box_MetaData)) }; // 1090131275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FVoxelIntBoxWithValidity*)Obj)->bValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelIntBoxWithValidity), &Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelIntBoxWithValidity",
		sizeof(FVoxelIntBoxWithValidity),
		alignof(FVoxelIntBoxWithValidity),
		Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity.InnerSingleton, Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBox_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBox_h_Statics::ScriptStructInfo[] = {
		{ FVoxelIntBox::StaticStruct, Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewStructOps, TEXT("VoxelIntBox"), &Z_Registration_Info_UScriptStruct_VoxelIntBox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelIntBox), 1090131275U) },
		{ FVoxelIntBoxWithValidity::StaticStruct, Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewStructOps, TEXT("VoxelIntBoxWithValidity"), &Z_Registration_Info_UScriptStruct_VoxelIntBoxWithValidity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelIntBoxWithValidity), 185046481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBox_h_3919190421(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBox_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
