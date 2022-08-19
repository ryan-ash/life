// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPaintMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPaintMaterial() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel;
class UScriptStruct* FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterial_MaterialCollectionChannel"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterial_MaterialCollectionChannel>()
{
	return FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterial_MaterialCollectionChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial_MaterialCollectionChannel, Channel), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterial_MaterialCollectionChannel",
		sizeof(FVoxelPaintMaterial_MaterialCollectionChannel),
		alignof(FVoxelPaintMaterial_MaterialCollectionChannel),
		Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelPaintMaterialType;
	static UEnum* EVoxelPaintMaterialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelPaintMaterialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelPaintMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelPaintMaterialType"));
		}
		return Z_Registration_Info_UEnum_EVoxelPaintMaterialType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelPaintMaterialType>()
	{
		return EVoxelPaintMaterialType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enumerators[] = {
		{ "EVoxelPaintMaterialType::Color", (int64)EVoxelPaintMaterialType::Color },
		{ "EVoxelPaintMaterialType::FiveWayBlend", (int64)EVoxelPaintMaterialType::FiveWayBlend },
		{ "EVoxelPaintMaterialType::SingleIndex", (int64)EVoxelPaintMaterialType::SingleIndex },
		{ "EVoxelPaintMaterialType::MultiIndex", (int64)EVoxelPaintMaterialType::MultiIndex },
		{ "EVoxelPaintMaterialType::MultiIndexWetness", (int64)EVoxelPaintMaterialType::MultiIndexWetness },
		{ "EVoxelPaintMaterialType::MultiIndexRaw", (int64)EVoxelPaintMaterialType::MultiIndexRaw },
		{ "EVoxelPaintMaterialType::UV", (int64)EVoxelPaintMaterialType::UV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.Name", "EVoxelPaintMaterialType::Color" },
		{ "FiveWayBlend.Name", "EVoxelPaintMaterialType::FiveWayBlend" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "MultiIndex.Name", "EVoxelPaintMaterialType::MultiIndex" },
		{ "MultiIndexRaw.Name", "EVoxelPaintMaterialType::MultiIndexRaw" },
		{ "MultiIndexWetness.Name", "EVoxelPaintMaterialType::MultiIndexWetness" },
		{ "SingleIndex.Name", "EVoxelPaintMaterialType::SingleIndex" },
		{ "UV.Name", "EVoxelPaintMaterialType::UV" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelPaintMaterialType",
		"EVoxelPaintMaterialType",
		Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelPaintMaterialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelPaintMaterialType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelPaintMaterialType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor;
class UScriptStruct* FVoxelPaintMaterialColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialColor"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialColor>()
{
	return FVoxelPaintMaterialColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinearColor_MetaData[];
#endif
		static void NewProp_bUseLinearColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintR_MetaData[];
#endif
		static void NewProp_bPaintR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintG_MetaData[];
#endif
		static void NewProp_bPaintG_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintB_MetaData[];
#endif
		static void NewProp_bPaintB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintA_MetaData[];
#endif
		static void NewProp_bPaintA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Set to true if you want to use the unreal color picker\n// Set to false if you want to set the bytes manually\n//\n// The unreal color picker will write linear colors to LinearColor, and sRGB colors to Color\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "Set to true if you want to use the unreal color picker\nSet to false if you want to set the bytes manually\n\nThe unreal color picker will write linear colors to LinearColor, and sRGB colors to Color" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bUseLinearColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor = { "bUseLinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialColor, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialColor, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR = { "bPaintR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintG = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG = { "bPaintG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB = { "bPaintB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA = { "bPaintA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialColor",
		sizeof(FVoxelPaintMaterialColor),
		alignof(FVoxelPaintMaterialColor),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend;
class UScriptStruct* FVoxelPaintMaterialFiveWayBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialFiveWayBlend"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialFiveWayBlend>()
{
	return FVoxelPaintMaterialFiveWayBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockedChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFourWayBlend_MetaData[];
#endif
		static void NewProp_bFourWayBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFourWayBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialFiveWayBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// Between 0 and 4. 1,2,3,4 => R,G,B,A. 0 => material displayed by default\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "Between 0 and 4. 1,2,3,4 => R,G,B,A. 0 => material displayed by default" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_Inner = { "LockedChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// These channels will have their strength locked, and will stay the same\n// Useful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "These channels will have their strength locked, and will stay the same\nUseful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels = { "LockedChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, LockedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will ignore Alpha\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "If true, will ignore Alpha" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialFiveWayBlend*)Obj)->bFourWayBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend = { "bFourWayBlend", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialFiveWayBlend), &Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialFiveWayBlend",
		sizeof(FVoxelPaintMaterialFiveWayBlend),
		alignof(FVoxelPaintMaterialFiveWayBlend),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex;
class UScriptStruct* FVoxelPaintMaterialSingleIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialSingleIndex"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialSingleIndex>()
{
	return FVoxelPaintMaterialSingleIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialSingleIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialSingleIndex, Channel), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel_MetaData)) }; // 3097206650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialSingleIndex",
		sizeof(FVoxelPaintMaterialSingleIndex),
		alignof(FVoxelPaintMaterialSingleIndex),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex;
class UScriptStruct* FVoxelPaintMaterialMultiIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndex"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialMultiIndex>()
{
	return FVoxelPaintMaterialMultiIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, Channel), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel_MetaData)) }; // 3097206650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_Inner = { "LockedChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(nullptr, 0) }; // 3097206650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// These channels will have their strength locked, and will stay the same\n// Useful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "These channels will have their strength locked, and will stay the same\nUseful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels = { "LockedChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, LockedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_MetaData)) }; // 3097206650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialMultiIndex",
		sizeof(FVoxelPaintMaterialMultiIndex),
		alignof(FVoxelPaintMaterialMultiIndex),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness;
