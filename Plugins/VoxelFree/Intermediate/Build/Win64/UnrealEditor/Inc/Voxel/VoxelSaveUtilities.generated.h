// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelCompressedWorldSave;
struct FVoxelUncompressedWorldSave;
#ifdef VOXEL_VoxelSaveUtilities_generated_h
#error "VoxelSaveUtilities.generated.h already included, missing '#pragma once' in VoxelSaveUtilities.h"
#endif
#define VOXEL_VoxelSaveUtilities_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecompressVoxelSave); \
	DECLARE_FUNCTION(execCompressVoxelSave);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecompressVoxelSave); \
	DECLARE_FUNCTION(execCompressVoxelSave);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSaveUtilities(); \
	friend struct Z_Construct_UClass_UVoxelSaveUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelSaveUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSaveUtilities)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSaveUtilities(); \
	friend struct Z_Construct_UClass_UVoxelSaveUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelSaveUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSaveUtilities)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSaveUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSaveUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSaveUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSaveUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSaveUtilities(UVoxelSaveUtilities&&); \
	NO_API UVoxelSaveUtilities(const UVoxelSaveUtilities&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSaveUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSaveUtilities(UVoxelSaveUtilities&&); \
	NO_API UVoxelSaveUtilities(const UVoxelSaveUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSaveUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSaveUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSaveUtilities)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_82_PROLOG
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSaveUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
