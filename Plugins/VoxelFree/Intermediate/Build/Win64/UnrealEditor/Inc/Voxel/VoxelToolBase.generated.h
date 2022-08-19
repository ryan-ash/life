// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UMaterialInterface;
struct FVoxelIntBox;
struct FVoxelToolTickData;
struct FVoxelIntBoxWithValidity;
class UMaterialInstanceDynamic;
struct FVoxelToolBaseConfig;
#ifdef VOXEL_VoxelToolBase_generated_h
#error "VoxelToolBase.generated.h already included, missing '#pragma once' in VoxelToolBase.h"
#endif
#define VOXEL_VoxelToolBase_generated_h

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolBaseConfig>();

#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_SPARSE_DATA
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_RPC_WRAPPERS \
	virtual FVoxelIntBoxWithValidity K2_DoEdit_Implementation(); \
	virtual void K2_UpdateRender_Implementation(UMaterialInstanceDynamic* OverlayMaterialInstance, UMaterialInstanceDynamic* MeshMaterialInstance); \
	virtual void K2_GetToolConfig_Implementation(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig) const; \
 \
	DECLARE_FUNCTION(execUpdateToolMesh); \
	DECLARE_FUNCTION(execSetToolOverlayBounds); \
	DECLARE_FUNCTION(execGetValueAfterAxisInput); \
	DECLARE_FUNCTION(execGetBoundsToCache); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execGetMouseMovementSize); \
	DECLARE_FUNCTION(execGetLastFrameTickData); \
	DECLARE_FUNCTION(execGetTickData); \
	DECLARE_FUNCTION(execLastFrameCanEdit); \
	DECLARE_FUNCTION(execCanEdit); \
	DECLARE_FUNCTION(execGetToolDirection); \
	DECLARE_FUNCTION(execGetToolNormal); \
	DECLARE_FUNCTION(execGetToolPreviewPosition); \
	DECLARE_FUNCTION(execGetToolPosition); \
	DECLARE_FUNCTION(execK2_DoEdit); \
	DECLARE_FUNCTION(execK2_UpdateRender); \
	DECLARE_FUNCTION(execK2_GetToolConfig);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateToolMesh); \
	DECLARE_FUNCTION(execSetToolOverlayBounds); \
	DECLARE_FUNCTION(execGetValueAfterAxisInput); \
	DECLARE_FUNCTION(execGetBoundsToCache); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execGetMouseMovementSize); \
	DECLARE_FUNCTION(execGetLastFrameTickData); \
	DECLARE_FUNCTION(execGetTickData); \
	DECLARE_FUNCTION(execLastFrameCanEdit); \
	DECLARE_FUNCTION(execCanEdit); \
	DECLARE_FUNCTION(execGetToolDirection); \
	DECLARE_FUNCTION(execGetToolNormal); \
	DECLARE_FUNCTION(execGetToolPreviewPosition); \
	DECLARE_FUNCTION(execGetToolPosition); \
	DECLARE_FUNCTION(execK2_DoEdit); \
	DECLARE_FUNCTION(execK2_UpdateRender); \
	DECLARE_FUNCTION(execK2_GetToolConfig);


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_EVENT_PARMS \
	struct VoxelToolBase_eventK2_DoEdit_Parms \
	{ \
		FVoxelIntBoxWithValidity ReturnValue; \
	}; \
	struct VoxelToolBase_eventK2_GetToolConfig_Parms \
	{ \
		FVoxelToolBaseConfig InConfig; \
		FVoxelToolBaseConfig OutConfig; \
	}; \
	struct VoxelToolBase_eventK2_UpdateRender_Parms \
	{ \
		UMaterialInstanceDynamic* OverlayMaterialInstance; \
		UMaterialInstanceDynamic* MeshMaterialInstance; \
	};


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_CALLBACK_WRAPPERS
#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolBase(); \
	friend struct Z_Construct_UClass_UVoxelToolBase_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolBase, UVoxelTool, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolBase)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelToolBase(); \
	friend struct Z_Construct_UClass_UVoxelToolBase_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolBase, UVoxelTool, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolBase)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolBase(UVoxelToolBase&&); \
	NO_API UVoxelToolBase(const UVoxelToolBase&); \
public:


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolBase(UVoxelToolBase&&); \
	NO_API UVoxelToolBase(const UVoxelToolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolBase)


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_90_PROLOG \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_EVENT_PARMS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_RPC_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_INCLASS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_SPARSE_DATA \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_CALLBACK_WRAPPERS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_INCLASS_NO_PURE_DECLS \
	FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelToolBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h


#define FOREACH_ENUM_EVOXELTOOLALIGNMENT(op) \
	op(EVoxelToolAlignment::Surface) \
	op(EVoxelToolAlignment::View) \
	op(EVoxelToolAlignment::Ground) \
	op(EVoxelToolAlignment::Up) 

enum class EVoxelToolAlignment : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
