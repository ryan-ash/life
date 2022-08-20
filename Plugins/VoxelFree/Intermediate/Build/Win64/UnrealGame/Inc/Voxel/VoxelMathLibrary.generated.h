// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelHaltonStream;
#ifdef VOXEL_VoxelMathLibrary_generated_h
#error "VoxelMathLibrary.generated.h already included, missing '#pragma once' in VoxelMathLibrary.h"
#endif
#define VOXEL_VoxelMathLibrary_generated_h

#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelHaltonStream>();

#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_SPARSE_DATA
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHalton3D); \
	DECLARE_FUNCTION(execGetHalton2D); \
	DECLARE_FUNCTION(execGetHalton1D); \
	DECLARE_FUNCTION(execResetHaltonStream); \
	DECLARE_FUNCTION(execMakeHaltonStream); \
	DECLARE_FUNCTION(execGetUnitVectorFromRandom);


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHalton3D); \
	DECLARE_FUNCTION(execGetHalton2D); \
	DECLARE_FUNCTION(execGetHalton1D); \
	DECLARE_FUNCTION(execResetHaltonStream); \
	DECLARE_FUNCTION(execMakeHaltonStream); \
	DECLARE_FUNCTION(execGetUnitVectorFromRandom);


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMathLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMathLibrary)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelMathLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMathLibrary)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMathLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMathLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMathLibrary(UVoxelMathLibrary&&); \
	NO_API UVoxelMathLibrary(const UVoxelMathLibrary&); \
public:


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMathLibrary(UVoxelMathLibrary&&); \
	NO_API UVoxelMathLibrary(const UVoxelMathLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMathLibrary)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_21_PROLOG
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_RPC_WRAPPERS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_INCLASS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelMathLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS