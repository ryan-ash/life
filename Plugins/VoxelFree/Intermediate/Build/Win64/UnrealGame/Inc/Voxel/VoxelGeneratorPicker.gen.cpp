// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorPicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorPicker() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGeneratorPickerType;
	static UEnum* EVoxelGeneratorPickerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorPickerType"));
		}
		return Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorPickerType>()
	{
		return EVoxelGeneratorPickerType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enumerators[] = {
		{ "EVoxelGeneratorPickerType::Class", (int64)EVoxelGeneratorPickerType::Class },
		{ "EVoxelGeneratorPickerType::Object", (int64)EVoxelGeneratorPickerType::Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Class.Name", "EVoxelGeneratorPickerType::Class" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
		{ "Object.Name", "EVoxelGeneratorPickerType::Object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelGeneratorPickerType",
		"EVoxelGeneratorPickerType",
		Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker;
class UScriptStruct* FVoxelGeneratorPicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorPicker, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorPicker"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorPicker>()
{
	return FVoxelGeneratorPicker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Voxel.VoxelGeneratorTools.MakeGeneratorPickerFromObject" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorPicker>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Type), Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_MetaData)) }; // 886988717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Class), Z_Construct_UClass_UVoxelGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisallowedClasses", "VoxelGraphMacro" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Object), Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorPicker",
		sizeof(FVoxelGeneratorPicker),
		alignof(FVoxelGeneratorPicker),
		Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker;
class UScriptStruct* FVoxelTransformableGeneratorPicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTransformableGeneratorPicker"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelTransformableGeneratorPicker>()
{
	return FVoxelTransformableGeneratorPicker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Voxel.VoxelGeneratorTools.MakeTransformableGeneratorPickerFromObject" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTransformableGeneratorPicker>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Type), Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_MetaData)) }; // 886988717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Class), Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisallowedClasses", "VoxelGraphMacro" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Object), Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelTransformableGeneratorPicker",
		sizeof(FVoxelTransformableGeneratorPicker),
		alignof(FVoxelTransformableGeneratorPicker),
		Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker.InnerSingleton, Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics::EnumInfo[] = {
		{ EVoxelGeneratorPickerType_StaticEnum, TEXT("EVoxelGeneratorPickerType"), &Z_Registration_Info_UEnum_EVoxelGeneratorPickerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 886988717U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGeneratorPicker::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewStructOps, TEXT("VoxelGeneratorPicker"), &Z_Registration_Info_UScriptStruct_VoxelGeneratorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorPicker), 3987947468U) },
		{ FVoxelTransformableGeneratorPicker::StaticStruct, Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewStructOps, TEXT("VoxelTransformableGeneratorPicker"), &Z_Registration_Info_UScriptStruct_VoxelTransformableGeneratorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelTransformableGeneratorPicker), 8016936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_1614143480(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
