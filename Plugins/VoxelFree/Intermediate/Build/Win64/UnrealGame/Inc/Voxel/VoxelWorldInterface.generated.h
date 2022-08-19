// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelWorldInterface_generated_h
#error "VoxelWorldInterface.generated.h already included, missing '#pragma once' in VoxelWorldInterface.h"
#endif
#define VOXEL_VoxelWorldInterface_generated_h

#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_SPARSE_DATA
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_RPC_WRAPPERS
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelWorldInterface(); \
	friend struct Z_Construct_UClass_AVoxelWorldInterface_Statics; \
public: \
	DECLARE_CLASS(AVoxelWorldInterface, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelWorldInterface)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelWorldInterface(); \
	friend struct Z_Construct_UClass_AVoxelWorldInterface_Statics; \
public: \
	DECLARE_CLASS(AVoxelWorldInterface, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelWorldInterface)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelWorldInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorldInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelWorldInterface(AVoxelWorldInterface&&); \
	NO_API AVoxelWorldInterface(const AVoxelWorldInterface&); \
public:


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelWorldInterface(AVoxelWorldInterface&&); \
	NO_API AVoxelWorldInterface(const AVoxelWorldInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorldInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelWorldInterface)


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_33_PROLOG
#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_RPC_WRAPPERS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_INCLASS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelWorldInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h


#define FOREACH_ENUM_EVOXELWORLDCOORDINATESROUNDING(op) \
	op(EVoxelWorldCoordinatesRounding::RoundToNearest) \
	op(EVoxelWorldCoordinatesRounding::RoundUp) \
	op(EVoxelWorldCoordinatesRounding::RoundDown) 

enum class EVoxelWorldCoordinatesRounding : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldCoordinatesRounding>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
