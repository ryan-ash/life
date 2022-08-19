// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSphereTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSphereTool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// End Cross Module References
	void UVoxelSphereTool::StaticRegisterNativesUVoxelSphereTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSphereTool);
	UClass* Z_Construct_UClass_UVoxelSphereTool_NoRegister()
	{
		return UVoxelSphereTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSphereTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintStrength;
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
	UObject* (*const Z_Construct_UClass_UVoxelSphereTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSphereToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSphereTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSphereTool, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
	{
		((UVoxelSphereTool*)Obj)->bSculpt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSphereTool), &Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_SetBit(void* Obj)
	{
		((UVoxelSphereTool*)Obj)->bPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSphereTool), &Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength = { "PaintStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSphereTool, PaintStrength), METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Paint falloff type\n" },
		{ "EditCondition", "bPaint && !bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
		{ "ToolTip", "Paint falloff type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSphereTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_MetaData)) }; // 3165405943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Paint falloff\n" },
		{ "EditCondition", "bPaint && !bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
		{ "ToolTip", "Paint falloff" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSphereTool, Falloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSphereTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereTool_Statics::ClassParams = {
		&UVoxelSphereTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSphereTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelSphereTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSphereTool.OuterSingleton, Z_Construct_UClass_UVoxelSphereTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSphereTool.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSphereTool>()
	{
		return UVoxelSphereTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereTool);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSphereTool, UVoxelSphereTool::StaticClass, TEXT("UVoxelSphereTool"), &Z_Registration_Info_UClass_UVoxelSphereTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSphereTool), 649331879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h_2568927443(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
