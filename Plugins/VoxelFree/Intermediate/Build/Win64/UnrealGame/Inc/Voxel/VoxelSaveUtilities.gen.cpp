// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelData/VoxelSaveUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSaveUtilities() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelSaveUtilities::execDecompressVoxelSave)
	{
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_CompressedSave);
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutUncompressedSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelSaveUtilities::DecompressVoxelSave(Z_Param_Out_CompressedSave,Z_Param_Out_OutUncompressedSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSaveUtilities::execCompressVoxelSave)
	{
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_UncompressedSave);
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutCompressedSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSaveUtilities::CompressVoxelSave(Z_Param_Out_UncompressedSave,Z_Param_Out_OutCompressedSave);
		P_NATIVE_END;
	}
	void UVoxelSaveUtilities::StaticRegisterNativesUVoxelSaveUtilities()
	{
		UClass* Class = UVoxelSaveUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompressVoxelSave", &UVoxelSaveUtilities::execCompressVoxelSave },
			{ "DecompressVoxelSave", &UVoxelSaveUtilities::execDecompressVoxelSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics
	{
		struct VoxelSaveUtilities_eventCompressVoxelSave_Parms
		{
			FVoxelUncompressedWorldSave UncompressedSave;
			FVoxelCompressedWorldSave OutCompressedSave;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSave_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UncompressedSave;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCompressedSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave = { "UncompressedSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventCompressVoxelSave_Parms, UncompressedSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave_MetaData)) }; // 1559596185
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_OutCompressedSave = { "OutCompressedSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventCompressVoxelSave_Parms, OutCompressedSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(nullptr, 0) }; // 2486776823
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_OutCompressedSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Save" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSaveUtilities, nullptr, "CompressVoxelSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::VoxelSaveUtilities_eventCompressVoxelSave_Parms), Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics
	{
		struct VoxelSaveUtilities_eventDecompressVoxelSave_Parms
		{
			FVoxelCompressedWorldSave CompressedSave;
			FVoxelUncompressedWorldSave OutUncompressedSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSave_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressedSave;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUncompressedSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave = { "CompressedSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventDecompressVoxelSave_Parms, CompressedSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave_MetaData)) }; // 2486776823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_OutUncompressedSave = { "OutUncompressedSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventDecompressVoxelSave_Parms, OutUncompressedSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(nullptr, 0) }; // 1559596185
	void Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelSaveUtilities_eventDecompressVoxelSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSaveUtilities_eventDecompressVoxelSave_Parms), &Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_OutUncompressedSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Save" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSaveUtilities, nullptr, "DecompressVoxelSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::VoxelSaveUtilities_eventDecompressVoxelSave_Parms), Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSaveUtilities);
	UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister()
	{
		return UVoxelSaveUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSaveUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSaveUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSaveUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave, "CompressVoxelSave" }, // 1822675072
		{ &Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave, "DecompressVoxelSave" }, // 449433861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelData/VoxelSaveUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSaveUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSaveUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSaveUtilities_Statics::ClassParams = {
		&UVoxelSaveUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSaveUtilities()
	{
		if (!Z_Registration_Info_UClass_UVoxelSaveUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSaveUtilities.OuterSingleton, Z_Construct_UClass_UVoxelSaveUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSaveUtilities.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelSaveUtilities>()
	{
		return UVoxelSaveUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSaveUtilities);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSaveUtilities, UVoxelSaveUtilities::StaticClass, TEXT("UVoxelSaveUtilities"), &Z_Registration_Info_UClass_UVoxelSaveUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSaveUtilities), 3001967374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_3843393630(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
