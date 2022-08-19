// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelBasicSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBasicSpawner() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling;
	static UEnum* EVoxelBasicSpawnerScaling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelBasicSpawnerScaling"));
		}
		return Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelBasicSpawnerScaling>()
	{
		return EVoxelBasicSpawnerScaling_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enumerators[] = {
		{ "EVoxelBasicSpawnerScaling::Uniform", (int64)EVoxelBasicSpawnerScaling::Uniform },
		{ "EVoxelBasicSpawnerScaling::Free", (int64)EVoxelBasicSpawnerScaling::Free },
		{ "EVoxelBasicSpawnerScaling::LockXY", (int64)EVoxelBasicSpawnerScaling::LockXY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enum_MetaDataParams[] = {
		{ "Free.Comment", "/** Instances will have random X, Y and Z scales */" },
		{ "Free.Name", "EVoxelBasicSpawnerScaling::Free" },
		{ "Free.ToolTip", "Instances will have random X, Y and Z scales" },
		{ "LockXY.Comment", "/** X and Y will be the same random scale, Z will be another */" },
		{ "LockXY.Name", "EVoxelBasicSpawnerScaling::LockXY" },
		{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "Uniform.Comment", "/** Instances will have uniform X, Y and Z scales */" },
		{ "Uniform.Name", "EVoxelBasicSpawnerScaling::Uniform" },
		{ "Uniform.ToolTip", "Instances will have uniform X, Y and Z scales" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelBasicSpawnerScaling",
		"EVoxelBasicSpawnerScaling",
		Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling()
	{
		if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings;
class UScriptStruct* FVoxelBasicSpawnerScaleSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBasicSpawnerScaleSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelBasicSpawnerScaleSettings>()
{
	return FVoxelBasicSpawnerScaleSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Scaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBasicSpawnerScaleSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, Scaling), Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_MetaData)) }; // 3351499756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's X Scale property */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's X Scale property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Y Scale property */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Y Scale property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Z Scale property */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Z Scale property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelBasicSpawnerScaleSettings",
		sizeof(FVoxelBasicSpawnerScaleSettings),
		alignof(FVoxelBasicSpawnerScaleSettings),
		Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation;
	static UEnum* EVoxelBasicSpawnerRotation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelBasicSpawnerRotation"));
		}
		return Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelBasicSpawnerRotation>()
	{
		return EVoxelBasicSpawnerRotation_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enumerators[] = {
		{ "EVoxelBasicSpawnerRotation::AlignToSurface", (int64)EVoxelBasicSpawnerRotation::AlignToSurface },
		{ "EVoxelBasicSpawnerRotation::AlignToWorldUp", (int64)EVoxelBasicSpawnerRotation::AlignToWorldUp },
		{ "EVoxelBasicSpawnerRotation::RandomAlign", (int64)EVoxelBasicSpawnerRotation::RandomAlign },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enum_MetaDataParams[] = {
		{ "AlignToSurface.Name", "EVoxelBasicSpawnerRotation::AlignToSurface" },
		{ "AlignToWorldUp.Name", "EVoxelBasicSpawnerRotation::AlignToWorldUp" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "RandomAlign.Name", "EVoxelBasicSpawnerRotation::RandomAlign" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelBasicSpawnerRotation",
		"EVoxelBasicSpawnerRotation",
		Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation()
	{
		if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.InnerSingleton;
	}
	void UVoxelBasicSpawner::StaticRegisterNativesUVoxelBasicSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelBasicSpawner);
	UClass* Z_Construct_UClass_UVoxelBasicSpawner_NoRegister()
	{
		return UVoxelBasicSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBasicSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeightRestriction_MetaData[];
#endif
		static void NewProp_bEnableHeightRestriction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeightRestriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRestriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightRestrictionFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightRestrictionFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scaling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomYaw_MetaData[];
#endif
		static void NewProp_bRandomYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomPitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomPitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBasicSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "// Min/max angle between object up vector and generator up vector in degrees\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Min/max angle between object up vector and generator up vector in degrees" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_MetaData[] = {
		{ "Category", "Placement" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_SetBit(void* Obj)
	{
		((UVoxelBasicSpawner*)Obj)->bEnableHeightRestriction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction = { "bEnableHeightRestriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelBasicSpawner), &Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "// In voxels. Only spawn instances if the instance voxel Z position is in this interval.\n// TODO: optimize to not generate chunks that do not match this restriction\n" },
		{ "EditCondition", "bEnableHeightRestriction" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "In voxels. Only spawn instances if the instance voxel Z position is in this interval.\nTODO: optimize to not generate chunks that do not match this restriction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction = { "HeightRestriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, HeightRestriction), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMin", "0" },
		{ "Comment", "// In voxels, the size of the fade on the edges of HeightRestriction\n" },
		{ "EditCondition", "bEnableHeightRestriction" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "In voxels, the size of the fade on the edges of HeightRestriction" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff = { "HeightRestrictionFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, HeightRestrictionFalloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Placement - Scale" },
		{ "Comment", "// Specifies instance scaling type\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Specifies instance scaling type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, Scaling), Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling_MetaData)) }; // 1314541306
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "Comment", "// Vertical to use for the instances\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Vertical to use for the instances" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment = { "RotationAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, RotationAlignment), Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_MetaData)) }; // 3454250182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "Comment", "// If selected, foliage instances will have a random yaw rotation around their vertical axis applied\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "If selected, foliage instances will have a random yaw rotation around their vertical axis applied" },
	};
#endif
	void Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_SetBit(void* Obj)
	{
		((UVoxelBasicSpawner*)Obj)->bRandomYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw = { "bRandomYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelBasicSpawner), &Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "// A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle = { "RandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, RandomPitchAngle), METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// Apply an offset to the instance position. Applied before the rotation. In cm\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Apply an offset to the instance position. Applied before the rotation. In cm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset = { "LocalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, LocalPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// Apply an offset to the instance rotation. Applied after the local position offset, and before the rotation\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Apply an offset to the instance rotation. Applied after the local position offset, and before the rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset = { "LocalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, LocalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// Apply an offset to the instance position. Applied after the rotation. In cm\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ToolTip", "Apply an offset to the instance position. Applied after the rotation. In cm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset = { "GlobalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicSpawner, GlobalPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBasicSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::ClassParams = {
		&UVoxelBasicSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBasicSpawner()
	{
		if (!Z_Registration_Info_UClass_UVoxelBasicSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBasicSpawner.OuterSingleton, Z_Construct_UClass_UVoxelBasicSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelBasicSpawner.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelBasicSpawner>()
	{
		return UVoxelBasicSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicSpawner);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::EnumInfo[] = {
		{ EVoxelBasicSpawnerScaling_StaticEnum, TEXT("EVoxelBasicSpawnerScaling"), &Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3351499756U) },
		{ EVoxelBasicSpawnerRotation_StaticEnum, TEXT("EVoxelBasicSpawnerRotation"), &Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3454250182U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::ScriptStructInfo[] = {
		{ FVoxelBasicSpawnerScaleSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewStructOps, TEXT("VoxelBasicSpawnerScaleSettings"), &Z_Registration_Info_UScriptStruct_VoxelBasicSpawnerScaleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBasicSpawnerScaleSettings), 1314541306U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBasicSpawner, UVoxelBasicSpawner::StaticClass, TEXT("UVoxelBasicSpawner"), &Z_Registration_Info_UClass_UVoxelBasicSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBasicSpawner), 4011497836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_2058621090(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
