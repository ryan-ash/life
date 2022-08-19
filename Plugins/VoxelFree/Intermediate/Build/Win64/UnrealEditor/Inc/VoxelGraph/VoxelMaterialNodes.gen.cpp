// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelMaterialNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetColor_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel();
// End Cross Module References
	void UVoxelMaterialNode::StaticRegisterNativesUVoxelMaterialNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMaterialNode);
	UClass* Z_Construct_UClass_UVoxelMaterialNode_NoRegister()
	{
		return UVoxelMaterialNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMaterialNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMaterialNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMaterialNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMaterialNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMaterialNode_Statics::ClassParams = {
		&UVoxelMaterialNode::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMaterialNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelMaterialNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMaterialNode.OuterSingleton, Z_Construct_UClass_UVoxelMaterialNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMaterialNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelMaterialNode>()
	{
		return UVoxelMaterialNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMaterialNode);
	void UVoxelNode_GetColor::StaticRegisterNativesUVoxelNode_GetColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetColor);
	UClass* Z_Construct_UClass_UVoxelNode_GetColor_NoRegister()
	{
		return UVoxelNode_GetColor::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the material color. Outputs are between 0 and 1\n" },
		{ "DisplayName", "Get Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
		{ "ToolTip", "Get the material color. Outputs are between 0 and 1" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetColor_Statics::ClassParams = {
		&UVoxelNode_GetColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetColor()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetColor.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetColor>()
	{
		return UVoxelNode_GetColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetColor);
	void UVoxelNode_GetIndex::StaticRegisterNativesUVoxelNode_GetIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetIndex);
	UClass* Z_Construct_UClass_UVoxelNode_GetIndex_NoRegister()
	{
		return UVoxelNode_GetIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the index of the material. Output is between 0 and 255\n" },
		{ "DisplayName", "Get Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
		{ "ToolTip", "Get the index of the material. Output is between 0 and 255" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetIndex_Statics::ClassParams = {
		&UVoxelNode_GetIndex::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetIndex()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetIndex.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetIndex>()
	{
		return UVoxelNode_GetIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetIndex);
	void UVoxelNode_GetUVChannel::StaticRegisterNativesUVoxelNode_GetUVChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GetUVChannel);
	UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel_NoRegister()
	{
		return UVoxelNode_GetUVChannel::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Read a UV channel from a material.\n" },
		{ "DisplayName", "Get UV Channel" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
		{ "ToolTip", "Read a UV channel from a material." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetUVChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::ClassParams = {
		&UVoxelNode_GetUVChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetUVChannel>()
	{
		return UVoxelNode_GetUVChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetUVChannel);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMaterialNode, UVoxelMaterialNode::StaticClass, TEXT("UVoxelMaterialNode"), &Z_Registration_Info_UClass_UVoxelMaterialNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMaterialNode), 1167597510U) },
		{ Z_Construct_UClass_UVoxelNode_GetColor, UVoxelNode_GetColor::StaticClass, TEXT("UVoxelNode_GetColor"), &Z_Registration_Info_UClass_UVoxelNode_GetColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetColor), 3871308416U) },
		{ Z_Construct_UClass_UVoxelNode_GetIndex, UVoxelNode_GetIndex::StaticClass, TEXT("UVoxelNode_GetIndex"), &Z_Registration_Info_UClass_UVoxelNode_GetIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetIndex), 703601920U) },
		{ Z_Construct_UClass_UVoxelNode_GetUVChannel, UVoxelNode_GetUVChannel::StaticClass, TEXT("UVoxelNode_GetUVChannel"), &Z_Registration_Info_UClass_UVoxelNode_GetUVChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetUVChannel), 3606395085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h_2909909015(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
