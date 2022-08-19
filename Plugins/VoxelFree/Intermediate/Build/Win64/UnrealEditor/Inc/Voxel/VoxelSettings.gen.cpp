// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSettings() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelSettings::StaticRegisterNativesUVoxelSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSettings);
	UClass* Z_Construct_UClass_UVoxelSettings_NoRegister()
	{
		return UVoxelSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNotifications_MetaData[];
#endif
		static void NewProp_bShowNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAutoPreview_MetaData[];
#endif
		static void NewProp_bDisableAutoPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundBeforeSaving_MetaData[];
#endif
		static void NewProp_bRoundBeforeSaving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundBeforeSaving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCompressionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultCompressionLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Usage example: In DefaultEngine.ini\n * [/Script/Voxel.VoxelSettings]\n * bDisableAutoPreview=True\n */" },
		{ "DisplayName", "Voxel Plugin" },
		{ "IncludePath", "VoxelSettings.h" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Usage example: In DefaultEngine.ini\n[/Script/Voxel.VoxelSettings]\nbDisableAutoPreview=True" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bShowNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications = { "bShowNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bDisableAutoPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview = { "bDisableAutoPreview", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Round voxels that do not affect surface nor normals to improve compression\n// Takes a while when saving\n" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Round voxels that do not affect surface nor normals to improve compression\nTakes a while when saving" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bRoundBeforeSaving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving = { "bRoundBeforeSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "9" },
		{ "ClampMin", "-1" },
		{ "Comment", "// -1 = ZLib default compression\n// 0 = No compression\n// 1 = Best speed\n// 9 = Best compression\n// Used when compressing voxel save, heightmaps, data assets...\n// Compression speed is written to the log\n// In my tests a compression level of 1 was very fast without compromising too much compression\n" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "-1 = ZLib default compression\n0 = No compression\n1 = Best speed\n9 = Best compression\nUsed when compressing voxel save, heightmaps, data assets...\nCompression speed is written to the log\nIn my tests a compression level of 1 was very fast without compromising too much compression" },
		{ "UIMax", "9" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel = { "DefaultCompressionLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSettings, DefaultCompressionLevel), METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSettings_Statics::ClassParams = {
		&UVoxelSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSettings()
	{
		if (!Z_Registration_Info_UClass_UVoxelSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSettings.OuterSingleton, Z_Construct_UClass_UVoxelSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSettings.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSettings>()
	{
		return UVoxelSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSettings);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSettings, UVoxelSettings::StaticClass, TEXT("UVoxelSettings"), &Z_Registration_Info_UClass_UVoxelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSettings), 585052676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_3983014519(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
