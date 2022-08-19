// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVoxelTool;
class UVoxelToolSharedConfig;
#ifdef VOXEL_VoxelToolManager_generated_h
#error "VoxelToolManager.generated.h already included, missing '#pragma once' in VoxelToolManager.h"
#endif
#define VOXEL_VoxelToolManager_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActiveToolByName); \
	DECLARE_FUNCTION(execSetActiveToolByClass); \
	DECLARE_FUNCTION(execSetActiveTool); \
	DECLARE_FUNCTION(execCreateDefaultTools); \
	DECLARE_FUNCTION(execGetTools); \
	DECLARE_FUNCTION(execGetActiveTool); \
	DECLARE_FUNCTION(execK2_GetSharedConfig);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActiveToolByName); \
	DECLARE_FUNCTION(execSetActiveToolByClass); \
	DECLARE_FUNCTION(execSetActiveTool); \
	DECLARE_FUNCTION(execCreateDefaultTools); \
	DECLARE_FUNCTION(execGetTools); \
	DECLARE_FUNCTION(execGetActiveTool); \
	DECLARE_FUNCTION(execK2_GetSharedConfig);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolManager(); \
	friend struct Z_Construct_UClass_UVoxelToolManager_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolManager)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelToolManager(); \
	friend struct Z_Construct_UClass_UVoxelToolManager_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolManager)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolManager(UVoxelToolManager&&); \
	NO_API UVoxelToolManager(const UVoxelToolManager&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolManager(UVoxelToolManager&&); \
	NO_API UVoxelToolManager(const UVoxelToolManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelToolManager)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_12_PROLOG
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelToolManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
