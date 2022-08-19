// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelIfNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelIfNode() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_If_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_If();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis;
	static UEnum* EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"));
		}
		return Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.OuterSingleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelNodeIfBranchToUseForRangeAnalysis>()
	{
		return EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enumerators[] = {
		{ "EVoxelNodeIfBranchToUseForRangeAnalysis::None", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::None },
		{ "EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue },
		{ "EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "None.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::None" },
		{ "UseFalse.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse" },
		{ "UseTrue.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		"EVoxelNodeIfBranchToUseForRangeAnalysis",
		"EVoxelNodeIfBranchToUseForRangeAnalysis",
		Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis()
	{
		if (!Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.InnerSingleton;
	}
	void UVoxelNode_If::StaticRegisterNativesUVoxelNode_If()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_If);
	UClass* Z_Construct_UClass_UVoxelNode_If_NoRegister()
	{
		return UVoxelNode_If::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_If_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BranchToUseForRangeAnalysis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchToUseForRangeAnalysis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BranchToUseForRangeAnalysis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_If_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
		{ "Comment", "// Branch node\n" },
		{ "DisplayName", "If" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "Keywords", "branch" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Branch node" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If the condition range analysis fails, use this branch instead of failing.\n// DO NOT CHANGE THIS UNLESS YOU KNOW WHAT YOU ARE DOING, ELSE YOUR WORLD WILL HAVE HOLES\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "If the condition range analysis fails, use this branch instead of failing.\nDO NOT CHANGE THIS UNLESS YOU KNOW WHAT YOU ARE DOING, ELSE YOUR WORLD WILL HAVE HOLES" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis = { "BranchToUseForRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_If, BranchToUseForRangeAnalysis), Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_MetaData)) }; // 875111738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_If_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_If>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_If_Statics::ClassParams = {
		&UVoxelNode_If::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_If()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_If.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_If.OuterSingleton, Z_Construct_UClass_UVoxelNode_If_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_If.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_If>()
	{
		return UVoxelNode_If::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_If);
	void UVoxelNode_IfWithDefaultToFalse::StaticRegisterNativesUVoxelNode_IfWithDefaultToFalse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_IfWithDefaultToFalse);
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_NoRegister()
	{
		return UVoxelNode_IfWithDefaultToFalse::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_If,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Helper\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Helper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IfWithDefaultToFalse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::ClassParams = {
		&UVoxelNode_IfWithDefaultToFalse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.OuterSingleton, Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IfWithDefaultToFalse>()
	{
		return UVoxelNode_IfWithDefaultToFalse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IfWithDefaultToFalse);
	void UVoxelNode_IfWithDefaultToTrue::StaticRegisterNativesUVoxelNode_IfWithDefaultToTrue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_IfWithDefaultToTrue);
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_NoRegister()
	{
		return UVoxelNode_IfWithDefaultToTrue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_If,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Helper\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Helper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IfWithDefaultToTrue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::ClassParams = {
		&UVoxelNode_IfWithDefaultToTrue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.OuterSingleton, Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IfWithDefaultToTrue>()
	{
		return UVoxelNode_IfWithDefaultToTrue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IfWithDefaultToTrue);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics::EnumInfo[] = {
		{ EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum, TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"), &Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 875111738U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_If, UVoxelNode_If::StaticClass, TEXT("UVoxelNode_If"), &Z_Registration_Info_UClass_UVoxelNode_If, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_If), 3924262806U) },
		{ Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse, UVoxelNode_IfWithDefaultToFalse::StaticClass, TEXT("UVoxelNode_IfWithDefaultToFalse"), &Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IfWithDefaultToFalse), 1459262712U) },
		{ Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue, UVoxelNode_IfWithDefaultToTrue::StaticClass, TEXT("UVoxelNode_IfWithDefaultToTrue"), &Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IfWithDefaultToTrue), 3630561045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_2909949636(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
