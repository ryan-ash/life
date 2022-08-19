// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelData/VoxelSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSave() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave;
class UScriptStruct* FVoxelUncompressedWorldSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelUncompressedWorldSave"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelUncompressedWorldSave>()
{
	return FVoxelUncompressedWorldSave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelUncompressedWorldSave>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, METADATA_PARAMS(nullptr, 0) }; // 3046812469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelUncompressedWorldSave, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_MetaData)) }; // 3046812469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelUncompressedWorldSave",
		sizeof(FVoxelUncompressedWorldSave),
		alignof(FVoxelUncompressedWorldSave),
		Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave;
class UScriptStruct* FVoxelCompressedWorldSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelCompressedWorldSave"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelCompressedWorldSave>()
{
	return FVoxelCompressedWorldSave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelCompressedWorldSave>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, METADATA_PARAMS(nullptr, 0) }; // 3046812469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelCompressedWorldSave, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_MetaData)) }; // 3046812469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelCompressedWorldSave",
		sizeof(FVoxelCompressedWorldSave),
		alignof(FVoxelCompressedWorldSave),
		Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave.InnerSingleton;
	}
	void UVoxelWorldSaveObject::StaticRegisterNativesUVoxelWorldSaveObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelWorldSaveObject);
	UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister()
	{
		return UVoxelWorldSaveObject::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldSaveObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Save;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldSaveObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelData/VoxelSave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelWorldSaveObject, Save), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save_MetaData)) }; // 2486776823
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Depth of the world\n" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
		{ "ToolTip", "Depth of the world" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelWorldSaveObject, Depth), METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldSaveObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldSaveObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::ClassParams = {
		&UVoxelWorldSaveObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldSaveObject()
	{
		if (!Z_Registration_Info_UClass_UVoxelWorldSaveObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelWorldSaveObject.OuterSingleton, Z_Construct_UClass_UVoxelWorldSaveObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelWorldSaveObject.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelWorldSaveObject>()
	{
		return UVoxelWorldSaveObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldSaveObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics::ScriptStructInfo[] = {
		{ FVoxelUncompressedWorldSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewStructOps, TEXT("VoxelUncompressedWorldSave"), &Z_Registration_Info_UScriptStruct_VoxelUncompressedWorldSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelUncompressedWorldSave), 1559596185U) },
		{ FVoxelCompressedWorldSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewStructOps, TEXT("VoxelCompressedWorldSave"), &Z_Registration_Info_UScriptStruct_VoxelCompressedWorldSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelCompressedWorldSave), 2486776823U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelWorldSaveObject, UVoxelWorldSaveObject::StaticClass, TEXT("UVoxelWorldSaveObject"), &Z_Registration_Info_UClass_UVoxelWorldSaveObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelWorldSaveObject), 1609362950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_2953688769(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelData_VoxelSave_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
