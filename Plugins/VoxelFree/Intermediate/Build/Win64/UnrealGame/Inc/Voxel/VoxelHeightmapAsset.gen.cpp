// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelAssets/VoxelHeightmapAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapAsset() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig;
	static UEnum* EVoxelHeightmapImporterMaterialConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelHeightmapImporterMaterialConfig"));
		}
		return Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelHeightmapImporterMaterialConfig>()
	{
		return EVoxelHeightmapImporterMaterialConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enumerators[] = {
		{ "EVoxelHeightmapImporterMaterialConfig::RGB", (int64)EVoxelHeightmapImporterMaterialConfig::RGB },
		{ "EVoxelHeightmapImporterMaterialConfig::FourWayBlend", (int64)EVoxelHeightmapImporterMaterialConfig::FourWayBlend },
		{ "EVoxelHeightmapImporterMaterialConfig::FiveWayBlend", (int64)EVoxelHeightmapImporterMaterialConfig::FiveWayBlend },
		{ "EVoxelHeightmapImporterMaterialConfig::SingleIndex", (int64)EVoxelHeightmapImporterMaterialConfig::SingleIndex },
		{ "EVoxelHeightmapImporterMaterialConfig::MultiIndex", (int64)EVoxelHeightmapImporterMaterialConfig::MultiIndex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enum_MetaDataParams[] = {
		{ "FiveWayBlend.Name", "EVoxelHeightmapImporterMaterialConfig::FiveWayBlend" },
		{ "FourWayBlend.Name", "EVoxelHeightmapImporterMaterialConfig::FourWayBlend" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "MultiIndex.Name", "EVoxelHeightmapImporterMaterialConfig::MultiIndex" },
		{ "RGB.Name", "EVoxelHeightmapImporterMaterialConfig::RGB" },
		{ "SingleIndex.Name", "EVoxelHeightmapImporterMaterialConfig::SingleIndex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelHeightmapImporterMaterialConfig",
		"EVoxelHeightmapImporterMaterialConfig",
		Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig()
	{
		if (!Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelHeightmapAsset::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelHeightmapAsset::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	void UVoxelHeightmapAsset::StaticRegisterNativesUVoxelHeightmapAsset()
	{
		UClass* Class = UVoxelHeightmapAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeight", &UVoxelHeightmapAsset::execGetHeight },
			{ "GetWidth", &UVoxelHeightmapAsset::execGetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics
	{
		struct VoxelHeightmapAsset_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHeightmapAsset_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Heightmap Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelHeightmapAsset, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::VoxelHeightmapAsset_eventGetHeight_Parms), Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics
	{
		struct VoxelHeightmapAsset_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHeightmapAsset_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Heightmap Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelHeightmapAsset, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::VoxelHeightmapAsset_eventGetWidth_Parms), Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHeightmapAsset);
	UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister()
	{
		return UVoxelHeightmapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteExtent_MetaData[];
#endif
		static void NewProp_bInfiniteExtent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigFlag_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialConfigFlag;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbnailSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbnailSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelHeightmapAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight, "GetHeight" }, // 1657830606
		{ &Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth, "GetWidth" }, // 2939691504
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset that holds 2D information.\n */" },
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Asset that holds 2D information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// XY Scale of the heightmap\n" },
		{ "DisplayName", "XY Scale" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "XY Scale of the heightmap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "Comment", "// Height multiplier\n" },
		{ "DisplayName", "Z Scale" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Height multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, HeightScale), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "Comment", "// In voxels, applied after Z Scale\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "In voxels, applied after Z Scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, HeightOffset), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_MetaData[] = {
		{ "Category", "Heightmap Generator Settings" },
		{ "Comment", "// If false, will have meshes on the sides. If true, will extend infinitely.\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "If false, will have meshes on the sides. If true, will extend infinitely." },
	};
#endif
	void Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_SetBit(void* Obj)
	{
		((UVoxelHeightmapAsset*)Obj)->bInfiniteExtent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent = { "bInfiniteExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelHeightmapAsset), &Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness_MetaData[] = {
		{ "Category", "Heightmap Generator Settings" },
		{ "Comment", "// Additional thickness in voxels below the heightmap\n" },
		{ "EditCondition", "!bInfiniteExtent" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Additional thickness in voxels below the heightmap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness = { "AdditionalThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, AdditionalThickness), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Heightmap Generator Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// Higher precision can improve render quality, but voxel values are lower (hardness not constant)\n// Set this to the max delta height you can have between 2 adjacent pixels, in voxels\n// Need to be increased if the shadows/normals aren't nice, and decreased if the edit speed isn't coherent\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Higher precision can improve render quality, but voxel values are lower (hardness not constant)\nSet this to the max delta height you can have between 2 adjacent pixels, in voxels\nNeed to be increased if the shadows/normals aren't nice, and decreased if the edit speed isn't coherent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Precision), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Heightmap Info" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Width), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Heightmap Info" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, VoxelCustomVersion), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag = { "MaterialConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, MaterialConfigFlag), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_Inner = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0040000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, ThumbnailSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::ClassParams = {
		&UVoxelHeightmapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAsset()
	{
		if (!Z_Registration_Info_UClass_UVoxelHeightmapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAsset.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHeightmapAsset.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelHeightmapAsset>()
	{
		return UVoxelHeightmapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelHeightmapAsset)
	void UVoxelHeightmapAssetFloat::StaticRegisterNativesUVoxelHeightmapAssetFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHeightmapAssetFloat);
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister()
	{
		return UVoxelHeightmapAssetFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelHeightmapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::ClassParams = {
		&UVoxelHeightmapAssetFloat::StaticClass,
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
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat()
	{
		if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelHeightmapAssetFloat>()
	{
		return UVoxelHeightmapAssetFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetFloat);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos;
class UScriptStruct* FVoxelHeightmapImporterWeightmapInfos::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelHeightmapImporterWeightmapInfos"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelHeightmapImporterWeightmapInfos>()
{
	return FVoxelHeightmapImporterWeightmapInfos::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelHeightmapImporterWeightmapInfos>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The weightmap\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "The weightmap" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_MetaData)) }; // 1494340730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelHeightmapImporterWeightmapInfos",
		sizeof(FVoxelHeightmapImporterWeightmapInfos),
		alignof(FVoxelHeightmapImporterWeightmapInfos),
		Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos.InnerSingleton, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos.InnerSingleton;
	}
	void UVoxelHeightmapAssetUINT16::StaticRegisterNativesUVoxelHeightmapAssetUINT16()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHeightmapAssetUINT16);
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister()
	{
		return UVoxelHeightmapAssetUINT16::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Heightmap_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Heightmap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Weightmaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weightmaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weightmaps;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapsInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapsInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapsInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelHeightmapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, Heightmap), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_MetaData)) }; // 3015711227
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_Inner = { "Weightmaps", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps = { "Weightmaps", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, Weightmaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_Inner = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, METADATA_PARAMS(nullptr, 0) }; // 1027243463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, WeightmapsInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_MetaData)) }; // 1027243463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetUINT16>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::ClassParams = {
		&UVoxelHeightmapAssetUINT16::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16()
	{
		if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelHeightmapAssetUINT16>()
	{
		return UVoxelHeightmapAssetUINT16::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetUINT16);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::EnumInfo[] = {
		{ EVoxelHeightmapImporterMaterialConfig_StaticEnum, TEXT("EVoxelHeightmapImporterMaterialConfig"), &Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3015711227U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::ScriptStructInfo[] = {
		{ FVoxelHeightmapImporterWeightmapInfos::StaticStruct, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewStructOps, TEXT("VoxelHeightmapImporterWeightmapInfos"), &Z_Registration_Info_UScriptStruct_VoxelHeightmapImporterWeightmapInfos, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelHeightmapImporterWeightmapInfos), 1027243463U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHeightmapAsset, UVoxelHeightmapAsset::StaticClass, TEXT("UVoxelHeightmapAsset"), &Z_Registration_Info_UClass_UVoxelHeightmapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAsset), 377385802U) },
		{ Z_Construct_UClass_UVoxelHeightmapAssetFloat, UVoxelHeightmapAssetFloat::StaticClass, TEXT("UVoxelHeightmapAssetFloat"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetFloat), 2557121060U) },
		{ Z_Construct_UClass_UVoxelHeightmapAssetUINT16, UVoxelHeightmapAssetUINT16::StaticClass, TEXT("UVoxelHeightmapAssetUINT16"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetUINT16), 1896141140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_3670164599(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
