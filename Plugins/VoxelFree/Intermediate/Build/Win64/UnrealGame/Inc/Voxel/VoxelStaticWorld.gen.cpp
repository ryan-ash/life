// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelStaticWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelStaticWorld() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelStaticWorld_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelStaticWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVoxelStaticWorld::StaticRegisterNativesAVoxelStaticWorld()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelStaticWorld);
	UClass* Z_Construct_UClass_AVoxelStaticWorld_NoRegister()
	{
		return AVoxelStaticWorld::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelStaticWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelStaticWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelStaticWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelStaticWorld.h" },
		{ "ModuleRelativePath", "Public/VoxelStaticWorld.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelStaticWorld.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelStaticWorld, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelStaticWorld.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelStaticWorld, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelStaticWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelStaticWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelStaticWorld_Statics::ClassParams = {
		&AVoxelStaticWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelStaticWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelStaticWorld()
	{
		if (!Z_Registration_Info_UClass_AVoxelStaticWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelStaticWorld.OuterSingleton, Z_Construct_UClass_AVoxelStaticWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelStaticWorld.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelStaticWorld>()
	{
		return AVoxelStaticWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelStaticWorld);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelStaticWorld_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelStaticWorld_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelStaticWorld, AVoxelStaticWorld::StaticClass, TEXT("AVoxelStaticWorld"), &Z_Registration_Info_UClass_AVoxelStaticWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelStaticWorld), 3781314987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelStaticWorld_h_372107175(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelStaticWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelStaticWorld_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
