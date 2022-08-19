// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelConstantNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelConstantNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LOD_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LOD();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelSize_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelSize();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldSize_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldSize();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
// End Cross Module References
	void UVoxelNode_LOD::StaticRegisterNativesUVoxelNode_LOD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_LOD);
	UClass* Z_Construct_UClass_UVoxelNode_LOD_NoRegister()
	{
		return UVoxelNode_LOD::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_LOD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_LOD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Returns the current LOD\n" },
		{ "DisplayName", "LOD" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Returns the current LOD" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_LOD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_LOD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_LOD_Statics::ClassParams = {
		&UVoxelNode_LOD::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_LOD()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_LOD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_LOD.OuterSingleton, Z_Construct_UClass_UVoxelNode_LOD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_LOD.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_LOD>()
	{
		return UVoxelNode_LOD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_LOD);
	void UVoxelNode_VoxelSize::StaticRegisterNativesUVoxelNode_VoxelSize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_VoxelSize);
	UClass* Z_Construct_UClass_UVoxelNode_VoxelSize_NoRegister()
	{
		return UVoxelNode_VoxelSize::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_VoxelSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Voxel Size\n" },
		{ "DisplayName", "Voxel Size" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Voxel Size" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoxelSize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::ClassParams = {
		&UVoxelNode_VoxelSize::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_VoxelSize()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_VoxelSize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_VoxelSize.OuterSingleton, Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_VoxelSize.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_VoxelSize>()
	{
		return UVoxelNode_VoxelSize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoxelSize);
	void UVoxelNode_WorldSize::StaticRegisterNativesUVoxelNode_WorldSize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_WorldSize);
	UClass* Z_Construct_UClass_UVoxelNode_WorldSize_NoRegister()
	{
		return UVoxelNode_WorldSize::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_WorldSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_WorldSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// World Size\n" },
		{ "DisplayName", "World Size" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "World Size" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_WorldSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldSize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldSize_Statics::ClassParams = {
		&UVoxelNode_WorldSize::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_WorldSize()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_WorldSize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_WorldSize.OuterSingleton, Z_Construct_UClass_UVoxelNode_WorldSize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_WorldSize.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_WorldSize>()
	{
		return UVoxelNode_WorldSize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldSize);
	void UVoxelNode_CompileTimeConstant::StaticRegisterNativesUVoxelNode_CompileTimeConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_CompileTimeConstant);
	UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant_NoRegister()
	{
		return UVoxelNode_CompileTimeConstant::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Constants_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Constants_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constants_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Constants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Use this to access compilation constants such as preview size, target...\n" },
		{ "DisplayName", "Compile-Time Constant" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "Keywords", "is" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Use this to access compilation constants such as preview size, target..." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Type), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_MetaData)) }; // 3800992571
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_ValueProp = { "Constants", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_Key_KeyProp = { "Constants_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants = { "Constants", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Constants), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CompileTimeConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::ClassParams = {
		&UVoxelNode_CompileTimeConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.OuterSingleton, Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_CompileTimeConstant>()
	{
		return UVoxelNode_CompileTimeConstant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CompileTimeConstant);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_LOD, UVoxelNode_LOD::StaticClass, TEXT("UVoxelNode_LOD"), &Z_Registration_Info_UClass_UVoxelNode_LOD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_LOD), 701447694U) },
		{ Z_Construct_UClass_UVoxelNode_VoxelSize, UVoxelNode_VoxelSize::StaticClass, TEXT("UVoxelNode_VoxelSize"), &Z_Registration_Info_UClass_UVoxelNode_VoxelSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_VoxelSize), 2443946724U) },
		{ Z_Construct_UClass_UVoxelNode_WorldSize, UVoxelNode_WorldSize::StaticClass, TEXT("UVoxelNode_WorldSize"), &Z_Registration_Info_UClass_UVoxelNode_WorldSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_WorldSize), 4011910139U) },
		{ Z_Construct_UClass_UVoxelNode_CompileTimeConstant, UVoxelNode_CompileTimeConstant::StaticClass, TEXT("UVoxelNode_CompileTimeConstant"), &Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_CompileTimeConstant), 3366403113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h_3944020373(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