class UScriptStruct* FVoxelPaintMaterialMultiIndexWetness::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndexWetness"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialMultiIndexWetness>()
{
	return FVoxelPaintMaterialMultiIndexWetness::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexWetness>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexWetness, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialMultiIndexWetness",
		sizeof(FVoxelPaintMaterialMultiIndexWetness),
		alignof(FVoxelPaintMaterialMultiIndexWetness),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw;
class UScriptStruct* FVoxelPaintMaterialMultiIndexRaw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndexRaw"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialMultiIndexRaw>()
{
	return FVoxelPaintMaterialMultiIndexRaw::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexRaw>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0 = { "Channel0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel0), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0_MetaData)) }; // 3097206650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0 = { "Strength0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength0), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1 = { "Channel1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel1), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1_MetaData)) }; // 3097206650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1 = { "Strength1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength1), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2 = { "Channel2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel2), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2_MetaData)) }; // 3097206650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2 = { "Strength2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength2), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3 = { "Channel3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel3), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3_MetaData)) }; // 3097206650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3 = { "Strength3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength3), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialMultiIndexRaw",
		sizeof(FVoxelPaintMaterialMultiIndexRaw),
		alignof(FVoxelPaintMaterialMultiIndexRaw),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV;
class UScriptStruct* FVoxelPaintMaterialUV::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialUV"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialUV>()
{
	return FVoxelPaintMaterialUV::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintU_MetaData[];
#endif
		static void NewProp_bPaintU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintV_MetaData[];
#endif
		static void NewProp_bPaintV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialUV>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialUV, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialUV, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialUV*)Obj)->bPaintU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU = { "bPaintU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialUV), &Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialUV*)Obj)->bPaintV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV = { "bPaintV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialUV), &Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialUV",
		sizeof(FVoxelPaintMaterialUV),
		alignof(FVoxelPaintMaterialUV),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelPaintMaterial;
class UScriptStruct* FVoxelPaintMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelPaintMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelPaintMaterial.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterial>()
{
	return FVoxelPaintMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictType_MetaData[];
#endif
		static void NewProp_bRestrictType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfigToRestrictTo_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigToRestrictTo_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfigToRestrictTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterialCollection;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndexWetness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexWetness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndexRaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexRaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FiveWayBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterial>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_SetBit(void* Obj)
	{
		((FVoxelPaintMaterial*)Obj)->bRestrictType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType = { "bRestrictType", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterial), &Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo = { "MaterialConfigToRestrictTo", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MaterialConfigToRestrictTo), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_MetaData)) }; // 4293812930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection = { "PreviewMaterialCollection", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, PreviewMaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, Type), Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_MetaData)) }; // 1784612551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, Color), Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color_MetaData)) }; // 119856466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex = { "SingleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, SingleIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex_MetaData)) }; // 1259463587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex = { "MultiIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex_MetaData)) }; // 3175387577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness = { "MultiIndexWetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndexWetness), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness_MetaData)) }; // 3947543923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw = { "MultiIndexRaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndexRaw), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw_MetaData)) }; // 2030109324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, UV), Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV_MetaData)) }; // 2968166801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend = { "FiveWayBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, FiveWayBlend), Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend_MetaData)) }; // 237788936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterial",
		sizeof(FVoxelPaintMaterial),
		alignof(FVoxelPaintMaterial),
		Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelPaintMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelPaintMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelPaintMaterial.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics::EnumInfo[] = {
		{ EVoxelPaintMaterialType_StaticEnum, TEXT("EVoxelPaintMaterialType"), &Z_Registration_Info_UEnum_EVoxelPaintMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1784612551U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics::ScriptStructInfo[] = {
		{ FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewStructOps, TEXT("VoxelPaintMaterial_MaterialCollectionChannel"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterial_MaterialCollectionChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterial_MaterialCollectionChannel), 3097206650U) },
		{ FVoxelPaintMaterialColor::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewStructOps, TEXT("VoxelPaintMaterialColor"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialColor), 119856466U) },
		{ FVoxelPaintMaterialFiveWayBlend::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewStructOps, TEXT("VoxelPaintMaterialFiveWayBlend"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialFiveWayBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialFiveWayBlend), 237788936U) },
		{ FVoxelPaintMaterialSingleIndex::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewStructOps, TEXT("VoxelPaintMaterialSingleIndex"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialSingleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialSingleIndex), 1259463587U) },
		{ FVoxelPaintMaterialMultiIndex::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewStructOps, TEXT("VoxelPaintMaterialMultiIndex"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialMultiIndex), 3175387577U) },
		{ FVoxelPaintMaterialMultiIndexWetness::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewStructOps, TEXT("VoxelPaintMaterialMultiIndexWetness"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexWetness, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialMultiIndexWetness), 3947543923U) },
		{ FVoxelPaintMaterialMultiIndexRaw::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewStructOps, TEXT("VoxelPaintMaterialMultiIndexRaw"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialMultiIndexRaw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialMultiIndexRaw), 2030109324U) },
		{ FVoxelPaintMaterialUV::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewStructOps, TEXT("VoxelPaintMaterialUV"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterialUV, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialUV), 2968166801U) },
		{ FVoxelPaintMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewStructOps, TEXT("VoxelPaintMaterial"), &Z_Registration_Info_UScriptStruct_VoxelPaintMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterial), 1395000622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_1496591016(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
