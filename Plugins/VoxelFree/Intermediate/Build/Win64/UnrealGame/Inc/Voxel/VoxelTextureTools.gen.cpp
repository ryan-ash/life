// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelTextureTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTextureTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTextureTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTextureTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelTextureTools::execMaximum)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelFloatTexture*)Z_Param__Result=UVoxelTextureTools::Maximum(Z_Param_Texture,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTextureTools::execMinimum)
	{
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelFloatTexture*)Z_Param__Result=UVoxelTextureTools::Minimum(Z_Param_Texture,Z_Param_Radius);
		P_NATIVE_END;
	}
	void UVoxelTextureTools::StaticRegisterNativesUVoxelTextureTools()
	{
		UClass* Class = UVoxelTextureTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Maximum", &UVoxelTextureTools::execMaximum },
			{ "Minimum", &UVoxelTextureTools::execMinimum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics
	{
		struct VoxelTextureTools_eventMaximum_Parms
		{
			FVoxelFloatTexture Texture;
			float Radius;
			FVoxelFloatTexture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTextureTools_eventMaximum_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTextureTools_eventMaximum_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTextureTools_eventMaximum_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "// Apply the photoshop Maximum filter\n// Set each pixel to the max value in a radius Radius\n" },
		{ "CPP_Default_Radius", "2.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTextureTools.h" },
		{ "ToolTip", "Apply the photoshop Maximum filter\nSet each pixel to the max value in a radius Radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTextureTools, nullptr, "Maximum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::VoxelTextureTools_eventMaximum_Parms), Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTextureTools_Maximum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics
	{
		struct VoxelTextureTools_eventMinimum_Parms
		{
			FVoxelFloatTexture Texture;
			float Radius;
			FVoxelFloatTexture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTextureTools_eventMinimum_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTextureTools_eventMinimum_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTextureTools_eventMinimum_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) }; // 3479360562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "Comment", "// Apply the photoshop Minimum filter\n// Set each pixel to the min value in a radius Radius\n" },
		{ "CPP_Default_Radius", "2.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTextureTools.h" },
		{ "ToolTip", "Apply the photoshop Minimum filter\nSet each pixel to the min value in a radius Radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTextureTools, nullptr, "Minimum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::VoxelTextureTools_eventMinimum_Parms), Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTextureTools_Minimum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelTextureTools);
	UClass* Z_Construct_UClass_UVoxelTextureTools_NoRegister()
	{
		return UVoxelTextureTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTextureTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTextureTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelTextureTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTextureTools_Maximum, "Maximum" }, // 1784604112
		{ &Z_Construct_UFunction_UVoxelTextureTools_Minimum, "Minimum" }, // 3962436787
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTextureTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelTextureTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTextureTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTextureTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTextureTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTextureTools_Statics::ClassParams = {
		&UVoxelTextureTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTextureTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTextureTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTextureTools()
	{
		if (!Z_Registration_Info_UClass_UVoxelTextureTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTextureTools.OuterSingleton, Z_Construct_UClass_UVoxelTextureTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelTextureTools.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UVoxelTextureTools>()
	{
		return UVoxelTextureTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTextureTools);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelTextureTools, UVoxelTextureTools::StaticClass, TEXT("UVoxelTextureTools"), &Z_Registration_Info_UClass_UVoxelTextureTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTextureTools), 1699647238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_4108016442(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
