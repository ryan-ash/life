// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHierarchicalInstancedStaticMeshComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVoxelHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUVoxelHierarchicalInstancedStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHierarchicalInstancedStaticMeshComponent);
	UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister()
	{
		return UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voxel_BuildDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Voxel_BuildDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voxel_DebugMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Voxel_DebugMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Need to prefix names with Voxel to avoid collisions with normal HISM\n" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Need to prefix names with Voxel to avoid collisions with normal HISM" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// How long to wait for new instances before triggering a new cull tree/render update\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "How long to wait for new instances before triggering a new cull tree/render update" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay = { "Voxel_BuildDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHierarchicalInstancedStaticMeshComponent, Voxel_BuildDelay), METADATA_PARAMS(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial = { "Voxel_DebugMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHierarchicalInstancedStaticMeshComponent, Voxel_DebugMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
		&UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelHierarchicalInstancedStaticMeshComponent>()
	{
		return UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHierarchicalInstancedStaticMeshComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent, UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("UVoxelHierarchicalInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHierarchicalInstancedStaticMeshComponent), 1468072120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h_1885024124(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
