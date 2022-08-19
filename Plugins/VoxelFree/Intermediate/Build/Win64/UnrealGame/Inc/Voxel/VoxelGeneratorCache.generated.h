// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelTransformableGeneratorPicker;
class UVoxelTransformableGeneratorInstanceWrapper;
struct FVoxelGeneratorPicker;
class UVoxelGeneratorInstanceWrapper;
#ifdef VOXEL_VoxelGeneratorCache_generated_h
#error "VoxelGeneratorCache.generated.h already included, missing '#pragma once' in VoxelGeneratorCache.h"
#endif
#define VOXEL_VoxelGeneratorCache_generated_h

#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeTransformableGeneratorInstance); \
	DECLARE_FUNCTION(execMakeGeneratorInstance);


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeTransformableGeneratorInstance); \
	DECLARE_FUNCTION(execMakeGeneratorInstance);


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGeneratorCache(); \
	friend struct Z_Construct_UClass_UVoxelGeneratorCache_Statics; \
public: \
	DECLARE_CLASS(UVoxelGeneratorCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGeneratorCache)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelGeneratorCache(); \
	friend struct Z_Construct_UClass_UVoxelGeneratorCache_Statics; \
public: \
	DECLARE_CLASS(UVoxelGeneratorCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGeneratorCache)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGeneratorCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGeneratorCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGeneratorCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGeneratorCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGeneratorCache(UVoxelGeneratorCache&&); \
	NO_API UVoxelGeneratorCache(const UVoxelGeneratorCache&); \
public:


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGeneratorCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGeneratorCache(UVoxelGeneratorCache&&); \
	NO_API UVoxelGeneratorCache(const UVoxelGeneratorCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGeneratorCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGeneratorCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGeneratorCache)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_15_PROLOG
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_INCLASS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelGeneratorCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
