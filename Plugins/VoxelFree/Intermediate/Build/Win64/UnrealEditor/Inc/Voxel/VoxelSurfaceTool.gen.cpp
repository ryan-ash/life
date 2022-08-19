// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSurfaceTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceTool() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType;
	static UEnum* EVoxelSurfaceToolMaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSurfaceToolMaskType"));
		}
		return Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSurfaceToolMaskType>()
	{
		return EVoxelSurfaceToolMaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enumerators[] = {
		{ "EVoxelSurfaceToolMaskType::Texture", (int64)EVoxelSurfaceToolMaskType::Texture },
		{ "EVoxelSurfaceToolMaskType::Generator", (int64)EVoxelSurfaceToolMaskType::Generator },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Generator.Name", "EVoxelSurfaceToolMaskType::Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "Texture.Name", "EVoxelSurfaceToolMaskType::Texture" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelSurfaceToolMaskType",
		"EVoxelSurfaceToolMaskType",
		Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask;
class UScriptStruct* FVoxelSurfaceToolMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceToolMask"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceToolMask>()
{
	return FVoxelSurfaceToolMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SeedsToRandomize_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedsToRandomize_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SeedsToRandomize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleWithBrushSize_MetaData[];
#endif
		static void NewProp_bScaleWithBrushSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleWithBrushSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorDebugTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorDebugTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceToolMask>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Type), Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_MetaData)) }; // 1372146401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Mask|Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Mask|Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_MetaData)) }; // 1494340730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator_MetaData)) }; // 3987947468
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_Inner = { "SeedsToRandomize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize = { "SeedsToRandomize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, SeedsToRandomize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_SetBit(void* Obj)
	{
		((FVoxelSurfaceToolMask*)Obj)->bScaleWithBrushSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize = { "bScaleWithBrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSurfaceToolMask), &Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture = { "GeneratorDebugTexture", nullptr, (EPropertyFlags)0x0010040000022015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, GeneratorDebugTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Mask" },
		{ "Comment", "// ScaleY/ScaleX. MaskScale = ScaleX\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "ScaleY/ScaleX. MaskScale = ScaleX" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceToolMask",
		sizeof(FVoxelSurfaceToolMask),
		alignof(FVoxelSurfaceToolMask),
		Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask.InnerSingleton;
	}
	void UVoxelSurfaceTool::StaticRegisterNativesUVoxelSurfaceTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSurfaceTool);
	UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister()
	{
		return UVoxelSurfaceTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSurfaceTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[];
#endif
		static void NewProp_bSculpt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SculptStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SculptStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateMaterials_MetaData[];
#endif
		static void NewProp_bPropagateMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[];
#endif
		static void NewProp_bPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b2DBrush_MetaData[];
#endif
		static void NewProp_b2DBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_b2DBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMovementAffectsStrength_MetaData[];
#endif
		static void NewProp_bMovementAffectsStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementAffectsStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToMovement_MetaData[];
#endif
		static void NewProp_bAlignToMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModulateStrengthByDeltaTime_MetaData[];
#endif
		static void NewProp_bModulateStrengthByDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateStrengthByDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFalloff_MetaData[];
#endif
		static void NewProp_bEnableFalloff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFalloff;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMask_MetaData[];
#endif
		static void NewProp_bUseMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskGeneratorCache_RenderTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskGeneratorCache_RenderTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSurfaceTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bSculpt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "Comment", "// Relative to brush size\n" },
		{ "EditCondition", "bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Relative to brush size" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength = { "SculptStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, SculptStrength), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "Comment", "// If true, will propagate materials so that the surface stays correctly painted.\n// Disabled in 2D mode or if Paint is enabled\n" },
		{ "EditCondition", "!bPaint && !b2DBrush" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, will propagate materials so that the surface stays correctly painted.\nDisabled in 2D mode or if Paint is enabled" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bPropagateMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials = { "bPropagateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength = { "PaintStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, PaintStrength), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Will only affect the topmost voxels\n" },
		{ "DisplayName", "2D Brush" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Will only affect the topmost voxels" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->b2DBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush = { "b2DBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, sculpt/paint strength will be modulated by the distance the mouse travels\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, sculpt/paint strength will be modulated by the distance the mouse travels" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bMovementAffectsStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength = { "bMovementAffectsStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to the radius\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Stride), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bAlignToMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement = { "bAlignToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If false, align the tool to the mouse movement\n" },
		{ "EditCondition", "!bAlignToMovement" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If false, align the tool to the mouse movement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection = { "FixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, FixedDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, strength will be modulated by the time since the last edit so that the results don't depend on the framerate\n// Automatically turned off if Stride > 0, or if paint strength = 1\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, strength will be modulated by the time since the last edit so that the results don't depend on the framerate\nAutomatically turned off if Stride > 0, or if paint strength = 1" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bModulateStrengthByDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime = { "bModulateStrengthByDeltaTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bEnableFalloff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff = { "bEnableFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_MetaData)) }; // 3165405943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Falloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bUseMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask = { "bUseMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask_MetaData[] = {
		{ "Category", "Mask" },
		{ "EditCondition", "bUseMask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Mask), Z_Construct_UScriptStruct_FVoxelSurfaceToolMask, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask_MetaData)) }; // 2311706831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture = { "MaskGeneratorCache_RenderTexture", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, MaskGeneratorCache_RenderTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSurfaceTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::ClassParams = {
		&UVoxelSurfaceTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSurfaceTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelSurfaceTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSurfaceTool.OuterSingleton, Z_Construct_UClass_UVoxelSurfaceTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSurfaceTool.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSurfaceTool>()
	{
		return UVoxelSurfaceTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceTool);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::EnumInfo[] = {
		{ EVoxelSurfaceToolMaskType_StaticEnum, TEXT("EVoxelSurfaceToolMaskType"), &Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1372146401U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::ScriptStructInfo[] = {
		{ FVoxelSurfaceToolMask::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewStructOps, TEXT("VoxelSurfaceToolMask"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceToolMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceToolMask), 2311706831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSurfaceTool, UVoxelSurfaceTool::StaticClass, TEXT("UVoxelSurfaceTool"), &Z_Registration_Info_UClass_UVoxelSurfaceTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSurfaceTool), 1988166230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_1240226477(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
