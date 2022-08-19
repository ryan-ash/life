// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelCoordinatesNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCoordinatesNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelCoordinateNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelCoordinateNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XF_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XF();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YF_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YF();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZF_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZF();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalX_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalX();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalY_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalY();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalZ_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalZ();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TransformVector_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TransformVector();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector();
// End Cross Module References
	void UVoxelCoordinateNode::StaticRegisterNativesUVoxelCoordinateNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelCoordinateNode);
	UClass* Z_Construct_UClass_UVoxelCoordinateNode_NoRegister()
	{
		return UVoxelCoordinateNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCoordinateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelCoordinateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithDependencies,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCoordinateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCoordinateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCoordinateNode_Statics::ClassParams = {
		&UVoxelCoordinateNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCoordinateNode()
	{
		if (!Z_Registration_Info_UClass_UVoxelCoordinateNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCoordinateNode.OuterSingleton, Z_Construct_UClass_UVoxelCoordinateNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelCoordinateNode.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelCoordinateNode>()
	{
		return UVoxelCoordinateNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCoordinateNode);
	void UVoxelNode_XF::StaticRegisterNativesUVoxelNode_XF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_XF);
	UClass* Z_Construct_UClass_UVoxelNode_XF_NoRegister()
	{
		return UVoxelNode_XF::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_XF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_XF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current X\n" },
		{ "DisplayName", "X" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current X" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_XF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_XF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_XF_Statics::ClassParams = {
		&UVoxelNode_XF::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_XF()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_XF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_XF.OuterSingleton, Z_Construct_UClass_UVoxelNode_XF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_XF.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_XF>()
	{
		return UVoxelNode_XF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_XF);
	void UVoxelNode_YF::StaticRegisterNativesUVoxelNode_YF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_YF);
	UClass* Z_Construct_UClass_UVoxelNode_YF_NoRegister()
	{
		return UVoxelNode_YF::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_YF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_YF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Y\n" },
		{ "DisplayName", "Y" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Y" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_YF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_YF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_YF_Statics::ClassParams = {
		&UVoxelNode_YF::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_YF()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_YF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_YF.OuterSingleton, Z_Construct_UClass_UVoxelNode_YF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_YF.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_YF>()
	{
		return UVoxelNode_YF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_YF);
	void UVoxelNode_ZF::StaticRegisterNativesUVoxelNode_ZF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_ZF);
	UClass* Z_Construct_UClass_UVoxelNode_ZF_NoRegister()
	{
		return UVoxelNode_ZF::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_ZF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_ZF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Z\n" },
		{ "DisplayName", "Z" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Z" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_ZF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ZF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ZF_Statics::ClassParams = {
		&UVoxelNode_ZF::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_ZF()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_ZF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ZF.OuterSingleton, Z_Construct_UClass_UVoxelNode_ZF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_ZF.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_ZF>()
	{
		return UVoxelNode_ZF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ZF);
	void UVoxelNode_GlobalX::StaticRegisterNativesUVoxelNode_GlobalX()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GlobalX);
	UClass* Z_Construct_UClass_UVoxelNode_GlobalX_NoRegister()
	{
		return UVoxelNode_GlobalX::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current X in global space, before the transform is applied to it. Same as X if not a graph asset\n" },
		{ "DisplayName", "Global X" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current X in global space, before the transform is applied to it. Same as X if not a graph asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalX>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalX_Statics::ClassParams = {
		&UVoxelNode_GlobalX::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalX()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GlobalX.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalX.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalX_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GlobalX.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalX>()
	{
		return UVoxelNode_GlobalX::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalX);
	void UVoxelNode_GlobalY::StaticRegisterNativesUVoxelNode_GlobalY()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GlobalY);
	UClass* Z_Construct_UClass_UVoxelNode_GlobalY_NoRegister()
	{
		return UVoxelNode_GlobalY::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalY_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalY_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Y in global space, before the transform is applied to it. Same as Y if not a graph asset\n" },
		{ "DisplayName", "Global Y" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Y in global space, before the transform is applied to it. Same as Y if not a graph asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalY_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalY>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalY_Statics::ClassParams = {
		&UVoxelNode_GlobalY::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalY()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GlobalY.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalY.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalY_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GlobalY.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalY>()
	{
		return UVoxelNode_GlobalY::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalY);
	void UVoxelNode_GlobalZ::StaticRegisterNativesUVoxelNode_GlobalZ()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GlobalZ);
	UClass* Z_Construct_UClass_UVoxelNode_GlobalZ_NoRegister()
	{
		return UVoxelNode_GlobalZ::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalZ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Z in global space, before the transform is applied to it. Same as Z if not a graph asset\n" },
		{ "DisplayName", "Global Z" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Z in global space, before the transform is applied to it. Same as Z if not a graph asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalZ>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::ClassParams = {
		&UVoxelNode_GlobalZ::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalZ()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GlobalZ.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalZ.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GlobalZ.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalZ>()
	{
		return UVoxelNode_GlobalZ::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalZ);
	void UVoxelNode_LocalToGlobal::StaticRegisterNativesUVoxelNode_LocalToGlobal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_LocalToGlobal);
	UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal_NoRegister()
	{
		return UVoxelNode_LocalToGlobal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform coordinates from local voxel space to global voxel space. Used for graph assets\n" },
		{ "DisplayName", "Local To Global" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform coordinates from local voxel space to global voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_LocalToGlobal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::ClassParams = {
		&UVoxelNode_LocalToGlobal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.OuterSingleton, Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_LocalToGlobal>()
	{
		return UVoxelNode_LocalToGlobal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_LocalToGlobal);
	void UVoxelNode_GlobalToLocal::StaticRegisterNativesUVoxelNode_GlobalToLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_GlobalToLocal);
	UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal_NoRegister()
	{
		return UVoxelNode_GlobalToLocal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform coordinates from global voxel space to local voxel space. Used for graph assets\n" },
		{ "DisplayName", "Global To Local" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform coordinates from global voxel space to local voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalToLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::ClassParams = {
		&UVoxelNode_GlobalToLocal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalToLocal>()
	{
		return UVoxelNode_GlobalToLocal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalToLocal);
	void UVoxelNode_TransformVector::StaticRegisterNativesUVoxelNode_TransformVector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_TransformVector);
	UClass* Z_Construct_UClass_UVoxelNode_TransformVector_NoRegister()
	{
		return UVoxelNode_TransformVector::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_TransformVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_TransformVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform vector from local voxel space to global voxel space. Used for graph assets\n" },
		{ "DisplayName", "Transform Vector" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform vector from local voxel space to global voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_TransformVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_TransformVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_TransformVector_Statics::ClassParams = {
		&UVoxelNode_TransformVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_TransformVector()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_TransformVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_TransformVector.OuterSingleton, Z_Construct_UClass_UVoxelNode_TransformVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_TransformVector.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_TransformVector>()
	{
		return UVoxelNode_TransformVector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_TransformVector);
	void UVoxelNode_InverseTransformVector::StaticRegisterNativesUVoxelNode_InverseTransformVector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelNode_InverseTransformVector);
	UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector_NoRegister()
	{
		return UVoxelNode_InverseTransformVector::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform vector from global voxel space to local voxel space. Used for graph assets\n" },
		{ "DisplayName", "Inverse Transform Vector" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform vector from global voxel space to local voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_InverseTransformVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::ClassParams = {
		&UVoxelNode_InverseTransformVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector()
	{
		if (!Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.OuterSingleton, Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.OuterSingleton;
	}
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_InverseTransformVector>()
	{
		return UVoxelNode_InverseTransformVector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_InverseTransformVector);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelCoordinateNode, UVoxelCoordinateNode::StaticClass, TEXT("UVoxelCoordinateNode"), &Z_Registration_Info_UClass_UVoxelCoordinateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCoordinateNode), 4220947328U) },
		{ Z_Construct_UClass_UVoxelNode_XF, UVoxelNode_XF::StaticClass, TEXT("UVoxelNode_XF"), &Z_Registration_Info_UClass_UVoxelNode_XF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_XF), 2777053226U) },
		{ Z_Construct_UClass_UVoxelNode_YF, UVoxelNode_YF::StaticClass, TEXT("UVoxelNode_YF"), &Z_Registration_Info_UClass_UVoxelNode_YF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_YF), 2198533751U) },
		{ Z_Construct_UClass_UVoxelNode_ZF, UVoxelNode_ZF::StaticClass, TEXT("UVoxelNode_ZF"), &Z_Registration_Info_UClass_UVoxelNode_ZF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ZF), 2840455100U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalX, UVoxelNode_GlobalX::StaticClass, TEXT("UVoxelNode_GlobalX"), &Z_Registration_Info_UClass_UVoxelNode_GlobalX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalX), 3830029922U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalY, UVoxelNode_GlobalY::StaticClass, TEXT("UVoxelNode_GlobalY"), &Z_Registration_Info_UClass_UVoxelNode_GlobalY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalY), 654410764U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalZ, UVoxelNode_GlobalZ::StaticClass, TEXT("UVoxelNode_GlobalZ"), &Z_Registration_Info_UClass_UVoxelNode_GlobalZ, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalZ), 779581884U) },
		{ Z_Construct_UClass_UVoxelNode_LocalToGlobal, UVoxelNode_LocalToGlobal::StaticClass, TEXT("UVoxelNode_LocalToGlobal"), &Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_LocalToGlobal), 2747843200U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalToLocal, UVoxelNode_GlobalToLocal::StaticClass, TEXT("UVoxelNode_GlobalToLocal"), &Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalToLocal), 4087639810U) },
		{ Z_Construct_UClass_UVoxelNode_TransformVector, UVoxelNode_TransformVector::StaticClass, TEXT("UVoxelNode_TransformVector"), &Z_Registration_Info_UClass_UVoxelNode_TransformVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_TransformVector), 529833826U) },
		{ Z_Construct_UClass_UVoxelNode_InverseTransformVector, UVoxelNode_InverseTransformVector::StaticClass, TEXT("UVoxelNode_InverseTransformVector"), &Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_InverseTransformVector), 281666556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h_1973383085(TEXT("/Script/VoxelGraph"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
