// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorParameters() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType;
	static UEnum* EVoxelGeneratorParameterContainerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorParameterContainerType"));
		}
		return Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterContainerType>()
	{
		return EVoxelGeneratorParameterContainerType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enumerators[] = {
		{ "EVoxelGeneratorParameterContainerType::None", (int64)EVoxelGeneratorParameterContainerType::None },
		{ "EVoxelGeneratorParameterContainerType::Array", (int64)EVoxelGeneratorParameterContainerType::Array },
		{ "EVoxelGeneratorParameterContainerType::Set", (int64)EVoxelGeneratorParameterContainerType::Set },
		{ "EVoxelGeneratorParameterContainerType::Map", (int64)EVoxelGeneratorParameterContainerType::Map },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EVoxelGeneratorParameterContainerType::Array" },
		{ "Map.Name", "EVoxelGeneratorParameterContainerType::Map" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "None.Name", "EVoxelGeneratorParameterContainerType::None" },
		{ "Set.Name", "EVoxelGeneratorParameterContainerType::Set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelGeneratorParameterContainerType",
		"EVoxelGeneratorParameterContainerType",
		Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType;
	static UEnum* EVoxelGeneratorParameterPropertyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorParameterPropertyType"));
		}
		return Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterPropertyType>()
	{
		return EVoxelGeneratorParameterPropertyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enumerators[] = {
		{ "EVoxelGeneratorParameterPropertyType::Float", (int64)EVoxelGeneratorParameterPropertyType::Float },
		{ "EVoxelGeneratorParameterPropertyType::Int", (int64)EVoxelGeneratorParameterPropertyType::Int },
		{ "EVoxelGeneratorParameterPropertyType::Bool", (int64)EVoxelGeneratorParameterPropertyType::Bool },
		{ "EVoxelGeneratorParameterPropertyType::Object", (int64)EVoxelGeneratorParameterPropertyType::Object },
		{ "EVoxelGeneratorParameterPropertyType::Struct", (int64)EVoxelGeneratorParameterPropertyType::Struct },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EVoxelGeneratorParameterPropertyType::Bool" },
		{ "Float.Name", "EVoxelGeneratorParameterPropertyType::Float" },
		{ "Int.Name", "EVoxelGeneratorParameterPropertyType::Int" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "Object.Name", "EVoxelGeneratorParameterPropertyType::Object" },
		{ "Struct.Name", "EVoxelGeneratorParameterPropertyType::Struct" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelGeneratorParameterPropertyType",
		"EVoxelGeneratorParameterPropertyType",
		Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType;
class UScriptStruct* FVoxelGeneratorParameterTerminalType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameterTerminalType"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorParameterTerminalType>()
{
	return FVoxelGeneratorParameterTerminalType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterTerminalType>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterTerminalType, PropertyType), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_MetaData)) }; // 2581878430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterTerminalType, PropertyClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorParameterTerminalType",
		sizeof(FVoxelGeneratorParameterTerminalType),
		alignof(FVoxelGeneratorParameterTerminalType),
		Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelGeneratorParameterType>() == std::is_polymorphic<FVoxelGeneratorParameterTerminalType>(), "USTRUCT FVoxelGeneratorParameterType cannot be polymorphic unless super FVoxelGeneratorParameterTerminalType is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType;
class UScriptStruct* FVoxelGeneratorParameterType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameterType"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorParameterType>()
{
	return FVoxelGeneratorParameterType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterType>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterType, ContainerType), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_MetaData)) }; // 3689244064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "// For maps\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "ToolTip", "For maps" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterType, ValueType), Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType_MetaData)) }; // 2444257330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType,
		&NewStructOps,
		"VoxelGeneratorParameterType",
		sizeof(FVoxelGeneratorParameterType),
		alignof(FVoxelGeneratorParameterType),
		Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter;
class UScriptStruct* FVoxelGeneratorParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameter, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameter"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorParameter>()
{
	return FVoxelGeneratorParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Type), Z_Construct_UScriptStruct_FVoxelGeneratorParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type_MetaData)) }; // 3755752984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "// Not consistent with vs without editor\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "ToolTip", "Not consistent with vs without editor" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorParameter",
		sizeof(FVoxelGeneratorParameter),
		alignof(FVoxelGeneratorParameter),
		Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics::EnumInfo[] = {
		{ EVoxelGeneratorParameterContainerType_StaticEnum, TEXT("EVoxelGeneratorParameterContainerType"), &Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3689244064U) },
		{ EVoxelGeneratorParameterPropertyType_StaticEnum, TEXT("EVoxelGeneratorParameterPropertyType"), &Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2581878430U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics::ScriptStructInfo[] = {
		{ FVoxelGeneratorParameterTerminalType::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewStructOps, TEXT("VoxelGeneratorParameterTerminalType"), &Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterTerminalType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorParameterTerminalType), 2444257330U) },
		{ FVoxelGeneratorParameterType::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewStructOps, TEXT("VoxelGeneratorParameterType"), &Z_Registration_Info_UScriptStruct_VoxelGeneratorParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorParameterType), 3755752984U) },
		{ FVoxelGeneratorParameter::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewStructOps, TEXT("VoxelGeneratorParameter"), &Z_Registration_Info_UScriptStruct_VoxelGeneratorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorParameter), 1174236656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_3882987065(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
