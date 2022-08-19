// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/MaterialExpressionPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPack() {}
// Cross Module References
	VOXELHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialPackInput();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionPack_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionPack();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionUnpack_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionUnpack();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialPackInput;
class UScriptStruct* FMaterialPackInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialPackInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialPackInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialPackInput, Z_Construct_UPackage__Script_VoxelHelpers(), TEXT("MaterialPackInput"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialPackInput.OuterSingleton;
}
template<> VOXELHELPERS_API UScriptStruct* StaticStruct<FMaterialPackInput>()
{
	return FMaterialPackInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialPackInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialPackInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "PackInput" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialPackInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "// Assign a default value to bypass copy paste bug when items are equal to default\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
		{ "ToolTip", "Assign a default value to bypass copy paste bug when items are equal to default" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialPackInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
		nullptr,
		&NewStructOps,
		"MaterialPackInput",
		sizeof(FMaterialPackInput),
		alignof(FMaterialPackInput),
		Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialPackInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialPackInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialPackInput.InnerSingleton, Z_Construct_UScriptStruct_FMaterialPackInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialPackInput.InnerSingleton;
	}
	void UMaterialExpressionPack::StaticRegisterNativesUMaterialExpressionPack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPack);
	UClass* Z_Construct_UClass_UMaterialExpressionPack_NoRegister()
	{
		return UMaterialExpressionPack::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionPack.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialPackInput, METADATA_PARAMS(nullptr, 0) }; // 507700022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialExpressionPack" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPack, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_MetaData)) }; // 507700022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPack_Statics::ClassParams = {
		&UMaterialExpressionPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPack()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPack.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPack.OuterSingleton;
	}
	template<> VOXELHELPERS_API UClass* StaticClass<UMaterialExpressionPack>()
	{
		return UMaterialExpressionPack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPack);
	void UMaterialExpressionUnpack::StaticRegisterNativesUMaterialExpressionUnpack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionUnpack);
	UClass* Z_Construct_UClass_UMaterialExpressionUnpack_NoRegister()
	{
		return UMaterialExpressionUnpack::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionUnpack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRefresh_MetaData[];
#endif
		static void NewProp_bRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefresh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionUnpack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionPack.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionUnpack, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_MetaData[] = {
		{ "Category", "MaterialExpressionUnpack" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_SetBit(void* Obj)
	{
		((UMaterialExpressionUnpack*)Obj)->bRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh = { "bRefresh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionUnpack), &Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionUnpack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionUnpack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::ClassParams = {
		&UMaterialExpressionUnpack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionUnpack()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionUnpack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionUnpack.OuterSingleton, Z_Construct_UClass_UMaterialExpressionUnpack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionUnpack.OuterSingleton;
	}
	template<> VOXELHELPERS_API UClass* StaticClass<UMaterialExpressionUnpack>()
	{
		return UMaterialExpressionUnpack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionUnpack);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics::ScriptStructInfo[] = {
		{ FMaterialPackInput::StaticStruct, Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewStructOps, TEXT("MaterialPackInput"), &Z_Registration_Info_UScriptStruct_MaterialPackInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialPackInput), 507700022U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPack, UMaterialExpressionPack::StaticClass, TEXT("UMaterialExpressionPack"), &Z_Registration_Info_UClass_UMaterialExpressionPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPack), 436147135U) },
		{ Z_Construct_UClass_UMaterialExpressionUnpack, UMaterialExpressionUnpack::StaticClass, TEXT("UMaterialExpressionUnpack"), &Z_Registration_Info_UClass_UMaterialExpressionUnpack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionUnpack), 268044727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_1348376848(TEXT("/Script/VoxelHelpers"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_VoxelHelpers_Public_MaterialExpressionPack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
