// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelRandomNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelRandomNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomFloat();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomInt_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomInt();
// End Cross Module References
	void UVoxelNode_RandomFloat::StaticRegisterNativesUVoxelNode_RandomFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_RandomFloat);
	UClass* Z_Construct_UClass_UVoxelNode_RandomFloat_NoRegister()
	{
		return UVoxelNode_RandomFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RandomFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "// A random number >= Min and <= Max\n" },
		{ "DisplayName", "Rand Float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelRandomNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
		{ "ToolTip", "A random number >= Min and <= Max" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RandomFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::ClassParams = {
		&UVoxelNode_RandomFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RandomFloat()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_RandomFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RandomFloat.OuterSingleton, Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_RandomFloat.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RandomFloat>()
	{
		return UVoxelNode_RandomFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RandomFloat);
	void UVoxelNode_RandomInt::StaticRegisterNativesUVoxelNode_RandomInt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_RandomInt);
	UClass* Z_Construct_UClass_UVoxelNode_RandomInt_NoRegister()
	{
		return UVoxelNode_RandomInt::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RandomInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RandomInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "// A random number >= Min and <= Max\n" },
		{ "DisplayName", "Rand int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelRandomNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
		{ "ToolTip", "A random number >= Min and <= Max" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomInt, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomInt, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RandomInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RandomInt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::ClassParams = {
		&UVoxelNode_RandomInt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RandomInt()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_RandomInt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RandomInt.OuterSingleton, Z_Construct_UClass_UVoxelNode_RandomInt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_RandomInt.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RandomInt>()
	{
		return UVoxelNode_RandomInt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RandomInt);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_RandomFloat, UVoxelNode_RandomFloat::StaticClass, TEXT("UVoxelNode_RandomFloat"), &Z_Registration_Info_UClass_UVoxelNode_RandomFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RandomFloat), 1578273782U) },
		{ Z_Construct_UClass_UVoxelNode_RandomInt, UVoxelNode_RandomInt::StaticClass, TEXT("UVoxelNode_RandomInt"), &Z_Registration_Info_UClass_UVoxelNode_RandomInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RandomInt), 1936347181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h_1831923775(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
