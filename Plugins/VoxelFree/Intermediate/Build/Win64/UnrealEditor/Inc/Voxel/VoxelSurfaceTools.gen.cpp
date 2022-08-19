// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelSurfaceTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceTools() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelComputeDevice();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSDFMergeMode;
	static UEnum* EVoxelSDFMergeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSDFMergeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelSDFMergeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSDFMergeMode"));
		}
		return Z_Registration_Info_UEnum_EVoxelSDFMergeMode.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSDFMergeMode>()
	{
		return EVoxelSDFMergeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enumerators[] = {
		{ "EVoxelSDFMergeMode::Union", (int64)EVoxelSDFMergeMode::Union },
		{ "EVoxelSDFMergeMode::Intersection", (int64)EVoxelSDFMergeMode::Intersection },
		{ "EVoxelSDFMergeMode::Override", (int64)EVoxelSDFMergeMode::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Intersection.Comment", "// Destructive mode: will only shrink the surface\n" },
		{ "Intersection.Name", "EVoxelSDFMergeMode::Intersection" },
		{ "Intersection.ToolTip", "Destructive mode: will only shrink the surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "Override.Comment", "// Will add and remove at the same time\n" },
		{ "Override.Name", "EVoxelSDFMergeMode::Override" },
		{ "Override.ToolTip", "Will add and remove at the same time" },
		{ "Union.Comment", "// Additive mode: will only grow the surface\n" },
		{ "Union.Name", "EVoxelSDFMergeMode::Union" },
		{ "Union.ToolTip", "Additive mode: will only grow the surface" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelSDFMergeMode",
		"EVoxelSDFMergeMode",
		Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode()
	{
		if (!Z_Registration_Info_UEnum_EVoxelSDFMergeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSDFMergeMode.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelSDFMergeMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execDebugSurfaceVoxels)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::DebugSurfaceVoxels(Z_Param_World,Z_Param_Out_ProcessedVoxels,Z_Param_Lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyFlatten)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_PlanePoint);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_ENUM(EVoxelSDFMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyFlatten(Z_Param_World,Z_Param_PlanePoint,Z_Param_PlaneNormal,EVoxelSDFMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyTerrace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TerraceHeightInVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImmutableVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyTerrace(Z_Param_TerraceHeightInVoxels,Z_Param_Angle,Z_Param_ImmutableVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execGetStrengthMaskScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScaleX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScaleY);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Mask);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeY);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::GetStrengthMaskScale(Z_Param_Out_ScaleX,Z_Param_Out_ScaleY,Z_Param_World,Z_Param_Mask,Z_Param_SizeX,Z_Param_SizeY,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStrengthMask)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Mask);
		P_GET_STRUCT(FVector,Z_Param_EditPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleY);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_STRUCT(FVector,Z_Param_PlaneTangent);
		P_GET_ENUM(EVoxelSamplerMode,Z_Param_SamplerMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyStrengthMask(Z_Param_World,Z_Param_Mask,Z_Param_EditPosition,Z_Param_ScaleX,Z_Param_ScaleY,Z_Param_PlaneNormal,Z_Param_PlaneTangent,EVoxelSamplerMode(Z_Param_SamplerMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyFalloff)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyFalloff(Z_Param_World,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Center,Z_Param_Radius,Z_Param_Falloff,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStrengthCurve)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_OBJECT(UCurveFloat,Z_Param_StrengthCurve);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyStrengthCurve(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_StrengthCurve,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyConstantStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyConstantStrength(Z_Param_Strength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execGetBounds)
	{
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Voxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelSurfaceTools::GetBounds(Z_Param_Voxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStackAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_STRUCT(FVoxelSurfaceEditsVoxels,Z_Param_Voxels);
		P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::ApplyStackAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ProcessedVoxels,Z_Param_Voxels,Z_Param_Stack,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStack)
	{
		P_GET_STRUCT(FVoxelSurfaceEditsVoxels,Z_Param_Voxels);
		P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsProcessedVoxels*)Z_Param__Result=UVoxelSurfaceTools::ApplyStack(Z_Param_Voxels,Z_Param_Stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execAddToStack)
	{
		P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
		P_GET_STRUCT(FVoxelSurfaceEditsStackElement,Z_Param_Element);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStack*)Z_Param__Result=UVoxelSurfaceTools::AddToStack(Z_Param_Stack,Z_Param_Element);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels2DAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxels2DAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels2D)
	{
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxels2D(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxelsFromDistanceField)
	{
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_ENUM(EVoxelComputeDevice,Z_Param_ComputeDevice);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxelsFromDistanceField(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bMultiThreaded,EVoxelComputeDevice(Z_Param_ComputeDevice));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxelsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels)
	{
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxels(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals);
		P_NATIVE_END;
	}
	void UVoxelSurfaceTools::StaticRegisterNativesUVoxelSurfaceTools()
	{
		UClass* Class = UVoxelSurfaceTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToStack", &UVoxelSurfaceTools::execAddToStack },
			{ "ApplyConstantStrength", &UVoxelSurfaceTools::execApplyConstantStrength },
			{ "ApplyFalloff", &UVoxelSurfaceTools::execApplyFalloff },
			{ "ApplyFlatten", &UVoxelSurfaceTools::execApplyFlatten },
			{ "ApplyStack", &UVoxelSurfaceTools::execApplyStack },
			{ "ApplyStackAsync", &UVoxelSurfaceTools::execApplyStackAsync },
			{ "ApplyStrengthCurve", &UVoxelSurfaceTools::execApplyStrengthCurve },
			{ "ApplyStrengthMask", &UVoxelSurfaceTools::execApplyStrengthMask },
			{ "ApplyTerrace", &UVoxelSurfaceTools::execApplyTerrace },
			{ "DebugSurfaceVoxels", &UVoxelSurfaceTools::execDebugSurfaceVoxels },
			{ "FindSurfaceVoxels", &UVoxelSurfaceTools::execFindSurfaceVoxels },
			{ "FindSurfaceVoxels2D", &UVoxelSurfaceTools::execFindSurfaceVoxels2D },
			{ "FindSurfaceVoxels2DAsync", &UVoxelSurfaceTools::execFindSurfaceVoxels2DAsync },
			{ "FindSurfaceVoxelsAsync", &UVoxelSurfaceTools::execFindSurfaceVoxelsAsync },
			{ "FindSurfaceVoxelsFromDistanceField", &UVoxelSurfaceTools::execFindSurfaceVoxelsFromDistanceField },
			{ "GetBounds", &UVoxelSurfaceTools::execGetBounds },
			{ "GetStrengthMaskScale", &UVoxelSurfaceTools::execGetStrengthMaskScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics
	{
		struct VoxelSurfaceTools_eventAddToStack_Parms
		{
			FVoxelSurfaceEditsStack Stack;
			FVoxelSurfaceEditsStackElement Element;
			FVoxelSurfaceEditsStack ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) }; // 1834207093
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, Element), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) }; // 1834207093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Element,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "AddToStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::VoxelSurfaceTools_eventAddToStack_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics
	{
		struct VoxelSurfaceTools_eventApplyConstantStrength_Parms
		{
			float Strength;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyConstantStrength_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyConstantStrength_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "// Apply a constant strength to the surface voxels\n" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a constant strength to the surface voxels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyConstantStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::VoxelSurfaceTools_eventApplyConstantStrength_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics
	{
		struct VoxelSurfaceTools_eventApplyFalloff_Parms
		{
			AVoxelWorld* World;
			EVoxelFalloff FalloffType;
			FVector Center;
			float Radius;
			float Falloff;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) }; // 3165405943
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyFalloff_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyFalloff_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a falloff to surface voxels, based on their distance from a point.\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""FalloffType\x09\x09\x09\x09The type of falloff\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, between 0 and 1\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a falloff to surface voxels, based on their distance from a point.\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       FalloffType                             The type of falloff\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius, in cm if bConvertToVoxelSpace = true\n@param       Falloff                                 The falloff, between 0 and 1\n@param       bConvertToVoxelSpace    Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyFalloff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::VoxelSurfaceTools_eventApplyFalloff_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics
	{
		struct VoxelSurfaceTools_eventApplyFlatten_Parms
		{
			AVoxelWorld* World;
			FVector PlanePoint;
			FVector PlaneNormal;
			EVoxelSDFMergeMode MergeMode;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlanePoint = { "PlanePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, PlanePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode, METADATA_PARAMS(nullptr, 0) }; // 3718637240
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyFlatten_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyFlatten_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlanePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Make surface voxels go towards a plane\n\x09 * Important: if bExactDistanceField = true, this node should be called last! Modifying strengths after it will result\n\x09 * in glitchy behavior\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, required if bConvertToVoxelSpace = true\n\x09 * @param\x09PlanePoint\x09\x09\x09\x09""A point in the flatten plane, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09PlaneNormal\x09\x09\x09\x09The normal of the plane\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How to merge the plane SDF\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, converts PlanePoint from world space to voxel space. Requires World to be non null\n\x09 * @return\x09\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_MergeMode", "Override" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Make surface voxels go towards a plane\nImportant: if bExactDistanceField = true, this node should be called last! Modifying strengths after it will result\nin glitchy behavior\n@param       World                                   The voxel world, required if bConvertToVoxelSpace = true\n@param       PlanePoint                              A point in the flatten plane, in world space if bConvertToVoxelSpace = true\n@param       PlaneNormal                             The normal of the plane\n@param       MergeMode                               How to merge the plane SDF\n@param       bConvertToVoxelSpace    If true, converts PlanePoint from world space to voxel space. Requires World to be non null\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyFlatten", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::VoxelSurfaceTools_eventApplyFlatten_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics
	{
		struct VoxelSurfaceTools_eventApplyStack_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			FVoxelSurfaceEditsStack Stack;
			FVoxelSurfaceEditsProcessedVoxels ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) }; // 1834207093
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) }; // 1421313598
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::VoxelSurfaceTools_eventApplyStack_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics
	{
		struct VoxelSurfaceTools_eventApplyStackAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			FVoxelSurfaceEditsVoxels Voxels;
			FVoxelSurfaceEditsStack Stack;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) }; // 1421313598
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) }; // 1834207093
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyStackAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStackAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_ProcessedVoxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStackAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::VoxelSurfaceTools_eventApplyStackAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics
	{
		struct VoxelSurfaceTools_eventApplyStrengthCurve_Parms
		{
			AVoxelWorld* World;
			FVector Center;
			float Radius;
			UCurveFloat* StrengthCurve;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthCurve;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_StrengthCurve = { "StrengthCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, StrengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyStrengthCurve_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStrengthCurve_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_StrengthCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a strength curve to surface voxels, based on their distance from a point:\n\x09 * Strength = Curve.SampleAt(Distance(Voxel.Position, Center) / Radius)\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius to divide the distance by, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09StrengthCurve\x09\x09\x09The strength curve\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center and Radius from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a strength curve to surface voxels, based on their distance from a point:\nStrength = Curve.SampleAt(Distance(Voxel.Position, Center) / Radius)\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius to divide the distance by, in cm if bConvertToVoxelSpace = true\n@param       StrengthCurve                   The strength curve\n@param       bConvertToVoxelSpace    Converts Center and Radius from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStrengthCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::VoxelSurfaceTools_eventApplyStrengthCurve_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics
	{
		struct VoxelSurfaceTools_eventApplyStrengthMask_Parms
		{
			AVoxelWorld* World;
			FVoxelFloatTexture Mask;
			FVector EditPosition;
			float ScaleX;
			float ScaleY;
			FVector PlaneNormal;
			FVector PlaneTangent;
			EVoxelSamplerMode SamplerMode;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTangent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplerMode;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, Mask), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_EditPosition = { "EditPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, EditPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ScaleX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ScaleY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneTangent = { "PlaneTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, PlaneTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode = { "SamplerMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, SamplerMode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(nullptr, 0) }; // 3821440732
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyStrengthMask_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStrengthMask_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_EditPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a strength mask to surface voxels, based on their position projected onto a plane\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09Mask\x09\x09\x09\x09\x09The mask to apply\n\x09 * @param\x09""EditPosition\x09\x09\x09The voxel positions are computed relative to this. In world space if bConvertToVoxelSpace = true\n\x09 * @param\x09ScaleX\x09\x09\x09\x09\x09The sampling scale on the X axis. The bigger, the bigger the projected image will be.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09Recommended: Wanted size in voxels of the image / image size in pixels.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""Can use GetStrengthMaskScale.\n\x09 * @param\x09ScaleY\x09\x09\x09\x09\x09The sampling scale on the Y axis. The bigger, the bigger the projected image will be.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09Recommended: Wanted size in voxels of the image / image size in pixels.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""Can use GetStrengthMaskScale.\n\x09 * @param\x09PlaneNormal\n\x09 * @param\x09PlaneTangent\n\x09 * @param\x09SamplerMode\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center and Radius from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_PlaneTangent", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_SamplerMode", "Tile" },
		{ "CPP_Default_ScaleX", "1.000000" },
		{ "CPP_Default_ScaleY", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a strength mask to surface voxels, based on their position projected onto a plane\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Mask                                    The mask to apply\n@param       EditPosition                    The voxel positions are computed relative to this. In world space if bConvertToVoxelSpace = true\n@param       ScaleX                                  The sampling scale on the X axis. The bigger, the bigger the projected image will be.\n                                                                     Recommended: Wanted size in voxels of the image / image size in pixels.\n                                                                     Can use GetStrengthMaskScale.\n@param       ScaleY                                  The sampling scale on the Y axis. The bigger, the bigger the projected image will be.\n                                                                     Recommended: Wanted size in voxels of the image / image size in pixels.\n                                                                     Can use GetStrengthMaskScale.\n@param       PlaneNormal\n@param       PlaneTangent\n@param       SamplerMode\n@param       bConvertToVoxelSpace    Converts Center and Radius from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStrengthMask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::VoxelSurfaceTools_eventApplyStrengthMask_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics
	{
		struct VoxelSurfaceTools_eventApplyTerrace_Parms
		{
			int32 TerraceHeightInVoxels;
			float Angle;
			int32 ImmutableVoxels;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TerraceHeightInVoxels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImmutableVoxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_TerraceHeightInVoxels = { "TerraceHeightInVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, TerraceHeightInVoxels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ImmutableVoxels = { "ImmutableVoxels", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, ImmutableVoxels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) }; // 35946222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_TerraceHeightInVoxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ImmutableVoxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ImmutableVoxels" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply terracing\n\x09 * @param\x09TerraceHeightInVoxels\x09The height of the terraces in voxels\n\x09 * @param\x09""Angle\x09\x09\x09\x09\x09The angle in degrees of the terraces borders. Not entirely precise. Between 0 and 180.\n\x09 * @param\x09ImmutableVoxels\x09\x09\x09The number of voxels to not change per terrace/height of the \"top layer\" of each terrace\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_Angle", "75.000000" },
		{ "CPP_Default_ImmutableVoxels", "1" },
		{ "CPP_Default_TerraceHeightInVoxels", "5" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply terracing\n@param       TerraceHeightInVoxels   The height of the terraces in voxels\n@param       Angle                                   The angle in degrees of the terraces borders. Not entirely precise. Between 0 and 180.\n@param       ImmutableVoxels                 The number of voxels to not change per terrace/height of the \"top layer\" of each terrace\n@return      New voxels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyTerrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::VoxelSurfaceTools_eventApplyTerrace_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics
	{
		struct VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms
		{
			AVoxelWorld* World;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			float Lifetime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels_MetaData)) }; // 1421313598
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_Lifetime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "DebugSurfaceVoxels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxels_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels_Parms*)Obj)->bComputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms*)Obj)->bComputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms*)Obj)->bComputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels2DAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
			bool bHideLatentWarnings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms*)Obj)->bComputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxelsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bMultiThreaded;
			EVoxelComputeDevice ComputeDevice;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComputeDevice_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComputeDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) }; // 3938285345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_ComputeDevice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_ComputeDevice = { "ComputeDevice", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, ComputeDevice), Z_Construct_UEnum_Voxel_EVoxelComputeDevice, METADATA_PARAMS(nullptr, 0) }; // 2700073125
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_ComputeDevice_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_ComputeDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, ComputeDevice" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface using an exact computation of the distance field using the GPU\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bMultiThreaded\x09If true will multithread the CPU loops\n\x09 * @param\x09""ComputeDevice\x09Whether to use the GPU or not\n\x09 */" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_ComputeDevice", "GPU" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface using an exact computation of the distance field using the GPU\n@param       World                   The voxel world\n@param       Bounds                  Bounds to look in\n@param       bMultiThreaded  If true will multithread the CPU loops\n@param       ComputeDevice   Whether to use the GPU or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxelsFromDistanceField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics
	{
		struct VoxelSurfaceTools_eventGetBounds_Parms
		{
			FVoxelSurfaceEditsProcessedVoxels Voxels;
			FVoxelIntBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetBounds_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) }; // 1421313598
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_Voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::VoxelSurfaceTools_eventGetBounds_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics
	{
		struct VoxelSurfaceTools_eventGetStrengthMaskScale_Parms
		{
			float ScaleX;
			float ScaleY;
			AVoxelWorld* World;
			FVoxelFloatTexture Mask;
			float SizeX;
			float SizeY;
			bool bConvertToVoxelSpace;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeY;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, ScaleX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, ScaleY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, Mask), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventGetStrengthMaskScale_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Compute the scale for ApplyStrengthMask from a wanted size\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, required if bConvertToVoxelSpace = true\n\x09 * @param\x09Mask\x09\x09\x09\x09\x09The mask\n\x09 * @param\x09SizeX\x09\x09\x09\x09\x09The wanted size on the X axis, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09SizeY\x09\x09\x09\x09\x09The wanted size on the Y axis, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts SizeX and SizeY from world space to voxel space. Requires World to be non null\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_SizeX", "1000.000000" },
		{ "CPP_Default_SizeY", "1000.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Compute the scale for ApplyStrengthMask from a wanted size\n@param       World                                   The voxel world, required if bConvertToVoxelSpace = true\n@param       Mask                                    The mask\n@param       SizeX                                   The wanted size on the X axis, in cm if bConvertToVoxelSpace = true\n@param       SizeY                                   The wanted size on the Y axis, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts SizeX and SizeY from world space to voxel space. Requires World to be non null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "GetStrengthMaskScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::VoxelSurfaceTools_eventGetStrengthMaskScale_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSurfaceTools);
	UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister()
	{
		return UVoxelSurfaceTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSurfaceTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSurfaceTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSurfaceTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack, "AddToStack" }, // 2259847598
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength, "ApplyConstantStrength" }, // 3139111791
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff, "ApplyFalloff" }, // 719390919
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten, "ApplyFlatten" }, // 684994453
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack, "ApplyStack" }, // 1370460166
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync, "ApplyStackAsync" }, // 3783703837
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve, "ApplyStrengthCurve" }, // 3582192436
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask, "ApplyStrengthMask" }, // 489337326
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace, "ApplyTerrace" }, // 4140867011
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels, "DebugSurfaceVoxels" }, // 3522858954
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels, "FindSurfaceVoxels" }, // 3425276429
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D, "FindSurfaceVoxels2D" }, // 2687282685
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync, "FindSurfaceVoxels2DAsync" }, // 3371177763
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync, "FindSurfaceVoxelsAsync" }, // 4240794152
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField, "FindSurfaceVoxelsFromDistanceField" }, // 2595387151
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds, "GetBounds" }, // 1734089265
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale, "GetStrengthMaskScale" }, // 1878045418
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelSurfaceTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSurfaceTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceTools_Statics::ClassParams = {
		&UVoxelSurfaceTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSurfaceTools()
	{
		if (!Z_Registration_Info_UClass_UVoxelSurfaceTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSurfaceTools.OuterSingleton, Z_Construct_UClass_UVoxelSurfaceTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSurfaceTools.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSurfaceTools>()
	{
		return UVoxelSurfaceTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceTools);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics::EnumInfo[] = {
		{ EVoxelSDFMergeMode_StaticEnum, TEXT("EVoxelSDFMergeMode"), &Z_Registration_Info_UEnum_EVoxelSDFMergeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3718637240U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSurfaceTools, UVoxelSurfaceTools::StaticClass, TEXT("UVoxelSurfaceTools"), &Z_Registration_Info_UClass_UVoxelSurfaceTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSurfaceTools), 246761110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_1114596485(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
