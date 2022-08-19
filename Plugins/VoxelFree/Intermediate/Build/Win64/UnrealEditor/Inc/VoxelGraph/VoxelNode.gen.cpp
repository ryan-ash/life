// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
// End Cross Module References
	void UVoxelGraphNodeInterface::StaticRegisterNativesUVoxelGraphNodeInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphNodeInterface);
	UClass* Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister()
	{
		return UVoxelGraphNodeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphNodeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InfoMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WarningMsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg = { "InfoMsg", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, InfoMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg = { "WarningMsg", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, WarningMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNodeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::ClassParams = {
		&UVoxelGraphNodeInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphNodeInterface()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphNodeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNodeInterface.OuterSingleton, Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphNodeInterface.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphNodeInterface>()
	{
		return UVoxelGraphNodeInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNodeInterface);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPin;
class UScriptStruct* FVoxelPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPin, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelPin"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPin.OuterSingleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelPin>()
{
	return FVoxelPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PinCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PinCategory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherPinIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherPinIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherPinIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_MetaData[] = {
		{ "Comment", "// Used for macros to check that the nodes are the same\n" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
		{ "ToolTip", "Used for macros to check that the nodes are the same" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, PinCategory), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_MetaData)) }; // 3800992571
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_Inner = { "OtherNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes = { "OtherNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, OtherNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_Inner = { "OtherPinIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds = { "OtherPinIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, OtherPinIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelPin",
		sizeof(FVoxelPin),
		alignof(FVoxelPin),
		Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPin()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPin.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPin.InnerSingleton;
	}
	void UVoxelNode::StaticRegisterNativesUVoxelNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode);
	UClass* Z_Construct_UClass_UVoxelNode_NoRegister()
	{
		return UVoxelNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPins;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPinCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPinCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for VoxelNodes\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
		{ "ToolTip", "Base class for VoxelNodes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_Inner = { "InputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelPin, METADATA_PARAMS(nullptr, 0) }; // 3250359849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, InputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_MetaData)) }; // 3250359849
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelPin, METADATA_PARAMS(nullptr, 0) }; // 3250359849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_MetaData)) }; // 3250359849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, Graph), Z_Construct_UClass_UVoxelGraphGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, GraphNode), Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount = { "InputPinCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, InputPinCount), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Statics::ClassParams = {
		&UVoxelNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode.OuterSingleton, Z_Construct_UClass_UVoxelNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode>()
	{
		return UVoxelNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics::ScriptStructInfo[] = {
		{ FVoxelPin::StaticStruct, Z_Construct_UScriptStruct_FVoxelPin_Statics::NewStructOps, TEXT("VoxelPin"), &Z_Registration_Info_UScriptStruct_VoxelPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPin), 3250359849U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNodeInterface, UVoxelGraphNodeInterface::StaticClass, TEXT("UVoxelGraphNodeInterface"), &Z_Registration_Info_UClass_UVoxelGraphNodeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNodeInterface), 4269414188U) },
		{ Z_Construct_UClass_UVoxelNode, UVoxelNode::StaticClass, TEXT("UVoxelNode"), &Z_Registration_Info_UClass_UVoxelNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode), 415156702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_3135183159(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
