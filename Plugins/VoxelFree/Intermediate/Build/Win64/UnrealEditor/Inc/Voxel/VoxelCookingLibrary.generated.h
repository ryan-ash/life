// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelCookedData;
class AVoxelWorld;
struct FVoxelCookingSettings;
struct FVoxelUncompressedWorldSave;
#ifdef VOXEL_VoxelCookingLibrary_generated_h
#error "VoxelCookingLibrary.generated.h already included, missing '#pragma once' in VoxelCookingLibrary.h"
#endif
#define VOXEL_VoxelCookingLibrary_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelCookingSettings>();

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadCookedVoxelData); \
	DECLARE_FUNCTION(execMakeVoxelCookingSettingsFromVoxelWorld); \
	DECLARE_FUNCTION(execCookVoxelDataWithSave); \
	DECLARE_FUNCTION(execCookVoxelData);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadCookedVoxelData); \
	DECLARE_FUNCTION(execMakeVoxelCookingSettingsFromVoxelWorld); \
	DECLARE_FUNCTION(execCookVoxelDataWithSave); \
	DECLARE_FUNCTION(execCookVoxelData);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelCookingLibrary(); \
	friend struct Z_Construct_UClass_UVoxelCookingLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelCookingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelCookingLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelCookingLibrary(); \
	friend struct Z_Construct_UClass_UVoxelCookingLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelCookingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelCookingLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelCookingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelCookingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelCookingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelCookingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelCookingLibrary(UVoxelCookingLibrary&&); \
	NO_API UVoxelCookingLibrary(const UVoxelCookingLibrary&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelCookingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelCookingLibrary(UVoxelCookingLibrary&&); \
	NO_API UVoxelCookingLibrary(const UVoxelCookingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelCookingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelCookingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelCookingLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_44_PROLOG
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelCookingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelCooking_VoxelCookingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
