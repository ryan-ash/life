// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelLocalVariables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLocalVariables() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory();
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableUsage_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableUsage();
// End Cross Module References
	void UVoxelLocalVariableBase::StaticRegisterNativesUVoxelLocalVariableBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelLocalVariableBase);
	UClass* Z_Construct_UClass_UVoxelLocalVariableBase_NoRegister()
	{
		return UVoxelLocalVariableBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLocalVariableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLocalVariableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLocalVariableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableBase_Statics::ClassParams = {
		&UVoxelLocalVariableBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLocalVariableBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelLocalVariableBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLocalVariableBase.OuterSingleton, Z_Construct_UClass_UVoxelLocalVariableBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelLocalVariableBase.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelLocalVariableBase>()
	{
		return UVoxelLocalVariableBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableBase);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory;
	static UEnum* EVoxelPortalNodePinCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelPortalNodePinCategory"));
		}
		return Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.OuterSingleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPortalNodePinCategory>()
	{
		return EVoxelPortalNodePinCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enumerators[] = {
		{ "EVoxelPortalNodePinCategory::Boolean", (int64)EVoxelPortalNodePinCategory::Boolean },
		{ "EVoxelPortalNodePinCategory::Int", (int64)EVoxelPortalNodePinCategory::Int },
		{ "EVoxelPortalNodePinCategory::Float", (int64)EVoxelPortalNodePinCategory::Float },
		{ "EVoxelPortalNodePinCategory::Material", (int64)EVoxelPortalNodePinCategory::Material },
		{ "EVoxelPortalNodePinCategory::Color", (int64)EVoxelPortalNodePinCategory::Color },
		{ "EVoxelPortalNodePinCategory::Seed", (int64)EVoxelPortalNodePinCategory::Seed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enum_MetaDataParams[] = {
		{ "Boolean.Name", "EVoxelPortalNodePinCategory::Boolean" },
		{ "Color.Name", "EVoxelPortalNodePinCategory::Color" },
		{ "Float.Name", "EVoxelPortalNodePinCategory::Float" },
		{ "Int.Name", "EVoxelPortalNodePinCategory::Int" },
		{ "Material.Name", "EVoxelPortalNodePinCategory::Material" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "Seed.Name", "EVoxelPortalNodePinCategory::Seed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		"EVoxelPortalNodePinCategory",
		"EVoxelPortalNodePinCategory",
		Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory()
	{
		if (!Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector;
class UScriptStruct* FVoxelPortalNodeSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelPortalNodeSelector"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector.OuterSingleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelPortalNodeSelector>()
{
	return FVoxelPortalNodeSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPortalNodeSelector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPortalNodeSelector, Input), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelPortalNodeSelector",
		sizeof(FVoxelPortalNodeSelector),
		alignof(FVoxelPortalNodeSelector),
		Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector.InnerSingleton;
	}
	void UVoxelLocalVariableDeclaration::StaticRegisterNativesUVoxelLocalVariableDeclaration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelLocalVariableDeclaration);
	UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister()
	{
		return UVoxelLocalVariableDeclaration::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelLocalVariableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, Category), Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_MetaData)) }; // 98546129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableDeclaration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::ClassParams = {
		&UVoxelLocalVariableDeclaration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration()
	{
		if (!Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.OuterSingleton, Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelLocalVariableDeclaration>()
	{
		return UVoxelLocalVariableDeclaration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableDeclaration);
	void UVoxelLocalVariableUsage::StaticRegisterNativesUVoxelLocalVariableUsage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelLocalVariableUsage);
	UClass* Z_Construct_UClass_UVoxelLocalVariableUsage_NoRegister()
	{
		return UVoxelLocalVariableUsage::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLocalVariableUsage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Declaration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeclarationGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeclarationGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelLocalVariableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, Selector_DEPRECATED), Z_Construct_UScriptStruct_FVoxelPortalNodeSelector, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector_MetaData)) }; // 2976751845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "Comment", "// The declaration this node is linked to\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "ToolTip", "The declaration this node is linked to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, Declaration), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid = { "DeclarationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, DeclarationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableUsage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::ClassParams = {
		&UVoxelLocalVariableUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLocalVariableUsage()
	{
		if (!Z_Registration_Info_UClass_UVoxelLocalVariableUsage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLocalVariableUsage.OuterSingleton, Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelLocalVariableUsage.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelLocalVariableUsage>()
	{
		return UVoxelLocalVariableUsage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableUsage);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::EnumInfo[] = {
		{ EVoxelPortalNodePinCategory_StaticEnum, TEXT("EVoxelPortalNodePinCategory"), &Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 98546129U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::ScriptStructInfo[] = {
		{ FVoxelPortalNodeSelector::StaticStruct, Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewStructOps, TEXT("VoxelPortalNodeSelector"), &Z_Registration_Info_UScriptStruct_VoxelPortalNodeSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPortalNodeSelector), 2976751845U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLocalVariableBase, UVoxelLocalVariableBase::StaticClass, TEXT("UVoxelLocalVariableBase"), &Z_Registration_Info_UClass_UVoxelLocalVariableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLocalVariableBase), 4129592003U) },
		{ Z_Construct_UClass_UVoxelLocalVariableDeclaration, UVoxelLocalVariableDeclaration::StaticClass, TEXT("UVoxelLocalVariableDeclaration"), &Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLocalVariableDeclaration), 73654463U) },
		{ Z_Construct_UClass_UVoxelLocalVariableUsage, UVoxelLocalVariableUsage::StaticClass, TEXT("UVoxelLocalVariableUsage"), &Z_Registration_Info_UClass_UVoxelLocalVariableUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLocalVariableUsage), 815789812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_424040057(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
