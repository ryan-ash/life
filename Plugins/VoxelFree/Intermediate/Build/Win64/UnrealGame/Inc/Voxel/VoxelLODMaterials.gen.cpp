// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelLODMaterials.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLODMaterials() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase;
class UScriptStruct* FVoxelLODMaterialsBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterialsBase"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLODMaterialsBase>()
{
	return FVoxelLODMaterialsBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterialsBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Inclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
		{ "ToolTip", "Inclusive" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD = { "StartLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterialsBase, StartLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Inclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
		{ "ToolTip", "Inclusive" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD = { "EndLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterialsBase, EndLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLODMaterialsBase",
		sizeof(FVoxelLODMaterialsBase),
		alignof(FVoxelLODMaterialsBase),
		Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelLODMaterials>() == std::is_polymorphic<FVoxelLODMaterialsBase>(), "USTRUCT FVoxelLODMaterials cannot be polymorphic unless super FVoxelLODMaterialsBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelLODMaterials;
class UScriptStruct* FVoxelLODMaterials::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelLODMaterials.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelLODMaterials.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterials, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterials"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelLODMaterials.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLODMaterials>()
{
	return FVoxelLODMaterials::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterials>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterials, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelLODMaterialsBase,
		&NewStructOps,
		"VoxelLODMaterials",
		sizeof(FVoxelLODMaterials),
		alignof(FVoxelLODMaterials),
		Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelLODMaterials.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelLODMaterials.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelLODMaterials.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelLODMaterialCollections>() == std::is_polymorphic<FVoxelLODMaterialsBase>(), "USTRUCT FVoxelLODMaterialCollections cannot be polymorphic unless super FVoxelLODMaterialsBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections;
class UScriptStruct* FVoxelLODMaterialCollections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterialCollections"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLODMaterialCollections>()
{
	return FVoxelLODMaterialCollections::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterialCollections>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterialCollections, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelLODMaterialsBase,
		&NewStructOps,
		"VoxelLODMaterialCollections",
		sizeof(FVoxelLODMaterialCollections),
		alignof(FVoxelLODMaterialCollections),
		Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h_Statics::ScriptStructInfo[] = {
		{ FVoxelLODMaterialsBase::StaticStruct, Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewStructOps, TEXT("VoxelLODMaterialsBase"), &Z_Registration_Info_UScriptStruct_VoxelLODMaterialsBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLODMaterialsBase), 29713843U) },
		{ FVoxelLODMaterials::StaticStruct, Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewStructOps, TEXT("VoxelLODMaterials"), &Z_Registration_Info_UScriptStruct_VoxelLODMaterials, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLODMaterials), 255472159U) },
		{ FVoxelLODMaterialCollections::StaticStruct, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewStructOps, TEXT("VoxelLODMaterialCollections"), &Z_Registration_Info_UScriptStruct_VoxelLODMaterialCollections, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLODMaterialCollections), 917545736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h_2721577539(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
