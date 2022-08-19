// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemManager() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo;
class UScriptStruct* FVoxelDataItemConstructionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataItemConstructionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelDataItemConstructionInfo>()
{
	return FVoxelDataItemConstructionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataItemConstructionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds_MetaData)) }; // 1090131275
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxel32BitMask" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelDataItemConstructionInfo",
		sizeof(FVoxelDataItemConstructionInfo),
		alignof(FVoxelDataItemConstructionInfo),
		Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo.InnerSingleton, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execOnClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClear_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execOnGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGenerate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execGetGeneratorCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelGeneratorCache**)Z_Param__Result=P_THIS->GetGeneratorCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execDrawDebugPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugPoint(Z_Param_Position,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execDrawDebugLine)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugLine(Z_Param_Start,Z_Param_End,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execAddDataItem)
	{
		P_GET_STRUCT(FVoxelDataItemConstructionInfo,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDataItem(Z_Param_Info);
		P_NATIVE_END;
	}
	static FName NAME_UVoxelPlaceableItemManager_OnClear = FName(TEXT("OnClear"));
	void UVoxelPlaceableItemManager::OnClear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelPlaceableItemManager_OnClear),NULL);
	}
	static FName NAME_UVoxelPlaceableItemManager_OnGenerate = FName(TEXT("OnGenerate"));
	void UVoxelPlaceableItemManager::OnGenerate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelPlaceableItemManager_OnGenerate),NULL);
	}
	void UVoxelPlaceableItemManager::StaticRegisterNativesUVoxelPlaceableItemManager()
	{
		UClass* Class = UVoxelPlaceableItemManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataItem", &UVoxelPlaceableItemManager::execAddDataItem },
			{ "DrawDebugLine", &UVoxelPlaceableItemManager::execDrawDebugLine },
			{ "DrawDebugPoint", &UVoxelPlaceableItemManager::execDrawDebugPoint },
			{ "GetGeneratorCache", &UVoxelPlaceableItemManager::execGetGeneratorCache },
			{ "OnClear", &UVoxelPlaceableItemManager::execOnClear },
			{ "OnGenerate", &UVoxelPlaceableItemManager::execOnGenerate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics
	{
		struct VoxelPlaceableItemManager_eventAddDataItem_Parms
		{
			FVoxelDataItemConstructionInfo Info;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventAddDataItem_Parms, Info), Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, METADATA_PARAMS(nullptr, 0) }; // 817975454
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "// Do not call this directly: call the respective Add Data Item instead!\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Do not call this directly: call the respective Add Data Item instead!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "AddDataItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::VoxelPlaceableItemManager_eventAddDataItem_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics
	{
		struct VoxelPlaceableItemManager_eventDrawDebugLine_Parms
		{
			FVector Start;
			FVector End;
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "/**\n\x09 * Draws a line in the world & in the voxel graph preview\n\x09 * @param\x09Start\x09\x09The start position in voxels\n\x09 * @param\x09""End\x09\x09\x09The end position in voxels\n\x09 * @param\x09""Color\x09\x09The color\n\x09 */" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Draws a line in the world & in the voxel graph preview\n@param       Start           The start position in voxels\n@param       End                     The end position in voxels\n@param       Color           The color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "DrawDebugLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::VoxelPlaceableItemManager_eventDrawDebugLine_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics
	{
		struct VoxelPlaceableItemManager_eventDrawDebugPoint_Parms
		{
			FVector Position;
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "/**\n\x09 * Draws a point in the world & in the voxel graph preview\n\x09 * @param\x09Position\x09The position in voxels\n\x09 * @param\x09""Color\x09\x09The color\n\x09 */" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Draws a point in the world & in the voxel graph preview\n@param       Position        The position in voxels\n@param       Color           The color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "DrawDebugPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::VoxelPlaceableItemManager_eventDrawDebugPoint_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics
	{
		struct VoxelPlaceableItemManager_eventGetGeneratorCache_Parms
		{
			UVoxelGeneratorCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventGetGeneratorCache_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "GetGeneratorCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::VoxelPlaceableItemManager_eventGetGeneratorCache_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "OnClear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "OnGenerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelPlaceableItemManager);
	UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister()
	{
		return UVoxelPlaceableItemManager::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPlaceableItemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugBounds_MetaData[];
#endif
		static void NewProp_bDebugBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataItemInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataItemInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataItemInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem, "AddDataItem" }, // 495615649
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine, "DrawDebugLine" }, // 597419410
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint, "DrawDebugPoint" }, // 1333116349
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache, "GetGeneratorCache" }, // 3091936701
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear, "OnClear" }, // 1313653224
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate, "OnGenerate" }, // 1985784738
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((UVoxelPlaceableItemManager*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelPlaceableItemManager), &Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will show all the data items bounds\n" },
		{ "EditCondition", "bEnableDebug" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "If true, will show all the data items bounds" },
	};
#endif
	void Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_SetBit(void* Obj)
	{
		((UVoxelPlaceableItemManager*)Obj)->bDebugBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds = { "bDebugBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelPlaceableItemManager), &Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_Inner = { "DataItemInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, METADATA_PARAMS(nullptr, 0) }; // 817975454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_MetaData[] = {
		{ "Comment", "// Transient as otherwise it's serialized in the graph preview settings\x09\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Transient as otherwise it's serialized in the graph preview settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos = { "DataItemInfos", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPlaceableItemManager, DataItemInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_MetaData)) }; // 817975454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache = { "GeneratorCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPlaceableItemManager, GeneratorCache), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::ClassParams = {
		&UVoxelPlaceableItemManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPlaceableItemManager()
	{
		if (!Z_Registration_Info_UClass_UVoxelPlaceableItemManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPlaceableItemManager.OuterSingleton, Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelPlaceableItemManager.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelPlaceableItemManager>()
	{
		return UVoxelPlaceableItemManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics::ScriptStructInfo[] = {
		{ FVoxelDataItemConstructionInfo::StaticStruct, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewStructOps, TEXT("VoxelDataItemConstructionInfo"), &Z_Registration_Info_UScriptStruct_VoxelDataItemConstructionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelDataItemConstructionInfo), 817975454U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPlaceableItemManager, UVoxelPlaceableItemManager::StaticClass, TEXT("UVoxelPlaceableItemManager"), &Z_Registration_Info_UClass_UVoxelPlaceableItemManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPlaceableItemManager), 2634121867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_3356883318(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
