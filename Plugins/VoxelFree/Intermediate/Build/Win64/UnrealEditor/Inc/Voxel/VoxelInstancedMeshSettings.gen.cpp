// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelInstancedMeshSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelInstancedMeshSettings() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInt32Interval();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelInt32Interval;
class UScriptStruct* FVoxelInt32Interval::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelInt32Interval.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelInt32Interval.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInt32Interval, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInt32Interval"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelInt32Interval.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInt32Interval>()
{
	return FVoxelInt32Interval::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInt32Interval>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInt32Interval, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInt32Interval, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInt32Interval",
		sizeof(FVoxelInt32Interval),
		alignof(FVoxelInt32Interval),
		Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInt32Interval()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelInt32Interval.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelInt32Interval.InnerSingleton, Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelInt32Interval.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings;
class UScriptStruct* FVoxelInstancedMeshSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInstancedMeshSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInstancedMeshSettings>()
{
	return FVoxelInstancedMeshSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[];
#endif
		static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[];
#endif
		static void NewProp_bUseAsOccluder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomNavigableGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomNavigableGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HISMTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HISMTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInstancedMeshSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "// Distance from camera at which each instance begins/completely to fade out\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Distance from camera at which each instance begins/completely to fade out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CullDistance), Z_Construct_UScriptStruct_FVoxelInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance_MetaData)) }; // 3820963304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Controls whether the foliage should cast a shadow or not. */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Controls whether the foliage should cast a shadow or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Whether this foliage should cast dynamic shadows as if it were a two sided material. */" },
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Whether this foliage should cast dynamic shadows as if it were a two sided material." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bCastShadowAsTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Whether the foliage receives decals. */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Whether the foliage receives decals." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/**\n\x09 * If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows \n\x09 * it to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows\nit to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bUseAsOccluder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Custom collision for foliage */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Custom collision for foliage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance_MetaData)) }; // 743185417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Force navmesh */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Force navmesh" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry = { "CustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry_MetaData)) }; // 947603777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/**\n\x09 * Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels_MetaData)) }; // 4241287548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// If more instances are added before BuildDelay seconds elapsed, the tree build is queued\n// This is useful to avoid spending lots of time building the tree for nothing.\n// However, it can lead to delays in foliage spawning.\n// To disable this feature entirely, set it to 0\n" },
		{ "DisplayName", "Culling Tree Build Delay" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If more instances are added before BuildDelay seconds elapsed, the tree build is queued\nThis is useful to avoid spending lots of time building the tree for nothing.\nHowever, it can lead to delays in foliage spawning.\nTo disable this feature entirely, set it to 0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay = { "BuildDelay", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, BuildDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "// If you want to edit the HISM properties create a BP inheriting from HierarchicalInstancedStaticMeshComponent and set it here\n" },
		{ "DisplayName", "HISM Template" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If you want to edit the HISM properties create a BP inheriting from HierarchicalInstancedStaticMeshComponent and set it here" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate = { "HISMTemplate", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, HISMTemplate), Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInstancedMeshSettings",
		sizeof(FVoxelInstancedMeshSettings),
		alignof(FVoxelInstancedMeshSettings),
		Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings;
class UScriptStruct* FVoxelSpawnerActorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerActorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerActorSettings>()
{
	return FVoxelSpawnerActorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifespan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerActorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "Comment", "// Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, ActorClass), Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance_MetaData)) }; // 743185417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Set the lifespan of this actor. When it expires the object will be destroyed.\n// Set to 0 to disable\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Set the lifespan of this actor. When it expires the object will be destroyed.\nSet to 0 to disable" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan = { "Lifespan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, Lifespan), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerActorSettings",
		sizeof(FVoxelSpawnerActorSettings),
		alignof(FVoxelSpawnerActorSettings),
		Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h_Statics::ScriptStructInfo[] = {
		{ FVoxelInt32Interval::StaticStruct, Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewStructOps, TEXT("VoxelInt32Interval"), &Z_Registration_Info_UScriptStruct_VoxelInt32Interval, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelInt32Interval), 3820963304U) },
		{ FVoxelInstancedMeshSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewStructOps, TEXT("VoxelInstancedMeshSettings"), &Z_Registration_Info_UScriptStruct_VoxelInstancedMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelInstancedMeshSettings), 345739975U) },
		{ FVoxelSpawnerActorSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewStructOps, TEXT("VoxelSpawnerActorSettings"), &Z_Registration_Info_UScriptStruct_VoxelSpawnerActorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerActorSettings), 4075043734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h_3528003829(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
