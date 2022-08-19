// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSmoothTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSmoothTool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSmoothTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSmoothTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// End Cross Module References
	void UVoxelSmoothTool::StaticRegisterNativesUVoxelSmoothTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSmoothTool);
	UClass* Z_Construct_UClass_UVoxelSmoothTool_NoRegister()
	{
		return UVoxelSmoothTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSmoothTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[];
#endif
		static void NewProp_bSculpt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[];
#endif
		static void NewProp_bPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PaintMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSmoothTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSmoothTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
	{
		((UVoxelSmoothTool*)Obj)->bSculpt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSmoothTool), &Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Doesn't work with multi index yet\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "ToolTip", "Doesn't work with multi index yet" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_SetBit(void* Obj)
	{
		((UVoxelSmoothTool*)Obj)->bPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSmoothTool), &Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
		{ "Category", "Tool Settings" },
		{ "Comment", "// Which channels to smooth\n// In Single Index Alpha will be automatically disabled\n" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "ToolTip", "Which channels to smooth\nIn Single Index Alpha will be automatically disabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask = { "PaintMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSmoothTool, PaintMask), METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// NumIterations also affects strength\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "ToolTip", "NumIterations also affects strength" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSmoothTool, Strength), METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of times to apply the smooth in a single frame\n// Will be ignored if Shift is pressed\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "ToolTip", "Number of times to apply the smooth in a single frame\nWill be ignored if Shift is pressed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSmoothTool, NumIterations), METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSmoothTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_MetaData)) }; // 3165405943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSmoothTool, Falloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSmoothTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSmoothTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSmoothTool_Statics::ClassParams = {
		&UVoxelSmoothTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSmoothTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSmoothTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelSmoothTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSmoothTool.OuterSingleton, Z_Construct_UClass_UVoxelSmoothTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSmoothTool.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSmoothTool>()
	{
		return UVoxelSmoothTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSmoothTool);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSmoothTool, UVoxelSmoothTool::StaticClass, TEXT("UVoxelSmoothTool"), &Z_Registration_Info_UClass_UVoxelSmoothTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSmoothTool), 2099009682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h_2985640357(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
