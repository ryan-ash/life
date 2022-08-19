// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGraphMacro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphMacro() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphMacroPin();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin;
class UScriptStruct* FVoxelGraphMacroPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphMacroPin, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelGraphMacroPin"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin.OuterSingleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelGraphMacroPin>()
{
	return FVoxelGraphMacroPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomDefaultValue_MetaData[];
#endif
		static void NewProp_bCustomDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphMacroPin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, Category), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_MetaData)) }; // 3800992571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditCondition", "bCustomDefaultValue" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_SetBit(void* Obj)
	{
		((FVoxelGraphMacroPin*)Obj)->bCustomDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue = { "bCustomDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelGraphMacroPin), &Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelGraphMacroPin",
		sizeof(FVoxelGraphMacroPin),
		alignof(FVoxelGraphMacroPin),
		Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphMacroPin()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin.InnerSingleton;
	}
	void UVoxelGraphMacroInputOutputNode::StaticRegisterNativesUVoxelGraphMacroInputOutputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphMacroInputOutputNode);
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister()
	{
		return UVoxelGraphMacroInputOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Macro;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGraphMacroPin, METADATA_PARAMS(nullptr, 0) }; // 738221752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacroInputOutputNode, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_MetaData)) }; // 738221752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacroInputOutputNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroInputOutputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::ClassParams = {
		&UVoxelGraphMacroInputOutputNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroInputOutputNode>()
	{
		return UVoxelGraphMacroInputOutputNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroInputOutputNode);
	void UVoxelGraphMacroInputNode::StaticRegisterNativesUVoxelGraphMacroInputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphMacroInputNode);
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister()
	{
		return UVoxelGraphMacroInputNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphMacroInputOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Input" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroInputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::ClassParams = {
		&UVoxelGraphMacroInputNode::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroInputNode>()
	{
		return UVoxelGraphMacroInputNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroInputNode);
	void UVoxelGraphMacroOutputNode::StaticRegisterNativesUVoxelGraphMacroOutputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphMacroOutputNode);
	UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister()
	{
		return UVoxelGraphMacroOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphMacroInputOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroOutputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::ClassParams = {
		&UVoxelGraphMacroOutputNode::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroOutputNode>()
	{
		return UVoxelGraphMacroOutputNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroOutputNode);
	void UVoxelGraphMacro::StaticRegisterNativesUVoxelGraphMacro()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphMacro);
	UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister()
	{
		return UVoxelGraphMacro::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInContextMenu_MetaData[];
#endif
		static void NewProp_bShowInContextMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInContextMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVectorOnlyNode_MetaData[];
#endif
		static void NewProp_bVectorOnlyNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVectorOnlyNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A graph macro\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ToolTip", "A graph macro" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "Comment", "// Shift+Enter for new line\n" },
		{ "DisplayName", "Tooltip (Shift+Enter for new line)" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Shift+Enter for new line" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, Tooltip), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, Keywords), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "Comment", "// If empty the Macro Nodes category is used\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ToolTip", "If empty the Macro Nodes category is used" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory = { "CustomCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, CustomCategory), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "Comment", "// If empty the asset name is used\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ToolTip", "If empty the asset name is used" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, CustomName), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_SetBit(void* Obj)
	{
		((UVoxelGraphMacro*)Obj)->bShowInContextMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu = { "bShowInContextMenu", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphMacro), &Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_SetBit(void* Obj)
	{
		((UVoxelGraphMacro*)Obj)->bVectorOnlyNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode = { "bVectorOnlyNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphMacro), &Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, InputNode), Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode = { "OutputNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, OutputNode), Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacro>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacro_Statics::ClassParams = {
		&UVoxelGraphMacro::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacro()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphMacro.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacro.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacro_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphMacro.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacro>()
	{
		return UVoxelGraphMacro::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacro);
	void UVoxelGraphMacroNode::StaticRegisterNativesUVoxelGraphMacroNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphMacroNode);
	UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister()
	{
		return UVoxelGraphMacroNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Macro;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacroNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroNode_Statics::ClassParams = {
		&UVoxelGraphMacroNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphMacroNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphMacroNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroNode>()
	{
		return UVoxelGraphMacroNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroNode);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGraphMacroPin::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewStructOps, TEXT("VoxelGraphMacroPin"), &Z_Registration_Info_UScriptStruct_VoxelGraphMacroPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphMacroPin), 738221752U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphMacroInputOutputNode, UVoxelGraphMacroInputOutputNode::StaticClass, TEXT("UVoxelGraphMacroInputOutputNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroInputOutputNode), 1694668250U) },
		{ Z_Construct_UClass_UVoxelGraphMacroInputNode, UVoxelGraphMacroInputNode::StaticClass, TEXT("UVoxelGraphMacroInputNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroInputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroInputNode), 4282308767U) },
		{ Z_Construct_UClass_UVoxelGraphMacroOutputNode, UVoxelGraphMacroOutputNode::StaticClass, TEXT("UVoxelGraphMacroOutputNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroOutputNode), 3007400506U) },
		{ Z_Construct_UClass_UVoxelGraphMacro, UVoxelGraphMacro::StaticClass, TEXT("UVoxelGraphMacro"), &Z_Registration_Info_UClass_UVoxelGraphMacro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacro), 584195100U) },
		{ Z_Construct_UClass_UVoxelGraphMacroNode, UVoxelGraphMacroNode::StaticClass, TEXT("UVoxelGraphMacroNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroNode), 1672010131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_701324090(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
