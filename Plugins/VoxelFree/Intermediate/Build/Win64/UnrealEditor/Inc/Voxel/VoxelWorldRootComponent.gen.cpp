// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldRootComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldRootComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldRootComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldRootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
// End Cross Module References
	void UVoxelWorldRootComponent::StaticRegisterNativesUVoxelWorldRootComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelWorldRootComponent);
	UClass* Z_Construct_UClass_UVoxelWorldRootComponent_NoRegister()
	{
		return UVoxelWorldRootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldRootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldRootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldRootComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelWorldRootComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelWorldRootComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorldRootComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelWorldRootComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldRootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldRootComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldRootComponent_Statics::ClassParams = {
		&UVoxelWorldRootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldRootComponent()
	{
		if (!Z_Registration_Info_UClass_UVoxelWorldRootComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelWorldRootComponent.OuterSingleton, Z_Construct_UClass_UVoxelWorldRootComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelWorldRootComponent.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelWorldRootComponent>()
	{
		return UVoxelWorldRootComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldRootComponent);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldRootComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldRootComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelWorldRootComponent, UVoxelWorldRootComponent::StaticClass, TEXT("UVoxelWorldRootComponent"), &Z_Registration_Info_UClass_UVoxelWorldRootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelWorldRootComponent), 2178996438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldRootComponent_h_2556277357(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldRootComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldRootComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
