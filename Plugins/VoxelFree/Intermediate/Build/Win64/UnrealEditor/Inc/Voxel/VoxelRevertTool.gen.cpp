// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelRevertTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelRevertTool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRevertTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRevertTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelRevertTool::StaticRegisterNativesUVoxelRevertTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelRevertTool);
	UClass* Z_Construct_UClass_UVoxelRevertTool_NoRegister()
	{
		return UVoxelRevertTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelRevertTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRevertValues_MetaData[];
#endif
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRevertMaterials_MetaData[];
#endif
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHistoryPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHistoryPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelRevertTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSphereToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelRevertTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((UVoxelRevertTool*)Obj)->bRevertValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelRevertTool), &Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((UVoxelRevertTool*)Obj)->bRevertMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelRevertTool), &Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelRevertTool, HistoryPosition), METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition = { "CurrentHistoryPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelRevertTool, CurrentHistoryPosition), METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelRevertTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelRevertTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelRevertTool_Statics::ClassParams = {
		&UVoxelRevertTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelRevertTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelRevertTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelRevertTool.OuterSingleton, Z_Construct_UClass_UVoxelRevertTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelRevertTool.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelRevertTool>()
	{
		return UVoxelRevertTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelRevertTool);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelRevertTool, UVoxelRevertTool::StaticClass, TEXT("UVoxelRevertTool"), &Z_Registration_Info_UClass_UVoxelRevertTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelRevertTool), 3325544521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h_1767314133(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
