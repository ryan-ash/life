// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/VoxelDebugEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDebugEditor() {}
// Cross Module References
	VOXELEDITOR_API UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugType();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_Base_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDebugType;
	static UEnum* EVoxelDebugType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDebugType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelDebugType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType, Z_Construct_UPackage__Script_VoxelEditor(), TEXT("EVoxelDebugType"));
		}
		return Z_Registration_Info_UEnum_EVoxelDebugType.OuterSingleton;
	}
	template<> VOXELEDITOR_API UEnum* StaticEnum<EVoxelDebugType>()
	{
		return EVoxelDebugType_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enumerators[] = {
		{ "EVoxelDebugType::JumpFlood", (int64)EVoxelDebugType::JumpFlood },
		{ "EVoxelDebugType::CustomData", (int64)EVoxelDebugType::CustomData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enum_MetaDataParams[] = {
		{ "CustomData.Name", "EVoxelDebugType::CustomData" },
		{ "JumpFlood.Name", "EVoxelDebugType::JumpFlood" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelEditor,
		nullptr,
		"EVoxelDebugType",
		"EVoxelDebugType",
		Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDebugType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDebugType.InnerSingleton, Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelDebugType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDebugSliceAxis;
	static UEnum* EVoxelDebugSliceAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, Z_Construct_UPackage__Script_VoxelEditor(), TEXT("EVoxelDebugSliceAxis"));
		}
		return Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.OuterSingleton;
	}
	template<> VOXELEDITOR_API UEnum* StaticEnum<EVoxelDebugSliceAxis>()
	{
		return EVoxelDebugSliceAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enumerators[] = {
		{ "EVoxelDebugSliceAxis::X", (int64)EVoxelDebugSliceAxis::X },
		{ "EVoxelDebugSliceAxis::Y", (int64)EVoxelDebugSliceAxis::Y },
		{ "EVoxelDebugSliceAxis::Z", (int64)EVoxelDebugSliceAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "X.Name", "EVoxelDebugSliceAxis::X" },
		{ "Y.Name", "EVoxelDebugSliceAxis::Y" },
		{ "Z.Name", "EVoxelDebugSliceAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VoxelEditor,
		nullptr,
		"EVoxelDebugSliceAxis",
		"EVoxelDebugSliceAxis",
		Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis()
	{
		if (!Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.InnerSingleton, Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.InnerSingleton;
	}
	void UVoxelDebugParameters_Base::StaticRegisterNativesUVoxelDebugParameters_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDebugParameters_Base);
	UClass* Z_Construct_UClass_UVoxelDebugParameters_Base_NoRegister()
	{
		return UVoxelDebugParameters_Base::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugParameters_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdate_MetaData[];
#endif
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_Base, DebugType), Z_Construct_UEnum_VoxelEditor_EVoxelDebugType, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_MetaData)) }; // 1183624592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_Base*)Obj)->bUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_Base), &Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::ClassParams = {
		&UVoxelDebugParameters_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugParameters_Base()
	{
		if (!Z_Registration_Info_UClass_UVoxelDebugParameters_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugParameters_Base.OuterSingleton, Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDebugParameters_Base.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDebugParameters_Base>()
	{
		return UVoxelDebugParameters_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_Base);
	void UVoxelDebugParameters_JumpFlood::StaticRegisterNativesUVoxelDebugParameters_JumpFlood()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDebugParameters_JumpFlood);
	UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_NoRegister()
	{
		return UVoxelDebugParameters_JumpFlood::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMesh_MetaData[];
#endif
		static void NewProp_bUseMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshImporterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshImporterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SliceAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SliceAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[];
#endif
		static void NewProp_bFlip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Passes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDistances_MetaData[];
#endif
		static void NewProp_bShowDistances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDistances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Divisor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Divisor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShrink_MetaData[];
#endif
		static void NewProp_bShrink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShrink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCPU_MetaData[];
#endif
		static void NewProp_bUseCPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreaded_MetaData[];
#endif
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bUseMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh = { "bUseMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Source|Sphere" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, TextureSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings = { "MeshImporterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, MeshImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings_MetaData)) }; // 969981989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension = { "BoxExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, BoxExtension), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis = { "SliceAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, SliceAxis), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_MetaData)) }; // 581898645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Slice), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bFlip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Passes), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bShowDistances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances = { "bShowDistances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor = { "Divisor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Divisor), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bShrink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink = { "bShrink", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bUseCPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU = { "bUseCPU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bMultiThreaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, TimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_JumpFlood>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::ClassParams = {
		&UVoxelDebugParameters_JumpFlood::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood()
	{
		if (!Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.OuterSingleton, Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDebugParameters_JumpFlood>()
	{
		return UVoxelDebugParameters_JumpFlood::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_JumpFlood);
	void UVoxelDebugParameters_CustomData::StaticRegisterNativesUVoxelDebugParameters_CustomData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelDebugParameters_CustomData);
	UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData_NoRegister()
	{
		return UVoxelDebugParameters_CustomData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SliceAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SliceAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[];
#endif
		static void NewProp_bFlip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlip;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DataToDisplay_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataToDisplay_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataToDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataToDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis = { "SliceAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, SliceAxis), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_MetaData)) }; // 581898645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Slice), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_CustomData*)Obj)->bFlip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_CustomData), &Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_ValueProp = { "DataToDisplay", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_Key_KeyProp = { "DataToDisplay_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay = { "DataToDisplay", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, DataToDisplay), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "UIMax", "99" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Frame), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_CustomData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::ClassParams = {
		&UVoxelDebugParameters_CustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData()
	{
		if (!Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.OuterSingleton, Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.OuterSingleton;
	}
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDebugParameters_CustomData>()
	{
		return UVoxelDebugParameters_CustomData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_CustomData);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics::EnumInfo[] = {
		{ EVoxelDebugType_StaticEnum, TEXT("EVoxelDebugType"), &Z_Registration_Info_UEnum_EVoxelDebugType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1183624592U) },
		{ EVoxelDebugSliceAxis_StaticEnum, TEXT("EVoxelDebugSliceAxis"), &Z_Registration_Info_UEnum_EVoxelDebugSliceAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 581898645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDebugParameters_Base, UVoxelDebugParameters_Base::StaticClass, TEXT("UVoxelDebugParameters_Base"), &Z_Registration_Info_UClass_UVoxelDebugParameters_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugParameters_Base), 1585296904U) },
		{ Z_Construct_UClass_UVoxelDebugParameters_JumpFlood, UVoxelDebugParameters_JumpFlood::StaticClass, TEXT("UVoxelDebugParameters_JumpFlood"), &Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugParameters_JumpFlood), 3444545715U) },
		{ Z_Construct_UClass_UVoxelDebugParameters_CustomData, UVoxelDebugParameters_CustomData::StaticClass, TEXT("UVoxelDebugParameters_CustomData"), &Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugParameters_CustomData), 3720383856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_2646134467(TEXT("/Script/VoxelEditor"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelEditor_Private_VoxelDebugEditor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
