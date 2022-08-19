// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphGenerator() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel;
	static UEnum* EVoxelGraphGeneratorDebugLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphGeneratorDebugLevel"));
		}
		return Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.OuterSingleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphGeneratorDebugLevel>()
	{
		return EVoxelGraphGeneratorDebugLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enumerators[] = {
		{ "EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining", (int64)EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining },
		{ "EVoxelGraphGeneratorDebugLevel::AfterMacroInlining", (int64)EVoxelGraphGeneratorDebugLevel::AfterMacroInlining },
		{ "EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace", (int64)EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace },
		{ "EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace", (int64)EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace },
		{ "EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators", (int64)EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators },
		{ "EVoxelGraphGeneratorDebugLevel::Output", (int64)EVoxelGraphGeneratorDebugLevel::Output },
		{ "EVoxelGraphGeneratorDebugLevel::Function", (int64)EVoxelGraphGeneratorDebugLevel::Function },
		{ "EVoxelGraphGeneratorDebugLevel::Axis", (int64)EVoxelGraphGeneratorDebugLevel::Axis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enum_MetaDataParams[] = {
		{ "AfterBiomeMergeReplace.Name", "EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace" },
		{ "AfterMacroInlining.Name", "EVoxelGraphGeneratorDebugLevel::AfterMacroInlining" },
		{ "AfterSmartMinMaxReplace.Name", "EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace" },
		{ "Axis.Name", "EVoxelGraphGeneratorDebugLevel::Axis" },
		{ "BeforeFillFunctionSeparators.Name", "EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators" },
		{ "BeforeMacroInlining.Name", "EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining" },
		{ "Function.Name", "EVoxelGraphGeneratorDebugLevel::Function" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Output.Name", "EVoxelGraphGeneratorDebugLevel::Output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		"EVoxelGraphGeneratorDebugLevel",
		"EVoxelGraphGeneratorDebugLevel",
		Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.InnerSingleton;
	}
	void UVoxelGraphGenerator::StaticRegisterNativesUVoxelGraphGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphGenerator);
	UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister()
	{
		return UVoxelGraphGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticPreview_MetaData[];
#endif
		static void NewProp_bAutomaticPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData[];
#endif
		static void NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFlowMergeAndFunctionsWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileToCppOnSave_MetaData[];
#endif
		static void NewProp_bCompileToCppOnSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileToCppOnSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLocation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastSavePath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRangeAnalysis_MetaData[];
#endif
		static void NewProp_bEnableRangeAnalysis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRangeAnalysis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFunctions_MetaData[];
#endif
		static void NewProp_bShowFunctions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetailedErrors_MetaData[];
#endif
		static void NewProp_bDetailedErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetailedErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugGraph_MetaData[];
#endif
		static void NewProp_bEnableDebugGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPinsIds_MetaData[];
#endif
		static void NewProp_bShowPinsIds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPinsIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAxisDependencies_MetaData[];
#endif
		static void NewProp_bShowAxisDependencies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAxisDependencies;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetToDebug_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetToDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionToDebug_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionToDebug;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisDependenciesToDebug_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisDependenciesToDebug_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisDependenciesToDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesDepthScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NodesDepthScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideDataNodes_MetaData[];
#endif
		static void NewProp_bHideDataNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDataNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstNodePinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstNodePinId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelDebugGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelDebugGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSettings;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewTextureSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTextureSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewTextureSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewTexture;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A graph generator\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelGraphGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "A graph generator" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, Outputs), Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bAutomaticPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview = { "bAutomaticPreview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowFlowMergeAndFunctionsWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings = { "bShowFlowMergeAndFunctionsWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_MetaData[] = {
		{ "Category", "Automatic compilation" },
		{ "DisplayName", "Compile to C++ on Save" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bCompileToCppOnSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave = { "bCompileToCppOnSave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation_MetaData[] = {
		{ "Category", "Automatic compilation" },
		{ "Comment", "// Relative to project directory\n" },
		{ "EditCondition", "bCompileToCppOnSave" },
		{ "FilePathFilter", "h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "Relative to project directory" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation = { "SaveLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, SaveLocation), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath = { "LastSavePath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, LastSavePath), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_MetaData[] = {
		{ "Category", "Range Analysis" },
		{ "Comment", "// Range analysis gives a pretty significant speed-up. You should not disable it\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "Range analysis gives a pretty significant speed-up. You should not disable it" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bEnableRangeAnalysis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis = { "bEnableRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Will show the nodes functions. If DetailedErrors is false, will only show TargetToDebug\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Will show the nodes functions. If DetailedErrors is false, will only show TargetToDebug" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowFunctions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions = { "bShowFunctions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Show errors callstacks\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Show errors callstacks" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bDetailedErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors = { "bDetailedErrors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Can be enabled in Window->Debug Graph\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Can be enabled in Window->Debug Graph" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bEnableDebugGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph = { "bEnableDebugGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowPinsIds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds = { "bShowPinsIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowAxisDependencies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies = { "bShowAxisDependencies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The level of compilation to debug\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The level of compilation to debug" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel = { "DebugLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, DebugLevel), Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_MetaData)) }; // 3624787130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The target to debug, if DebugLevel is below or equal to Target\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The target to debug, if DebugLevel is below or equal to Target" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug = { "TargetToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, TargetToDebug), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The function to debug, if DebugLevel is below or equal to Function\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The function to debug, if DebugLevel is below or equal to Function" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug = { "FunctionToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FunctionToDebug), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The axis to debug, if DebugLevel is Axis\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The axis to debug, if DebugLevel is Axis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug = { "AxisDependenciesToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, AxisDependenciesToDebug), Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_MetaData)) }; // 733466077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Increase this if your macro nodes are overlapping in the debug graph\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Increase this if your macro nodes are overlapping in the debug graph" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor = { "NodesDepthScaleFactor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, NodesDepthScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bHideDataNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes = { "bHideDataNodes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_Inner = { "DebugNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes = { "DebugNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, DebugNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode = { "FirstNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FirstNode), Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId = { "FirstNodePinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FirstNodePinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph = { "VoxelGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph = { "VoxelDebugGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelDebugGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings = { "PreviewSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewSettings), Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_Inner = { "PreviewTextureSave", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave = { "PreviewTextureSave", nullptr, (EPropertyFlags)0x0040000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewTextureSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::ClassParams = {
		&UVoxelGraphGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphGenerator()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphGenerator.OuterSingleton, Z_Construct_UClass_UVoxelGraphGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphGenerator.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphGenerator>()
	{
		return UVoxelGraphGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGenerator);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics::EnumInfo[] = {
		{ EVoxelGraphGeneratorDebugLevel_StaticEnum, TEXT("EVoxelGraphGeneratorDebugLevel"), &Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3624787130U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphGenerator, UVoxelGraphGenerator::StaticClass, TEXT("UVoxelGraphGenerator"), &Z_Registration_Info_UClass_UVoxelGraphGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphGenerator), 2010372189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_4139454336(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
