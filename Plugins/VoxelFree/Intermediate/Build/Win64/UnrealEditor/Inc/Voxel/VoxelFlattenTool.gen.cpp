// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelFlattenTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFlattenTool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFlattenTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFlattenTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// End Cross Module References
	void UVoxelFlattenTool::StaticRegisterNativesUVoxelFlattenTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelFlattenTool);
	UClass* Z_Construct_UClass_UVoxelFlattenTool_NoRegister()
	{
		return UVoxelFlattenTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFlattenTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeOnClick_MetaData[];
#endif
		static void NewProp_bFreezeOnClick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeOnClick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAverage_MetaData[];
#endif
		static void NewProp_bUseAverage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedRotation_MetaData[];
#endif
		static void NewProp_bUseFixedRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateMaterials_MetaData[];
#endif
		static void NewProp_bPropagateMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFalloff_MetaData[];
#endif
		static void NewProp_bEnableFalloff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFalloff;
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
	UObject* (*const Z_Construct_UClass_UVoxelFlattenTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlattenTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlattenTool, Strength), METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, the plane used for flatten will be the same while clicking\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "ToolTip", "If true, the plane used for flatten will be the same while clicking" },
	};
#endif
	void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_SetBit(void* Obj)
	{
		((UVoxelFlattenTool*)Obj)->bFreezeOnClick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick = { "bFreezeOnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Use Average Position & Normal\n// If true, use linetraces to find average position/normal under the cursor\n// If false, use a single linetrace from the cursor\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "ToolTip", "Use Average Position & Normal\nIf true, use linetraces to find average position/normal under the cursor\nIf false, use a single linetrace from the cursor" },
	};
#endif
	void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_SetBit(void* Obj)
	{
		((UVoxelFlattenTool*)Obj)->bUseAverage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage = { "bUseAverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_SetBit(void* Obj)
	{
		((UVoxelFlattenTool*)Obj)->bUseFixedRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation = { "bUseFixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Override the normal by a fixed rotation\n// The rotation is apply to Up Vector to find the plane normal\n" },
		{ "EditCondition", "bUseFixedRotation" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "ToolTip", "Override the normal by a fixed rotation\nThe rotation is apply to Up Vector to find the plane normal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation = { "FixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlattenTool, FixedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, will propagate materials so that the surface stays correctly painted. Expensive.\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "ToolTip", "If true, will propagate materials so that the surface stays correctly painted. Expensive." },
	};
#endif
	void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_SetBit(void* Obj)
	{
		((UVoxelFlattenTool*)Obj)->bPropagateMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials = { "bPropagateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_SetBit(void* Obj)
	{
		((UVoxelFlattenTool*)Obj)->bEnableFalloff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff = { "bEnableFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlattenTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_MetaData)) }; // 3165405943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlattenTool, Falloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFlattenTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFlattenTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFlattenTool_Statics::ClassParams = {
		&UVoxelFlattenTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFlattenTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFlattenTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelFlattenTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelFlattenTool.OuterSingleton, Z_Construct_UClass_UVoxelFlattenTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelFlattenTool.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelFlattenTool>()
	{
		return UVoxelFlattenTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFlattenTool);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelFlattenTool, UVoxelFlattenTool::StaticClass, TEXT("UVoxelFlattenTool"), &Z_Registration_Info_UClass_UVoxelFlattenTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelFlattenTool), 3653484987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h_2392803742(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
