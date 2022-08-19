// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelShaders/VoxelErosion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelErosion() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelErosion_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelErosion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelErosion::execGetSedimentTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelFloatTexture*)Z_Param__Result=P_THIS->GetSedimentTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelErosion::execGetWaterHeightTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelFloatTexture*)Z_Param__Result=P_THIS->GetWaterHeightTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelErosion::execGetTerrainHeightTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelFloatTexture*)Z_Param__Result=P_THIS->GetTerrainHeightTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelErosion::execStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Step(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelErosion::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelErosion::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	void UVoxelErosion::StaticRegisterNativesUVoxelErosion()
	{
		UClass* Class = UVoxelErosion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSedimentTexture", &UVoxelErosion::execGetSedimentTexture },
			{ "GetTerrainHeightTexture", &UVoxelErosion::execGetTerrainHeightTexture },
			{ "GetWaterHeightTexture", &UVoxelErosion::execGetWaterHeightTexture },
			{ "Initialize", &UVoxelErosion::execInitialize },
			{ "IsInitialized", &UVoxelErosion::execIsInitialized },
			{ "Step", &UVoxelErosion::execStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics
	{
		struct VoxelErosion_eventGetSedimentTexture_Parms
		{
			FVoxelFloatTexture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelErosion_eventGetSedimentTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "GetSedimentTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::VoxelErosion_eventGetSedimentTexture_Parms), Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics
	{
		struct VoxelErosion_eventGetTerrainHeightTexture_Parms
		{
			FVoxelFloatTexture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelErosion_eventGetTerrainHeightTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "GetTerrainHeightTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::VoxelErosion_eventGetTerrainHeightTexture_Parms), Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics
	{
		struct VoxelErosion_eventGetWaterHeightTexture_Parms
		{
			FVoxelFloatTexture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelErosion_eventGetWaterHeightTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "GetWaterHeightTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::VoxelErosion_eventGetWaterHeightTexture_Parms), Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelErosion_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelErosion_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics
	{
		struct VoxelErosion_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelErosion_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelErosion_eventIsInitialized_Parms), &Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::VoxelErosion_eventIsInitialized_Parms), Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelErosion_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelErosion_Step_Statics
	{
		struct VoxelErosion_eventStep_Parms
		{
			int32 Count;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelErosion_Step_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelErosion_eventStep_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_Step_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelErosion_Step_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "CPP_Default_Count", "10" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_Step_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "Step", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelErosion_Step_Statics::VoxelErosion_eventStep_Parms), Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelErosion_Step_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Step_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelErosion_Step()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_Step_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelErosion);
	UClass* Z_Construct_UClass_UVoxelErosion_NoRegister()
	{
		return UVoxelErosion::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelErosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SedimentCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SedimentDissolving_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentDissolving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SedimentDeposition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentDeposition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Evaporation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Evaporation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainMapInit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainMapInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapInit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelErosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelErosion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture, "GetSedimentTexture" }, // 3696695000
		{ &Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture, "GetTerrainHeightTexture" }, // 1408162119
		{ &Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture, "GetWaterHeightTexture" }, // 1075134347
		{ &Z_Construct_UFunction_UVoxelErosion_Initialize, "Initialize" }, // 2992092629
		{ &Z_Construct_UFunction_UVoxelErosion_IsInitialized, "IsInitialized" }, // 702937056
		{ &Z_Construct_UFunction_UVoxelErosion_Step, "Step" }, // 3806055389
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelShaders/VoxelErosion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// Must be a multiple of 32\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "Must be a multiple of 32" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, Size), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// Time elapsed between each simulation step. Smaller = more stable, but slower\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "Time elapsed between each simulation step. Smaller = more stable, but slower" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, DeltaTime), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// The scale of the simulation. Should leave to default\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "The scale of the simulation. Should leave to default" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// Gravity, use to compute the speed of the water\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "Gravity, use to compute the speed of the water" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, Gravity), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// How much sediment a volume of water can carry\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "How much sediment a volume of water can carry" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity = { "SedimentCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, SedimentCapacity), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// How much sediment is removed from height by the water in each step\n// This controls the \"strength\" of the erosion\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "How much sediment is removed from height by the water in each step\nThis controls the \"strength\" of the erosion" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving = { "SedimentDissolving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, SedimentDissolving), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// How much sediment can go from the water to the height\n// This controls how far the sediments are carried\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "How much sediment can go from the water to the height\nThis controls how far the sediments are carried" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition = { "SedimentDeposition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, SedimentDeposition), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// Amount of water added per step\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "Amount of water added per step" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength = { "RainStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, RainStrength), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation_MetaData[] = {
		{ "Category", "Erosion Parameters" },
		{ "Comment", "// Controls the evaporation of the water\n" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
		{ "ToolTip", "Controls the evaporation of the water" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation = { "Evaporation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, Evaporation), METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit_MetaData[] = {
		{ "Category", "Init Parameters" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit = { "RainMapInit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, RainMapInit), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit_MetaData)) }; // 3479360562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit_MetaData[] = {
		{ "Category", "Init Parameters" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit = { "HeightmapInit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelErosion, HeightmapInit), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit_MetaData)) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelErosion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelErosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelErosion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelErosion_Statics::ClassParams = {
		&UVoxelErosion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelErosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelErosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelErosion()
	{
		if (!Z_Registration_Info_UClass_UVoxelErosion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelErosion.OuterSingleton, Z_Construct_UClass_UVoxelErosion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelErosion.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelErosion>()
	{
		return UVoxelErosion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelErosion);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelErosion, UVoxelErosion::StaticClass, TEXT("UVoxelErosion"), &Z_Registration_Info_UClass_UVoxelErosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelErosion), 2830875406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_3791657228(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
