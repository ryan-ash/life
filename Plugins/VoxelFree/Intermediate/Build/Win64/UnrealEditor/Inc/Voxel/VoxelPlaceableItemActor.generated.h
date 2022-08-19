// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
#ifdef VOXEL_VoxelPlaceableItemActor_generated_h
#error "VoxelPlaceableItemActor.generated.h already included, missing '#pragma once' in VoxelPlaceableItemActor.h"
#endif
#define VOXEL_VoxelPlaceableItemActor_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_RPC_WRAPPERS \
	virtual int32 K2_GetPriority_Implementation() const; \
	virtual void K2_AddItemToWorld_Implementation(AVoxelWorld* World); \
 \
	DECLARE_FUNCTION(execK2_GetPriority); \
	DECLARE_FUNCTION(execK2_AddItemToWorld);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetPriority); \
	DECLARE_FUNCTION(execK2_AddItemToWorld);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_EVENT_PARMS \
	struct VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms \
	{ \
		AVoxelWorld* World; \
	}; \
	struct VoxelPlaceableItemActor_eventK2_GetPriority_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelPlaceableItemActor_eventK2_GetPriority_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_CALLBACK_WRAPPERS
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelPlaceableItemActor(); \
	friend struct Z_Construct_UClass_AVoxelPlaceableItemActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelPlaceableItemActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelPlaceableItemActor)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelPlaceableItemActor(); \
	friend struct Z_Construct_UClass_AVoxelPlaceableItemActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelPlaceableItemActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelPlaceableItemActor)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelPlaceableItemActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelPlaceableItemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelPlaceableItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelPlaceableItemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelPlaceableItemActor(AVoxelPlaceableItemActor&&); \
	NO_API AVoxelPlaceableItemActor(const AVoxelPlaceableItemActor&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelPlaceableItemActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelPlaceableItemActor(AVoxelPlaceableItemActor&&); \
	NO_API AVoxelPlaceableItemActor(const AVoxelPlaceableItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelPlaceableItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelPlaceableItemActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelPlaceableItemActor)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_11_PROLOG \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_EVENT_PARMS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelPlaceableItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
