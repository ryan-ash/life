// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEnums() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelComputeDevice();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAxis();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxel32BitMask();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelRenderType;
	static UEnum* EVoxelRenderType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelRenderType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelRenderType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRenderType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRenderType"));
		}
		return Z_Registration_Info_UEnum_EVoxelRenderType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRenderType>()
	{
		return EVoxelRenderType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::Enumerators[] = {
		{ "EVoxelRenderType::MarchingCubes", (int64)EVoxelRenderType::MarchingCubes },
		{ "EVoxelRenderType::Cubic", (int64)EVoxelRenderType::Cubic },
		{ "EVoxelRenderType::SurfaceNets", (int64)EVoxelRenderType::SurfaceNets },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cubic.Name", "EVoxelRenderType::Cubic" },
		{ "MarchingCubes.Name", "EVoxelRenderType::MarchingCubes" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "SurfaceNets.Comment", "// Surface nets only work well at LOD 0. They will have holes between higher LODs, and the material won't be picked correctly.\n" },
		{ "SurfaceNets.Name", "EVoxelRenderType::SurfaceNets" },
		{ "SurfaceNets.ToolTip", "Surface nets only work well at LOD 0. They will have holes between higher LODs, and the material won't be picked correctly." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelRenderType",
		"EVoxelRenderType",
		Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelRenderType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelRenderType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelRenderType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelRenderType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNormalConfig;
	static UEnum* EVoxelNormalConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNormalConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelNormalConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNormalConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNormalConfig"));
		}
		return Z_Registration_Info_UEnum_EVoxelNormalConfig.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNormalConfig>()
	{
		return EVoxelNormalConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::Enumerators[] = {
		{ "EVoxelNormalConfig::NoNormal", (int64)EVoxelNormalConfig::NoNormal },
		{ "EVoxelNormalConfig::GradientNormal", (int64)EVoxelNormalConfig::GradientNormal },
		{ "EVoxelNormalConfig::FlatNormal", (int64)EVoxelNormalConfig::FlatNormal },
		{ "EVoxelNormalConfig::MeshNormal", (int64)EVoxelNormalConfig::MeshNormal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FlatNormal.Comment", "// Each vertex will be duplicated & its normal set to the face normal\n// This will disable vertex translating on transitions between LODs as the normals are not the same anymore\n// This will not create any holes, but the transitions might look slightly worse (tiny vertical faces)\n" },
		{ "FlatNormal.Name", "EVoxelNormalConfig::FlatNormal" },
		{ "FlatNormal.ToolTip", "Each vertex will be duplicated & its normal set to the face normal\nThis will disable vertex translating on transitions between LODs as the normals are not the same anymore\nThis will not create any holes, but the transitions might look slightly worse (tiny vertical faces)" },
		{ "GradientNormal.Comment", "// Use the density field gradient as normal. Might have glitches on hard corners which can be quite visible when using triplanar projection\n" },
		{ "GradientNormal.Name", "EVoxelNormalConfig::GradientNormal" },
		{ "GradientNormal.ToolTip", "Use the density field gradient as normal. Might have glitches on hard corners which can be quite visible when using triplanar projection" },
		{ "MeshNormal.Comment", "// Compute the normal from the mesh faces. This will have glitches on chunks borders, Gradient Normal are preferred\n" },
		{ "MeshNormal.Name", "EVoxelNormalConfig::MeshNormal" },
		{ "MeshNormal.ToolTip", "Compute the normal from the mesh faces. This will have glitches on chunks borders, Gradient Normal are preferred" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "NoNormal.Name", "EVoxelNormalConfig::NoNormal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelNormalConfig",
		"EVoxelNormalConfig",
		Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNormalConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNormalConfig.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelNormalConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelMaterialConfig;
	static UEnum* EVoxelMaterialConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelMaterialConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelMaterialConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMaterialConfig"));
		}
		return Z_Registration_Info_UEnum_EVoxelMaterialConfig.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialConfig>()
	{
		return EVoxelMaterialConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::Enumerators[] = {
		{ "EVoxelMaterialConfig::RGB", (int64)EVoxelMaterialConfig::RGB },
		{ "EVoxelMaterialConfig::SingleIndex", (int64)EVoxelMaterialConfig::SingleIndex },
		{ "EVoxelMaterialConfig::DoubleIndex_DEPRECATED", (int64)EVoxelMaterialConfig::DoubleIndex_DEPRECATED },
		{ "EVoxelMaterialConfig::MultiIndex", (int64)EVoxelMaterialConfig::MultiIndex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoubleIndex_DEPRECATED.Hidden", "" },
		{ "DoubleIndex_DEPRECATED.Name", "EVoxelMaterialConfig::DoubleIndex_DEPRECATED" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "MultiIndex.Name", "EVoxelMaterialConfig::MultiIndex" },
		{ "RGB.Name", "EVoxelMaterialConfig::RGB" },
		{ "SingleIndex.Name", "EVoxelMaterialConfig::SingleIndex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelMaterialConfig",
		"EVoxelMaterialConfig",
		Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig()
	{
		if (!Z_Registration_Info_UEnum_EVoxelMaterialConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelMaterialConfig.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelMaterialConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelUVConfig;
	static UEnum* EVoxelUVConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelUVConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelUVConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelUVConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelUVConfig"));
		}
		return Z_Registration_Info_UEnum_EVoxelUVConfig.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelUVConfig>()
	{
		return EVoxelUVConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::Enumerators[] = {
		{ "EVoxelUVConfig::GlobalUVs", (int64)EVoxelUVConfig::GlobalUVs },
		{ "EVoxelUVConfig::PackWorldUpInUVs", (int64)EVoxelUVConfig::PackWorldUpInUVs },
		{ "EVoxelUVConfig::PerVoxelUVs", (int64)EVoxelUVConfig::PerVoxelUVs },
		{ "EVoxelUVConfig::Max", (int64)EVoxelUVConfig::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GlobalUVs.DisplayName", "Global UVs" },
		{ "GlobalUVs.Name", "EVoxelUVConfig::GlobalUVs" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EVoxelUVConfig::Max" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "PackWorldUpInUVs.DisplayName", "Pack WorldUp in UVs" },
		{ "PackWorldUpInUVs.Name", "EVoxelUVConfig::PackWorldUpInUVs" },
		{ "PerVoxelUVs.Comment", "// In Cubic, per Voxel. In others, per chunk\n" },
		{ "PerVoxelUVs.DisplayName", "Per Voxel/Chunk UVs" },
		{ "PerVoxelUVs.Name", "EVoxelUVConfig::PerVoxelUVs" },
		{ "PerVoxelUVs.ToolTip", "In Cubic, per Voxel. In others, per chunk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelUVConfig",
		"EVoxelUVConfig",
		Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig()
	{
		if (!Z_Registration_Info_UEnum_EVoxelUVConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelUVConfig.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelUVConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelUVConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelRGBA;
	static UEnum* EVoxelRGBA_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelRGBA.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelRGBA.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRGBA, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRGBA"));
		}
		return Z_Registration_Info_UEnum_EVoxelRGBA.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBA>()
	{
		return EVoxelRGBA_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::Enumerators[] = {
		{ "EVoxelRGBA::R", (int64)EVoxelRGBA::R },
		{ "EVoxelRGBA::G", (int64)EVoxelRGBA::G },
		{ "EVoxelRGBA::B", (int64)EVoxelRGBA::B },
		{ "EVoxelRGBA::A", (int64)EVoxelRGBA::A },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EVoxelRGBA::A" },
		{ "B.Name", "EVoxelRGBA::B" },
		{ "BlueprintType", "true" },
		{ "G.Name", "EVoxelRGBA::G" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "R.Name", "EVoxelRGBA::R" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelRGBA",
		"EVoxelRGBA",
		Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA()
	{
		if (!Z_Registration_Info_UEnum_EVoxelRGBA.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelRGBA.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelRGBA_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelRGBA.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType;
	static UEnum* EVoxelSpawnerActorSpawnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerActorSpawnType"));
		}
		return Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerActorSpawnType>()
	{
		return EVoxelSpawnerActorSpawnType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::Enumerators[] = {
		{ "EVoxelSpawnerActorSpawnType::All", (int64)EVoxelSpawnerActorSpawnType::All },
		{ "EVoxelSpawnerActorSpawnType::OnlyFloating", (int64)EVoxelSpawnerActorSpawnType::OnlyFloating },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// Spawn all spawner actors\n" },
		{ "All.Name", "EVoxelSpawnerActorSpawnType::All" },
		{ "All.ToolTip", "Spawn all spawner actors" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "OnlyFloating.Comment", "// Spawn only floating spawner actors\n" },
		{ "OnlyFloating.Name", "EVoxelSpawnerActorSpawnType::OnlyFloating" },
		{ "OnlyFloating.ToolTip", "Spawn only floating spawner actors" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelSpawnerActorSpawnType",
		"EVoxelSpawnerActorSpawnType",
		Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSamplerMode;
	static UEnum* EVoxelSamplerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSamplerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelSamplerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSamplerMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSamplerMode"));
		}
		return Z_Registration_Info_UEnum_EVoxelSamplerMode.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSamplerMode>()
	{
		return EVoxelSamplerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::Enumerators[] = {
		{ "EVoxelSamplerMode::Clamp", (int64)EVoxelSamplerMode::Clamp },
		{ "EVoxelSamplerMode::Tile", (int64)EVoxelSamplerMode::Tile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clamp.Comment", "// Clamp the coordinates\n" },
		{ "Clamp.Name", "EVoxelSamplerMode::Clamp" },
		{ "Clamp.ToolTip", "Clamp the coordinates" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "Tile.Comment", "// Tile the coordinates\n" },
		{ "Tile.Name", "EVoxelSamplerMode::Tile" },
		{ "Tile.ToolTip", "Tile the coordinates" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelSamplerMode",
		"EVoxelSamplerMode",
		Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSamplerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSamplerMode.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelSamplerMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDataType;
	static UEnum* EVoxelDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataType"));
		}
		return Z_Registration_Info_UEnum_EVoxelDataType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataType>()
	{
		return EVoxelDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::Enumerators[] = {
		{ "EVoxelDataType::Values", (int64)EVoxelDataType::Values },
		{ "EVoxelDataType::Materials", (int64)EVoxelDataType::Materials },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Materials.Name", "EVoxelDataType::Materials" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "Values.Name", "EVoxelDataType::Values" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelDataType",
		"EVoxelDataType",
		Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDataType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelDataType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelRGBHardness;
	static UEnum* EVoxelRGBHardness_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelRGBHardness.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelRGBHardness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRGBHardness, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRGBHardness"));
		}
		return Z_Registration_Info_UEnum_EVoxelRGBHardness.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBHardness>()
	{
		return EVoxelRGBHardness_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::Enumerators[] = {
		{ "EVoxelRGBHardness::FourWayBlend", (int64)EVoxelRGBHardness::FourWayBlend },
		{ "EVoxelRGBHardness::FiveWayBlend", (int64)EVoxelRGBHardness::FiveWayBlend },
		{ "EVoxelRGBHardness::R", (int64)EVoxelRGBHardness::R },
		{ "EVoxelRGBHardness::G", (int64)EVoxelRGBHardness::G },
		{ "EVoxelRGBHardness::B", (int64)EVoxelRGBHardness::B },
		{ "EVoxelRGBHardness::A", (int64)EVoxelRGBHardness::A },
		{ "EVoxelRGBHardness::U0", (int64)EVoxelRGBHardness::U0 },
		{ "EVoxelRGBHardness::U1", (int64)EVoxelRGBHardness::U1 },
		{ "EVoxelRGBHardness::V0", (int64)EVoxelRGBHardness::V0 },
		{ "EVoxelRGBHardness::V1", (int64)EVoxelRGBHardness::V1 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::Enum_MetaDataParams[] = {
		{ "A.Comment", "// Use the Alpha channel as hardness\n" },
		{ "A.Name", "EVoxelRGBHardness::A" },
		{ "A.ToolTip", "Use the Alpha channel as hardness" },
		{ "B.Comment", "// Use the Blue channel as hardness\n" },
		{ "B.Name", "EVoxelRGBHardness::B" },
		{ "B.ToolTip", "Use the Blue channel as hardness" },
		{ "BlueprintType", "true" },
		{ "FiveWayBlend.Comment", "// Interpret the material as 5 way blend, and use MaterialsHardness\n" },
		{ "FiveWayBlend.Name", "EVoxelRGBHardness::FiveWayBlend" },
		{ "FiveWayBlend.ToolTip", "Interpret the material as 5 way blend, and use MaterialsHardness" },
		{ "FourWayBlend.Comment", "// Interpret the material as 4 way blend, and use MaterialsHardness\n" },
		{ "FourWayBlend.Name", "EVoxelRGBHardness::FourWayBlend" },
		{ "FourWayBlend.ToolTip", "Interpret the material as 4 way blend, and use MaterialsHardness" },
		{ "G.Comment", "// Use the Green channel as hardness\n" },
		{ "G.Name", "EVoxelRGBHardness::G" },
		{ "G.ToolTip", "Use the Green channel as hardness" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "R.Comment", "// Use the Red channel as hardness\n" },
		{ "R.Name", "EVoxelRGBHardness::R" },
		{ "R.ToolTip", "Use the Red channel as hardness" },
		{ "U0.Comment", "// Use the U0 channel as hardness\n" },
		{ "U0.Name", "EVoxelRGBHardness::U0" },
		{ "U0.ToolTip", "Use the U0 channel as hardness" },
		{ "U1.Comment", "// Use the U1 channel as hardness\n" },
		{ "U1.Name", "EVoxelRGBHardness::U1" },
		{ "U1.ToolTip", "Use the U1 channel as hardness" },
		{ "V0.Comment", "// Use the V0 channel as hardness\n" },
		{ "V0.Name", "EVoxelRGBHardness::V0" },
		{ "V0.ToolTip", "Use the V0 channel as hardness" },
		{ "V1.Comment", "// Use the V1 channel as hardness\n" },
		{ "V1.Name", "EVoxelRGBHardness::V1" },
		{ "V1.ToolTip", "Use the V1 channel as hardness" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelRGBHardness",
		"EVoxelRGBHardness",
		Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness()
	{
		if (!Z_Registration_Info_UEnum_EVoxelRGBHardness.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelRGBHardness.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelRGBHardness.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelFalloff;
	static UEnum* EVoxelFalloff_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelFalloff.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelFalloff.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFalloff, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFalloff"));
		}
		return Z_Registration_Info_UEnum_EVoxelFalloff.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFalloff>()
	{
		return EVoxelFalloff_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::Enumerators[] = {
		{ "EVoxelFalloff::Linear", (int64)EVoxelFalloff::Linear },
		{ "EVoxelFalloff::Smooth", (int64)EVoxelFalloff::Smooth },
		{ "EVoxelFalloff::Spherical", (int64)EVoxelFalloff::Spherical },
		{ "EVoxelFalloff::Tip", (int64)EVoxelFalloff::Tip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linear.Name", "EVoxelFalloff::Linear" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "Smooth.Name", "EVoxelFalloff::Smooth" },
		{ "Spherical.Name", "EVoxelFalloff::Spherical" },
		{ "Tip.Name", "EVoxelFalloff::Tip" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelFalloff",
		"EVoxelFalloff",
		Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff()
	{
		if (!Z_Registration_Info_UEnum_EVoxelFalloff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelFalloff.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelFalloff_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelFalloff.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelComputeDevice;
	static UEnum* EVoxelComputeDevice_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelComputeDevice.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelComputeDevice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelComputeDevice, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelComputeDevice"));
		}
		return Z_Registration_Info_UEnum_EVoxelComputeDevice.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelComputeDevice>()
	{
		return EVoxelComputeDevice_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::Enumerators[] = {
		{ "EVoxelComputeDevice::CPU", (int64)EVoxelComputeDevice::CPU },
		{ "EVoxelComputeDevice::GPU", (int64)EVoxelComputeDevice::GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CPU.Name", "EVoxelComputeDevice::CPU" },
		{ "GPU.Name", "EVoxelComputeDevice::GPU" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelComputeDevice",
		"EVoxelComputeDevice",
		Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelComputeDevice()
	{
		if (!Z_Registration_Info_UEnum_EVoxelComputeDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelComputeDevice.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelComputeDevice.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelAxis;
	static UEnum* EVoxelAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAxis, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAxis"));
		}
		return Z_Registration_Info_UEnum_EVoxelAxis.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelAxis>()
	{
		return EVoxelAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::Enumerators[] = {
		{ "EVoxelAxis::X", (int64)EVoxelAxis::X },
		{ "EVoxelAxis::Y", (int64)EVoxelAxis::Y },
		{ "EVoxelAxis::Z", (int64)EVoxelAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "X.Name", "EVoxelAxis::X" },
		{ "Y.Name", "EVoxelAxis::Y" },
		{ "Z.Name", "EVoxelAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelAxis",
		"EVoxelAxis",
		Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelAxis()
	{
		if (!Z_Registration_Info_UEnum_EVoxelAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelAxis.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxel32BitMask;
	static UEnum* EVoxel32BitMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxel32BitMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxel32BitMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxel32BitMask, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxel32BitMask"));
		}
		return Z_Registration_Info_UEnum_EVoxel32BitMask.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxel32BitMask>()
	{
		return EVoxel32BitMask_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::Enumerators[] = {
		{ "EVoxel32BitMask::Channel0", (int64)EVoxel32BitMask::Channel0 },
		{ "EVoxel32BitMask::Channel1", (int64)EVoxel32BitMask::Channel1 },
		{ "EVoxel32BitMask::Channel2", (int64)EVoxel32BitMask::Channel2 },
		{ "EVoxel32BitMask::Channel3", (int64)EVoxel32BitMask::Channel3 },
		{ "EVoxel32BitMask::Channel4", (int64)EVoxel32BitMask::Channel4 },
		{ "EVoxel32BitMask::Channel5", (int64)EVoxel32BitMask::Channel5 },
		{ "EVoxel32BitMask::Channel6", (int64)EVoxel32BitMask::Channel6 },
		{ "EVoxel32BitMask::Channel7", (int64)EVoxel32BitMask::Channel7 },
		{ "EVoxel32BitMask::Channel8", (int64)EVoxel32BitMask::Channel8 },
		{ "EVoxel32BitMask::Channel9", (int64)EVoxel32BitMask::Channel9 },
		{ "EVoxel32BitMask::Channel10", (int64)EVoxel32BitMask::Channel10 },
		{ "EVoxel32BitMask::Channel11", (int64)EVoxel32BitMask::Channel11 },
		{ "EVoxel32BitMask::Channel12", (int64)EVoxel32BitMask::Channel12 },
		{ "EVoxel32BitMask::Channel13", (int64)EVoxel32BitMask::Channel13 },
		{ "EVoxel32BitMask::Channel14", (int64)EVoxel32BitMask::Channel14 },
		{ "EVoxel32BitMask::Channel15", (int64)EVoxel32BitMask::Channel15 },
		{ "EVoxel32BitMask::Channel16", (int64)EVoxel32BitMask::Channel16 },
		{ "EVoxel32BitMask::Channel17", (int64)EVoxel32BitMask::Channel17 },
		{ "EVoxel32BitMask::Channel18", (int64)EVoxel32BitMask::Channel18 },
		{ "EVoxel32BitMask::Channel19", (int64)EVoxel32BitMask::Channel19 },
		{ "EVoxel32BitMask::Channel20", (int64)EVoxel32BitMask::Channel20 },
		{ "EVoxel32BitMask::Channel21", (int64)EVoxel32BitMask::Channel21 },
		{ "EVoxel32BitMask::Channel22", (int64)EVoxel32BitMask::Channel22 },
		{ "EVoxel32BitMask::Channel23", (int64)EVoxel32BitMask::Channel23 },
		{ "EVoxel32BitMask::Channel24", (int64)EVoxel32BitMask::Channel24 },
		{ "EVoxel32BitMask::Channel25", (int64)EVoxel32BitMask::Channel25 },
		{ "EVoxel32BitMask::Channel26", (int64)EVoxel32BitMask::Channel26 },
		{ "EVoxel32BitMask::Channel27", (int64)EVoxel32BitMask::Channel27 },
		{ "EVoxel32BitMask::Channel28", (int64)EVoxel32BitMask::Channel28 },
		{ "EVoxel32BitMask::Channel29", (int64)EVoxel32BitMask::Channel29 },
		{ "EVoxel32BitMask::Channel30", (int64)EVoxel32BitMask::Channel30 },
		{ "EVoxel32BitMask::Channel31", (int64)EVoxel32BitMask::Channel31 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Channel0.Name", "EVoxel32BitMask::Channel0" },
		{ "Channel1.Name", "EVoxel32BitMask::Channel1" },
		{ "Channel10.Name", "EVoxel32BitMask::Channel10" },
		{ "Channel11.Name", "EVoxel32BitMask::Channel11" },
		{ "Channel12.Name", "EVoxel32BitMask::Channel12" },
		{ "Channel13.Name", "EVoxel32BitMask::Channel13" },
		{ "Channel14.Name", "EVoxel32BitMask::Channel14" },
		{ "Channel15.Name", "EVoxel32BitMask::Channel15" },
		{ "Channel16.Name", "EVoxel32BitMask::Channel16" },
		{ "Channel17.Name", "EVoxel32BitMask::Channel17" },
		{ "Channel18.Name", "EVoxel32BitMask::Channel18" },
		{ "Channel19.Name", "EVoxel32BitMask::Channel19" },
		{ "Channel2.Name", "EVoxel32BitMask::Channel2" },
		{ "Channel20.Name", "EVoxel32BitMask::Channel20" },
		{ "Channel21.Name", "EVoxel32BitMask::Channel21" },
		{ "Channel22.Name", "EVoxel32BitMask::Channel22" },
		{ "Channel23.Name", "EVoxel32BitMask::Channel23" },
		{ "Channel24.Name", "EVoxel32BitMask::Channel24" },
		{ "Channel25.Name", "EVoxel32BitMask::Channel25" },
		{ "Channel26.Name", "EVoxel32BitMask::Channel26" },
		{ "Channel27.Name", "EVoxel32BitMask::Channel27" },
		{ "Channel28.Name", "EVoxel32BitMask::Channel28" },
		{ "Channel29.Name", "EVoxel32BitMask::Channel29" },
		{ "Channel3.Name", "EVoxel32BitMask::Channel3" },
		{ "Channel30.Name", "EVoxel32BitMask::Channel30" },
		{ "Channel31.Name", "EVoxel32BitMask::Channel31" },
		{ "Channel4.Name", "EVoxel32BitMask::Channel4" },
		{ "Channel5.Name", "EVoxel32BitMask::Channel5" },
		{ "Channel6.Name", "EVoxel32BitMask::Channel6" },
		{ "Channel7.Name", "EVoxel32BitMask::Channel7" },
		{ "Channel8.Name", "EVoxel32BitMask::Channel8" },
		{ "Channel9.Name", "EVoxel32BitMask::Channel9" },
		{ "DisplayName", "Voxel 32 bit Mask" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxel32BitMask",
		"EVoxel32BitMask",
		Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxel32BitMask()
	{
		if (!Z_Registration_Info_UEnum_EVoxel32BitMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxel32BitMask.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxel32BitMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxel32BitMask.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDataItemCombineMode;
	static UEnum* EVoxelDataItemCombineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataItemCombineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelDataItemCombineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataItemCombineMode"));
		}
		return Z_Registration_Info_UEnum_EVoxelDataItemCombineMode.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataItemCombineMode>()
	{
		return EVoxelDataItemCombineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::Enumerators[] = {
		{ "EVoxelDataItemCombineMode::Min", (int64)EVoxelDataItemCombineMode::Min },
		{ "EVoxelDataItemCombineMode::Max", (int64)EVoxelDataItemCombineMode::Max },
		{ "EVoxelDataItemCombineMode::Sum", (int64)EVoxelDataItemCombineMode::Sum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::Enum_MetaDataParams[] = {
		{ "Max.Name", "EVoxelDataItemCombineMode::Max" },
		{ "Min.Name", "EVoxelDataItemCombineMode::Min" },
		{ "ModuleRelativePath", "Public/VoxelEnums.h" },
		{ "Sum.Name", "EVoxelDataItemCombineMode::Sum" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelDataItemCombineMode",
		"EVoxelDataItemCombineMode",
		Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataItemCombineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDataItemCombineMode.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelDataItemCombineMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelEnums_h_Statics::EnumInfo[] = {
		{ EVoxelRenderType_StaticEnum, TEXT("EVoxelRenderType"), &Z_Registration_Info_UEnum_EVoxelRenderType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 571681279U) },
		{ EVoxelNormalConfig_StaticEnum, TEXT("EVoxelNormalConfig"), &Z_Registration_Info_UEnum_EVoxelNormalConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1635884394U) },
		{ EVoxelMaterialConfig_StaticEnum, TEXT("EVoxelMaterialConfig"), &Z_Registration_Info_UEnum_EVoxelMaterialConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4293812930U) },
		{ EVoxelUVConfig_StaticEnum, TEXT("EVoxelUVConfig"), &Z_Registration_Info_UEnum_EVoxelUVConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1337627548U) },
		{ EVoxelRGBA_StaticEnum, TEXT("EVoxelRGBA"), &Z_Registration_Info_UEnum_EVoxelRGBA, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1494340730U) },
		{ EVoxelSpawnerActorSpawnType_StaticEnum, TEXT("EVoxelSpawnerActorSpawnType"), &Z_Registration_Info_UEnum_EVoxelSpawnerActorSpawnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1494567269U) },
		{ EVoxelSamplerMode_StaticEnum, TEXT("EVoxelSamplerMode"), &Z_Registration_Info_UEnum_EVoxelSamplerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3821440732U) },
		{ EVoxelDataType_StaticEnum, TEXT("EVoxelDataType"), &Z_Registration_Info_UEnum_EVoxelDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3798944667U) },
		{ EVoxelRGBHardness_StaticEnum, TEXT("EVoxelRGBHardness"), &Z_Registration_Info_UEnum_EVoxelRGBHardness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3463244758U) },
		{ EVoxelFalloff_StaticEnum, TEXT("EVoxelFalloff"), &Z_Registration_Info_UEnum_EVoxelFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3165405943U) },
		{ EVoxelComputeDevice_StaticEnum, TEXT("EVoxelComputeDevice"), &Z_Registration_Info_UEnum_EVoxelComputeDevice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2700073125U) },
		{ EVoxelAxis_StaticEnum, TEXT("EVoxelAxis"), &Z_Registration_Info_UEnum_EVoxelAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1691258205U) },
		{ EVoxel32BitMask_StaticEnum, TEXT("EVoxel32BitMask"), &Z_Registration_Info_UEnum_EVoxel32BitMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3165154713U) },
		{ EVoxelDataItemCombineMode_StaticEnum, TEXT("EVoxelDataItemCombineMode"), &Z_Registration_Info_UEnum_EVoxelDataItemCombineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 445089281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelEnums_h_1764854996(TEXT("/Script/Voxel"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
