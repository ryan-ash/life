// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelIntBox;
#ifdef VOXEL_VoxelProceduralMeshComponent_generated_h
#error "VoxelProceduralMeshComponent.generated.h already included, missing '#pragma once' in VoxelProceduralMeshComponent.h"
#endif
#define VOXEL_VoxelProceduralMeshComponent_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVoxelCollisionsFrozen); \
	DECLARE_FUNCTION(execAreVoxelCollisionsFrozen);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVoxelCollisionsFrozen); \
	DECLARE_FUNCTION(execAreVoxelCollisionsFrozen);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_EVENT_PARMS \
	struct VoxelProceduralMeshComponent_eventInitChunk_Parms \
	{ \
		uint8 ChunkLOD; \
		FVoxelIntBox ChunkBounds; \
	};


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_CALLBACK_WRAPPERS
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelProceduralMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProceduralMeshComponent)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelProceduralMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProceduralMeshComponent)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProceduralMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProceduralMeshComponent(UVoxelProceduralMeshComponent&&); \
	NO_API UVoxelProceduralMeshComponent(const UVoxelProceduralMeshComponent&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProceduralMeshComponent(UVoxelProceduralMeshComponent&&); \
	NO_API UVoxelProceduralMeshComponent(const UVoxelProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProceduralMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProceduralMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelProceduralMeshComponent)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_43_PROLOG \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_EVENT_PARMS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelProceduralMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
