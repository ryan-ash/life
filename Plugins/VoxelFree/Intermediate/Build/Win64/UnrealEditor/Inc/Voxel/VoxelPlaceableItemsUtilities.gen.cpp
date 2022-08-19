// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsUtilities() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings;
class UScriptStruct* FVoxelPerlinWormsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPerlinWormsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPerlinWormsSettings>()
{
	return FVoxelPerlinWormsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitProbabilityGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitProbabilityGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchMeanSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BranchMeanSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchSizeVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BranchSizeVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseSegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWorms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWorms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPerlinWormsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The random seed to use\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The random seed to use" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The radius of the worms in voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The radius of the worms in voxel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Start of the worms, in voxel space\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Start of the worms, in voxel space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Direction of the first worm\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Direction of the first worm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The amplitude of the random rotation on each worm\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The amplitude of the random rotation on each worm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude = { "RotationAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, RotationAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Max depth of the worms tree\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Max depth of the worms tree" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NumSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Length of the worms in voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Length of the worms in voxel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Probability of a worm to create 2 worms\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Probability of a worm to create 2 worms" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability = { "SplitProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SplitProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// How much SplitProbability is reduced when worms go deeper in the tree\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "How much SplitProbability is reduced when worms go deeper in the tree" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain = { "SplitProbabilityGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SplitProbabilityGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Controls the size of the branches after a split\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Controls the size of the branches after a split" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize = { "BranchMeanSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, BranchMeanSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Controls the size of the branches after a split, relative to BranchMeanSize\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Controls the size of the branches after a split, relative to BranchMeanSize" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation = { "BranchSizeVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, BranchSizeVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Perlin noise traversal direction\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Perlin noise traversal direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection = { "NoiseDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NoiseDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Segment lengths to use for perlin noise\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Segment lengths to use for perlin noise" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength = { "NoiseSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NoiseSegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// To avoid infinite loops\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "To avoid infinite loops" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms = { "MaxWorms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, MaxWorms), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPerlinWormsSettings",
		sizeof(FVoxelPerlinWormsSettings),
		alignof(FVoxelPerlinWormsSettings),
		Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics
	{
		struct VoxelPlaceableItemsUtilities_eventAddWorm_Parms
		{
			FVector Start;
			FVector End;
			float Radius;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorm__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::VoxelPlaceableItemsUtilities_eventAddWorm_Parms), Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00920000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemsUtilities::execAddWorms)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AddWorm);
		P_GET_STRUCT(FVoxelPerlinWormsSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelPlaceableItemsUtilities::AddWorms(FAddWorm(Z_Param_AddWorm),Z_Param_Settings);
		P_NATIVE_END;
	}
	void UVoxelPlaceableItemsUtilities::StaticRegisterNativesUVoxelPlaceableItemsUtilities()
	{
		UClass* Class = UVoxelPlaceableItemsUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWorms", &UVoxelPlaceableItemsUtilities::execAddWorms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics
	{
		struct VoxelPlaceableItemsUtilities_eventAddWorms_Parms
		{
			FScriptDelegate AddWorm;
			FVoxelPerlinWormsSettings Settings;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AddWorm;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_AddWorm = { "AddWorm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, AddWorm), Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 503106247
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, Settings), Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings, METADATA_PARAMS(nullptr, 0) }; // 3625792993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_AddWorm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "NoiseDir, NoiseSegmentLength" },
		{ "Category", "Voxel|Placeable Items" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::VoxelPlaceableItemsUtilities_eventAddWorms_Parms), Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPlaceableItemsUtilities);
	UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister()
	{
		return UVoxelPlaceableItemsUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature, "AddWorm__DelegateSignature" }, // 503106247
		{ &Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms, "AddWorms" }, // 2028332963
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemsUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams = {
		&UVoxelPlaceableItemsUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities()
	{
		if (!Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.OuterSingleton, Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelPlaceableItemsUtilities>()
	{
		return UVoxelPlaceableItemsUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemsUtilities);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics::ScriptStructInfo[] = {
		{ FVoxelPerlinWormsSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewStructOps, TEXT("VoxelPerlinWormsSettings"), &Z_Registration_Info_UScriptStruct_VoxelPerlinWormsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPerlinWormsSettings), 3625792993U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPlaceableItemsUtilities, UVoxelPlaceableItemsUtilities::StaticClass, TEXT("UVoxelPlaceableItemsUtilities"), &Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPlaceableItemsUtilities), 743283457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_276397830(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
