// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMathLibrary() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHaltonStream();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelHaltonStream;
class UScriptStruct* FVoxelHaltonStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelHaltonStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelHaltonStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelHaltonStream, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelHaltonStream"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelHaltonStream.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelHaltonStream>()
{
	return FVoxelHaltonStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Voxel.VoxelMathLibrary.MakeHaltonStream" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelHaltonStream>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHaltonStream, InitialSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHaltonStream, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelHaltonStream",
		sizeof(FVoxelHaltonStream),
		alignof(FVoxelHaltonStream),
		Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelHaltonStream()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelHaltonStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelHaltonStream.InnerSingleton, Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelHaltonStream.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton3D)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelMathLibrary::GetHalton3D(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton2D)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UVoxelMathLibrary::GetHalton2D(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton1D)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelMathLibrary::GetHalton1D(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execResetHaltonStream)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelMathLibrary::ResetHaltonStream(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execMakeHaltonStream)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InitialSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelHaltonStream*)Z_Param__Result=UVoxelMathLibrary::MakeHaltonStream(Z_Param_InitialSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetUnitVectorFromRandom)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Random);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelMathLibrary::GetUnitVectorFromRandom(Z_Param_Random);
		P_NATIVE_END;
	}
	void UVoxelMathLibrary::StaticRegisterNativesUVoxelMathLibrary()
	{
		UClass* Class = UVoxelMathLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHalton1D", &UVoxelMathLibrary::execGetHalton1D },
			{ "GetHalton2D", &UVoxelMathLibrary::execGetHalton2D },
			{ "GetHalton3D", &UVoxelMathLibrary::execGetHalton3D },
			{ "GetUnitVectorFromRandom", &UVoxelMathLibrary::execGetUnitVectorFromRandom },
			{ "MakeHaltonStream", &UVoxelMathLibrary::execMakeHaltonStream },
			{ "ResetHaltonStream", &UVoxelMathLibrary::execResetHaltonStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics
	{
		struct VoxelMathLibrary_eventGetHalton1D_Parms
		{
			FVoxelHaltonStream Stream;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton1D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream_MetaData)) }; // 2311616
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton1D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::VoxelMathLibrary_eventGetHalton1D_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics
	{
		struct VoxelMathLibrary_eventGetHalton2D_Parms
		{
			FVoxelHaltonStream Stream;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton2D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream_MetaData)) }; // 2311616
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::VoxelMathLibrary_eventGetHalton2D_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics
	{
		struct VoxelMathLibrary_eventGetHalton3D_Parms
		{
			FVoxelHaltonStream Stream;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton3D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream_MetaData)) }; // 2311616
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::VoxelMathLibrary_eventGetHalton3D_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics
	{
		struct VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms
		{
			FVector2D Random;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Random;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_Random = { "Random", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms, Random), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_Random,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "Comment", "/**\n\x09 * Generates a random position on the unit sphere, given some random input between 0 and 1\n\x09 * @param\x09Random\x09\x09Random values, between 0 and 1. Can use RandomFloat, but also more complex noises like Halton or Sobol\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
		{ "ToolTip", "Generates a random position on the unit sphere, given some random input between 0 and 1\n@param       Random          Random values, between 0 and 1. Can use RandomFloat, but also more complex noises like Halton or Sobol" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetUnitVectorFromRandom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics
	{
		struct VoxelMathLibrary_eventMakeHaltonStream_Parms
		{
			int32 InitialSeed;
			FVoxelHaltonStream ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventMakeHaltonStream_Parms, InitialSeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventMakeHaltonStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(nullptr, 0) }; // 2311616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_InitialSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "MakeHaltonStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::VoxelMathLibrary_eventMakeHaltonStream_Parms), Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics
	{
		struct VoxelMathLibrary_eventResetHaltonStream_Parms
		{
			FVoxelHaltonStream Stream;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventResetHaltonStream_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream_MetaData)) }; // 2311616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "ResetHaltonStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::VoxelMathLibrary_eventResetHaltonStream_Parms), Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMathLibrary);
	UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister()
	{
		return UVoxelMathLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMathLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMathLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelMathLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D, "GetHalton1D" }, // 1582101916
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D, "GetHalton2D" }, // 2600704428
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D, "GetHalton3D" }, // 2222621160
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom, "GetUnitVectorFromRandom" }, // 2433204038
		{ &Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream, "MakeHaltonStream" }, // 3754329297
		{ &Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream, "ResetHaltonStream" }, // 2568534011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelMathLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMathLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMathLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMathLibrary_Statics::ClassParams = {
		&UVoxelMathLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMathLibrary()
	{
		if (!Z_Registration_Info_UClass_UVoxelMathLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMathLibrary.OuterSingleton, Z_Construct_UClass_UVoxelMathLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMathLibrary.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelMathLibrary>()
	{
		return UVoxelMathLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMathLibrary);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics::ScriptStructInfo[] = {
		{ FVoxelHaltonStream::StaticStruct, Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewStructOps, TEXT("VoxelHaltonStream"), &Z_Registration_Info_UScriptStruct_VoxelHaltonStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelHaltonStream), 2311616U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMathLibrary, UVoxelMathLibrary::StaticClass, TEXT("UVoxelMathLibrary"), &Z_Registration_Info_UClass_UVoxelMathLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMathLibrary), 792182517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_21993363(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
