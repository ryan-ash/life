// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBlueprintLibrary() {}
// Cross Module References
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolRenderingRef();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Voxel, nullptr, "VoxelOnChunkGenerationDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms), Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_Voxel_eventChunkDynamicDelegate_Parms
		{
			FVoxelIntBox Bounds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Voxel_eventChunkDynamicDelegate_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Voxel, nullptr, "ChunkDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::_Script_Voxel_eventChunkDynamicDelegate_Parms), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef;
class UScriptStruct* FVoxelToolRenderingRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelToolRenderingRef, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelToolRenderingRef"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelToolRenderingRef>()
{
	return FVoxelToolRenderingRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelToolRenderingRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelToolRenderingRef",
		sizeof(FVoxelToolRenderingRef),
		alignof(FVoxelToolRenderingRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolRenderingRef()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef.InnerSingleton, Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelMemoryUsageType;
	static UEnum* EVoxelMemoryUsageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelMemoryUsageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelMemoryUsageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMemoryUsageType"));
		}
		return Z_Registration_Info_UEnum_EVoxelMemoryUsageType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMemoryUsageType>()
	{
		return EVoxelMemoryUsageType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enumerators[] = {
		{ "EVoxelMemoryUsageType::Total", (int64)EVoxelMemoryUsageType::Total },
		{ "EVoxelMemoryUsageType::VoxelsDirtyValuesData", (int64)EVoxelMemoryUsageType::VoxelsDirtyValuesData },
		{ "EVoxelMemoryUsageType::VoxelsDirtyMaterialsData", (int64)EVoxelMemoryUsageType::VoxelsDirtyMaterialsData },
		{ "EVoxelMemoryUsageType::VoxelsCachedValuesData", (int64)EVoxelMemoryUsageType::VoxelsCachedValuesData },
		{ "EVoxelMemoryUsageType::VoxelsCachedMaterialsData", (int64)EVoxelMemoryUsageType::VoxelsCachedMaterialsData },
		{ "EVoxelMemoryUsageType::UndoRedo", (int64)EVoxelMemoryUsageType::UndoRedo },
		{ "EVoxelMemoryUsageType::Multiplayer", (int64)EVoxelMemoryUsageType::Multiplayer },
		{ "EVoxelMemoryUsageType::IntermediateBuffers", (int64)EVoxelMemoryUsageType::IntermediateBuffers },
		{ "EVoxelMemoryUsageType::MeshesIndices", (int64)EVoxelMemoryUsageType::MeshesIndices },
		{ "EVoxelMemoryUsageType::MeshesTessellationIndices", (int64)EVoxelMemoryUsageType::MeshesTessellationIndices },
		{ "EVoxelMemoryUsageType::MeshesVertices", (int64)EVoxelMemoryUsageType::MeshesVertices },
		{ "EVoxelMemoryUsageType::MeshesColors", (int64)EVoxelMemoryUsageType::MeshesColors },
		{ "EVoxelMemoryUsageType::MeshesUVsAndTangents", (int64)EVoxelMemoryUsageType::MeshesUVsAndTangents },
		{ "EVoxelMemoryUsageType::DataAssets", (int64)EVoxelMemoryUsageType::DataAssets },
		{ "EVoxelMemoryUsageType::HeightmapAssets", (int64)EVoxelMemoryUsageType::HeightmapAssets },
		{ "EVoxelMemoryUsageType::UncompressedSaves", (int64)EVoxelMemoryUsageType::UncompressedSaves },
		{ "EVoxelMemoryUsageType::CompressedSaves", (int64)EVoxelMemoryUsageType::CompressedSaves },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CompressedSaves.Name", "EVoxelMemoryUsageType::CompressedSaves" },
		{ "DataAssets.Name", "EVoxelMemoryUsageType::DataAssets" },
		{ "HeightmapAssets.Name", "EVoxelMemoryUsageType::HeightmapAssets" },
		{ "IntermediateBuffers.Name", "EVoxelMemoryUsageType::IntermediateBuffers" },
		{ "MeshesColors.Name", "EVoxelMemoryUsageType::MeshesColors" },
		{ "MeshesIndices.Name", "EVoxelMemoryUsageType::MeshesIndices" },
		{ "MeshesTessellationIndices.Name", "EVoxelMemoryUsageType::MeshesTessellationIndices" },
		{ "MeshesUVsAndTangents.Name", "EVoxelMemoryUsageType::MeshesUVsAndTangents" },
		{ "MeshesVertices.Name", "EVoxelMemoryUsageType::MeshesVertices" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "Multiplayer.Name", "EVoxelMemoryUsageType::Multiplayer" },
		{ "Total.Name", "EVoxelMemoryUsageType::Total" },
		{ "UncompressedSaves.Name", "EVoxelMemoryUsageType::UncompressedSaves" },
		{ "UndoRedo.Name", "EVoxelMemoryUsageType::UndoRedo" },
		{ "VoxelsCachedMaterialsData.Name", "EVoxelMemoryUsageType::VoxelsCachedMaterialsData" },
		{ "VoxelsCachedValuesData.Name", "EVoxelMemoryUsageType::VoxelsCachedValuesData" },
		{ "VoxelsDirtyMaterialsData.Name", "EVoxelMemoryUsageType::VoxelsDirtyMaterialsData" },
		{ "VoxelsDirtyValuesData.Name", "EVoxelMemoryUsageType::VoxelsDirtyValuesData" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelMemoryUsageType",
		"EVoxelMemoryUsageType",
		Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelMemoryUsageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelMemoryUsageType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelMemoryUsageType.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAddNeighborsToSet)
	{
		P_GET_TSET_REF(FIntVector,Z_Param_Out_InSet);
		P_GET_TSET_REF(FIntVector,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::AddNeighborsToSet(Z_Param_Out_InSet,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelColorTextureValid)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelColorTextureValid(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelFloatTextureValid)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelFloatTextureValid(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelColorTextureSize)
	{
		P_GET_STRUCT(FVoxelColorTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelColorTextureSize(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelFloatTextureSize)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelFloatTextureSize(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateVoxelColorTextureFromVoxelFloatTexture)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
		P_GET_ENUM(EVoxelRGBA,Z_Param_Channel);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelColorTexture*)Z_Param__Result=UVoxelBlueprintLibrary::CreateVoxelColorTextureFromVoxelFloatTexture(Z_Param_Texture,EVoxelRGBA(Z_Param_Channel),Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateTextureFromVoxelColorTexture)
	{
		P_GET_STRUCT(FVoxelColorTexture,Z_Param_VoxelTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateTextureFromVoxelColorTexture(Z_Param_VoxelTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelColorTexture)
	{
		P_GET_STRUCT(FVoxelColorTexture,Z_Param_VoxelTexture);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelColorTexture(Z_Param_VoxelTexture,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateVoxelFloatTextureFromTextureChannel)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_ENUM(EVoxelRGBA,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelFloatTexture*)Z_Param__Result=UVoxelBlueprintLibrary::CreateVoxelFloatTextureFromTextureChannel(Z_Param_Texture,EVoxelRGBA(Z_Param_Channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateTextureFromVoxelFloatTexture)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_VoxelTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateTextureFromVoxelFloatTexture(Z_Param_VoxelTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelFloatTexture)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_VoxelTexture);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelFloatTexture(Z_Param_VoxelTexture,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMakeMaterialMask)
	{
		P_GET_UBOOL(Z_Param_R);
		P_GET_UBOOL(Z_Param_G);
		P_GET_UBOOL(Z_Param_B);
		P_GET_UBOOL(Z_Param_A);
		P_GET_UBOOL(Z_Param_U0);
		P_GET_UBOOL(Z_Param_V0);
		P_GET_UBOOL(Z_Param_U1);
		P_GET_UBOOL(Z_Param_V1);
		P_GET_UBOOL(Z_Param_U2);
		P_GET_UBOOL(Z_Param_V2);
		P_GET_UBOOL(Z_Param_U3);
		P_GET_UBOOL(Z_Param_V3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::MakeMaterialMask(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A,Z_Param_U0,Z_Param_V0,Z_Param_U1,Z_Param_V1,Z_Param_U2,Z_Param_V2,Z_Param_U3,Z_Param_V3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMakeRawMaterial)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_R);
		P_GET_PROPERTY(FByteProperty,Z_Param_G);
		P_GET_PROPERTY(FByteProperty,Z_Param_B);
		P_GET_PROPERTY(FByteProperty,Z_Param_A);
		P_GET_PROPERTY(FByteProperty,Z_Param_U0);
		P_GET_PROPERTY(FByteProperty,Z_Param_V0);
		P_GET_PROPERTY(FByteProperty,Z_Param_U1);
		P_GET_PROPERTY(FByteProperty,Z_Param_V1);
		P_GET_PROPERTY(FByteProperty,Z_Param_U2);
		P_GET_PROPERTY(FByteProperty,Z_Param_V2);
		P_GET_PROPERTY(FByteProperty,Z_Param_U3);
		P_GET_PROPERTY(FByteProperty,Z_Param_V3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::MakeRawMaterial(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A,Z_Param_U0,Z_Param_V0,Z_Param_U1,Z_Param_V1,Z_Param_U2,Z_Param_V2,Z_Param_U3,Z_Param_V3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetRawMaterial)
	{
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_R);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_G);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_B);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_A);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U0);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V0);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U1);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V1);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U2);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V2);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U3);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V3);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::GetRawMaterial(Z_Param_Material,Z_Param_Out_R,Z_Param_Out_G,Z_Param_Out_B,Z_Param_Out_A,Z_Param_Out_U0,Z_Param_Out_V0,Z_Param_Out_U1,Z_Param_Out_V1,Z_Param_Out_U2,Z_Param_Out_V2,Z_Param_Out_U3,Z_Param_Out_V3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetUV)
	{
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UVoxelBlueprintLibrary::GetUV(Z_Param_Material,Z_Param_Channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMultiIndex)
	{
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_GET_UBOOL(Z_Param_bSortByStrength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength0);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index0);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength1);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index1);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength2);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index2);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength3);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index3);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Wetness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::GetMultiIndex(Z_Param_Material,Z_Param_bSortByStrength,Z_Param_Out_Strength0,Z_Param_Out_Index0,Z_Param_Out_Strength1,Z_Param_Out_Index1,Z_Param_Out_Strength2,Z_Param_Out_Index2,Z_Param_Out_Strength3,Z_Param_Out_Index3,Z_Param_Out_Wetness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetSingleIndex)
	{
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UVoxelBlueprintLibrary::GetSingleIndex(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetColor)
	{
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UVoxelBlueprintLibrary::GetColor(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execApplyPaintMaterial)
	{
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_GET_STRUCT(FVoxelPaintMaterial,Z_Param_PaintMaterial);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::ApplyPaintMaterial(Z_Param_Material,Z_Param_PaintMaterial,Z_Param_Strength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateUVPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialUV,Z_Param_UV);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateUVPaintMaterial(Z_Param_UV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateMultiIndexRawPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialMultiIndexRaw,Z_Param_MultiIndexRaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateMultiIndexRawPaintMaterial(Z_Param_MultiIndexRaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateMultiIndexWetnessPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialMultiIndexWetness,Z_Param_MultiIndexWetness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateMultiIndexWetnessPaintMaterial(Z_Param_MultiIndexWetness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateMultiIndexPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialMultiIndex,Z_Param_MultiIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateMultiIndexPaintMaterial(Z_Param_MultiIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateSingleIndexPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialSingleIndex,Z_Param_SingleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateSingleIndexPaintMaterial(Z_Param_SingleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateFiveWayBlendPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialFiveWayBlend,Z_Param_FiveWayBlend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateFiveWayBlendPaintMaterial(Z_Param_FiveWayBlend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateColorPaintMaterial)
	{
		P_GET_STRUCT(FVoxelPaintMaterialColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateColorPaintMaterial(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMin_Intvector)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetMin_Intvector(Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMax_Intvector)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetMax_Intvector(Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMultiply_IntIntVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Left);
		P_GET_STRUCT(FIntVector,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Multiply_IntIntVector(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMultiply_IntVectorInt)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Left);
		P_GET_PROPERTY(FIntProperty,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Multiply_IntVectorInt(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDivide_IntVectorInt)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Left);
		P_GET_PROPERTY(FIntProperty,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Divide_IntVectorInt(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMultiply_IntVectorIntVector)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Left);
		P_GET_STRUCT(FIntVector,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Multiply_IntVectorIntVector(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSubstract_IntVectorIntVector)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Left);
		P_GET_STRUCT(FIntVector,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Substract_IntVectorIntVector(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAdd_IntVectorIntVector)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Left);
		P_GET_STRUCT(FIntVector,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Add_IntVectorIntVector(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetRenderBoundsOverlappingDataBounds)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_DataBounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::GetRenderBoundsOverlappingDataBounds(Z_Param_World,Z_Param_DataBounds,Z_Param_LOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMakeIntBoxFromGlobalPositionAndRadius)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_GlobalPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::MakeIntBoxFromGlobalPositionAndRadius(Z_Param_World,Z_Param_GlobalPosition,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsWorldVoxelPoolCreated)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsWorldVoxelPoolCreated(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDestroyWorldVoxelThreadPool)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::DestroyWorldVoxelThreadPool(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateWorldVoxelThreadPool)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityCategoriesOverrides);
		P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityOffsetsOverrides);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfThreads);
		P_GET_UBOOL(Z_Param_bConstantPriorities);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::CreateWorldVoxelThreadPool(Z_Param_World,Z_Param_Out_PriorityCategoriesOverrides,Z_Param_Out_PriorityOffsetsOverrides,Z_Param_NumberOfThreads,Z_Param_bConstantPriorities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsGlobalVoxelPoolCreated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsGlobalVoxelPoolCreated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDestroyGlobalVoxelThreadPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::DestroyGlobalVoxelThreadPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateGlobalVoxelThreadPool)
	{
		P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityCategoriesOverrides);
		P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityOffsetsOverrides);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfThreads);
		P_GET_UBOOL(Z_Param_bConstantPriorities);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::CreateGlobalVoxelThreadPool(Z_Param_Out_PriorityCategoriesOverrides,Z_Param_Out_PriorityOffsetsOverrides,Z_Param_NumberOfThreads,Z_Param_bConstantPriorities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSetToolRenderingEnabled)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::SetToolRenderingEnabled(Z_Param_World,Z_Param_Ref,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSetToolRenderingBounds)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
		P_GET_STRUCT(FBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::SetToolRenderingBounds(Z_Param_World,Z_Param_Ref,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSetToolRenderingMaterial)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::SetToolRenderingMaterial(Z_Param_World,Z_Param_Ref,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDestroyToolRendering)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::DestroyToolRendering(Z_Param_World,Z_Param_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateToolRendering)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelToolRenderingRef*)Z_Param__Result=UVoxelBlueprintLibrary::CreateToolRendering(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsValidRef)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsValidRef(Z_Param_World,Z_Param_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execBindVoxelGenerationEvent)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGenerate);
		P_GET_UBOOL(Z_Param_bFireExistingOnes);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_GenerationDistanceInChunks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::BindVoxelGenerationEvent(Z_Param_World,FChunkDynamicDelegate(Z_Param_OnGenerate),Z_Param_bFireExistingOnes,Z_Param_ChunkSize,Z_Param_GenerationDistanceInChunks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execBindVoxelChunkEvents)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnActivate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnDeactivate);
		P_GET_UBOOL(Z_Param_bFireExistingOnes);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActivationDistanceInChunks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::BindVoxelChunkEvents(Z_Param_World,FChunkDynamicDelegate(Z_Param_OnActivate),FChunkDynamicDelegate(Z_Param_OnDeactivate),Z_Param_bFireExistingOnes,Z_Param_ChunkSize,Z_Param_ActivationDistanceInChunks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRecreate)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bSaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::Recreate(Z_Param_World,Z_Param_bSaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRecreateSpawners)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::RecreateSpawners(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRecreateRender)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::RecreateRender(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execApplyNewMaterials)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ApplyNewMaterials(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelWorldFoliageLoading)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelWorldFoliageLoading(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelWorldMeshLoading)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelWorldMeshLoading(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetTaskCount)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetTaskCount(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAreCollisionsEnabled)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LOD);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::AreCollisionsEnabled(Z_Param_World,Z_Param_Position,Z_Param_Out_LOD,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execApplyLODSettings)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ApplyLODSettings(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUpdateAll)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::UpdateAll(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUpdateBounds)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::UpdateBounds(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUpdatePosition)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::UpdatePosition(Z_Param_World,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execScaleData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ScaleData(Z_Param_World,Z_Param_Out_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearDirtyData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ClearDirtyData(Z_Param_World,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execHasMaterialData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::HasMaterialData(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execHasValueData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::HasValueData(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearMaterialData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ClearMaterialData(Z_Param_World,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearValueData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ClearValueData(Z_Param_World,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearAllData)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ClearAllData(Z_Param_World,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetBounds)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::GetBounds(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetIntOutput)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetIntOutput(Z_Param_World,Z_Param_Name,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetFloatOutput)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetFloatOutput(Z_Param_World,Z_Param_Name,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetNormal)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelBlueprintLibrary::GetNormal(Z_Param_World,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetHistoryPosition)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetHistoryPosition(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearFrames)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::ClearFrames(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSaveFrame)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::SaveFrame(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRedo)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_TARRAY_REF(FVoxelIntBox,Z_Param_Out_OutUpdatedBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::Redo(Z_Param_World,Z_Param_Out_OutUpdatedBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUndo)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_TARRAY_REF(FVoxelIntBox,Z_Param_Out_OutUpdatedBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::Undo(Z_Param_World,Z_Param_Out_OutUpdatedBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execLoadFromSpawnersSave)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelSpawnersSave,Z_Param_Out_Save);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::LoadFromSpawnersSave(Z_Param_World,Z_Param_Out_Save);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetSpawnersSave)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSpawnersSave*)Z_Param__Result=UVoxelBlueprintLibrary::GetSpawnersSave(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMarkSpawnersDirty)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::MarkSpawnersDirty(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRegenerateSpawners)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::RegenerateSpawners(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAddInstances)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors);
		P_GET_STRUCT(FVoxelInstancedMeshSettings,Z_Param_InstanceSettings);
		P_GET_STRUCT(FVoxelSpawnerActorSettings,Z_Param_ActorSettings);
		P_GET_STRUCT(FVector,Z_Param_FloatingDetectionOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::AddInstances(Z_Param_World,Z_Param_Mesh,Z_Param_Out_Transforms,Z_Param_Out_Colors,Z_Param_InstanceSettings,Z_Param_ActorSettings,Z_Param_FloatingDetectionOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorByInstanceIndex)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelHierarchicalInstancedStaticMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVoxelSpawnerActor**)Z_Param__Result=UVoxelBlueprintLibrary::SpawnVoxelSpawnerActorByInstanceIndex(Z_Param_World,Z_Param_Component,Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorsInArea)
	{
		P_GET_TARRAY_REF(AVoxelSpawnerActor*,Z_Param_Out_OutActors);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_ENUM(EVoxelSpawnerActorSpawnType,Z_Param_SpawnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::SpawnVoxelSpawnerActorsInArea(Z_Param_Out_OutActors,Z_Param_World,Z_Param_Bounds,EVoxelSpawnerActorSpawnType(Z_Param_SpawnType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AVoxelWorld*>*)Z_Param__Result=UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVoxelWorld**)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelWorldOverlappingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AVoxelWorld*>*)Z_Param__Result=UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingBox(Z_Param_WorldContextObject,Z_Param_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVoxelWorld**)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelWorldOverlappingBox(Z_Param_WorldContextObject,Z_Param_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetAllVoxelWorldsContainingPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AVoxelWorld*>*)Z_Param__Result=UVoxelBlueprintLibrary::GetAllVoxelWorldsContainingPosition(Z_Param_WorldContextObject,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelWorldContainingPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVoxelWorld**)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelWorldContainingPosition(Z_Param_WorldContextObject,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execTransformVoxelBoxToGlobalBox)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UVoxelBlueprintLibrary::TransformVoxelBoxToGlobalBox(Z_Param_World,Z_Param_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execTransformGlobalBoxToVoxelBox)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::TransformGlobalBoxToVoxelBox(Z_Param_World,Z_Param_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetEstimatedCollisionsMemoryUsageInMB)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetEstimatedCollisionsMemoryUsageInMB(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execLogMemoryStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::LogMemoryStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetPeakMemoryUsageInMB)
	{
		P_GET_ENUM(EVoxelMemoryUsageType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetPeakMemoryUsageInMB(EVoxelMemoryUsageType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMemoryUsageInMB)
	{
		P_GET_ENUM(EVoxelMemoryUsageType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetMemoryUsageInMB(EVoxelMemoryUsageType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execNumberOfCores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::NumberOfCores();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRaiseError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::RaiseError(Z_Param_Message,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRaiseWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::RaiseWarning(Z_Param_Message,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRaiseInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBlueprintLibrary::RaiseInfo(Z_Param_Message,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelPluginPro)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelPluginPro();
		P_NATIVE_END;
	}
	void UVoxelBlueprintLibrary::StaticRegisterNativesUVoxelBlueprintLibrary()
	{
		UClass* Class = UVoxelBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add_IntVectorIntVector", &UVoxelBlueprintLibrary::execAdd_IntVectorIntVector },
			{ "AddInstances", &UVoxelBlueprintLibrary::execAddInstances },
			{ "AddNeighborsToSet", &UVoxelBlueprintLibrary::execAddNeighborsToSet },
			{ "ApplyLODSettings", &UVoxelBlueprintLibrary::execApplyLODSettings },
			{ "ApplyNewMaterials", &UVoxelBlueprintLibrary::execApplyNewMaterials },
			{ "ApplyPaintMaterial", &UVoxelBlueprintLibrary::execApplyPaintMaterial },
			{ "AreCollisionsEnabled", &UVoxelBlueprintLibrary::execAreCollisionsEnabled },
			{ "BindVoxelChunkEvents", &UVoxelBlueprintLibrary::execBindVoxelChunkEvents },
			{ "BindVoxelGenerationEvent", &UVoxelBlueprintLibrary::execBindVoxelGenerationEvent },
			{ "ClearAllData", &UVoxelBlueprintLibrary::execClearAllData },
			{ "ClearDirtyData", &UVoxelBlueprintLibrary::execClearDirtyData },
			{ "ClearFrames", &UVoxelBlueprintLibrary::execClearFrames },
			{ "ClearMaterialData", &UVoxelBlueprintLibrary::execClearMaterialData },
			{ "ClearValueData", &UVoxelBlueprintLibrary::execClearValueData },
			{ "CreateColorPaintMaterial", &UVoxelBlueprintLibrary::execCreateColorPaintMaterial },
			{ "CreateFiveWayBlendPaintMaterial", &UVoxelBlueprintLibrary::execCreateFiveWayBlendPaintMaterial },
			{ "CreateGlobalVoxelThreadPool", &UVoxelBlueprintLibrary::execCreateGlobalVoxelThreadPool },
			{ "CreateMultiIndexPaintMaterial", &UVoxelBlueprintLibrary::execCreateMultiIndexPaintMaterial },
			{ "CreateMultiIndexRawPaintMaterial", &UVoxelBlueprintLibrary::execCreateMultiIndexRawPaintMaterial },
			{ "CreateMultiIndexWetnessPaintMaterial", &UVoxelBlueprintLibrary::execCreateMultiIndexWetnessPaintMaterial },
			{ "CreateOrUpdateTextureFromVoxelColorTexture", &UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelColorTexture },
			{ "CreateOrUpdateTextureFromVoxelFloatTexture", &UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelFloatTexture },
			{ "CreateSingleIndexPaintMaterial", &UVoxelBlueprintLibrary::execCreateSingleIndexPaintMaterial },
			{ "CreateTextureFromVoxelColorTexture", &UVoxelBlueprintLibrary::execCreateTextureFromVoxelColorTexture },
			{ "CreateTextureFromVoxelFloatTexture", &UVoxelBlueprintLibrary::execCreateTextureFromVoxelFloatTexture },
			{ "CreateToolRendering", &UVoxelBlueprintLibrary::execCreateToolRendering },
			{ "CreateUVPaintMaterial", &UVoxelBlueprintLibrary::execCreateUVPaintMaterial },
			{ "CreateVoxelColorTextureFromVoxelFloatTexture", &UVoxelBlueprintLibrary::execCreateVoxelColorTextureFromVoxelFloatTexture },
			{ "CreateVoxelFloatTextureFromTextureChannel", &UVoxelBlueprintLibrary::execCreateVoxelFloatTextureFromTextureChannel },
			{ "CreateWorldVoxelThreadPool", &UVoxelBlueprintLibrary::execCreateWorldVoxelThreadPool },
			{ "DestroyGlobalVoxelThreadPool", &UVoxelBlueprintLibrary::execDestroyGlobalVoxelThreadPool },
			{ "DestroyToolRendering", &UVoxelBlueprintLibrary::execDestroyToolRendering },
			{ "DestroyWorldVoxelThreadPool", &UVoxelBlueprintLibrary::execDestroyWorldVoxelThreadPool },
			{ "Divide_IntVectorInt", &UVoxelBlueprintLibrary::execDivide_IntVectorInt },
			{ "GetAllVoxelWorldsContainingPosition", &UVoxelBlueprintLibrary::execGetAllVoxelWorldsContainingPosition },
			{ "GetAllVoxelWorldsOverlappingActor", &UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingActor },
			{ "GetAllVoxelWorldsOverlappingBox", &UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingBox },
			{ "GetBounds", &UVoxelBlueprintLibrary::execGetBounds },
			{ "GetColor", &UVoxelBlueprintLibrary::execGetColor },
			{ "GetEstimatedCollisionsMemoryUsageInMB", &UVoxelBlueprintLibrary::execGetEstimatedCollisionsMemoryUsageInMB },
			{ "GetFloatOutput", &UVoxelBlueprintLibrary::execGetFloatOutput },
			{ "GetHistoryPosition", &UVoxelBlueprintLibrary::execGetHistoryPosition },
			{ "GetIntOutput", &UVoxelBlueprintLibrary::execGetIntOutput },
			{ "GetMax_Intvector", &UVoxelBlueprintLibrary::execGetMax_Intvector },
			{ "GetMemoryUsageInMB", &UVoxelBlueprintLibrary::execGetMemoryUsageInMB },
			{ "GetMin_Intvector", &UVoxelBlueprintLibrary::execGetMin_Intvector },
			{ "GetMultiIndex", &UVoxelBlueprintLibrary::execGetMultiIndex },
			{ "GetNormal", &UVoxelBlueprintLibrary::execGetNormal },
			{ "GetPeakMemoryUsageInMB", &UVoxelBlueprintLibrary::execGetPeakMemoryUsageInMB },
			{ "GetRawMaterial", &UVoxelBlueprintLibrary::execGetRawMaterial },
			{ "GetRenderBoundsOverlappingDataBounds", &UVoxelBlueprintLibrary::execGetRenderBoundsOverlappingDataBounds },
			{ "GetSingleIndex", &UVoxelBlueprintLibrary::execGetSingleIndex },
			{ "GetSpawnersSave", &UVoxelBlueprintLibrary::execGetSpawnersSave },
			{ "GetTaskCount", &UVoxelBlueprintLibrary::execGetTaskCount },
			{ "GetUV", &UVoxelBlueprintLibrary::execGetUV },
			{ "GetVoxelColorTextureSize", &UVoxelBlueprintLibrary::execGetVoxelColorTextureSize },
			{ "GetVoxelFloatTextureSize", &UVoxelBlueprintLibrary::execGetVoxelFloatTextureSize },
			{ "GetVoxelWorldContainingPosition", &UVoxelBlueprintLibrary::execGetVoxelWorldContainingPosition },
			{ "GetVoxelWorldOverlappingActor", &UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingActor },
			{ "GetVoxelWorldOverlappingBox", &UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingBox },
			{ "HasMaterialData", &UVoxelBlueprintLibrary::execHasMaterialData },
			{ "HasValueData", &UVoxelBlueprintLibrary::execHasValueData },
			{ "IsGlobalVoxelPoolCreated", &UVoxelBlueprintLibrary::execIsGlobalVoxelPoolCreated },
			{ "IsValidRef", &UVoxelBlueprintLibrary::execIsValidRef },
			{ "IsVoxelColorTextureValid", &UVoxelBlueprintLibrary::execIsVoxelColorTextureValid },
			{ "IsVoxelFloatTextureValid", &UVoxelBlueprintLibrary::execIsVoxelFloatTextureValid },
			{ "IsVoxelPluginPro", &UVoxelBlueprintLibrary::execIsVoxelPluginPro },
			{ "IsVoxelWorldFoliageLoading", &UVoxelBlueprintLibrary::execIsVoxelWorldFoliageLoading },
			{ "IsVoxelWorldMeshLoading", &UVoxelBlueprintLibrary::execIsVoxelWorldMeshLoading },
			{ "IsWorldVoxelPoolCreated", &UVoxelBlueprintLibrary::execIsWorldVoxelPoolCreated },
			{ "LoadFromSpawnersSave", &UVoxelBlueprintLibrary::execLoadFromSpawnersSave },
			{ "LogMemoryStats", &UVoxelBlueprintLibrary::execLogMemoryStats },
			{ "MakeIntBoxFromGlobalPositionAndRadius", &UVoxelBlueprintLibrary::execMakeIntBoxFromGlobalPositionAndRadius },
			{ "MakeMaterialMask", &UVoxelBlueprintLibrary::execMakeMaterialMask },
			{ "MakeRawMaterial", &UVoxelBlueprintLibrary::execMakeRawMaterial },
			{ "MarkSpawnersDirty", &UVoxelBlueprintLibrary::execMarkSpawnersDirty },
			{ "Multiply_IntIntVector", &UVoxelBlueprintLibrary::execMultiply_IntIntVector },
			{ "Multiply_IntVectorInt", &UVoxelBlueprintLibrary::execMultiply_IntVectorInt },
			{ "Multiply_IntVectorIntVector", &UVoxelBlueprintLibrary::execMultiply_IntVectorIntVector },
			{ "NumberOfCores", &UVoxelBlueprintLibrary::execNumberOfCores },
			{ "RaiseError", &UVoxelBlueprintLibrary::execRaiseError },
			{ "RaiseInfo", &UVoxelBlueprintLibrary::execRaiseInfo },
			{ "RaiseWarning", &UVoxelBlueprintLibrary::execRaiseWarning },
			{ "Recreate", &UVoxelBlueprintLibrary::execRecreate },
			{ "RecreateRender", &UVoxelBlueprintLibrary::execRecreateRender },
			{ "RecreateSpawners", &UVoxelBlueprintLibrary::execRecreateSpawners },
			{ "Redo", &UVoxelBlueprintLibrary::execRedo },
			{ "RegenerateSpawners", &UVoxelBlueprintLibrary::execRegenerateSpawners },
			{ "SaveFrame", &UVoxelBlueprintLibrary::execSaveFrame },
			{ "ScaleData", &UVoxelBlueprintLibrary::execScaleData },
			{ "SetToolRenderingBounds", &UVoxelBlueprintLibrary::execSetToolRenderingBounds },
			{ "SetToolRenderingEnabled", &UVoxelBlueprintLibrary::execSetToolRenderingEnabled },
			{ "SetToolRenderingMaterial", &UVoxelBlueprintLibrary::execSetToolRenderingMaterial },
			{ "SpawnVoxelSpawnerActorByInstanceIndex", &UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorByInstanceIndex },
			{ "SpawnVoxelSpawnerActorsInArea", &UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorsInArea },
			{ "Substract_IntVectorIntVector", &UVoxelBlueprintLibrary::execSubstract_IntVectorIntVector },
			{ "TransformGlobalBoxToVoxelBox", &UVoxelBlueprintLibrary::execTransformGlobalBoxToVoxelBox },
			{ "TransformVoxelBoxToGlobalBox", &UVoxelBlueprintLibrary::execTransformVoxelBoxToGlobalBox },
			{ "Undo", &UVoxelBlueprintLibrary::execUndo },
			{ "UpdateAll", &UVoxelBlueprintLibrary::execUpdateAll },
			{ "UpdateBounds", &UVoxelBlueprintLibrary::execUpdateBounds },
			{ "UpdatePosition", &UVoxelBlueprintLibrary::execUpdatePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics
	{
		struct VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms
		{
			FIntVector Left;
			FIntVector Right;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "IntVector + IntVector" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Add_IntVectorIntVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics
	{
		struct VoxelBlueprintLibrary_eventAddInstances_Parms
		{
			AVoxelWorld* World;
			UStaticMesh* Mesh;
			TArray<FTransform> Transforms;
			TArray<FLinearColor> Colors;
			FVoxelInstancedMeshSettings InstanceSettings;
			FVoxelSpawnerActorSettings ActorSettings;
			FVector FloatingDetectionOffset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDetectionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_InstanceSettings = { "InstanceSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, InstanceSettings), Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, METADATA_PARAMS(nullptr, 0) }; // 345739975
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_ActorSettings = { "ActorSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, ActorSettings), Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, METADATA_PARAMS(nullptr, 0) }; // 4075043734
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_FloatingDetectionOffset = { "FloatingDetectionOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, FloatingDetectionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_InstanceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_ActorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_FloatingDetectionOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FloatingDetectionOffset" },
		{ "Category", "Voxel|Spawners" },
		{ "Comment", "/**\n\x09 * Add instances to a voxel world foliage system\n\x09 * @param World\x09\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Mesh\x09\x09\x09\x09\x09\x09The mesh to use\n\x09 * @param Transforms\x09\x09\x09\x09The transforms, relative to the voxel world (but not in voxel space!)\n\x09 * @param Colors\x09\x09\x09\x09\x09The colors to send to the instance material (use GetVoxelMaterialFromPerInstanceRandom to get it)\n\x09 * @param FloatingDetectionOffset\x09Increase this if your foliage is enabling physics too soon\n\x09 */" },
		{ "CPP_Default_FloatingDetectionOffset", "0.000000,0.000000,-10.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Add instances to a voxel world foliage system\n@param World                                         The voxel world\n@param Mesh                                          The mesh to use\n@param Transforms                            The transforms, relative to the voxel world (but not in voxel space!)\n@param Colors                                        The colors to send to the instance material (use GetVoxelMaterialFromPerInstanceRandom to get it)\n@param FloatingDetectionOffset       Increase this if your foliage is enabling physics too soon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "AddInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::VoxelBlueprintLibrary_eventAddInstances_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics
	{
		struct VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms
		{
			TSet<FIntVector> InSet;
			TSet<FIntVector> OutSet;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_ElementProp = { "InSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FIntVector>::Value, "The structure 'FIntVector' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet = { "InSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms, InSet), METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	static_assert(TModels<CGetTypeHashable, FIntVector>::Value, "The structure 'FIntVector' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Utilities" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "AddNeighborsToSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics
	{
		struct VoxelBlueprintLibrary_eventApplyLODSettings_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyLODSettings_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Call this after changing the voxel world LODs setting while created\n" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Apply LOD Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Call this after changing the voxel world LODs setting while created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ApplyLODSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::VoxelBlueprintLibrary_eventApplyLODSettings_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics
	{
		struct VoxelBlueprintLibrary_eventApplyNewMaterials_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyNewMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Call this after changing a voxel world VoxelMaterial/MaterialCollection to apply it\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Call this after changing a voxel world VoxelMaterial/MaterialCollection to apply it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ApplyNewMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::VoxelBlueprintLibrary_eventApplyNewMaterials_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms
		{
			FVoxelMaterial Material;
			FVoxelPaintMaterial PaintMaterial;
			float Strength;
			FVoxelMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_PaintMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Apply a Paint Material to a Voxel Material\n" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Apply a Paint Material to a Voxel Material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ApplyPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics
	{
		struct VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			int32 LOD;
			bool bConvertToVoxelSpace;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Collisions" },
		{ "Comment", "/**\n\x09 * Returns whether voxel collisions are enabled at Position \n\x09 * @param World\x09\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Position\x09\x09\x09\x09\x09The position to query, in world space if ConvertToVoxelSpace is true\n\x09 * @param LOD\x09\x09\x09\x09\x09\x09The LOD at that position\n\x09 * @param bConvertToVoxelSpace\x09\x09If true, the position will be converted to voxel space. Else it will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether voxel collisions are enabled at Position\n@param World                                         The voxel world\n@param Position                                      The position to query, in world space if ConvertToVoxelSpace is true\n@param LOD                                           The LOD at that position\n@param bConvertToVoxelSpace          If true, the position will be converted to voxel space. Else it will be used directly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "AreCollisionsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics
	{
		struct VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms
		{
			AVoxelWorld* World;
			FScriptDelegate OnActivate;
			FScriptDelegate OnDeactivate;
			bool bFireExistingOnes;
			int32 ChunkSize;
			int32 ActivationDistanceInChunks;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnActivate;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDeactivate;
		static void NewProp_bFireExistingOnes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireExistingOnes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationDistanceInChunks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnActivate = { "OnActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, OnActivate), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2874009400
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnDeactivate = { "OnDeactivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, OnDeactivate), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2874009400
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms*)Obj)->bFireExistingOnes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes = { "bFireExistingOnes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, ChunkSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ActivationDistanceInChunks = { "ActivationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, ActivationDistanceInChunks), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnDeactivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ActivationDistanceInChunks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireExistingOnes" },
		{ "Category", "Voxel|Proc Gen" },
		{ "CPP_Default_ActivationDistanceInChunks", "2" },
		{ "CPP_Default_bFireExistingOnes", "false" },
		{ "CPP_Default_ChunkSize", "32" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "BindVoxelChunkEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics
	{
		struct VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms
		{
			AVoxelWorld* World;
			FScriptDelegate OnGenerate;
			bool bFireExistingOnes;
			int32 ChunkSize;
			int32 GenerationDistanceInChunks;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerate;
		static void NewProp_bFireExistingOnes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireExistingOnes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationDistanceInChunks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_OnGenerate = { "OnGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, OnGenerate), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2874009400
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms*)Obj)->bFireExistingOnes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes = { "bFireExistingOnes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, ChunkSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, GenerationDistanceInChunks), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_OnGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_ChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_GenerationDistanceInChunks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireExistingOnes" },
		{ "Category", "Voxel|Proc Gen" },
		{ "CPP_Default_bFireExistingOnes", "false" },
		{ "CPP_Default_ChunkSize", "32" },
		{ "CPP_Default_GenerationDistanceInChunks", "2" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "BindVoxelGenerationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics
	{
		struct VoxelBlueprintLibrary_eventClearAllData_Parms
		{
			AVoxelWorld* World;
			bool bUpdateRender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearAllData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventClearAllData_Parms*)Obj)->bUpdateRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearAllData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Clear all the data in the world, including items/assets\n" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the data in the world, including items/assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearAllData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::VoxelBlueprintLibrary_eventClearAllData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics
	{
		struct VoxelBlueprintLibrary_eventClearDirtyData_Parms
		{
			AVoxelWorld* World;
			bool bUpdateRender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearDirtyData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventClearDirtyData_Parms*)Obj)->bUpdateRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearDirtyData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Clear all the edited data in the world, excluding items/assets\n" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the edited data in the world, excluding items/assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearDirtyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::VoxelBlueprintLibrary_eventClearDirtyData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics
	{
		struct VoxelBlueprintLibrary_eventClearFrames_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearFrames_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
		{ "Comment", "// Clear all the frames. bEnableUndoRedo must be true\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the frames. bEnableUndoRedo must be true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::VoxelBlueprintLibrary_eventClearFrames_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics
	{
		struct VoxelBlueprintLibrary_eventClearMaterialData_Parms
		{
			AVoxelWorld* World;
			bool bUpdateRender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearMaterialData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventClearMaterialData_Parms*)Obj)->bUpdateRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearMaterialData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Clear all the material data in the world\n" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the material data in the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearMaterialData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::VoxelBlueprintLibrary_eventClearMaterialData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics
	{
		struct VoxelBlueprintLibrary_eventClearValueData_Parms
		{
			AVoxelWorld* World;
			bool bUpdateRender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearValueData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventClearValueData_Parms*)Obj)->bUpdateRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearValueData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Clear all the value data in the world\n" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the value data in the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearValueData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::VoxelBlueprintLibrary_eventClearValueData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms
		{
			FVoxelPaintMaterialColor Color;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms, Color), Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, METADATA_PARAMS(nullptr, 0) }; // 119856466
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Create from color\n" },
		{ "DisplayName", "Create RGB Paint Material" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create from color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateColorPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms
		{
			FVoxelPaintMaterialFiveWayBlend FiveWayBlend;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FiveWayBlend;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_FiveWayBlend = { "FiveWayBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms, FiveWayBlend), Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, METADATA_PARAMS(nullptr, 0) }; // 237788936
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_FiveWayBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "/**\n\x09 * Create paint material for 5 way blend\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create paint material for 5 way blend" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateFiveWayBlendPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms
		{
			TMap<EVoxelTaskType,int32> PriorityCategoriesOverrides;
			TMap<EVoxelTaskType,int32> PriorityOffsetsOverrides;
			int32 NumberOfThreads;
			bool bConstantPriorities;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityCategoriesOverrides_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityCategoriesOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityCategoriesOverrides;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOffsetsOverrides_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOffsetsOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityOffsetsOverrides;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfThreads;
		static void NewProp_bConstantPriorities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantPriorities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp = { "PriorityCategoriesOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(nullptr, 0) }; // 1377870353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms, PriorityCategoriesOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_MetaData)) }; // 1377870353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp = { "PriorityOffsetsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(nullptr, 0) }; // 1377870353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms, PriorityOffsetsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_MetaData)) }; // 1377870353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_NumberOfThreads = { "NumberOfThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms, NumberOfThreads), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms*)Obj)->bConstantPriorities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities = { "bConstantPriorities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_NumberOfThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PriorityCategoriesOverrides, PriorityOffsetsOverrides" },
		{ "Category", "Voxel|Threads" },
		{ "Comment", "/**\n\x09 * Create the global voxel thread pool. Must not be already created.\n\x09 * CreateWorldVoxelThreadPool is preferred, as pools will be per level\n\x09 * @param\x09NumberOfThreads\x09\x09""At least 1\n\x09 * @param\x09""bConstantPriorities\x09If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast\n\x09 */" },
		{ "CPP_Default_bConstantPriorities", "false" },
		{ "CPP_Default_NumberOfThreads", "2" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create the global voxel thread pool. Must not be already created.\nCreateWorldVoxelThreadPool is preferred, as pools will be per level\n@param       NumberOfThreads         At least 1\n@param       bConstantPriorities     If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateGlobalVoxelThreadPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms
		{
			FVoxelPaintMaterialMultiIndex MultiIndex;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_MultiIndex = { "MultiIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms, MultiIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, METADATA_PARAMS(nullptr, 0) }; // 3175387577
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_MultiIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Create for multi index\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create for multi index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateMultiIndexPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms
		{
			FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexRaw;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_MultiIndexRaw = { "MultiIndexRaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms, MultiIndexRaw), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, METADATA_PARAMS(nullptr, 0) }; // 2030109324
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_MultiIndexRaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Create for multi index, setting the data directly\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create for multi index, setting the data directly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateMultiIndexRawPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms
		{
			FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexWetness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_MultiIndexWetness = { "MultiIndexWetness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms, MultiIndexWetness), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, METADATA_PARAMS(nullptr, 0) }; // 3947543923
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_MultiIndexWetness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Create for multi index wetness\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create for multi index wetness" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateMultiIndexWetnessPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms
		{
			FVoxelColorTexture VoxelTexture;
			UTexture2D* Texture;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) }; // 605601977
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "/**\n\x09 * Will create Texture if null, and set it\n\x09 * Returns Texture for convenience\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_B8G8R8A8\n\x09 * Compression settings: TC_VectorDisplacementmap\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Will create Texture if null, and set it\nReturns Texture for convenience\n\nTexture will have the following config:\nPixel format: PF_B8G8R8A8\nCompression settings: TC_VectorDisplacementmap\nSRGB: false\nFilter: TF_Bilinear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateOrUpdateTextureFromVoxelColorTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms
		{
			FVoxelFloatTexture VoxelTexture;
			UTexture2D* Texture;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "/**\n\x09 * Will create Texture if null, and set it\n\x09 * Returns Texture for convenience\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_R32_FLOAT\n\x09 * Compression settings: TC_HDR\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Will create Texture if null, and set it\nReturns Texture for convenience\n\nTexture will have the following config:\nPixel format: PF_R32_FLOAT\nCompression settings: TC_HDR\nSRGB: false\nFilter: TF_Bilinear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateOrUpdateTextureFromVoxelFloatTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms
		{
			FVoxelPaintMaterialSingleIndex SingleIndex;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_SingleIndex = { "SingleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms, SingleIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, METADATA_PARAMS(nullptr, 0) }; // 1259463587
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_SingleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Create for single index\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create for single index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateSingleIndexPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms
		{
			FVoxelColorTexture VoxelTexture;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) }; // 605601977
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "/**\n\x09 * Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_B8G8R8A8\n\x09 * Compression settings: TC_VectorDisplacementmap\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\nTexture will have the following config:\nPixel format: PF_B8G8R8A8\nCompression settings: TC_VectorDisplacementmap\nSRGB: false\nFilter: TF_Bilinear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateTextureFromVoxelColorTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms
		{
			FVoxelFloatTexture VoxelTexture;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "/**\n\x09 * Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_R32_FLOAT\n\x09 * Compression settings: TC_HDR\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\nTexture will have the following config:\nPixel format: PF_R32_FLOAT\nCompression settings: TC_HDR\nSRGB: false\nFilter: TF_Bilinear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateTextureFromVoxelFloatTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateToolRendering_Parms
		{
			AVoxelWorld* World;
			FVoxelToolRenderingRef ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateToolRendering_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateToolRendering_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(nullptr, 0) }; // 4066558939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateToolRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::VoxelBlueprintLibrary_eventCreateToolRendering_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms
		{
			FVoxelPaintMaterialUV UV;
			FVoxelPaintMaterial ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms, UV), Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, METADATA_PARAMS(nullptr, 0) }; // 2968166801
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) }; // 1395000622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// Create UV paint\n" },
		{ "DisplayName", "Create UV Paint Material" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create UV paint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateUVPaintMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms
		{
			FVoxelFloatTexture Texture;
			EVoxelRGBA Channel;
			bool bNormalize;
			FVoxelColorTexture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(nullptr, 0) }; // 1494340730
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) }; // 605601977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "/**\n\x09 * Creates a voxel color texture by putting a float texture into a specific channel\n\x09 * @param bNormalize\x09If true, the float texture min value will be mapped to 0, and max value to 1\n\x09 */" },
		{ "CPP_Default_bNormalize", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Creates a voxel color texture by putting a float texture into a specific channel\n@param bNormalize    If true, the float texture min value will be mapped to 0, and max value to 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateVoxelColorTextureFromVoxelFloatTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms
		{
			UTexture2D* Texture;
			EVoxelRGBA Channel;
			FVoxelFloatTexture ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(nullptr, 0) }; // 1494340730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "/**\n\x09 * Creates a voxel float texture from the color channel of a texture\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Creates a voxel float texture from the color channel of a texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateVoxelFloatTextureFromTextureChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics
	{
		struct VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms
		{
			UWorld* World;
			TMap<EVoxelTaskType,int32> PriorityCategoriesOverrides;
			TMap<EVoxelTaskType,int32> PriorityOffsetsOverrides;
			int32 NumberOfThreads;
			bool bConstantPriorities;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityCategoriesOverrides_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityCategoriesOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityCategoriesOverrides;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOffsetsOverrides_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOffsetsOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityOffsetsOverrides;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfThreads;
		static void NewProp_bConstantPriorities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantPriorities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp = { "PriorityCategoriesOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(nullptr, 0) }; // 1377870353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, PriorityCategoriesOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_MetaData)) }; // 1377870353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp = { "PriorityOffsetsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(nullptr, 0) }; // 1377870353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, PriorityOffsetsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_MetaData)) }; // 1377870353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_NumberOfThreads = { "NumberOfThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, NumberOfThreads), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms*)Obj)->bConstantPriorities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities = { "bConstantPriorities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_NumberOfThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PriorityCategoriesOverrides, PriorityOffsetsOverrides" },
		{ "Category", "Voxel|Threads" },
		{ "Comment", "/**\n\x09 * Create the voxel thread pool for a specific world. Must not be already created.\n\x09 * @param\x09NumberOfThreads\x09\x09""At least 1\n\x09 * @param\x09""bConstantPriorities\x09If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast\n\x09 */" },
		{ "CPP_Default_bConstantPriorities", "false" },
		{ "CPP_Default_NumberOfThreads", "2" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Create the voxel thread pool for a specific world. Must not be already created.\n@param       NumberOfThreads         At least 1\n@param       bConstantPriorities     If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateWorldVoxelThreadPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
		{ "Comment", "// Destroy the global voxel thread pool\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Destroy the global voxel thread pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "DestroyGlobalVoxelThreadPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics
	{
		struct VoxelBlueprintLibrary_eventDestroyToolRendering_Parms
		{
			AVoxelWorld* World;
			FVoxelToolRenderingRef Ref;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDestroyToolRendering_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDestroyToolRendering_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(nullptr, 0) }; // 4066558939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_Ref,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "DestroyToolRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::VoxelBlueprintLibrary_eventDestroyToolRendering_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics
	{
		struct VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms
		{
			UWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
		{ "Comment", "// Destroy the world voxel thread pool\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Destroy the world voxel thread pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "DestroyWorldVoxelThreadPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics
	{
		struct VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms
		{
			FIntVector Left;
			int32 Right;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms, Right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "/" },
		{ "DisplayName", "IntVector / int" },
		{ "Keywords", "/ divide" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Divide_IntVectorInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics
	{
		struct VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			TArray<AVoxelWorld*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return all the ones that contains Position\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return all the ones that contains Position" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetAllVoxelWorldsContainingPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics
	{
		struct VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms
		{
			AActor* Actor;
			TArray<AVoxelWorld*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return all the ones that overlaps the actor bounding box\n\x09 */" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return all the ones that overlaps the actor bounding box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetAllVoxelWorldsOverlappingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics
	{
		struct VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms
		{
			UObject* WorldContextObject;
			FBox Box;
			TArray<AVoxelWorld*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return all the ones that overlaps Box\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return all the ones that overlaps Box" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetAllVoxelWorldsOverlappingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics
	{
		struct VoxelBlueprintLibrary_eventGetBounds_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Bounds of this world\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Bounds of this world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::VoxelBlueprintLibrary_eventGetBounds_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics
	{
		struct VoxelBlueprintLibrary_eventGetColor_Parms
		{
			FVoxelMaterial Material;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetColor_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::VoxelBlueprintLibrary_eventGetColor_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics
	{
		struct VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms
		{
			AVoxelWorld* World;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "Comment", "// Returns the memory used by positions and indices buffers in this voxel world\n// Should give a rough estimate of how much memory is used for physics\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Returns the memory used by positions and indices buffers in this voxel world\nShould give a rough estimate of how much memory is used for physics" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetEstimatedCollisionsMemoryUsageInMB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics
	{
		struct VoxelBlueprintLibrary_eventGetFloatOutput_Parms
		{
			AVoxelWorld* World;
			FName Name;
			float X;
			float Y;
			float Z;
			float DefaultValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Get a custom float output value\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Get a custom float output value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetFloatOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::VoxelBlueprintLibrary_eventGetFloatOutput_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics
	{
		struct VoxelBlueprintLibrary_eventGetHistoryPosition_Parms
		{
			AVoxelWorld* World;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetHistoryPosition_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetHistoryPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
		{ "Comment", "// Get the current history position\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Get the current history position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetHistoryPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::VoxelBlueprintLibrary_eventGetHistoryPosition_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics
	{
		struct VoxelBlueprintLibrary_eventGetIntOutput_Parms
		{
			AVoxelWorld* World;
			FName Name;
			float X;
			float Y;
			float Z;
			int32 DefaultValue;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Get a custom int32 output value\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Get a custom int32 output value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetIntOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::VoxelBlueprintLibrary_eventGetIntOutput_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics
	{
		struct VoxelBlueprintLibrary_eventGetMax_Intvector_Parms
		{
			FIntVector Vector;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMax_Intvector_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMax_Intvector_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "DisplayName", "Get Max" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMax_Intvector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::VoxelBlueprintLibrary_eventGetMax_Intvector_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics
	{
		struct VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms
		{
			EVoxelMemoryUsageType Type;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms, Type), Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType, METADATA_PARAMS(nullptr, 0) }; // 247680393
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "Comment", "// Get the current memory usage of different parts of the plugin\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Get the current memory usage of different parts of the plugin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMemoryUsageInMB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics
	{
		struct VoxelBlueprintLibrary_eventGetMin_Intvector_Parms
		{
			FIntVector Vector;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMin_Intvector_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMin_Intvector_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "DisplayName", "Get Min" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMin_Intvector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::VoxelBlueprintLibrary_eventGetMin_Intvector_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics
	{
		struct VoxelBlueprintLibrary_eventGetMultiIndex_Parms
		{
			FVoxelMaterial Material;
			bool bSortByStrength;
			float Strength0;
			uint8 Index0;
			float Strength1;
			uint8 Index1;
			float Strength2;
			uint8 Index2;
			float Strength3;
			uint8 Index3;
			float Wetness;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static void NewProp_bSortByStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortByStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index3;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Wetness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventGetMultiIndex_Parms*)Obj)->bSortByStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength = { "bSortByStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventGetMultiIndex_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength0 = { "Strength0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength1 = { "Strength1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength2 = { "Strength2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength3 = { "Strength3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index3 = { "Index3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Wetness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Wetness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "Comment", "// If SortByStrength is true, Index 0 will have the highest strength, Index 1 the second highest etc\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "If SortByStrength is true, Index 0 will have the highest strength, Index 1 the second highest etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMultiIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::VoxelBlueprintLibrary_eventGetMultiIndex_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics
	{
		struct VoxelBlueprintLibrary_eventGetNormal_Parms
		{
			AVoxelWorld* World;
			FIntVector Position;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetNormal_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetNormal_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Get the normal at Position using the density gradient. May differ from the mesh normal\n" },
		{ "DefaultToSelf", "World" },
		{ "Keywords", "gradient" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Get the normal at Position using the density gradient. May differ from the mesh normal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::VoxelBlueprintLibrary_eventGetNormal_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics
	{
		struct VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms
		{
			EVoxelMemoryUsageType Type;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms, Type), Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType, METADATA_PARAMS(nullptr, 0) }; // 247680393
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "Comment", "// Get the peak memory usage of different parts of the plugin\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Get the peak memory usage of different parts of the plugin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetPeakMemoryUsageInMB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventGetRawMaterial_Parms
		{
			FVoxelMaterial Material;
			uint8 R;
			uint8 G;
			uint8 B;
			uint8 A;
			uint8 U0;
			uint8 V0;
			uint8 U1;
			uint8 V1;
			uint8 U2;
			uint8 V2;
			uint8 U3;
			uint8 V3;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_R;
		static const UECodeGen_Private::FBytePropertyParams NewProp_G;
		static const UECodeGen_Private::FBytePropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, R), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, G), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, B), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, A), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U0 = { "U0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U1 = { "U1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U2 = { "U2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U3 = { "U3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetRawMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::VoxelBlueprintLibrary_eventGetRawMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics
	{
		struct VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox DataBounds;
			int32 LOD;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataBounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_DataBounds = { "DataBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, DataBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_DataBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Utilities" },
		{ "Comment", "// eg if you want to cache all the data that's going to be used by render chunks when updating the world\n" },
		{ "CPP_Default_LOD", "0" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "eg if you want to cache all the data that's going to be used by render chunks when updating the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetRenderBoundsOverlappingDataBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics
	{
		struct VoxelBlueprintLibrary_eventGetSingleIndex_Parms
		{
			FVoxelMaterial Material;
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSingleIndex_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSingleIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetSingleIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::VoxelBlueprintLibrary_eventGetSingleIndex_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics
	{
		struct VoxelBlueprintLibrary_eventGetSpawnersSave_Parms
		{
			AVoxelWorld* World;
			FVoxelSpawnersSave ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSpawnersSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSpawnersSave_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSpawnersSave, METADATA_PARAMS(nullptr, 0) }; // 1223769412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetSpawnersSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::VoxelBlueprintLibrary_eventGetSpawnersSave_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics
	{
		struct VoxelBlueprintLibrary_eventGetTaskCount_Parms
		{
			AVoxelWorld* World;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetTaskCount_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetTaskCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Number of mesh processing tasks not finished\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Number of mesh processing tasks not finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetTaskCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::VoxelBlueprintLibrary_eventGetTaskCount_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics
	{
		struct VoxelBlueprintLibrary_eventGetUV_Parms
		{
			FVoxelMaterial Material;
			int32 Channel;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetUV_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetUV_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::VoxelBlueprintLibrary_eventGetUV_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics
	{
		struct VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms
		{
			FVoxelColorTexture Texture;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms, Texture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) }; // 605601977
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelColorTextureSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics
	{
		struct VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms
		{
			FVoxelFloatTexture Texture;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelFloatTextureSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics
	{
		struct VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			AVoxelWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return the first one that contains Position\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return the first one that contains Position" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelWorldContainingPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics
	{
		struct VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms
		{
			AActor* Actor;
			AVoxelWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return the first one that overlaps the actor bounding box\n\x09 */" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return the first one that overlaps the actor bounding box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelWorldOverlappingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics
	{
		struct VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms
		{
			UObject* WorldContextObject;
			FBox Box;
			AVoxelWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return the first one that overlaps Box\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return the first one that overlaps Box" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelWorldOverlappingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics
	{
		struct VoxelBlueprintLibrary_eventHasMaterialData_Parms
		{
			AVoxelWorld* World;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventHasMaterialData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventHasMaterialData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventHasMaterialData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "HasMaterialData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::VoxelBlueprintLibrary_eventHasMaterialData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics
	{
		struct VoxelBlueprintLibrary_eventHasValueData_Parms
		{
			AVoxelWorld* World;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventHasValueData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventHasValueData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventHasValueData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "HasValueData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::VoxelBlueprintLibrary_eventHasValueData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics
	{
		struct VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
		{ "Comment", "// Is the global voxel thread pool created?\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Is the global voxel thread pool created?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsGlobalVoxelPoolCreated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics
	{
		struct VoxelBlueprintLibrary_eventIsValidRef_Parms
		{
			AVoxelWorld* World;
			FVoxelToolRenderingRef Ref;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsValidRef_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsValidRef_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(nullptr, 0) }; // 4066558939
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsValidRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsValidRef_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsValidRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::VoxelBlueprintLibrary_eventIsValidRef_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics
	{
		struct VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms
		{
			FVoxelFloatTexture Texture;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelColorTextureValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics
	{
		struct VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms
		{
			FVoxelFloatTexture Texture;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelFloatTextureValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics
	{
		struct VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelPluginPro", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics
	{
		struct VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms
		{
			AVoxelWorld* World;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Returns true if there are still foliage tasks queued\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if there are still foliage tasks queued" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelWorldFoliageLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics
	{
		struct VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms
		{
			AVoxelWorld* World;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Returns true if there are still mesh tasks queued\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if there are still mesh tasks queued" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelWorldMeshLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics
	{
		struct VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
		{ "Comment", "// Is the global voxel thread pool created?\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Is the global voxel thread pool created?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsWorldVoxelPoolCreated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics
	{
		struct VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms
		{
			AVoxelWorld* World;
			FVoxelSpawnersSave Save;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Save;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelSpawnersSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save_MetaData)) }; // 1223769412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "LoadFromSpawnersSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "LogMemoryStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics
	{
		struct VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms
		{
			AVoxelWorld* World;
			FVector GlobalPosition;
			float Radius;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_GlobalPosition = { "GlobalPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, GlobalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_GlobalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Utilities" },
		{ "Comment", "/**\n\x09 * Make IntBox from global position and radius\n\x09 * @param\x09Radius\x09in cm\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Make IntBox from global position and radius\n@param       Radius  in cm" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MakeIntBoxFromGlobalPositionAndRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics
	{
		struct VoxelBlueprintLibrary_eventMakeMaterialMask_Parms
		{
			bool R;
			bool G;
			bool B;
			bool A;
			bool U0;
			bool V0;
			bool U1;
			bool V1;
			bool U2;
			bool V2;
			bool U3;
			bool V3;
			int32 ReturnValue;
		};
		static void NewProp_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
		static void NewProp_G_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static void NewProp_U0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_U0;
		static void NewProp_V0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_V0;
		static void NewProp_U1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_U1;
		static void NewProp_V1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_V1;
		static void NewProp_U2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_U2;
		static void NewProp_V2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_V2;
		static void NewProp_U3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_U3;
		static void NewProp_V3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_V3;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0 = { "U0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1 = { "U1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2 = { "U2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3 = { "U3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MakeMaterialMask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventMakeRawMaterial_Parms
		{
			uint8 R;
			uint8 G;
			uint8 B;
			uint8 A;
			uint8 U0;
			uint8 V0;
			uint8 U1;
			uint8 V1;
			uint8 U2;
			uint8 V2;
			uint8 U3;
			uint8 V3;
			FVoxelMaterial ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_R;
		static const UECodeGen_Private::FBytePropertyParams NewProp_G;
		static const UECodeGen_Private::FBytePropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_U3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, R), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, G), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, B), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, A), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U0 = { "U0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U1 = { "U1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U2 = { "U2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U3 = { "U3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 1161269177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MakeRawMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::VoxelBlueprintLibrary_eventMakeRawMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics
	{
		struct VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "Comment", "// Mark spawners as dirty so that they don't get trash if they go out of scope\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Mark spawners as dirty so that they don't get trash if they go out of scope" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MarkSpawnersDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics
	{
		struct VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms
		{
			int32 Left;
			FIntVector Right;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms, Left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "int * IntVector" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Multiply_IntIntVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics
	{
		struct VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms
		{
			FIntVector Left;
			int32 Right;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms, Right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "IntVector * int" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Multiply_IntVectorInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics
	{
		struct VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms
		{
			FIntVector Left;
			FIntVector Right;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "IntVector * IntVector" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Multiply_IntVectorIntVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics
	{
		struct VoxelBlueprintLibrary_eventNumberOfCores_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventNumberOfCores_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Returns the number of cores the CPU has. Ignores hyperthreading unless -usehyperthreading is passed as a command line argument.\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Returns the number of cores the CPU has. Ignores hyperthreading unless -usehyperthreading is passed as a command line argument." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "NumberOfCores", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::VoxelBlueprintLibrary_eventNumberOfCores_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics
	{
		struct VoxelBlueprintLibrary_eventRaiseError_Parms
		{
			FString Message;
			UObject* Object;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseError_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseError_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "Voxel" },
		{ "CPP_Default_Object", "None" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RaiseError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::VoxelBlueprintLibrary_eventRaiseError_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics
	{
		struct VoxelBlueprintLibrary_eventRaiseInfo_Parms
		{
			FString Message;
			UObject* Object;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseInfo_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseInfo_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "Voxel" },
		{ "CPP_Default_Object", "None" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RaiseInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::VoxelBlueprintLibrary_eventRaiseInfo_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics
	{
		struct VoxelBlueprintLibrary_eventRaiseWarning_Parms
		{
			FString Message;
			UObject* Object;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseWarning_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseWarning_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "Voxel" },
		{ "CPP_Default_Object", "None" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RaiseWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::VoxelBlueprintLibrary_eventRaiseWarning_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics
	{
		struct VoxelBlueprintLibrary_eventRecreate_Parms
		{
			AVoxelWorld* World;
			bool bSaveData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bSaveData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRecreate_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventRecreate_Parms*)Obj)->bSaveData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData = { "bSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventRecreate_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Call this to recreate the voxel world entirely, optionally keeping data intact by saving it\n" },
		{ "CPP_Default_bSaveData", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Call this to recreate the voxel world entirely, optionally keeping data intact by saving it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Recreate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::VoxelBlueprintLibrary_eventRecreate_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics
	{
		struct VoxelBlueprintLibrary_eventRecreateRender_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRecreateRender_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Call this to recreate the voxel world rendering entirely, keeping data intact\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Call this to recreate the voxel world rendering entirely, keeping data intact" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RecreateRender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::VoxelBlueprintLibrary_eventRecreateRender_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics
	{
		struct VoxelBlueprintLibrary_eventRecreateSpawners_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRecreateSpawners_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Call this to recreate the voxel world spawners\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Call this to recreate the voxel world spawners" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RecreateSpawners", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::VoxelBlueprintLibrary_eventRecreateSpawners_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics
	{
		struct VoxelBlueprintLibrary_eventRedo_Parms
		{
			AVoxelWorld* World;
			TArray<FVoxelIntBox> OutUpdatedBounds;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUpdatedBounds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUpdatedBounds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRedo_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds_Inner = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRedo_Parms, OutUpdatedBounds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventRedo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventRedo_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
		{ "Comment", "// Redo last undone frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n// @return Success\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Redo last undone frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n@return Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Redo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::VoxelBlueprintLibrary_eventRedo_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics
	{
		struct VoxelBlueprintLibrary_eventRegenerateSpawners_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRegenerateSpawners_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRegenerateSpawners_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "Comment", "/**\n\x09 * IVoxelSpawnerManager helpers\n\x09 */// Regenerate spawners in an aera\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "IVoxelSpawnerManager helpers\n        // Regenerate spawners in an aera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RegenerateSpawners", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::VoxelBlueprintLibrary_eventRegenerateSpawners_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics
	{
		struct VoxelBlueprintLibrary_eventSaveFrame_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSaveFrame_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
		{ "Comment", "// Save the edits since the last call to SaveFrame/Undo/Redo and clear the redo stack. bEnableUndoRedo must be true\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Save the edits since the last call to SaveFrame/Undo/Redo and clear the redo stack. bEnableUndoRedo must be true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SaveFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::VoxelBlueprintLibrary_eventSaveFrame_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics
	{
		struct VoxelBlueprintLibrary_eventScaleData_Parms
		{
			AVoxelWorld* World;
			FVector Scale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventScaleData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventScaleData_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Scale the voxel world data. Will recreate the voxel world!\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Scale the voxel world data. Will recreate the voxel world!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ScaleData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::VoxelBlueprintLibrary_eventScaleData_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics
	{
		struct VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms
		{
			AVoxelWorld* World;
			FVoxelToolRenderingRef Ref;
			FBox Bounds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(nullptr, 0) }; // 4066558939
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "Comment", "// Bounds: In world space\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Bounds: In world space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SetToolRenderingBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics
	{
		struct VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms
		{
			AVoxelWorld* World;
			FVoxelToolRenderingRef Ref;
			bool bEnabled;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(nullptr, 0) }; // 4066558939
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "CPP_Default_bEnabled", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SetToolRenderingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics
	{
		struct VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms
		{
			AVoxelWorld* World;
			FVoxelToolRenderingRef Ref;
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(nullptr, 0) }; // 4066558939
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SetToolRenderingMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics
	{
		struct VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms
		{
			AVoxelWorld* World;
			UVoxelHierarchicalInstancedStaticMeshComponent* Component;
			int32 InstanceIndex;
			AVoxelSpawnerActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, Component), Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, ReturnValue), Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SpawnVoxelSpawnerActorByInstanceIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics
	{
		struct VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms
		{
			TArray<AVoxelSpawnerActor*> OutActors;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			EVoxelSpawnerActorSpawnType SpawnType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType = { "SpawnType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, SpawnType), Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType, METADATA_PARAMS(nullptr, 0) }; // 1494567269
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "Comment", "// Will replace instanced static mesh instances by actors\n" },
		{ "CPP_Default_SpawnType", "OnlyFloating" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Will replace instanced static mesh instances by actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SpawnVoxelSpawnerActorsInArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics
	{
		struct VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms
		{
			FIntVector Left;
			FIntVector Right;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "IntVector - IntVector" },
		{ "Keywords", "- subtract minus" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Substract_IntVectorIntVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics
	{
		struct VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms
		{
			AVoxelWorld* World;
			FBox Box;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Transform a box in global space to voxel space\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Transform a box in global space to voxel space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "TransformGlobalBoxToVoxelBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics
	{
		struct VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Box;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
		{ "Comment", "/**\n\x09 * Transform a box in voxel space to global space\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Transform a box in voxel space to global space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "TransformVoxelBoxToGlobalBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics
	{
		struct VoxelBlueprintLibrary_eventUndo_Parms
		{
			AVoxelWorld* World;
			TArray<FVoxelIntBox> OutUpdatedBounds;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUpdatedBounds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUpdatedBounds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUndo_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds_Inner = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUndo_Parms, OutUpdatedBounds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelBlueprintLibrary_eventUndo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventUndo_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
		{ "Comment", "// Undo last frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n// @return Success\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Undo last frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n@return Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Undo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::VoxelBlueprintLibrary_eventUndo_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics
	{
		struct VoxelBlueprintLibrary_eventUpdateAll_Parms
		{
			AVoxelWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdateAll_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Update all the chunks\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Update all the chunks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "UpdateAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::VoxelBlueprintLibrary_eventUpdateAll_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics
	{
		struct VoxelBlueprintLibrary_eventUpdateBounds_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdateBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdateBounds_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Update the chunks overlapping Bounds. \n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Update the chunks overlapping Bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "UpdateBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::VoxelBlueprintLibrary_eventUpdateBounds_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics
	{
		struct VoxelBlueprintLibrary_eventUpdatePosition_Parms
		{
			AVoxelWorld* World;
			FIntVector Position;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdatePosition_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdatePosition_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
		{ "Comment", "// Update the chunks overlapping Position\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ToolTip", "Update the chunks overlapping Position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "UpdatePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::VoxelBlueprintLibrary_eventUpdatePosition_Parms), Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelBlueprintLibrary);
	UClass* Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister()
	{
		return UVoxelBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector, "Add_IntVectorIntVector" }, // 3165643248
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances, "AddInstances" }, // 1089037489
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet, "AddNeighborsToSet" }, // 3558984731
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings, "ApplyLODSettings" }, // 29513683
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials, "ApplyNewMaterials" }, // 2799539962
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial, "ApplyPaintMaterial" }, // 2644097950
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled, "AreCollisionsEnabled" }, // 1910027449
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents, "BindVoxelChunkEvents" }, // 3469107159
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent, "BindVoxelGenerationEvent" }, // 2992059295
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData, "ClearAllData" }, // 3124748545
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData, "ClearDirtyData" }, // 846400826
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames, "ClearFrames" }, // 2955284841
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData, "ClearMaterialData" }, // 1591709382
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData, "ClearValueData" }, // 614276169
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial, "CreateColorPaintMaterial" }, // 705322087
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial, "CreateFiveWayBlendPaintMaterial" }, // 1781519111
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool, "CreateGlobalVoxelThreadPool" }, // 2876771301
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial, "CreateMultiIndexPaintMaterial" }, // 3896304626
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial, "CreateMultiIndexRawPaintMaterial" }, // 862277346
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial, "CreateMultiIndexWetnessPaintMaterial" }, // 870196102
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture, "CreateOrUpdateTextureFromVoxelColorTexture" }, // 832916099
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture, "CreateOrUpdateTextureFromVoxelFloatTexture" }, // 2480755849
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial, "CreateSingleIndexPaintMaterial" }, // 799517977
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture, "CreateTextureFromVoxelColorTexture" }, // 2412743750
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture, "CreateTextureFromVoxelFloatTexture" }, // 1990572161
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering, "CreateToolRendering" }, // 4013392272
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial, "CreateUVPaintMaterial" }, // 2665429711
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture, "CreateVoxelColorTextureFromVoxelFloatTexture" }, // 530408492
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel, "CreateVoxelFloatTextureFromTextureChannel" }, // 3815274326
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool, "CreateWorldVoxelThreadPool" }, // 1385330567
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool, "DestroyGlobalVoxelThreadPool" }, // 1686156827
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering, "DestroyToolRendering" }, // 448136490
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool, "DestroyWorldVoxelThreadPool" }, // 451795738
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt, "Divide_IntVectorInt" }, // 1991536014
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition, "GetAllVoxelWorldsContainingPosition" }, // 3842725162
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor, "GetAllVoxelWorldsOverlappingActor" }, // 371883074
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox, "GetAllVoxelWorldsOverlappingBox" }, // 3438527354
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds, "GetBounds" }, // 1856554962
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor, "GetColor" }, // 932870353
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB, "GetEstimatedCollisionsMemoryUsageInMB" }, // 592835043
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput, "GetFloatOutput" }, // 1430962903
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition, "GetHistoryPosition" }, // 4107196095
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput, "GetIntOutput" }, // 2734141076
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector, "GetMax_Intvector" }, // 3214791446
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB, "GetMemoryUsageInMB" }, // 1803953127
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector, "GetMin_Intvector" }, // 1790420705
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex, "GetMultiIndex" }, // 4120280598
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal, "GetNormal" }, // 3709819189
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB, "GetPeakMemoryUsageInMB" }, // 379450278
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial, "GetRawMaterial" }, // 2494650746
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds, "GetRenderBoundsOverlappingDataBounds" }, // 3827880270
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex, "GetSingleIndex" }, // 3246279330
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave, "GetSpawnersSave" }, // 2185446252
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount, "GetTaskCount" }, // 1353867938
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV, "GetUV" }, // 3737459069
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize, "GetVoxelColorTextureSize" }, // 2320407729
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize, "GetVoxelFloatTextureSize" }, // 1253228170
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition, "GetVoxelWorldContainingPosition" }, // 1490639459
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor, "GetVoxelWorldOverlappingActor" }, // 1759720242
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox, "GetVoxelWorldOverlappingBox" }, // 544085397
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData, "HasMaterialData" }, // 1987959003
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData, "HasValueData" }, // 4040420416
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated, "IsGlobalVoxelPoolCreated" }, // 583475415
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef, "IsValidRef" }, // 1214378904
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid, "IsVoxelColorTextureValid" }, // 1076005203
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid, "IsVoxelFloatTextureValid" }, // 3594481998
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro, "IsVoxelPluginPro" }, // 2107452114
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading, "IsVoxelWorldFoliageLoading" }, // 2695275757
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading, "IsVoxelWorldMeshLoading" }, // 3186267835
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated, "IsWorldVoxelPoolCreated" }, // 2742198279
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave, "LoadFromSpawnersSave" }, // 2500363746
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats, "LogMemoryStats" }, // 2266296941
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius, "MakeIntBoxFromGlobalPositionAndRadius" }, // 3224887694
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask, "MakeMaterialMask" }, // 876704384
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial, "MakeRawMaterial" }, // 1647785709
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty, "MarkSpawnersDirty" }, // 470979800
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector, "Multiply_IntIntVector" }, // 2951215091
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt, "Multiply_IntVectorInt" }, // 3315913350
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector, "Multiply_IntVectorIntVector" }, // 2104872005
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores, "NumberOfCores" }, // 358252453
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError, "RaiseError" }, // 1880238511
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo, "RaiseInfo" }, // 1590761411
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning, "RaiseWarning" }, // 1967576086
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate, "Recreate" }, // 4285749888
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender, "RecreateRender" }, // 1453715831
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners, "RecreateSpawners" }, // 1465402442
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo, "Redo" }, // 1175954710
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners, "RegenerateSpawners" }, // 4040703089
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame, "SaveFrame" }, // 3808794423
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData, "ScaleData" }, // 2817533555
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds, "SetToolRenderingBounds" }, // 2694940485
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled, "SetToolRenderingEnabled" }, // 2314591219
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial, "SetToolRenderingMaterial" }, // 1091343400
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex, "SpawnVoxelSpawnerActorByInstanceIndex" }, // 797175254
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea, "SpawnVoxelSpawnerActorsInArea" }, // 311749242
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector, "Substract_IntVectorIntVector" }, // 3188607167
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox, "TransformGlobalBoxToVoxelBox" }, // 636719713
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox, "TransformVoxelBoxToGlobalBox" }, // 3111232
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo, "Undo" }, // 3655364225
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll, "UpdateAll" }, // 176938146
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds, "UpdateBounds" }, // 831486192
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition, "UpdatePosition" }, // 538764218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::ClassParams = {
		&UVoxelBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVoxelBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelBlueprintLibrary.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelBlueprintLibrary>()
	{
		return UVoxelBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::EnumInfo[] = {
		{ EVoxelMemoryUsageType_StaticEnum, TEXT("EVoxelMemoryUsageType"), &Z_Registration_Info_UEnum_EVoxelMemoryUsageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 247680393U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FVoxelToolRenderingRef::StaticStruct, Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::NewStructOps, TEXT("VoxelToolRenderingRef"), &Z_Registration_Info_UScriptStruct_VoxelToolRenderingRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelToolRenderingRef), 4066558939U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBlueprintLibrary, UVoxelBlueprintLibrary::StaticClass, TEXT("UVoxelBlueprintLibrary"), &Z_Registration_Info_UClass_UVoxelBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBlueprintLibrary), 3366439503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_3949616026(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
