// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelTestLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTestLibrary() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTestValues();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelTestValues;
class UScriptStruct* FVoxelTestValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelTestValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelTestValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTestValues, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTestValues"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelTestValues.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelTestValues>()
{
	return FVoxelTestValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelTestValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelTestValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTestValues>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTestValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelTestValues",
		sizeof(FVoxelTestValues),
		alignof(FVoxelTestValues),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelTestValues()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelTestValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelTestValues.InnerSingleton, Z_Construct_UScriptStruct_FVoxelTestValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelTestValues.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelTestLibrary::execTestValues)
	{
		P_GET_STRUCT(FVoxelTestValues,Z_Param_ValuesA);
		P_GET_STRUCT(FVoxelTestValues,Z_Param_ValuesB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelTestLibrary::TestValues(Z_Param_ValuesA,Z_Param_ValuesB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTestLibrary::execReadValues)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelTestValues*)Z_Param__Result=UVoxelTestLibrary::ReadValues(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	void UVoxelTestLibrary::StaticRegisterNativesUVoxelTestLibrary()
	{
		UClass* Class = UVoxelTestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadValues", &UVoxelTestLibrary::execReadValues },
			{ "TestValues", &UVoxelTestLibrary::execTestValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics
	{
		struct VoxelTestLibrary_eventReadValues_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			FVoxelTestValues ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) }; // 1090131275
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(nullptr, 0) }; // 3047743028
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Test" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTestLibrary, nullptr, "ReadValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::VoxelTestLibrary_eventReadValues_Parms), Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTestLibrary_ReadValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics
	{
		struct VoxelTestLibrary_eventTestValues_Parms
		{
			FVoxelTestValues ValuesA;
			FVoxelTestValues ValuesB;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuesA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuesB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesA = { "ValuesA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventTestValues_Parms, ValuesA), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(nullptr, 0) }; // 3047743028
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesB = { "ValuesB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventTestValues_Parms, ValuesB), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(nullptr, 0) }; // 3047743028
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Test" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTestLibrary, nullptr, "TestValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::VoxelTestLibrary_eventTestValues_Parms), Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTestLibrary_TestValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelTestLibrary);
	UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister()
	{
		return UVoxelTestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelTestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTestLibrary_ReadValues, "ReadValues" }, // 290735296
		{ &Z_Construct_UFunction_UVoxelTestLibrary_TestValues, "TestValues" }, // 2548676407
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelTestLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTestLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTestLibrary_Statics::ClassParams = {
		&UVoxelTestLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTestLibrary()
	{
		if (!Z_Registration_Info_UClass_UVoxelTestLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTestLibrary.OuterSingleton, Z_Construct_UClass_UVoxelTestLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelTestLibrary.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelTestLibrary>()
	{
		return UVoxelTestLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTestLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics::ScriptStructInfo[] = {
		{ FVoxelTestValues::StaticStruct, Z_Construct_UScriptStruct_FVoxelTestValues_Statics::NewStructOps, TEXT("VoxelTestValues"), &Z_Registration_Info_UScriptStruct_VoxelTestValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelTestValues), 3047743028U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelTestLibrary, UVoxelTestLibrary::StaticClass, TEXT("UVoxelTestLibrary"), &Z_Registration_Info_UClass_UVoxelTestLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTestLibrary), 3240255133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_1122427727(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
