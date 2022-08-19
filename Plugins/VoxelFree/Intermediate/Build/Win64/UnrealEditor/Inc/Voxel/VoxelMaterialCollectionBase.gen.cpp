// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialCollectionBase() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelMaterialCollectionBase::execGetIndexMaterial)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetIndexMaterial(Z_Param_Index);
		P_NATIVE_END;
	}
	void UVoxelMaterialCollectionBase::StaticRegisterNativesUVoxelMaterialCollectionBase()
	{
		UClass* Class = UVoxelMaterialCollectionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIndexMaterial", &UVoxelMaterialCollectionBase::execGetIndexMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics
	{
		struct VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms
		{
			uint8 Index;
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms, Index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Material Collection" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMaterialCollectionBase, nullptr, "GetIndexMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms), Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMaterialCollectionBase);
	UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister()
	{
		return UVoxelMaterialCollectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial, "GetIndexMaterial" }, // 2422610379
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMaterialCollectionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::ClassParams = {
		&UVoxelMaterialCollectionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.OuterSingleton, Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelMaterialCollectionBase>()
	{
		return UVoxelMaterialCollectionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMaterialCollectionBase);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMaterialCollectionBase, UVoxelMaterialCollectionBase::StaticClass, TEXT("UVoxelMaterialCollectionBase"), &Z_Registration_Info_UClass_UVoxelMaterialCollectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMaterialCollectionBase), 2211913285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h_1752725881(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
