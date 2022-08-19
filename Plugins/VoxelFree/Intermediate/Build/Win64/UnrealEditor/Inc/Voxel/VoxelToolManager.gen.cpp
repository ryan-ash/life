// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelToolManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolManager() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolManager_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelToolManager::execSetActiveToolByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewActiveTool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveToolByName(Z_Param_NewActiveTool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolManager::execSetActiveToolByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewActiveTool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveToolByClass(Z_Param_NewActiveTool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolManager::execSetActiveTool)
	{
		P_GET_OBJECT(UVoxelTool,Z_Param_NewActiveTool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveTool(Z_Param_NewActiveTool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolManager::execCreateDefaultTools)
	{
		P_GET_UBOOL(Z_Param_bLoadBlueprints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDefaultTools(Z_Param_bLoadBlueprints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolManager::execGetTools)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVoxelTool*>*)Z_Param__Result=P_THIS->GetTools();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolManager::execGetActiveTool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelTool**)Z_Param__Result=P_THIS->GetActiveTool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolManager::execK2_GetSharedConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelToolSharedConfig**)Z_Param__Result=P_THIS->K2_GetSharedConfig();
		P_NATIVE_END;
	}
	void UVoxelToolManager::StaticRegisterNativesUVoxelToolManager()
	{
		UClass* Class = UVoxelToolManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDefaultTools", &UVoxelToolManager::execCreateDefaultTools },
			{ "GetActiveTool", &UVoxelToolManager::execGetActiveTool },
			{ "GetTools", &UVoxelToolManager::execGetTools },
			{ "K2_GetSharedConfig", &UVoxelToolManager::execK2_GetSharedConfig },
			{ "SetActiveTool", &UVoxelToolManager::execSetActiveTool },
			{ "SetActiveToolByClass", &UVoxelToolManager::execSetActiveToolByClass },
			{ "SetActiveToolByName", &UVoxelToolManager::execSetActiveToolByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics
	{
		struct VoxelToolManager_eventCreateDefaultTools_Parms
		{
			bool bLoadBlueprints;
		};
		static void NewProp_bLoadBlueprints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadBlueprints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints_SetBit(void* Obj)
	{
		((VoxelToolManager_eventCreateDefaultTools_Parms*)Obj)->bLoadBlueprints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints = { "bLoadBlueprints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelToolManager_eventCreateDefaultTools_Parms), &Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "Comment", "// If bLoadBlueprints is true, all the blueprints inheriting from VoxelTool will be force loaded\n// If false, tools whose blueprints are not loaded won't show up\n" },
		{ "CPP_Default_bLoadBlueprints", "false" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
		{ "ToolTip", "If bLoadBlueprints is true, all the blueprints inheriting from VoxelTool will be force loaded\nIf false, tools whose blueprints are not loaded won't show up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "CreateDefaultTools", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::VoxelToolManager_eventCreateDefaultTools_Parms), Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics
	{
		struct VoxelToolManager_eventGetActiveTool_Parms
		{
			UVoxelTool* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolManager_eventGetActiveTool_Parms, ReturnValue), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "GetActiveTool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::VoxelToolManager_eventGetActiveTool_Parms), Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_GetActiveTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics
	{
		struct VoxelToolManager_eventGetTools_Parms
		{
			TArray<UVoxelTool*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolManager_eventGetTools_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "GetTools", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::VoxelToolManager_eventGetTools_Parms), Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_GetTools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics
	{
		struct VoxelToolManager_eventK2_GetSharedConfig_Parms
		{
			UVoxelToolSharedConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolManager_eventK2_GetSharedConfig_Parms, ReturnValue), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "DisplayName", "Get Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "K2_GetSharedConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::VoxelToolManager_eventK2_GetSharedConfig_Parms), Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics
	{
		struct VoxelToolManager_eventSetActiveTool_Parms
		{
			UVoxelTool* NewActiveTool;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::NewProp_NewActiveTool = { "NewActiveTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolManager_eventSetActiveTool_Parms, NewActiveTool), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::NewProp_NewActiveTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "SetActiveTool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::VoxelToolManager_eventSetActiveTool_Parms), Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_SetActiveTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics
	{
		struct VoxelToolManager_eventSetActiveToolByClass_Parms
		{
			TSubclassOf<UVoxelTool>  NewActiveTool;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewActiveTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::NewProp_NewActiveTool = { "NewActiveTool", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolManager_eventSetActiveToolByClass_Parms, NewActiveTool), Z_Construct_UClass_UVoxelTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::NewProp_NewActiveTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "SetActiveToolByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::VoxelToolManager_eventSetActiveToolByClass_Parms), Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics
	{
		struct VoxelToolManager_eventSetActiveToolByName_Parms
		{
			FName NewActiveTool;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewActiveTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::NewProp_NewActiveTool = { "NewActiveTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolManager_eventSetActiveToolByName_Parms, NewActiveTool), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::NewProp_NewActiveTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "SetActiveToolByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::VoxelToolManager_eventSetActiveToolByName_Parms), Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelToolManager);
	UClass* Z_Construct_UClass_UVoxelToolManager_NoRegister()
	{
		return UVoxelToolManager::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTool;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelToolManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools, "CreateDefaultTools" }, // 1751089379
		{ &Z_Construct_UFunction_UVoxelToolManager_GetActiveTool, "GetActiveTool" }, // 4292502686
		{ &Z_Construct_UFunction_UVoxelToolManager_GetTools, "GetTools" }, // 2229726435
		{ &Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig, "K2_GetSharedConfig" }, // 3093337897
		{ &Z_Construct_UFunction_UVoxelToolManager_SetActiveTool, "SetActiveTool" }, // 329799233
		{ &Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass, "SetActiveToolByClass" }, // 1718565702
		{ &Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName, "SetActiveToolByName" }, // 2740874352
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/VoxelToolManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig = { "SharedConfig", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolManager, SharedConfig), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool = { "ActiveTool", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolManager, ActiveTool), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolManager, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolManager_Statics::ClassParams = {
		&UVoxelToolManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolManager()
	{
		if (!Z_Registration_Info_UClass_UVoxelToolManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolManager.OuterSingleton, Z_Construct_UClass_UVoxelToolManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelToolManager.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelToolManager>()
	{
		return UVoxelToolManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolManager);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolManager, UVoxelToolManager::StaticClass, TEXT("UVoxelToolManager"), &Z_Registration_Info_UClass_UVoxelToolManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolManager), 697334513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_3760217329(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
