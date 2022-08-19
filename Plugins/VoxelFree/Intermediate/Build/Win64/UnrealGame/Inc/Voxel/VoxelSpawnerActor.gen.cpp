// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelSpawnerActor::execSetInstanceRandom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstanceRandom_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelSpawnerActor::execSetStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_TMAP_REF(int32,UMaterialInterface*,Z_Param_Out_SectionsMaterials);
		P_GET_STRUCT_REF(FBodyInstance,Z_Param_Out_CollisionPresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMesh_Implementation(Z_Param_Mesh,Z_Param_Out_SectionsMaterials,Z_Param_Out_CollisionPresets);
		P_NATIVE_END;
	}
	static FName NAME_AVoxelSpawnerActor_SetInstanceRandom = FName(TEXT("SetInstanceRandom"));
	void AVoxelSpawnerActor::SetInstanceRandom(float Value)
	{
		VoxelSpawnerActor_eventSetInstanceRandom_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelSpawnerActor_SetInstanceRandom),&Parms);
	}
	static FName NAME_AVoxelSpawnerActor_SetStaticMesh = FName(TEXT("SetStaticMesh"));
	void AVoxelSpawnerActor::SetStaticMesh(UStaticMesh* Mesh, TMap<int32,UMaterialInterface*> const& SectionsMaterials, FBodyInstance const& CollisionPresets)
	{
		VoxelSpawnerActor_eventSetStaticMesh_Parms Parms;
		Parms.Mesh=Mesh;
		Parms.SectionsMaterials=SectionsMaterials;
		Parms.CollisionPresets=CollisionPresets;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelSpawnerActor_SetStaticMesh),&Parms);
	}
	void AVoxelSpawnerActor::StaticRegisterNativesAVoxelSpawnerActor()
	{
		UClass* Class = AVoxelSpawnerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInstanceRandom", &AVoxelSpawnerActor::execSetInstanceRandom },
			{ "SetStaticMesh", &AVoxelSpawnerActor::execSetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetInstanceRandom_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelSpawnerActor, nullptr, "SetInstanceRandom", nullptr, nullptr, sizeof(VoxelSpawnerActor_eventSetInstanceRandom_Parms), Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionsMaterials_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionsMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionsMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SectionsMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPresets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_ValueProp = { "SectionsMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_Key_KeyProp = { "SectionsMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials = { "SectionsMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, SectionsMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets = { "CollisionPresets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, CollisionPresets), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets_MetaData)) }; // 743185417
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelSpawnerActor, nullptr, "SetStaticMesh", nullptr, nullptr, sizeof(VoxelSpawnerActor_eventSetStaticMesh_Parms), Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelSpawnerActor);
	UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister()
	{
		return AVoxelSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom, "SetInstanceRandom" }, // 2988563302
		{ &Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh, "SetStaticMesh" }, // 3434668480
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Actor that can be spawned by voxel spawners\n// Base class: does nothing\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ToolTip", "Actor that can be spawned by voxel spawners\nBase class: does nothing" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelSpawnerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelSpawnerActor_Statics::ClassParams = {
		&AVoxelSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelSpawnerActor()
	{
		if (!Z_Registration_Info_UClass_AVoxelSpawnerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelSpawnerActor.OuterSingleton, Z_Construct_UClass_AVoxelSpawnerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelSpawnerActor.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelSpawnerActor>()
	{
		return AVoxelSpawnerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelSpawnerActor);
	void AVoxelMeshSpawnerActor::StaticRegisterNativesAVoxelMeshSpawnerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelMeshSpawnerActor);
	UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister()
	{
		return AVoxelMeshSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelSpawnerActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Basic voxel actor with a static mesh component\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ToolTip", "Basic voxel actor with a static mesh component" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshSpawnerActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshSpawnerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::ClassParams = {
		&AVoxelMeshSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor()
	{
		if (!Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.OuterSingleton, Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelMeshSpawnerActor>()
	{
		return AVoxelMeshSpawnerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshSpawnerActor);
	void AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelMeshWithPhysicsRelevancySpawnerActor);
	UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister()
	{
		return AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsRelevancyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsRelevancyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelMeshSpawnerActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Basic voxel actor with a static mesh component and a voxel physics relevancy component: physics will be frozen when outside the voxel world collision range\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ToolTip", "Basic voxel actor with a static mesh component and a voxel physics relevancy component: physics will be frozen when outside the voxel world collision range" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent = { "PhysicsRelevancyComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshWithPhysicsRelevancySpawnerActor, PhysicsRelevancyComponent), Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshWithPhysicsRelevancySpawnerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::ClassParams = {
		&AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor()
	{
		if (!Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.OuterSingleton, Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelMeshWithPhysicsRelevancySpawnerActor>()
	{
		return AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshWithPhysicsRelevancySpawnerActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelSpawnerActor, AVoxelSpawnerActor::StaticClass, TEXT("AVoxelSpawnerActor"), &Z_Registration_Info_UClass_AVoxelSpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelSpawnerActor), 2880296483U) },
		{ Z_Construct_UClass_AVoxelMeshSpawnerActor, AVoxelMeshSpawnerActor::StaticClass, TEXT("AVoxelMeshSpawnerActor"), &Z_Registration_Info_UClass_AVoxelMeshSpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelMeshSpawnerActor), 1404642220U) },
		{ Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor, AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass, TEXT("AVoxelMeshWithPhysicsRelevancySpawnerActor"), &Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelMeshWithPhysicsRelevancySpawnerActor), 4143285184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_3404300869(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
