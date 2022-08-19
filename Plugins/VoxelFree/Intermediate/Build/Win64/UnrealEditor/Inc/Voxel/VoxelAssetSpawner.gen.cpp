// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelAssetSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetSpawner() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetSpawner();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
	void UVoxelAssetSpawner::StaticRegisterNativesUVoxelAssetSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelAssetSpawner);
	UClass* Z_Construct_UClass_UVoxelAssetSpawner_NoRegister()
	{
		return UVoxelAssetSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelAssetSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorLocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorLocalBounds;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Seeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Seeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfDifferentSeedsToUse_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfDifferentSeedsToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetPosition_MetaData[];
#endif
		static void NewProp_bRoundAssetPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelAssetSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelBasicSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Generator), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator_MetaData)) }; // 8016936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds = { "GeneratorLocalBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, GeneratorLocalBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds_MetaData)) }; // 1090131275
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// The voxel world seeds will be sent to the generator.\n// Add the names of the seeds you want to be randomized here\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ToolTip", "The voxel world seeds will be sent to the generator.\nAdd the names of the seeds you want to be randomized here" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// All generators are created at begin play\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ToolTip", "All generators are created at begin play" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse = { "NumberOfDifferentSeedsToUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, NumberOfDifferentSeedsToUse), METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// Priority of the spawned assets\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ToolTip", "Priority of the spawned assets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Priority), METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_SetBit(void* Obj)
	{
		((UVoxelAssetSpawner*)Obj)->bRoundAssetPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition = { "bRoundAssetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelAssetSpawner), &Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelAssetSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::ClassParams = {
		&UVoxelAssetSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelAssetSpawner()
	{
		if (!Z_Registration_Info_UClass_UVoxelAssetSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetSpawner.OuterSingleton, Z_Construct_UClass_UVoxelAssetSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelAssetSpawner.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelAssetSpawner>()
	{
		return UVoxelAssetSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetSpawner);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelAssetSpawner, UVoxelAssetSpawner::StaticClass, TEXT("UVoxelAssetSpawner"), &Z_Registration_Info_UClass_UVoxelAssetSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetSpawner), 2566452524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h_2608446594(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
