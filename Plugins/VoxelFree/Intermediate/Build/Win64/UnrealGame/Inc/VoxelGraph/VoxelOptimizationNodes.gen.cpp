// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelOptimizationNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelOptimizationNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Sleep_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Sleep();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeUnion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeUnion();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMin_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMin();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMax_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMax();
// End Cross Module References
	void UVoxelNode_StaticClampFloat::StaticRegisterNativesUVoxelNode_StaticClampFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_StaticClampFloat);
	UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat_NoRegister()
	{
		return UVoxelNode_StaticClampFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Nodes before this won't be computed for range analysis\n" },
		{ "DisplayName", "Static Clamp" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "range analysis" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Nodes before this won't be computed for range analysis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Static Clamp" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_StaticClampFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Static Clamp" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_StaticClampFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_StaticClampFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::ClassParams = {
		&UVoxelNode_StaticClampFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.OuterSingleton, Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_StaticClampFloat>()
	{
		return UVoxelNode_StaticClampFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_StaticClampFloat);
	void UVoxelNode_RangeAnalysisDebuggerFloat::StaticRegisterNativesUVoxelNode_RangeAnalysisDebuggerFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_RangeAnalysisDebuggerFloat);
	UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_NoRegister()
	{
		return UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Use this to debug the range of a value. Will plot the runtime values in a graph\n" },
		{ "DisplayName", "Range Analysis Debugger" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Use this to debug the range of a value. Will plot the runtime values in a graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin = { "GraphMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphMin), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax = { "GraphMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphMax), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep_MetaData[] = {
		{ "Category", "Graph" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep = { "GraphStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphStep), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RangeAnalysisDebuggerFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::ClassParams = {
		&UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.OuterSingleton, Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RangeAnalysisDebuggerFloat>()
	{
		return UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RangeAnalysisDebuggerFloat);
	void UVoxelNode_Sleep::StaticRegisterNativesUVoxelNode_Sleep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_Sleep);
	UClass* Z_Construct_UClass_UVoxelNode_Sleep_NoRegister()
	{
		return UVoxelNode_Sleep::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Sleep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLoops;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Sleep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Runs a for loop\n" },
		{ "DisplayName", "Stress" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Runs a for loop" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops = { "NumberOfLoops", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Sleep, NumberOfLoops), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Sleep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Sleep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Sleep_Statics::ClassParams = {
		&UVoxelNode_Sleep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_Sleep()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_Sleep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_Sleep.OuterSingleton, Z_Construct_UClass_UVoxelNode_Sleep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_Sleep.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_Sleep>()
	{
		return UVoxelNode_Sleep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Sleep);
	void UVoxelNode_RangeUnion::StaticRegisterNativesUVoxelNode_RangeUnion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_RangeUnion);
	UClass* Z_Construct_UClass_UVoxelNode_RangeUnion_NoRegister()
	{
		return UVoxelNode_RangeUnion::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RangeUnion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// In range analysis, does the union of the inputs ranges. In other modes, returns 0\n" },
		{ "DisplayName", "Range Union" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "In range analysis, does the union of the inputs ranges. In other modes, returns 0" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RangeUnion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::ClassParams = {
		&UVoxelNode_RangeUnion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RangeUnion()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_RangeUnion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RangeUnion.OuterSingleton, Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_RangeUnion.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RangeUnion>()
	{
		return UVoxelNode_RangeUnion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RangeUnion);
	void UVoxelNode_IsSingleBool::StaticRegisterNativesUVoxelNode_IsSingleBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_IsSingleBool);
	UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool_NoRegister()
	{
		return UVoxelNode_IsSingleBool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// In range analysis, returns false if the condition can be true or false. In other modes, always returns true\n" },
		{ "DisplayName", "Is Single bool" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "In range analysis, returns false if the condition can be true or false. In other modes, always returns true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IsSingleBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::ClassParams = {
		&UVoxelNode_IsSingleBool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.OuterSingleton, Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IsSingleBool>()
	{
		return UVoxelNode_IsSingleBool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IsSingleBool);
	void UVoxelNode_GetRangeAnalysis::StaticRegisterNativesUVoxelNode_GetRangeAnalysis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetRangeAnalysis);
	UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_NoRegister()
	{
		return UVoxelNode_GetRangeAnalysis::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Get the range analysis value\n" },
		{ "DisplayName", "Get Range" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "range analysis" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Get the range analysis value" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetRangeAnalysis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::ClassParams = {
		&UVoxelNode_GetRangeAnalysis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetRangeAnalysis>()
	{
		return UVoxelNode_GetRangeAnalysis::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetRangeAnalysis);
	void UVoxelNode_SmartMin::StaticRegisterNativesUVoxelNode_SmartMin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_SmartMin);
	UClass* Z_Construct_UClass_UVoxelNode_SmartMin_NoRegister()
	{
		return UVoxelNode_SmartMin::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SmartMin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SmartMin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SmartMin_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Smart Min" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "smart range min fast" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SmartMin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SmartMin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SmartMin_Statics::ClassParams = {
		&UVoxelNode_SmartMin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SmartMin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SmartMin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SmartMin()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_SmartMin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SmartMin.OuterSingleton, Z_Construct_UClass_UVoxelNode_SmartMin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_SmartMin.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SmartMin>()
	{
		return UVoxelNode_SmartMin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SmartMin);
	void UVoxelNode_SmartMax::StaticRegisterNativesUVoxelNode_SmartMax()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_SmartMax);
	UClass* Z_Construct_UClass_UVoxelNode_SmartMax_NoRegister()
	{
		return UVoxelNode_SmartMax::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SmartMax_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SmartMax_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SmartMax_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Smart Max" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "smart range max fast" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SmartMax_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SmartMax>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SmartMax_Statics::ClassParams = {
		&UVoxelNode_SmartMax::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SmartMax_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SmartMax_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SmartMax()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_SmartMax.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SmartMax.OuterSingleton, Z_Construct_UClass_UVoxelNode_SmartMax_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_SmartMax.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SmartMax>()
	{
		return UVoxelNode_SmartMax::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SmartMax);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_StaticClampFloat, UVoxelNode_StaticClampFloat::StaticClass, TEXT("UVoxelNode_StaticClampFloat"), &Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_StaticClampFloat), 2645306548U) },
		{ Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat, UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass, TEXT("UVoxelNode_RangeAnalysisDebuggerFloat"), &Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RangeAnalysisDebuggerFloat), 3056943709U) },
		{ Z_Construct_UClass_UVoxelNode_Sleep, UVoxelNode_Sleep::StaticClass, TEXT("UVoxelNode_Sleep"), &Z_Registration_Info_UClass_UVoxelNode_Sleep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_Sleep), 1314971011U) },
		{ Z_Construct_UClass_UVoxelNode_RangeUnion, UVoxelNode_RangeUnion::StaticClass, TEXT("UVoxelNode_RangeUnion"), &Z_Registration_Info_UClass_UVoxelNode_RangeUnion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RangeUnion), 2056186775U) },
		{ Z_Construct_UClass_UVoxelNode_IsSingleBool, UVoxelNode_IsSingleBool::StaticClass, TEXT("UVoxelNode_IsSingleBool"), &Z_Registration_Info_UClass_UVoxelNode_IsSingleBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IsSingleBool), 3743654210U) },
		{ Z_Construct_UClass_UVoxelNode_GetRangeAnalysis, UVoxelNode_GetRangeAnalysis::StaticClass, TEXT("UVoxelNode_GetRangeAnalysis"), &Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetRangeAnalysis), 3466928098U) },
		{ Z_Construct_UClass_UVoxelNode_SmartMin, UVoxelNode_SmartMin::StaticClass, TEXT("UVoxelNode_SmartMin"), &Z_Registration_Info_UClass_UVoxelNode_SmartMin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SmartMin), 66598453U) },
		{ Z_Construct_UClass_UVoxelNode_SmartMax, UVoxelNode_SmartMax::StaticClass, TEXT("UVoxelNode_SmartMax"), &Z_Registration_Info_UClass_UVoxelNode_SmartMax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SmartMax), 2259879365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h_4097113989(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
