// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
struct FVoxelIntBox;
struct FIntVector;
struct FVoxelFloatTexture;
struct FVoxelColorTexture;
struct FIntPoint;
enum class EVoxelRGBA : uint8;
class UTexture2D;
struct FVoxelMaterial;
struct FLinearColor;
struct FVoxelPaintMaterial;
struct FVoxelPaintMaterialUV;
struct FVoxelPaintMaterialMultiIndexRaw;
struct FVoxelPaintMaterialMultiIndexWetness;
struct FVoxelPaintMaterialMultiIndex;
struct FVoxelPaintMaterialSingleIndex;
struct FVoxelPaintMaterialFiveWayBlend;
struct FVoxelPaintMaterialColor;
class UWorld;
enum class EVoxelTaskType : uint8; 
struct FVoxelToolRenderingRef;
class UMaterialInterface;
struct FVoxelSpawnersSave;
class UStaticMesh;
struct FVoxelInstancedMeshSettings;
struct FVoxelSpawnerActorSettings;
class UVoxelHierarchicalInstancedStaticMeshComponent;
class AVoxelSpawnerActor;
enum class EVoxelSpawnerActorSpawnType : uint8;
class AActor;
class UObject;
enum class EVoxelMemoryUsageType : uint8;
#ifdef VOXEL_VoxelBlueprintLibrary_generated_h
#error "VoxelBlueprintLibrary.generated.h already included, missing '#pragma once' in VoxelBlueprintLibrary.h"
#endif
#define VOXEL_VoxelBlueprintLibrary_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_27_DELEGATE \
struct _Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms \
{ \
	AVoxelWorld* World; \
	FVoxelIntBox Bounds; \
}; \
static inline void FVoxelOnChunkGenerationDynamicDelegate_DelegateWrapper(const FScriptDelegate& VoxelOnChunkGenerationDynamicDelegate, AVoxelWorld* World, FVoxelIntBox Bounds) \
{ \
	_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms Parms; \
	Parms.World=World; \
	Parms.Bounds=Bounds; \
	VoxelOnChunkGenerationDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_28_DELEGATE \
struct _Script_Voxel_eventChunkDynamicDelegate_Parms \
{ \
	FVoxelIntBox Bounds; \
}; \
static inline void FChunkDynamicDelegate_DelegateWrapper(const FScriptDelegate& ChunkDynamicDelegate, FVoxelIntBox Bounds) \
{ \
	_Script_Voxel_eventChunkDynamicDelegate_Parms Parms; \
	Parms.Bounds=Bounds; \
	ChunkDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolRenderingRef>();

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNeighborsToSet); \
	DECLARE_FUNCTION(execIsVoxelColorTextureValid); \
	DECLARE_FUNCTION(execIsVoxelFloatTextureValid); \
	DECLARE_FUNCTION(execGetVoxelColorTextureSize); \
	DECLARE_FUNCTION(execGetVoxelFloatTextureSize); \
	DECLARE_FUNCTION(execCreateVoxelColorTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execCreateTextureFromVoxelColorTexture); \
	DECLARE_FUNCTION(execCreateOrUpdateTextureFromVoxelColorTexture); \
	DECLARE_FUNCTION(execCreateVoxelFloatTextureFromTextureChannel); \
	DECLARE_FUNCTION(execCreateTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execCreateOrUpdateTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execMakeMaterialMask); \
	DECLARE_FUNCTION(execMakeRawMaterial); \
	DECLARE_FUNCTION(execGetRawMaterial); \
	DECLARE_FUNCTION(execGetUV); \
	DECLARE_FUNCTION(execGetMultiIndex); \
	DECLARE_FUNCTION(execGetSingleIndex); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execApplyPaintMaterial); \
	DECLARE_FUNCTION(execCreateUVPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexRawPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexWetnessPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexPaintMaterial); \
	DECLARE_FUNCTION(execCreateSingleIndexPaintMaterial); \
	DECLARE_FUNCTION(execCreateFiveWayBlendPaintMaterial); \
	DECLARE_FUNCTION(execCreateColorPaintMaterial); \
	DECLARE_FUNCTION(execGetMin_Intvector); \
	DECLARE_FUNCTION(execGetMax_Intvector); \
	DECLARE_FUNCTION(execMultiply_IntIntVector); \
	DECLARE_FUNCTION(execMultiply_IntVectorInt); \
	DECLARE_FUNCTION(execDivide_IntVectorInt); \
	DECLARE_FUNCTION(execMultiply_IntVectorIntVector); \
	DECLARE_FUNCTION(execSubstract_IntVectorIntVector); \
	DECLARE_FUNCTION(execAdd_IntVectorIntVector); \
	DECLARE_FUNCTION(execGetRenderBoundsOverlappingDataBounds); \
	DECLARE_FUNCTION(execMakeIntBoxFromGlobalPositionAndRadius); \
	DECLARE_FUNCTION(execIsWorldVoxelPoolCreated); \
	DECLARE_FUNCTION(execDestroyWorldVoxelThreadPool); \
	DECLARE_FUNCTION(execCreateWorldVoxelThreadPool); \
	DECLARE_FUNCTION(execIsGlobalVoxelPoolCreated); \
	DECLARE_FUNCTION(execDestroyGlobalVoxelThreadPool); \
	DECLARE_FUNCTION(execCreateGlobalVoxelThreadPool); \
	DECLARE_FUNCTION(execSetToolRenderingEnabled); \
	DECLARE_FUNCTION(execSetToolRenderingBounds); \
	DECLARE_FUNCTION(execSetToolRenderingMaterial); \
	DECLARE_FUNCTION(execDestroyToolRendering); \
	DECLARE_FUNCTION(execCreateToolRendering); \
	DECLARE_FUNCTION(execIsValidRef); \
	DECLARE_FUNCTION(execBindVoxelGenerationEvent); \
	DECLARE_FUNCTION(execBindVoxelChunkEvents); \
	DECLARE_FUNCTION(execRecreate); \
	DECLARE_FUNCTION(execRecreateSpawners); \
	DECLARE_FUNCTION(execRecreateRender); \
	DECLARE_FUNCTION(execApplyNewMaterials); \
	DECLARE_FUNCTION(execIsVoxelWorldFoliageLoading); \
	DECLARE_FUNCTION(execIsVoxelWorldMeshLoading); \
	DECLARE_FUNCTION(execGetTaskCount); \
	DECLARE_FUNCTION(execAreCollisionsEnabled); \
	DECLARE_FUNCTION(execApplyLODSettings); \
	DECLARE_FUNCTION(execUpdateAll); \
	DECLARE_FUNCTION(execUpdateBounds); \
	DECLARE_FUNCTION(execUpdatePosition); \
	DECLARE_FUNCTION(execScaleData); \
	DECLARE_FUNCTION(execClearDirtyData); \
	DECLARE_FUNCTION(execHasMaterialData); \
	DECLARE_FUNCTION(execHasValueData); \
	DECLARE_FUNCTION(execClearMaterialData); \
	DECLARE_FUNCTION(execClearValueData); \
	DECLARE_FUNCTION(execClearAllData); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetIntOutput); \
	DECLARE_FUNCTION(execGetFloatOutput); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execGetHistoryPosition); \
	DECLARE_FUNCTION(execClearFrames); \
	DECLARE_FUNCTION(execSaveFrame); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execLoadFromSpawnersSave); \
	DECLARE_FUNCTION(execGetSpawnersSave); \
	DECLARE_FUNCTION(execMarkSpawnersDirty); \
	DECLARE_FUNCTION(execRegenerateSpawners); \
	DECLARE_FUNCTION(execAddInstances); \
	DECLARE_FUNCTION(execSpawnVoxelSpawnerActorByInstanceIndex); \
	DECLARE_FUNCTION(execSpawnVoxelSpawnerActorsInArea); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsOverlappingActor); \
	DECLARE_FUNCTION(execGetVoxelWorldOverlappingActor); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsOverlappingBox); \
	DECLARE_FUNCTION(execGetVoxelWorldOverlappingBox); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsContainingPosition); \
	DECLARE_FUNCTION(execGetVoxelWorldContainingPosition); \
	DECLARE_FUNCTION(execTransformVoxelBoxToGlobalBox); \
	DECLARE_FUNCTION(execTransformGlobalBoxToVoxelBox); \
	DECLARE_FUNCTION(execGetEstimatedCollisionsMemoryUsageInMB); \
	DECLARE_FUNCTION(execLogMemoryStats); \
	DECLARE_FUNCTION(execGetPeakMemoryUsageInMB); \
	DECLARE_FUNCTION(execGetMemoryUsageInMB); \
	DECLARE_FUNCTION(execNumberOfCores); \
	DECLARE_FUNCTION(execRaiseError); \
	DECLARE_FUNCTION(execRaiseWarning); \
	DECLARE_FUNCTION(execRaiseInfo); \
	DECLARE_FUNCTION(execIsVoxelPluginPro);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNeighborsToSet); \
	DECLARE_FUNCTION(execIsVoxelColorTextureValid); \
	DECLARE_FUNCTION(execIsVoxelFloatTextureValid); \
	DECLARE_FUNCTION(execGetVoxelColorTextureSize); \
	DECLARE_FUNCTION(execGetVoxelFloatTextureSize); \
	DECLARE_FUNCTION(execCreateVoxelColorTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execCreateTextureFromVoxelColorTexture); \
	DECLARE_FUNCTION(execCreateOrUpdateTextureFromVoxelColorTexture); \
	DECLARE_FUNCTION(execCreateVoxelFloatTextureFromTextureChannel); \
	DECLARE_FUNCTION(execCreateTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execCreateOrUpdateTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execMakeMaterialMask); \
	DECLARE_FUNCTION(execMakeRawMaterial); \
	DECLARE_FUNCTION(execGetRawMaterial); \
	DECLARE_FUNCTION(execGetUV); \
	DECLARE_FUNCTION(execGetMultiIndex); \
	DECLARE_FUNCTION(execGetSingleIndex); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execApplyPaintMaterial); \
	DECLARE_FUNCTION(execCreateUVPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexRawPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexWetnessPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexPaintMaterial); \
	DECLARE_FUNCTION(execCreateSingleIndexPaintMaterial); \
	DECLARE_FUNCTION(execCreateFiveWayBlendPaintMaterial); \
	DECLARE_FUNCTION(execCreateColorPaintMaterial); \
	DECLARE_FUNCTION(execGetMin_Intvector); \
	DECLARE_FUNCTION(execGetMax_Intvector); \
	DECLARE_FUNCTION(execMultiply_IntIntVector); \
	DECLARE_FUNCTION(execMultiply_IntVectorInt); \
	DECLARE_FUNCTION(execDivide_IntVectorInt); \
	DECLARE_FUNCTION(execMultiply_IntVectorIntVector); \
	DECLARE_FUNCTION(execSubstract_IntVectorIntVector); \
	DECLARE_FUNCTION(execAdd_IntVectorIntVector); \
	DECLARE_FUNCTION(execGetRenderBoundsOverlappingDataBounds); \
	DECLARE_FUNCTION(execMakeIntBoxFromGlobalPositionAndRadius); \
	DECLARE_FUNCTION(execIsWorldVoxelPoolCreated); \
	DECLARE_FUNCTION(execDestroyWorldVoxelThreadPool); \
	DECLARE_FUNCTION(execCreateWorldVoxelThreadPool); \
	DECLARE_FUNCTION(execIsGlobalVoxelPoolCreated); \
	DECLARE_FUNCTION(execDestroyGlobalVoxelThreadPool); \
	DECLARE_FUNCTION(execCreateGlobalVoxelThreadPool); \
	DECLARE_FUNCTION(execSetToolRenderingEnabled); \
	DECLARE_FUNCTION(execSetToolRenderingBounds); \
	DECLARE_FUNCTION(execSetToolRenderingMaterial); \
	DECLARE_FUNCTION(execDestroyToolRendering); \
	DECLARE_FUNCTION(execCreateToolRendering); \
	DECLARE_FUNCTION(execIsValidRef); \
	DECLARE_FUNCTION(execBindVoxelGenerationEvent); \
	DECLARE_FUNCTION(execBindVoxelChunkEvents); \
	DECLARE_FUNCTION(execRecreate); \
	DECLARE_FUNCTION(execRecreateSpawners); \
	DECLARE_FUNCTION(execRecreateRender); \
	DECLARE_FUNCTION(execApplyNewMaterials); \
	DECLARE_FUNCTION(execIsVoxelWorldFoliageLoading); \
	DECLARE_FUNCTION(execIsVoxelWorldMeshLoading); \
	DECLARE_FUNCTION(execGetTaskCount); \
	DECLARE_FUNCTION(execAreCollisionsEnabled); \
	DECLARE_FUNCTION(execApplyLODSettings); \
	DECLARE_FUNCTION(execUpdateAll); \
	DECLARE_FUNCTION(execUpdateBounds); \
	DECLARE_FUNCTION(execUpdatePosition); \
	DECLARE_FUNCTION(execScaleData); \
	DECLARE_FUNCTION(execClearDirtyData); \
	DECLARE_FUNCTION(execHasMaterialData); \
	DECLARE_FUNCTION(execHasValueData); \
	DECLARE_FUNCTION(execClearMaterialData); \
	DECLARE_FUNCTION(execClearValueData); \
	DECLARE_FUNCTION(execClearAllData); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetIntOutput); \
	DECLARE_FUNCTION(execGetFloatOutput); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execGetHistoryPosition); \
	DECLARE_FUNCTION(execClearFrames); \
	DECLARE_FUNCTION(execSaveFrame); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execLoadFromSpawnersSave); \
	DECLARE_FUNCTION(execGetSpawnersSave); \
	DECLARE_FUNCTION(execMarkSpawnersDirty); \
	DECLARE_FUNCTION(execRegenerateSpawners); \
	DECLARE_FUNCTION(execAddInstances); \
	DECLARE_FUNCTION(execSpawnVoxelSpawnerActorByInstanceIndex); \
	DECLARE_FUNCTION(execSpawnVoxelSpawnerActorsInArea); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsOverlappingActor); \
	DECLARE_FUNCTION(execGetVoxelWorldOverlappingActor); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsOverlappingBox); \
	DECLARE_FUNCTION(execGetVoxelWorldOverlappingBox); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsContainingPosition); \
	DECLARE_FUNCTION(execGetVoxelWorldContainingPosition); \
	DECLARE_FUNCTION(execTransformVoxelBoxToGlobalBox); \
	DECLARE_FUNCTION(execTransformGlobalBoxToVoxelBox); \
	DECLARE_FUNCTION(execGetEstimatedCollisionsMemoryUsageInMB); \
	DECLARE_FUNCTION(execLogMemoryStats); \
	DECLARE_FUNCTION(execGetPeakMemoryUsageInMB); \
	DECLARE_FUNCTION(execGetMemoryUsageInMB); \
	DECLARE_FUNCTION(execNumberOfCores); \
	DECLARE_FUNCTION(execRaiseError); \
	DECLARE_FUNCTION(execRaiseWarning); \
	DECLARE_FUNCTION(execRaiseInfo); \
	DECLARE_FUNCTION(execIsVoxelPluginPro);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBlueprintLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBlueprintLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBlueprintLibrary(UVoxelBlueprintLibrary&&); \
	NO_API UVoxelBlueprintLibrary(const UVoxelBlueprintLibrary&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBlueprintLibrary(UVoxelBlueprintLibrary&&); \
	NO_API UVoxelBlueprintLibrary(const UVoxelBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_60_PROLOG
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h


#define FOREACH_ENUM_EVOXELMEMORYUSAGETYPE(op) \
	op(EVoxelMemoryUsageType::Total) \
	op(EVoxelMemoryUsageType::VoxelsDirtyValuesData) \
	op(EVoxelMemoryUsageType::VoxelsDirtyMaterialsData) \
	op(EVoxelMemoryUsageType::VoxelsCachedValuesData) \
	op(EVoxelMemoryUsageType::VoxelsCachedMaterialsData) \
	op(EVoxelMemoryUsageType::UndoRedo) \
	op(EVoxelMemoryUsageType::Multiplayer) \
	op(EVoxelMemoryUsageType::IntermediateBuffers) \
	op(EVoxelMemoryUsageType::MeshesIndices) \
	op(EVoxelMemoryUsageType::MeshesTessellationIndices) \
	op(EVoxelMemoryUsageType::MeshesVertices) \
	op(EVoxelMemoryUsageType::MeshesColors) \
	op(EVoxelMemoryUsageType::MeshesUVsAndTangents) \
	op(EVoxelMemoryUsageType::DataAssets) \
	op(EVoxelMemoryUsageType::HeightmapAssets) \
	op(EVoxelMemoryUsageType::UncompressedSaves) \
	op(EVoxelMemoryUsageType::CompressedSaves) 

enum class EVoxelMemoryUsageType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelMemoryUsageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
