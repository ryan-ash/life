// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorCache() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelGeneratorCache::execMakeTransformableGeneratorInstance)
	{
		P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_Picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelTransformableGeneratorInstanceWrapper**)Z_Param__Result=P_THIS->MakeTransformableGeneratorInstance(Z_Param_Picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorCache::execMakeGeneratorInstance)
	{
		P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_Picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelGeneratorInstanceWrapper**)Z_Param__Result=P_THIS->MakeGeneratorInstance(Z_Param_Picker);
		P_NATIVE_END;
	}
	void UVoxelGeneratorCache::StaticRegisterNativesUVoxelGeneratorCache()
	{
		UClass* Class = UVoxelGeneratorCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeGeneratorInstance", &UVoxelGeneratorCache::execMakeGeneratorInstance },
			{ "MakeTransformableGeneratorInstance", &UVoxelGeneratorCache::execMakeTransformableGeneratorInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics
	{
		struct VoxelGeneratorCache_eventMakeGeneratorInstance_Parms
		{
			FVoxelGeneratorPicker Picker;
			UVoxelGeneratorInstanceWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms, Picker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) }; // 3987947468
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_Picker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/**\n\x09 * Creates (or reuse if possible) a new generator instance\n\x09 *\n\x09 * Among other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ToolTip", "Creates (or reuse if possible) a new generator instance\n\nAmong other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorCache, nullptr, "MakeGeneratorInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::VoxelGeneratorCache_eventMakeGeneratorInstance_Parms), Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics
	{
		struct VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms
		{
			FVoxelTransformableGeneratorPicker Picker;
			UVoxelTransformableGeneratorInstanceWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms, Picker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) }; // 8016936
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_Picker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/**\n\x09 * Creates (or reuse if possible) a new generator instance\n\x09 *\n\x09 * Among other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ToolTip", "Creates (or reuse if possible) a new generator instance\n\nAmong other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorCache, nullptr, "MakeTransformableGeneratorInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms), Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGeneratorCache);
	UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister()
	{
		return UVoxelGeneratorCache::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorInit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorInit;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cache_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformableCache_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformableCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformableCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TransformableCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelGeneratorCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance, "MakeGeneratorInstance" }, // 1309693928
		{ &Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance, "MakeTransformableGeneratorInstance" }, // 3593745298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit = { "GeneratorInit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorCache, GeneratorInit), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit_MetaData)) }; // 940443676
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_ValueProp = { "Cache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_Key_KeyProp = { "Cache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) }; // 3987947468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorCache, Cache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_MetaData)) }; // 3987947468
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_ValueProp = { "TransformableCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_Key_KeyProp = { "TransformableCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) }; // 8016936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache = { "TransformableCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorCache, TransformableCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_MetaData)) }; // 8016936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::ClassParams = {
		&UVoxelGeneratorCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorCache()
	{
		if (!Z_Registration_Info_UClass_UVoxelGeneratorCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorCache.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGeneratorCache.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelGeneratorCache>()
	{
		return UVoxelGeneratorCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorCache);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGeneratorCache, UVoxelGeneratorCache::StaticClass, TEXT("UVoxelGeneratorCache"), &Z_Registration_Info_UClass_UVoxelGeneratorCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorCache), 3097338638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_2084117853(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
