// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/VoxelHelpersLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHelpersLibrary() {}
// Cross Module References
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelHelpersLibrary_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelHelpersLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelHelpersLibrary::execCreateProcMeshPlane)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelHelpersLibrary::CreateProcMeshPlane(Z_Param_Mesh,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Step);
		P_NATIVE_END;
	}
	void UVoxelHelpersLibrary::StaticRegisterNativesUVoxelHelpersLibrary()
	{
		UClass* Class = UVoxelHelpersLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProcMeshPlane", &UVoxelHelpersLibrary::execCreateProcMeshPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics
	{
		struct VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms
		{
			UProceduralMeshComponent* Mesh;
			int32 SizeX;
			int32 SizeY;
			float Step;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Helpers" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_Step", "100.000000" },
		{ "ModuleRelativePath", "Public/VoxelHelpersLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelHelpersLibrary, nullptr, "CreateProcMeshPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms), Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelHelpersLibrary);
	UClass* Z_Construct_UClass_UVoxelHelpersLibrary_NoRegister()
	{
		return UVoxelHelpersLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHelpersLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHelpersLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelHelpersLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane, "CreateProcMeshPlane" }, // 2329799827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelHelpersLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelHelpersLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHelpersLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHelpersLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHelpersLibrary_Statics::ClassParams = {
		&UVoxelHelpersLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHelpersLibrary()
	{
		if (!Z_Registration_Info_UClass_UVoxelHelpersLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHelpersLibrary.OuterSingleton, Z_Construct_UClass_UVoxelHelpersLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelHelpersLibrary.OuterSingleton;
	}
	template<> VOXELHELPERS_API UClass* StaticClass<UVoxelHelpersLibrary>()
	{
		return UVoxelHelpersLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHelpersLibrary);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHelpersLibrary, UVoxelHelpersLibrary::StaticClass, TEXT("UVoxelHelpersLibrary"), &Z_Registration_Info_UClass_UVoxelHelpersLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHelpersLibrary), 2958492355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h_130042634(TEXT("/Script/VoxelHelpers"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
