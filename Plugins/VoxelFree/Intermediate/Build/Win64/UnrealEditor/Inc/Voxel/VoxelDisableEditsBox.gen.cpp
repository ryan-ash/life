// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDisableEditsBox() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelDisableEditsBox_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelDisableEditsBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AVoxelDisableEditsBox::StaticRegisterNativesAVoxelDisableEditsBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelDisableEditsBox);
	UClass* Z_Construct_UClass_AVoxelDisableEditsBox_NoRegister()
	{
		return AVoxelDisableEditsBox::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelDisableEditsBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelDisableEditsBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelPlaceableItemActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelDisableEditsBox, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelDisableEditsBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelDisableEditsBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelDisableEditsBox_Statics::ClassParams = {
		&AVoxelDisableEditsBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelDisableEditsBox()
	{
		if (!Z_Registration_Info_UClass_AVoxelDisableEditsBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelDisableEditsBox.OuterSingleton, Z_Construct_UClass_AVoxelDisableEditsBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelDisableEditsBox.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelDisableEditsBox>()
	{
		return AVoxelDisableEditsBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelDisableEditsBox);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelDisableEditsBox, AVoxelDisableEditsBox::StaticClass, TEXT("AVoxelDisableEditsBox"), &Z_Registration_Info_UClass_AVoxelDisableEditsBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelDisableEditsBox), 1464327301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h_2081529531(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
