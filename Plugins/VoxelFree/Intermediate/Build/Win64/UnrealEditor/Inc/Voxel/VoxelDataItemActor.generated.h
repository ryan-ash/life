// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
#ifdef VOXEL_VoxelDataItemActor_generated_h
#error "VoxelDataItemActor.generated.h already included, missing '#pragma once' in VoxelDataItemActor.h"
#endif
#define VOXEL_VoxelDataItemActor_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_RPC_WRAPPERS \
	virtual void K2_AddItemToWorld_Implementation(AVoxelWorld* World); \
 \
	DECLARE_FUNCTION(execScheduleRefresh); \
	DECLARE_FUNCTION(execK2_AddItemToWorld);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScheduleRefresh); \
	DECLARE_FUNCTION(execK2_AddItemToWorld);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_EVENT_PARMS \
	struct VoxelDataItemActor_eventK2_AddItemToWorld_Parms \
	{ \
		AVoxelWorld* World; \
	};


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_CALLBACK_WRAPPERS
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelDataItemActor(); \
	friend struct Z_Construct_UClass_AVoxelDataItemActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelDataItemActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelDataItemActor)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelDataItemActor(); \
	friend struct Z_Construct_UClass_AVoxelDataItemActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelDataItemActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelDataItemActor)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelDataItemActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelDataItemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelDataItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelDataItemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelDataItemActor(AVoxelDataItemActor&&); \
	NO_API AVoxelDataItemActor(const AVoxelDataItemActor&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelDataItemActor(AVoxelDataItemActor&&); \
	NO_API AVoxelDataItemActor(const AVoxelDataItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelDataItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelDataItemActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AVoxelDataItemActor)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_11_PROLOG \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_EVENT_PARMS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelDataItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
