// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPhysicsRelevancyComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelPhysicsRelevancyComponent::StaticRegisterNativesUVoxelPhysicsRelevancyComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPhysicsRelevancyComponent);
	UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister()
	{
		return UVoxelPhysicsRelevancyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVoxelChunksLODForPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxVoxelChunksLODForPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToWaitBeforeActivating_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWaitBeforeActivating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "/**\n * Disable physics on actors that are out of the Voxel World collision range\n */" },
		{ "IncludePath", "VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "Keywords", "voxel auto disable component" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "ToolTip", "Disable physics on actors that are out of the Voxel World collision range" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "Comment", "// Inclusive\n" },
		{ "DisplayName", "Max LOD For Physics" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "ToolTip", "Inclusive" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics = { "MaxVoxelChunksLODForPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPhysicsRelevancyComponent, MaxVoxelChunksLODForPhysics), nullptr, METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Delay to allow the voxel chunks collisions to be updated. In seconds\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "ToolTip", "Delay to allow the voxel chunks collisions to be updated. In seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating = { "TimeToWaitBeforeActivating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPhysicsRelevancyComponent, TimeToWaitBeforeActivating), METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPhysicsRelevancyComponent, TickInterval), METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsRelevancyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::ClassParams = {
		&UVoxelPhysicsRelevancyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent()
	{
		if (!Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelPhysicsRelevancyComponent>()
	{
		return UVoxelPhysicsRelevancyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsRelevancyComponent);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPhysicsRelevancyComponent, UVoxelPhysicsRelevancyComponent::StaticClass, TEXT("UVoxelPhysicsRelevancyComponent"), &Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsRelevancyComponent), 3088528853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h_3480305718(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS