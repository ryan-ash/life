// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphSchema() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphSchema_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewNode>()
{
	return FVoxelGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelNodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VoxelNodeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass = { "VoxelNodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewNode, VoxelNodeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewNode",
		sizeof(FVoxelGraphSchemaAction_NewNode),
		alignof(FVoxelGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewMacroNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewMacroNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewMacroNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewMacroNode"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewMacroNode>()
{
	return FVoxelGraphSchemaAction_NewMacroNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Macro;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewMacroNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewMacroNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewMacroNode",
		sizeof(FVoxelGraphSchemaAction_NewMacroNode),
		alignof(FVoxelGraphSchemaAction_NewMacroNode),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewLocalVariableDeclaration cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration;
class UScriptStruct* FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>()
{
	return FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PinCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PinCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName = { "DefaultName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableDeclaration, DefaultName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableDeclaration, PinCategory), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_MetaData)) }; // 3800992571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewLocalVariableDeclaration",
		sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration),
		alignof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewLocalVariableUsage>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewLocalVariableUsage cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage;
class UScriptStruct* FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewLocalVariableUsage>()
{
	return FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Declaration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableUsage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableUsage, Declaration), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewLocalVariableUsage",
		sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage),
		alignof(FVoxelGraphSchemaAction_NewLocalVariableUsage),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewSetterNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewSetterNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewSetterNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewSetterNode"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewSetterNode>()
{
	return FVoxelGraphSchemaAction_NewSetterNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewSetterNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewSetterNode, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewSetterNode",
		sizeof(FVoxelGraphSchemaAction_NewSetterNode),
		alignof(FVoxelGraphSchemaAction_NewSetterNode),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewKnotNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewKnotNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewKnotNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewKnotNode"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewKnotNode>()
{
	return FVoxelGraphSchemaAction_NewKnotNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewKnotNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewKnotNode",
		sizeof(FVoxelGraphSchemaAction_NewKnotNode),
		alignof(FVoxelGraphSchemaAction_NewKnotNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment;
class UScriptStruct* FVoxelGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewComment>()
{
	return FVoxelGraphSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewComment",
		sizeof(FVoxelGraphSchemaAction_NewComment),
		alignof(FVoxelGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_Paste>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_Paste cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste;
class UScriptStruct* FVoxelGraphSchemaAction_Paste::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_Paste"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste.OuterSingleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_Paste>()
{
	return FVoxelGraphSchemaAction_Paste::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_Paste>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_Paste",
		sizeof(FVoxelGraphSchemaAction_Paste),
		alignof(FVoxelGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste.InnerSingleton;
	}
	void UVoxelGraphSchema::StaticRegisterNativesUVoxelGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGraphSchema);
	UClass* Z_Construct_UClass_UVoxelGraphSchema_NoRegister()
	{
		return UVoxelGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphSchema.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphSchema_Statics::ClassParams = {
		&UVoxelGraphSchema::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UVoxelGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphSchema.OuterSingleton, Z_Construct_UClass_UVoxelGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGraphSchema.OuterSingleton;
	}
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelGraphSchema>()
	{
		return UVoxelGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphSchema);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewNode), 2503918129U) },
		{ FVoxelGraphSchemaAction_NewMacroNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewMacroNode"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewMacroNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewMacroNode), 1819380999U) },
		{ FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableDeclaration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration), 1139310306U) },
		{ FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewLocalVariableUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage), 754730061U) },
		{ FVoxelGraphSchemaAction_NewSetterNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewSetterNode"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewSetterNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewSetterNode), 415354916U) },
		{ FVoxelGraphSchemaAction_NewKnotNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewKnotNode"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewKnotNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewKnotNode), 600944763U) },
		{ FVoxelGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewComment), 1650765392U) },
		{ FVoxelGraphSchemaAction_Paste::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_Paste"), &Z_Registration_Info_UScriptStruct_VoxelGraphSchemaAction_Paste, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_Paste), 4292267989U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphSchema, UVoxelGraphSchema::StaticClass, TEXT("UVoxelGraphSchema"), &Z_Registration_Info_UClass_UVoxelGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphSchema), 3660531082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_3837623362(TEXT("/Script/VoxelGraphEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
