// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataItemActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelDataItemActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelDataItemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelDataItemActor::execScheduleRefresh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScheduleRefresh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelDataItemActor::execK2_AddItemToWorld)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddItemToWorld_Implementation(Z_Param_World);
		P_NATIVE_END;
	}
	static FName NAME_AVoxelDataItemActor_K2_AddItemToWorld = FName(TEXT("K2_AddItemToWorld"));
	void AVoxelDataItemActor::K2_AddItemToWorld(AVoxelWorld* World)
	{
		VoxelDataItemActor_eventK2_AddItemToWorld_Parms Parms;
		Parms.World=World;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelDataItemActor_K2_AddItemToWorld),&Parms);
	}
	void AVoxelDataItemActor::StaticRegisterNativesAVoxelDataItemActor()
	{
		UClass* Class = AVoxelDataItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AddItemToWorld", &AVoxelDataItemActor::execK2_AddItemToWorld },
			{ "ScheduleRefresh", &AVoxelDataItemActor::execScheduleRefresh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataItemActor_eventK2_AddItemToWorld_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "AddItemToWorld" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelDataItemActor, nullptr, "K2_AddItemToWorld", nullptr, nullptr, sizeof(VoxelDataItemActor_eventK2_AddItemToWorld_Parms), Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Data Item Actor" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelDataItemActor, nullptr, "ScheduleRefresh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelDataItemActor);
	UClass* Z_Construct_UClass_AVoxelDataItemActor_NoRegister()
	{
		return AVoxelDataItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelDataItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticUpdates_MetaData[];
#endif
		static void NewProp_bAutomaticUpdates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticUpdates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelDataItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelDataItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld, "K2_AddItemToWorld" }, // 804020009
		{ &Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh, "ScheduleRefresh" }, // 1696726436
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDataItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will automatically remove & add back the item to the voxel world when edited\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
		{ "ToolTip", "If true, will automatically remove & add back the item to the voxel world when edited" },
	};
#endif
	void Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_SetBit(void* Obj)
	{
		((AVoxelDataItemActor*)Obj)->bAutomaticUpdates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates = { "bAutomaticUpdates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelDataItemActor), &Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "0" },
		{ "Comment", "// Delay in second to queue the refresh, to merge eventual duplicate queries together\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
		{ "ToolTip", "Delay in second to queue the refresh, to merge eventual duplicate queries together" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay = { "RefreshDelay", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelDataItemActor, RefreshDelay), METADATA_PARAMS(Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelDataItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelDataItemActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelDataItemActor_Statics::ClassParams = {
		&AVoxelDataItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelDataItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelDataItemActor()
	{
		if (!Z_Registration_Info_UClass_AVoxelDataItemActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelDataItemActor.OuterSingleton, Z_Construct_UClass_AVoxelDataItemActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelDataItemActor.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelDataItemActor>()
	{
		return AVoxelDataItemActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelDataItemActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelDataItemActor, AVoxelDataItemActor::StaticClass, TEXT("AVoxelDataItemActor"), &Z_Registration_Info_UClass_AVoxelDataItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelDataItemActor), 602056238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_4283190245(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
