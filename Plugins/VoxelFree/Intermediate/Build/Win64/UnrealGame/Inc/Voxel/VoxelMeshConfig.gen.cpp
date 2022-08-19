// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelMeshConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMeshConfig() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshConfig();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelMeshConfig;
class UScriptStruct* FVoxelMeshConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelMeshConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelMeshConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelMeshConfig.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMeshConfig>()
{
	return FVoxelMeshConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Whether the primitive receives decals. */" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "Whether the primitive receives decals." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FVoxelMeshConfig*)Obj)->bReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshConfig), &Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** If true, this component will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "If true, this component will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((FVoxelMeshConfig*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshConfig), &Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "EditCondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshConfig, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_MetaData)) }; // 2676219362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "EditCondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshConfig, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMeshConfig",
		sizeof(FVoxelMeshConfig),
		alignof(FVoxelMeshConfig),
		Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelMeshConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelMeshConfig.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelMeshConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h_Statics::ScriptStructInfo[] = {
		{ FVoxelMeshConfig::StaticStruct, Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewStructOps, TEXT("VoxelMeshConfig"), &Z_Registration_Info_UScriptStruct_VoxelMeshConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMeshConfig), 2681121199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h_4171478758(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
