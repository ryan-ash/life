// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Gen/VoxelToolsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolsBase() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifiedVoxelValue;
class UScriptStruct* FModifiedVoxelValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifiedVoxelValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifiedVoxelValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelValue, Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelValue"));
	}
	return Z_Registration_Info_UScriptStruct_ModifiedVoxelValue.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FModifiedVoxelValue>()
{
	return FModifiedVoxelValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelValue, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelValue, OldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelValue, NewValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"ModifiedVoxelValue",
		sizeof(FModifiedVoxelValue),
		alignof(FModifiedVoxelValue),
		Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue()
	{
		if (!Z_Registration_Info_UScriptStruct_ModifiedVoxelValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifiedVoxelValue.InnerSingleton, Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModifiedVoxelValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial;
class UScriptStruct* FModifiedVoxelMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FModifiedVoxelMaterial>()
{
	return FModifiedVoxelMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial = { "OldMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, OldMaterial), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial_MetaData)) }; // 1161269177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, NewMaterial), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial_MetaData)) }; // 1161269177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"ModifiedVoxelMaterial",
		sizeof(FModifiedVoxelMaterial),
		alignof(FModifiedVoxelMaterial),
		Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial.InnerSingleton, Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelMaterialsBounds)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelMaterialsBounds(Z_Param_Out_ModifiedVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelValuesBounds)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelValuesBounds(Z_Param_Out_ModifiedVoxels);
		P_NATIVE_END;
	}
	void UVoxelToolsBase::StaticRegisterNativesUVoxelToolsBase()
	{
		UClass* Class = UVoxelToolsBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetModifiedVoxelMaterialsBounds", &UVoxelToolsBase::execGetModifiedVoxelMaterialsBounds },
			{ "GetModifiedVoxelValuesBounds", &UVoxelToolsBase::execGetModifiedVoxelValuesBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics
	{
		struct VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedVoxels;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) }; // 199270963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_MetaData)) }; // 199270963
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelMaterialsBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics
	{
		struct VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedVoxels;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) }; // 4058576585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_MetaData)) }; // 4058576585
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelValuesBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelToolsBase);
	UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister()
	{
		return UVoxelToolsBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelToolsBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds, "GetModifiedVoxelMaterialsBounds" }, // 2857183177
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds, "GetModifiedVoxelValuesBounds" }, // 926474589
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelToolsBase.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolsBase_Statics::ClassParams = {
		&UVoxelToolsBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolsBase()
	{
		if (!Z_Registration_Info_UClass_UVoxelToolsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolsBase.OuterSingleton, Z_Construct_UClass_UVoxelToolsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelToolsBase.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelToolsBase>()
	{
		return UVoxelToolsBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolsBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics::ScriptStructInfo[] = {
		{ FModifiedVoxelValue::StaticStruct, Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewStructOps, TEXT("ModifiedVoxelValue"), &Z_Registration_Info_UScriptStruct_ModifiedVoxelValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifiedVoxelValue), 4058576585U) },
		{ FModifiedVoxelMaterial::StaticStruct, Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewStructOps, TEXT("ModifiedVoxelMaterial"), &Z_Registration_Info_UScriptStruct_ModifiedVoxelMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifiedVoxelMaterial), 199270963U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolsBase, UVoxelToolsBase::StaticClass, TEXT("UVoxelToolsBase"), &Z_Registration_Info_UClass_UVoxelToolsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolsBase), 2826221170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_3103121813(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
