// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelTestValues;
class AVoxelWorld;
struct FVoxelIntBox;
#ifdef VOXEL_VoxelTestLibrary_generated_h
#error "VoxelTestLibrary.generated.h already included, missing '#pragma once' in VoxelTestLibrary.h"
#endif
#define VOXEL_VoxelTestLibrary_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelTestValues_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelTestValues>();

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestValues); \
	DECLARE_FUNCTION(execReadValues);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestValues); \
	DECLARE_FUNCTION(execReadValues);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelTestLibrary(); \
	friend struct Z_Construct_UClass_UVoxelTestLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelTestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelTestLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelTestLibrary(); \
	friend struct Z_Construct_UClass_UVoxelTestLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelTestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelTestLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTestLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTestLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelTestLibrary(UVoxelTestLibrary&&); \
	NO_API UVoxelTestLibrary(const UVoxelTestLibrary&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelTestLibrary(UVoxelTestLibrary&&); \
	NO_API UVoxelTestLibrary(const UVoxelTestLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTestLibrary)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_21_PROLOG
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelTestLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
