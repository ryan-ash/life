// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/IVoxelPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVoxelPool() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelTaskType;
	static UEnum* EVoxelTaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelTaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelTaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelTaskType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelTaskType"));
		}
		return Z_Registration_Info_UEnum_EVoxelTaskType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>()
	{
		return EVoxelTaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enumerators[] = {
		{ "EVoxelTaskType::ChunksMeshing", (int64)EVoxelTaskType::ChunksMeshing },
		{ "EVoxelTaskType::CollisionsChunksMeshing", (int64)EVoxelTaskType::CollisionsChunksMeshing },
		{ "EVoxelTaskType::VisibleChunksMeshing", (int64)EVoxelTaskType::VisibleChunksMeshing },
		{ "EVoxelTaskType::VisibleCollisionsChunksMeshing", (int64)EVoxelTaskType::VisibleCollisionsChunksMeshing },
		{ "EVoxelTaskType::CollisionCooking", (int64)EVoxelTaskType::CollisionCooking },
		{ "EVoxelTaskType::FoliageBuild", (int64)EVoxelTaskType::FoliageBuild },
		{ "EVoxelTaskType::HISMBuild", (int64)EVoxelTaskType::HISMBuild },
		{ "EVoxelTaskType::AsyncEditFunctions", (int64)EVoxelTaskType::AsyncEditFunctions },
		{ "EVoxelTaskType::MeshMerge", (int64)EVoxelTaskType::MeshMerge },
		{ "EVoxelTaskType::RenderOctree", (int64)EVoxelTaskType::RenderOctree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enum_MetaDataParams[] = {
		{ "AsyncEditFunctions.Comment", "// Async edit functions such as AddSphereAsync\n" },
		{ "AsyncEditFunctions.Name", "EVoxelTaskType::AsyncEditFunctions" },
		{ "AsyncEditFunctions.ToolTip", "Async edit functions such as AddSphereAsync" },
		{ "BlueprintType", "true" },
		{ "ChunksMeshing.Comment", "// Meshing of chunks that don't have collisions and are not visible\n" },
		{ "ChunksMeshing.Name", "EVoxelTaskType::ChunksMeshing" },
		{ "ChunksMeshing.ToolTip", "Meshing of chunks that don't have collisions and are not visible" },
		{ "CollisionCooking.Comment", "// PhysX collision cooking, once the meshing task is done\n" },
		{ "CollisionCooking.Name", "EVoxelTaskType::CollisionCooking" },
		{ "CollisionCooking.ToolTip", "PhysX collision cooking, once the meshing task is done" },
		{ "CollisionsChunksMeshing.Comment", "// Meshing of not visible chunks that have collisions\n" },
		{ "CollisionsChunksMeshing.Name", "EVoxelTaskType::CollisionsChunksMeshing" },
		{ "CollisionsChunksMeshing.ToolTip", "Meshing of not visible chunks that have collisions" },
		{ "FoliageBuild.Comment", "// Height spawners\n" },
		{ "FoliageBuild.Name", "EVoxelTaskType::FoliageBuild" },
		{ "FoliageBuild.ToolTip", "Height spawners" },
		{ "HISMBuild.Comment", "// Building of the instanced mesh components culling tree, used for spawners\n// The meshes are not updated until the build is done\n" },
		{ "HISMBuild.Name", "EVoxelTaskType::HISMBuild" },
		{ "HISMBuild.ToolTip", "Building of the instanced mesh components culling tree, used for spawners\nThe meshes are not updated until the build is done" },
		{ "MeshMerge.Comment", "// Mesh merge tasks are used after meshing to create the render buffers\n// Note: they are also used if bMergeChunks = false!\n" },
		{ "MeshMerge.Name", "EVoxelTaskType::MeshMerge" },
		{ "MeshMerge.ToolTip", "Mesh merge tasks are used after meshing to create the render buffers\nNote: they are also used if bMergeChunks = false!" },
		{ "ModuleRelativePath", "Public/IVoxelPool.h" },
		{ "RenderOctree.Comment", "// The render octree is used to determine the LODs to display\n// Should be done as fast as possible to start meshing tasks \n" },
		{ "RenderOctree.Name", "EVoxelTaskType::RenderOctree" },
		{ "RenderOctree.ToolTip", "The render octree is used to determine the LODs to display\nShould be done as fast as possible to start meshing tasks" },
		{ "VisibleChunksMeshing.Comment", "// Meshing of visible chunks that don't have collisions\n" },
		{ "VisibleChunksMeshing.Name", "EVoxelTaskType::VisibleChunksMeshing" },
		{ "VisibleChunksMeshing.ToolTip", "Meshing of visible chunks that don't have collisions" },
		{ "VisibleCollisionsChunksMeshing.Comment", "// Meshing of visible chunks that have collisions\n" },
		{ "VisibleCollisionsChunksMeshing.Name", "EVoxelTaskType::VisibleCollisionsChunksMeshing" },
		{ "VisibleCollisionsChunksMeshing.ToolTip", "Meshing of visible chunks that have collisions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelTaskType",
		"EVoxelTaskType",
		Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelTaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelTaskType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelTaskType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_IVoxelPool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_IVoxelPool_h_Statics::EnumInfo[] = {
		{ EVoxelTaskType_StaticEnum, TEXT("EVoxelTaskType"), &Z_Registration_Info_UEnum_EVoxelTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1377870353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_IVoxelPool_h_359745667(TEXT("/Script/Voxel"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_IVoxelPool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_IVoxelPool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
