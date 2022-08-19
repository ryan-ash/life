// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelFlatGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFlatGenerator() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFlatGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFlatGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig;
class UScriptStruct* FVoxelFlatGeneratorDataItemConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFlatGeneratorDataItemConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFlatGeneratorDataItemConfig>()
{
	return FVoxelFlatGeneratorDataItemConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractItems_MetaData[];
#endif
		static void NewProp_bSubtractItems_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFlatGeneratorDataItemConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// In voxels, how smooth the intersection with the existing terrain and these items should be\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "In voxels, how smooth the intersection with the existing terrain and these items should be" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFlatGeneratorDataItemConfig, Smoothness), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxel32BitMask" },
		{ "Category", "Config" },
		{ "Comment", "// Only items matching this mask will be added\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "Only items matching this mask will be added" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFlatGeneratorDataItemConfig, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will subtract the items from the world and will invert their values\n// If false, will add the items to the world and will not invert their values\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "If true, will subtract the items from the world and will invert their values\nIf false, will add the items to the world and will not invert their values" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_SetBit(void* Obj)
	{
		((FVoxelFlatGeneratorDataItemConfig*)Obj)->bSubtractItems = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems = { "bSubtractItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFlatGeneratorDataItemConfig), &Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFlatGeneratorDataItemConfig",
		sizeof(FVoxelFlatGeneratorDataItemConfig),
		alignof(FVoxelFlatGeneratorDataItemConfig),
		Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig.InnerSingleton, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig.InnerSingleton;
	}
	void UVoxelFlatGenerator::StaticRegisterNativesUVoxelFlatGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelFlatGenerator);
	UClass* Z_Construct_UClass_UVoxelFlatGenerator_NoRegister()
	{
		return UVoxelFlatGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFlatGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataItemConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataItemConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataItemConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFlatGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Flat world\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelFlatGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "Flat world" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlatGenerator, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_Inner = { "DataItemConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, METADATA_PARAMS(nullptr, 0) }; // 3006714146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs = { "DataItemConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlatGenerator, DataItemConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_MetaData)) }; // 3006714146
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFlatGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFlatGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::ClassParams = {
		&UVoxelFlatGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFlatGenerator()
	{
		if (!Z_Registration_Info_UClass_UVoxelFlatGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelFlatGenerator.OuterSingleton, Z_Construct_UClass_UVoxelFlatGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelFlatGenerator.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelFlatGenerator>()
	{
		return UVoxelFlatGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFlatGenerator);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics::ScriptStructInfo[] = {
		{ FVoxelFlatGeneratorDataItemConfig::StaticStruct, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewStructOps, TEXT("VoxelFlatGeneratorDataItemConfig"), &Z_Registration_Info_UScriptStruct_VoxelFlatGeneratorDataItemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelFlatGeneratorDataItemConfig), 3006714146U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelFlatGenerator, UVoxelFlatGenerator::StaticClass, TEXT("UVoxelFlatGenerator"), &Z_Registration_Info_UClass_UVoxelFlatGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelFlatGenerator), 87059475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_1796414254(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
