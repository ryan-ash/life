// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/FastNoise/VoxelFastNoiseBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFastNoiseBase() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularReturnType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNoiseInterpolation;
	static UEnum* EVoxelNoiseInterpolation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNoiseInterpolation"));
		}
		return Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseInterpolation>()
	{
		return EVoxelNoiseInterpolation_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enumerators[] = {
		{ "EVoxelNoiseInterpolation::Linear", (int64)EVoxelNoiseInterpolation::Linear },
		{ "EVoxelNoiseInterpolation::Hermite", (int64)EVoxelNoiseInterpolation::Hermite },
		{ "EVoxelNoiseInterpolation::Quintic", (int64)EVoxelNoiseInterpolation::Quintic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hermite.Name", "EVoxelNoiseInterpolation::Hermite" },
		{ "Linear.Name", "EVoxelNoiseInterpolation::Linear" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
		{ "Quintic.Name", "EVoxelNoiseInterpolation::Quintic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelNoiseInterpolation",
		"EVoxelNoiseInterpolation",
		Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNoiseFractalType;
	static UEnum* EVoxelNoiseFractalType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNoiseFractalType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelNoiseFractalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNoiseFractalType"));
		}
		return Z_Registration_Info_UEnum_EVoxelNoiseFractalType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseFractalType>()
	{
		return EVoxelNoiseFractalType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enumerators[] = {
		{ "EVoxelNoiseFractalType::FBM", (int64)EVoxelNoiseFractalType::FBM },
		{ "EVoxelNoiseFractalType::Billow", (int64)EVoxelNoiseFractalType::Billow },
		{ "EVoxelNoiseFractalType::RigidMulti", (int64)EVoxelNoiseFractalType::RigidMulti },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enum_MetaDataParams[] = {
		{ "Billow.Name", "EVoxelNoiseFractalType::Billow" },
		{ "BlueprintType", "true" },
		{ "FBM.Name", "EVoxelNoiseFractalType::FBM" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
		{ "RigidMulti.Name", "EVoxelNoiseFractalType::RigidMulti" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelNoiseFractalType",
		"EVoxelNoiseFractalType",
		Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNoiseFractalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNoiseFractalType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelNoiseFractalType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction;
	static UEnum* EVoxelCellularDistanceFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCellularDistanceFunction"));
		}
		return Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularDistanceFunction>()
	{
		return EVoxelCellularDistanceFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enumerators[] = {
		{ "EVoxelCellularDistanceFunction::Euclidean", (int64)EVoxelCellularDistanceFunction::Euclidean },
		{ "EVoxelCellularDistanceFunction::Manhattan", (int64)EVoxelCellularDistanceFunction::Manhattan },
		{ "EVoxelCellularDistanceFunction::Natural", (int64)EVoxelCellularDistanceFunction::Natural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Euclidean.Name", "EVoxelCellularDistanceFunction::Euclidean" },
		{ "Manhattan.Name", "EVoxelCellularDistanceFunction::Manhattan" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
		{ "Natural.Name", "EVoxelCellularDistanceFunction::Natural" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelCellularDistanceFunction",
		"EVoxelCellularDistanceFunction",
		Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction()
	{
		if (!Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelCellularReturnType;
	static UEnum* EVoxelCellularReturnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelCellularReturnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelCellularReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCellularReturnType"));
		}
		return Z_Registration_Info_UEnum_EVoxelCellularReturnType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularReturnType>()
	{
		return EVoxelCellularReturnType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enumerators[] = {
		{ "EVoxelCellularReturnType::CellValue", (int64)EVoxelCellularReturnType::CellValue },
		{ "EVoxelCellularReturnType::Distance", (int64)EVoxelCellularReturnType::Distance },
		{ "EVoxelCellularReturnType::Distance2", (int64)EVoxelCellularReturnType::Distance2 },
		{ "EVoxelCellularReturnType::Distance2Add", (int64)EVoxelCellularReturnType::Distance2Add },
		{ "EVoxelCellularReturnType::Distance2Sub", (int64)EVoxelCellularReturnType::Distance2Sub },
		{ "EVoxelCellularReturnType::Distance2Mul", (int64)EVoxelCellularReturnType::Distance2Mul },
		{ "EVoxelCellularReturnType::Distance2Div", (int64)EVoxelCellularReturnType::Distance2Div },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CellValue.Name", "EVoxelCellularReturnType::CellValue" },
		{ "Distance.Name", "EVoxelCellularReturnType::Distance" },
		{ "Distance2.Name", "EVoxelCellularReturnType::Distance2" },
		{ "Distance2Add.Name", "EVoxelCellularReturnType::Distance2Add" },
		{ "Distance2Div.Name", "EVoxelCellularReturnType::Distance2Div" },
		{ "Distance2Mul.Name", "EVoxelCellularReturnType::Distance2Mul" },
		{ "Distance2Sub.Name", "EVoxelCellularReturnType::Distance2Sub" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelCellularReturnType",
		"EVoxelCellularReturnType",
		Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularReturnType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelCellularReturnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelCellularReturnType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelCellularReturnType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h_Statics::EnumInfo[] = {
		{ EVoxelNoiseInterpolation_StaticEnum, TEXT("EVoxelNoiseInterpolation"), &Z_Registration_Info_UEnum_EVoxelNoiseInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2756866487U) },
		{ EVoxelNoiseFractalType_StaticEnum, TEXT("EVoxelNoiseFractalType"), &Z_Registration_Info_UEnum_EVoxelNoiseFractalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3184530136U) },
		{ EVoxelCellularDistanceFunction_StaticEnum, TEXT("EVoxelCellularDistanceFunction"), &Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4144815217U) },
		{ EVoxelCellularReturnType_StaticEnum, TEXT("EVoxelCellularReturnType"), &Z_Registration_Info_UEnum_EVoxelCellularReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 100693009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h_949284118(TEXT("/Script/Voxel"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
