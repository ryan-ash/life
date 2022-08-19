// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSphereToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSphereToolBase() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UVoxelSphereToolBase::StaticRegisterNativesUVoxelSphereToolBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSphereToolBase);
	UClass* Z_Construct_UClass_UVoxelSphereToolBase_NoRegister()
	{
		return UVoxelSphereToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSphereToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSphereToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolWithAlignment,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereToolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSphereToolBase.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSphereToolBase, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSphereToolBase, SphereMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSphereToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereToolBase_Statics::ClassParams = {
		&UVoxelSphereToolBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSphereToolBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelSphereToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSphereToolBase.OuterSingleton, Z_Construct_UClass_UVoxelSphereToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSphereToolBase.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSphereToolBase>()
	{
		return UVoxelSphereToolBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereToolBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSphereToolBase, UVoxelSphereToolBase::StaticClass, TEXT("UVoxelSphereToolBase"), &Z_Registration_Info_UClass_UVoxelSphereToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSphereToolBase), 25210118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h_1374130887(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
