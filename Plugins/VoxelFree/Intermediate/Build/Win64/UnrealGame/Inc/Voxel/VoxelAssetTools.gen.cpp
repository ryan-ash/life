// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelAssetTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetTools() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelAssetItemReference();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelAssetMergeMode;
	static UEnum* EVoxelAssetMergeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelAssetMergeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelAssetMergeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAssetMergeMode"));
		}
		return Z_Registration_Info_UEnum_EVoxelAssetMergeMode.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetMergeMode>()
	{
		return EVoxelAssetMergeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::Enumerators[] = {
		{ "EVoxelAssetMergeMode::AllValues", (int64)EVoxelAssetMergeMode::AllValues },
		{ "EVoxelAssetMergeMode::AllMaterials", (int64)EVoxelAssetMergeMode::AllMaterials },
		{ "EVoxelAssetMergeMode::AllValuesAndAllMaterials", (int64)EVoxelAssetMergeMode::AllValuesAndAllMaterials },
		{ "EVoxelAssetMergeMode::InnerValues", (int64)EVoxelAssetMergeMode::InnerValues },
		{ "EVoxelAssetMergeMode::InnerMaterials", (int64)EVoxelAssetMergeMode::InnerMaterials },
		{ "EVoxelAssetMergeMode::InnerValuesAndInnerMaterials", (int64)EVoxelAssetMergeMode::InnerValuesAndInnerMaterials },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::Enum_MetaDataParams[] = {
		{ "AllMaterials.Comment", "// Import all materials. Import no values\n" },
		{ "AllMaterials.Name", "EVoxelAssetMergeMode::AllMaterials" },
		{ "AllMaterials.ToolTip", "Import all materials. Import no values" },
		{ "AllValues.Comment", "// Import all values. Import no materials\n" },
		{ "AllValues.Name", "EVoxelAssetMergeMode::AllValues" },
		{ "AllValues.ToolTip", "Import all values. Import no materials" },
		{ "AllValuesAndAllMaterials.Comment", "// Import all values and all materials\n" },
		{ "AllValuesAndAllMaterials.Name", "EVoxelAssetMergeMode::AllValuesAndAllMaterials" },
		{ "AllValuesAndAllMaterials.ToolTip", "Import all values and all materials" },
		{ "BlueprintType", "true" },
		{ "InnerMaterials.Comment", "// Import materials that are \"inside\" the asset. Import no values.\n" },
		{ "InnerMaterials.Name", "EVoxelAssetMergeMode::InnerMaterials" },
		{ "InnerMaterials.ToolTip", "Import materials that are \"inside\" the asset. Import no values." },
		{ "InnerValues.Comment", "// Import values that are \"inside\" the asset. Import no materials.\n" },
		{ "InnerValues.Name", "EVoxelAssetMergeMode::InnerValues" },
		{ "InnerValues.ToolTip", "Import values that are \"inside\" the asset. Import no materials." },
		{ "InnerValuesAndInnerMaterials.Comment", "// Import values and materials that are \"inside\" the asset.\n" },
		{ "InnerValuesAndInnerMaterials.Name", "EVoxelAssetMergeMode::InnerValuesAndInnerMaterials" },
		{ "InnerValuesAndInnerMaterials.ToolTip", "Import values and materials that are \"inside\" the asset." },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelAssetMergeMode",
		"EVoxelAssetMergeMode",
		Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode()
	{
		if (!Z_Registration_Info_UEnum_EVoxelAssetMergeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelAssetMergeMode.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelAssetMergeMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelAssetItemReference;
class UScriptStruct* FVoxelAssetItemReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelAssetItemReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelAssetItemReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelAssetItemReference, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelAssetItemReference"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelAssetItemReference.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelAssetItemReference>()
{
	return FVoxelAssetItemReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelAssetItemReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelAssetItemReference",
		sizeof(FVoxelAssetItemReference),
		alignof(FVoxelAssetItemReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelAssetItemReference()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelAssetItemReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelAssetItemReference.InnerSingleton, Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelAssetItemReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference;
class UScriptStruct* FVoxelDisableEditsBoxItemReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDisableEditsBoxItemReference"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelDisableEditsBoxItemReference>()
{
	return FVoxelDisableEditsBoxItemReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDisableEditsBoxItemReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelDisableEditsBoxItemReference",
		sizeof(FVoxelDisableEditsBoxItemReference),
		alignof(FVoxelDisableEditsBoxItemReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference.InnerSingleton, Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execAddDisableEditsBoxAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelDisableEditsBoxItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::AddDisableEditsBoxAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Reference,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execAddDisableEditsBox)
	{
		P_GET_STRUCT_REF(FVoxelDisableEditsBoxItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::AddDisableEditsBox(Z_Param_Out_Reference,Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execCreateDataAssetFromWorldSection)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bCopyMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelDataAsset**)Z_Param__Result=UVoxelAssetTools::CreateDataAssetFromWorldSection(Z_Param_World,Z_Param_Bounds,Z_Param_bCopyMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execSetDataAssetMaterial)
	{
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_NewAsset);
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::SetDataAssetMaterial(Z_Param_Asset,Z_Param_Out_NewAsset,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execInvertDataAsset)
	{
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_InvertedAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::InvertDataAsset(Z_Param_Asset,Z_Param_Out_InvertedAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportDataAssetFastAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportDataAssetFastAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Asset,Z_Param_Position,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportDataAssetFast)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportDataAssetFast(Z_Param_World,Z_Param_Asset,Z_Param_Position,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAssetAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableGeneratorInstanceWrapper,Z_Param_Asset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bSubtractive);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAssetAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Asset,Z_Param_Transform,Z_Param_Bounds,Z_Param_bSubtractive,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAsset)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableGeneratorInstanceWrapper,Z_Param_Asset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bSubtractive);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAsset(Z_Param_World,Z_Param_Asset,Z_Param_Transform,Z_Param_Bounds,Z_Param_bSubtractive,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportModifierAssetAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableGeneratorInstanceWrapper,Z_Param_Asset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bModifyValues);
		P_GET_UBOOL(Z_Param_bModifyMaterials);
		P_GET_UBOOL(Z_Param_bLockEntireWorld);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportModifierAssetAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Asset,Z_Param_Transform,Z_Param_Bounds,Z_Param_bModifyValues,Z_Param_bModifyMaterials,Z_Param_bLockEntireWorld,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportModifierAsset)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableGeneratorInstanceWrapper,Z_Param_Asset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bModifyValues);
		P_GET_UBOOL(Z_Param_bModifyMaterials);
		P_GET_UBOOL(Z_Param_bLockEntireWorld);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportModifierAsset(Z_Param_World,Z_Param_Asset,Z_Param_Transform,Z_Param_Bounds,Z_Param_bModifyValues,Z_Param_bModifyMaterials,Z_Param_bLockEntireWorld,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAssetAsReferenceAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelAssetItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableGeneratorInstanceWrapper,Z_Param_Asset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAssetAsReferenceAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Reference,Z_Param_World,Z_Param_Asset,Z_Param_Transform,Z_Param_Bounds,Z_Param_Priority,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAssetAsReference)
	{
		P_GET_STRUCT_REF(FVoxelAssetItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableGeneratorInstanceWrapper,Z_Param_Asset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAssetAsReference(Z_Param_Out_Reference,Z_Param_World,Z_Param_Asset,Z_Param_Transform,Z_Param_Bounds,Z_Param_Priority,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	void UVoxelAssetTools::StaticRegisterNativesUVoxelAssetTools()
	{
		UClass* Class = UVoxelAssetTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDisableEditsBox", &UVoxelAssetTools::execAddDisableEditsBox },
			{ "AddDisableEditsBoxAsync", &UVoxelAssetTools::execAddDisableEditsBoxAsync },
			{ "CreateDataAssetFromWorldSection", &UVoxelAssetTools::execCreateDataAssetFromWorldSection },
			{ "ImportAsset", &UVoxelAssetTools::execImportAsset },
			{ "ImportAssetAsReference", &UVoxelAssetTools::execImportAssetAsReference },
			{ "ImportAssetAsReferenceAsync", &UVoxelAssetTools::execImportAssetAsReferenceAsync },
			{ "ImportAssetAsync", &UVoxelAssetTools::execImportAssetAsync },
			{ "ImportDataAssetFast", &UVoxelAssetTools::execImportDataAssetFast },
			{ "ImportDataAssetFastAsync", &UVoxelAssetTools::execImportDataAssetFastAsync },
			{ "ImportModifierAsset", &UVoxelAssetTools::execImportModifierAsset },
			{ "ImportModifierAssetAsync", &UVoxelAssetTools::execImportModifierAssetAsync },
			{ "InvertDataAsset", &UVoxelAssetTools::execInvertDataAsset },
			{ "SetDataAssetMaterial", &UVoxelAssetTools::execSetDataAssetMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics
	{
		struct VoxelAssetTools_eventAddDisableEditsBox_Parms
		{
			FVoxelDisableEditsBoxItemReference Reference;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBox_Parms, Reference), Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference, METADATA_PARAMS(nullptr, 0) }; // 2979769198
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Reference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a disable edits box to the world\n\x09 * @param\x09World\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Bounds\x09\x09\x09The bounds of the box in voxel space\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a disable edits box to the world\n@param       World                   The voxel world to edit\n@param       Bounds                  The bounds of the box in voxel space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "AddDisableEditsBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::VoxelAssetTools_eventAddDisableEditsBox_Parms), Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics
	{
		struct VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelDisableEditsBoxItemReference Reference;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, Reference), Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference, METADATA_PARAMS(nullptr, 0) }; // 2979769198
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Reference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a disable edits box to the world\n\x09 * Runs asynchronously\n\x09 * @param\x09World\x09The voxel world to edit\n\x09 * @param\x09""Bounds\x09The bounds of the box in voxel space\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a disable edits box to the world\nRuns asynchronously\n@param       World   The voxel world to edit\n@param       Bounds  The bounds of the box in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "AddDisableEditsBoxAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics
	{
		struct VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bCopyMaterials;
			UVoxelDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bCopyMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms*)Obj)->bCopyMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials = { "bCopyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms), &Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms, ReturnValue), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "CreateDataAssetFromWorldSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms), Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics
	{
		struct VoxelAssetTools_eventImportAsset_Parms
		{
			AVoxelWorld* World;
			UVoxelTransformableGeneratorInstanceWrapper* Asset;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bSubtractive;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bSubtractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Asset), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAsset_Parms*)Obj)->bSubtractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) }; // 212437002
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAsset_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Will not provide the Previous Generator, so won't work with graphs that use it!\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bSubtractive\x09\x09\x09If false, the inner values are the full ones. If true, the inner values are the empty ones.\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bSubtractive", "false" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nWill not provide the Previous Generator, so won't work with graphs that use it!\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n@param       bSubtractive                    If false, the inner values are the full ones. If true, the inner values are the empty ones.\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::VoxelAssetTools_eventImportAsset_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics
	{
		struct VoxelAssetTools_eventImportAssetAsReference_Parms
		{
			FVoxelAssetItemReference Reference;
			AVoxelWorld* World;
			UVoxelTransformableGeneratorInstanceWrapper* Asset;
			FTransform Transform;
			FVoxelIntBox Bounds;
			int32 Priority;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Reference), Z_Construct_UScriptStruct_FVoxelAssetItemReference, METADATA_PARAMS(nullptr, 0) }; // 3796794662
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Asset), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReference_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReference_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReference_Parms*)Obj)->bUpdateRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReference_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Reference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Cheap, unless there are edited voxels in the zone the asset is imported in\n\x09 * Will provide the PreviousGenerator to voxel graphs\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09Priority\x09\x09\x09\x09Priority of the asset: the higher priority ones will be on top of lower priority ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 * @param\x09""bUpdateRender\x09\x09\x09If the render should be updated. Not needed if done right after creating the world\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nCheap, unless there are edited voxels in the zone the asset is imported in\nWill provide the PreviousGenerator to voxel graphs\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n@param       Priority                                Priority of the asset: the higher priority ones will be on top of lower priority ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space\n@param       bUpdateRender                   If the render should be updated. Not needed if done right after creating the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAssetAsReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::VoxelAssetTools_eventImportAssetAsReference_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics
	{
		struct VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelAssetItemReference Reference;
			AVoxelWorld* World;
			UVoxelTransformableGeneratorInstanceWrapper* Asset;
			FTransform Transform;
			FVoxelIntBox Bounds;
			int32 Priority;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Reference), Z_Construct_UScriptStruct_FVoxelAssetItemReference, METADATA_PARAMS(nullptr, 0) }; // 3796794662
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Asset), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Reference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Cheap, unless there are edited voxels in the zone the asset is imported in\n\x09 * Will provide the PreviousGenerator to voxel graphs\n\x09 * Runs asynchronously\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09Priority\x09\x09\x09\x09Priority of the asset: the higher priority ones will be on top of lower priority ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 * @param\x09""bUpdateRender\x09\x09\x09If the render should be updated. Not needed if done right after creating the world\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nCheap, unless there are edited voxels in the zone the asset is imported in\nWill provide the PreviousGenerator to voxel graphs\nRuns asynchronously\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n@param       Priority                                Priority of the asset: the higher priority ones will be on top of lower priority ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space\n@param       bUpdateRender                   If the render should be updated. Not needed if done right after creating the world" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAssetAsReferenceAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics
	{
		struct VoxelAssetTools_eventImportAssetAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			UVoxelTransformableGeneratorInstanceWrapper* Asset;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bSubtractive;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bSubtractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Asset), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsync_Parms*)Obj)->bSubtractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) }; // 212437002
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Will not provide the Previous Generator, so won't work with graphs that use it!\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bSubtractive\x09\x09\x09If false, the inner values are the full ones. If true, the inner values are the empty ones.\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bSubtractive", "false" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nWill not provide the Previous Generator, so won't work with graphs that use it!\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n@param       bSubtractive                    If false, the inner values are the full ones. If true, the inner values are the empty ones.\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAssetAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::VoxelAssetTools_eventImportAssetAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics
	{
		struct VoxelAssetTools_eventImportDataAssetFast_Parms
		{
			AVoxelWorld* World;
			UVoxelDataAsset* Asset;
			FVector Position;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) }; // 212437002
	void Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportDataAssetFast_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportDataAssetFast_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Specialization of ImportAsset for data assets with no scale nor rotation\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Specialization of ImportAsset for data assets with no scale nor rotation\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Position                                The position of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportDataAssetFast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::VoxelAssetTools_eventImportDataAssetFast_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics
	{
		struct VoxelAssetTools_eventImportDataAssetFastAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			UVoxelDataAsset* Asset;
			FVector Position;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) }; // 212437002
	void Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportDataAssetFastAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportDataAssetFastAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportDataAssetFastAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportDataAssetFastAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Specialization of ImportAsset for data assets with no scale nor rotation\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Specialization of ImportAsset for data assets with no scale nor rotation\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Position                                The position of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportDataAssetFastAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::VoxelAssetTools_eventImportDataAssetFastAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics
	{
		struct VoxelAssetTools_eventImportModifierAsset_Parms
		{
			AVoxelWorld* World;
			UVoxelTransformableGeneratorInstanceWrapper* Asset;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bModifyValues;
			bool bModifyMaterials;
			bool bLockEntireWorld;
			bool bConvertToVoxelSpace;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bModifyValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyValues;
		static void NewProp_bModifyMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyMaterials;
		static void NewProp_bLockEntireWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockEntireWorld;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Asset), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bModifyValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues = { "bModifyValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bModifyMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials = { "bModifyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bLockEntireWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld = { "bLockEntireWorld", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLockEntireWorld, bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel modifier asset to the world. Should be a graph asset.\n\x09 * Unlike ImportAsset, this WILL provide the Previous Generator to the graph, so you can access the existing voxel value\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bLockEntireWorld", "true" },
		{ "CPP_Default_bModifyMaterials", "true" },
		{ "CPP_Default_bModifyValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel modifier asset to the world. Should be a graph asset.\nUnlike ImportAsset, this WILL provide the Previous Generator to the graph, so you can access the existing voxel value\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportModifierAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::VoxelAssetTools_eventImportModifierAsset_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics
	{
		struct VoxelAssetTools_eventImportModifierAssetAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			UVoxelTransformableGeneratorInstanceWrapper* Asset;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bModifyValues;
			bool bModifyMaterials;
			bool bLockEntireWorld;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bModifyValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyValues;
		static void NewProp_bModifyMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyMaterials;
		static void NewProp_bLockEntireWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockEntireWorld;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Asset), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bModifyValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues = { "bModifyValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bModifyMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials = { "bModifyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bLockEntireWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld = { "bLockEntireWorld", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLockEntireWorld, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Will not provide the Previous Generator, so won't work with graphs that use it!\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bLockEntireWorld", "true" },
		{ "CPP_Default_bModifyMaterials", "true" },
		{ "CPP_Default_bModifyValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nWill not provide the Previous Generator, so won't work with graphs that use it!\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableGeneratorWithBounds, they will be set automatically if not provided\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportModifierAssetAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::VoxelAssetTools_eventImportModifierAssetAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics
	{
		struct VoxelAssetTools_eventInvertDataAsset_Parms
		{
			UVoxelDataAsset* Asset;
			UVoxelDataAsset* InvertedAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InvertedAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventInvertDataAsset_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_InvertedAsset = { "InvertedAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventInvertDataAsset_Parms, InvertedAsset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_InvertedAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "InvertDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::VoxelAssetTools_eventInvertDataAsset_Parms), Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics
	{
		struct VoxelAssetTools_eventSetDataAssetMaterial_Parms
		{
			UVoxelDataAsset* Asset;
			UVoxelDataAsset* NewAsset;
			FVoxelMaterial Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventSetDataAssetMaterial_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventSetDataAssetMaterial_Parms, NewAsset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventSetDataAssetMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_NewAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "SetDataAssetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::VoxelAssetTools_eventSetDataAssetMaterial_Parms), Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelAssetTools);
	UClass* Z_Construct_UClass_UVoxelAssetTools_NoRegister()
	{
		return UVoxelAssetTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelAssetTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelAssetTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelAssetTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox, "AddDisableEditsBox" }, // 2757831297
		{ &Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync, "AddDisableEditsBoxAsync" }, // 1896053794
		{ &Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection, "CreateDataAssetFromWorldSection" }, // 1727809939
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAsset, "ImportAsset" }, // 1127813637
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference, "ImportAssetAsReference" }, // 1291033281
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync, "ImportAssetAsReferenceAsync" }, // 997674973
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync, "ImportAssetAsync" }, // 1511391900
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast, "ImportDataAssetFast" }, // 2677462458
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync, "ImportDataAssetFastAsync" }, // 1638324895
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset, "ImportModifierAsset" }, // 2412645814
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync, "ImportModifierAssetAsync" }, // 1414533451
		{ &Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset, "InvertDataAsset" }, // 1023144350
		{ &Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial, "SetDataAssetMaterial" }, // 2706562182
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelAssetTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelAssetTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetTools_Statics::ClassParams = {
		&UVoxelAssetTools::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelAssetTools()
	{
		if (!Z_Registration_Info_UClass_UVoxelAssetTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetTools.OuterSingleton, Z_Construct_UClass_UVoxelAssetTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelAssetTools.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelAssetTools>()
	{
		return UVoxelAssetTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetTools);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::EnumInfo[] = {
		{ EVoxelAssetMergeMode_StaticEnum, TEXT("EVoxelAssetMergeMode"), &Z_Registration_Info_UEnum_EVoxelAssetMergeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 212437002U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::ScriptStructInfo[] = {
		{ FVoxelAssetItemReference::StaticStruct, Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics::NewStructOps, TEXT("VoxelAssetItemReference"), &Z_Registration_Info_UScriptStruct_VoxelAssetItemReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelAssetItemReference), 3796794662U) },
		{ FVoxelDisableEditsBoxItemReference::StaticStruct, Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics::NewStructOps, TEXT("VoxelDisableEditsBoxItemReference"), &Z_Registration_Info_UScriptStruct_VoxelDisableEditsBoxItemReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelDisableEditsBoxItemReference), 2979769198U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelAssetTools, UVoxelAssetTools::StaticClass, TEXT("UVoxelAssetTools"), &Z_Registration_Info_UClass_UVoxelAssetTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetTools), 984748631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_3227142279(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
