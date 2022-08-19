// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelAssets/VoxelDataAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAsset() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDataAssetImportSource;
	static UEnum* EVoxelDataAssetImportSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataAssetImportSource"));
		}
		return Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataAssetImportSource>()
	{
		return EVoxelDataAssetImportSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enumerators[] = {
		{ "EVoxelDataAssetImportSource::None", (int64)EVoxelDataAssetImportSource::None },
		{ "EVoxelDataAssetImportSource::MagicaVox", (int64)EVoxelDataAssetImportSource::MagicaVox },
		{ "EVoxelDataAssetImportSource::RawVox", (int64)EVoxelDataAssetImportSource::RawVox },
		{ "EVoxelDataAssetImportSource::Mesh", (int64)EVoxelDataAssetImportSource::Mesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enum_MetaDataParams[] = {
		{ "MagicaVox.Name", "EVoxelDataAssetImportSource::MagicaVox" },
		{ "Mesh.Name", "EVoxelDataAssetImportSource::Mesh" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "None.Name", "EVoxelDataAssetImportSource::None" },
		{ "RawVox.Name", "EVoxelDataAssetImportSource::RawVox" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelDataAssetImportSource",
		"EVoxelDataAssetImportSource",
		Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox;
class UScriptStruct* FVoxelDataAssetImportSettings_MagicaVox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataAssetImportSettings_MagicaVox"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelDataAssetImportSettings_MagicaVox>()
{
	return FVoxelDataAssetImportSettings_MagicaVox::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePalette_MetaData[];
#endif
		static void NewProp_bUsePalette_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePalette;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataAssetImportSettings_MagicaVox>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_SetBit(void* Obj)
	{
		((FVoxelDataAssetImportSettings_MagicaVox*)Obj)->bUsePalette = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette = { "bUsePalette", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelDataAssetImportSettings_MagicaVox), &Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelDataAssetImportSettings_MagicaVox",
		sizeof(FVoxelDataAssetImportSettings_MagicaVox),
		alignof(FVoxelDataAssetImportSettings_MagicaVox),
		Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox.InnerSingleton, Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelDataAsset::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataAsset::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	void UVoxelDataAsset::StaticRegisterNativesUVoxelDataAsset()
	{
		UClass* Class = UVoxelDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBounds", &UVoxelDataAsset::execGetBounds },
			{ "GetSize", &UVoxelDataAsset::execGetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics
	{
		struct VoxelDataAsset_eventGetBounds_Parms
		{
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataAsset_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataAsset, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::VoxelDataAsset_eventGetBounds_Parms), Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataAsset_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics
	{
		struct VoxelDataAsset_eventGetSize_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataAsset_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataAsset, nullptr, "GetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::VoxelDataAsset_eventGetSize_Parms), Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataAsset_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDataAsset);
	UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister()
	{
		return UVoxelDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractiveAsset_MetaData[];
#endif
		static void NewProp_bSubtractiveAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractiveAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSizeInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UncompressedSizeInMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSizeInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressedSizeInMB;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportSettings_MagicaVox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportSettings_MagicaVox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueConfigFlag_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ValueConfigFlag;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSettingsAsDefault_MetaData[];
#endif
		static void NewProp_bUseSettingsAsDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSettingsAsDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelWorldTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorldTemplate;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDataAsset_GetBounds, "GetBounds" }, // 1976108696
		{ &Z_Construct_UFunction_UVoxelDataAsset_GetSize, "GetSize" }, // 1092910797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Data Asset stores the values of every voxel inside it\n */" },
		{ "IncludePath", "VoxelAssets/VoxelDataAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "ToolTip", "A Data Asset stores the values of every voxel inside it" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, asset can be used to make holes in the world\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "ToolTip", "If true, asset can be used to make holes in the world" },
	};
#endif
	void Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_SetBit(void* Obj)
	{
		((UVoxelDataAsset*)Obj)->bSubtractiveAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset = { "bSubtractiveAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDataAsset), &Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, PositionOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// When sampled, positions that are close to a whole number will be rounded\n// Tolerance defines the threshold\n// Automatically set to 0.1 in Cubic\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "ToolTip", "When sampled, positions that are close to a whole number will be rounded\nTolerance defines the threshold\nAutomatically set to 0.1 in Cubic" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB = { "UncompressedSizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, UncompressedSizeInMB), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB = { "CompressedSizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, CompressedSizeInMB), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Source), Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_MetaData)) }; // 3680900754
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox = { "ImportSettings_MagicaVox", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ImportSettings_MagicaVox), Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox_MetaData)) }; // 2128834761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, VoxelCustomVersion), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag = { "ValueConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ValueConfigFlag), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag = { "MaterialConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, MaterialConfigFlag), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_Inner = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0040000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ThumbnailSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "Comment", "// If true, new data assets will be created with these preview settings\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "ToolTip", "If true, new data assets will be created with these preview settings" },
	};
#endif
	void Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_SetBit(void* Obj)
	{
		((UVoxelDataAsset*)Obj)->bUseSettingsAsDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault = { "bUseSettingsAsDefault", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDataAsset), &Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate = { "VoxelWorldTemplate", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, VoxelWorldTemplate), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAsset_Statics::ClassParams = {
		&UVoxelDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAsset()
	{
		if (!Z_Registration_Info_UClass_UVoxelDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAsset.OuterSingleton, Z_Construct_UClass_UVoxelDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDataAsset.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelDataAsset>()
	{
		return UVoxelDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelDataAsset)
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::EnumInfo[] = {
		{ EVoxelDataAssetImportSource_StaticEnum, TEXT("EVoxelDataAssetImportSource"), &Z_Registration_Info_UEnum_EVoxelDataAssetImportSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3680900754U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FVoxelDataAssetImportSettings_MagicaVox::StaticStruct, Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewStructOps, TEXT("VoxelDataAssetImportSettings_MagicaVox"), &Z_Registration_Info_UScriptStruct_VoxelDataAssetImportSettings_MagicaVox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelDataAssetImportSettings_MagicaVox), 2128834761U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataAsset, UVoxelDataAsset::StaticClass, TEXT("UVoxelDataAsset"), &Z_Registration_Info_UClass_UVoxelDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAsset), 4227163384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_3650316342(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
