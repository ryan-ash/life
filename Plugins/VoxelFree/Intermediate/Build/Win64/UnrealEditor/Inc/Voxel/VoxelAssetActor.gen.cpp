// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetActor() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType;
	static UEnum* EVoxelAssetActorPreviewUpdateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAssetActorPreviewUpdateType"));
		}
		return Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetActorPreviewUpdateType>()
	{
		return EVoxelAssetActorPreviewUpdateType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enumerators[] = {
		{ "EVoxelAssetActorPreviewUpdateType::Manually", (int64)EVoxelAssetActorPreviewUpdateType::Manually },
		{ "EVoxelAssetActorPreviewUpdateType::EndOfMove", (int64)EVoxelAssetActorPreviewUpdateType::EndOfMove },
		{ "EVoxelAssetActorPreviewUpdateType::RealTime", (int64)EVoxelAssetActorPreviewUpdateType::RealTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enum_MetaDataParams[] = {
		{ "EndOfMove.Comment", "// Will update after each move\n" },
		{ "EndOfMove.Name", "EVoxelAssetActorPreviewUpdateType::EndOfMove" },
		{ "EndOfMove.ToolTip", "Will update after each move" },
		{ "Manually.Comment", "// Will only update when Update is clicked, or when a property is changed\n" },
		{ "Manually.Name", "EVoxelAssetActorPreviewUpdateType::Manually" },
		{ "Manually.ToolTip", "Will only update when Update is clicked, or when a property is changed" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "RealTime.Comment", "// Will update while moving\n" },
		{ "RealTime.Name", "EVoxelAssetActorPreviewUpdateType::RealTime" },
		{ "RealTime.ToolTip", "Will update while moving" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelAssetActorPreviewUpdateType",
		"EVoxelAssetActorPreviewUpdateType",
		Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType()
	{
		if (!Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.InnerSingleton;
	}
	void UAssetActorPrimitiveComponent::StaticRegisterNativesUAssetActorPrimitiveComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetActorPrimitiveComponent);
	UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister()
	{
		return UAssetActorPrimitiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetActorPrimitiveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::ClassParams = {
		&UAssetActorPrimitiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent()
	{
		if (!Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.OuterSingleton, Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<UAssetActorPrimitiveComponent>()
	{
		return UAssetActorPrimitiveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetActorPrimitiveComponent);
	void AVoxelAssetActor::StaticRegisterNativesAVoxelAssetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelAssetActor);
	UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister()
	{
		return AVoxelAssetActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelAssetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAssetBounds_MetaData[];
#endif
		static void NewProp_bOverrideAssetBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAssetBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractiveAsset_MetaData[];
#endif
		static void NewProp_bSubtractiveAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractiveAsset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewLOD;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UpdateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetPosition_MetaData[];
#endif
		static void NewProp_bRoundAssetPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetRotation_MetaData[];
#endif
		static void NewProp_bRoundAssetRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPreviewChunks_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPreviewChunks;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelAssetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelPlaceableItemActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking Collision" },
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Generator), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator_MetaData)) }; // 8016936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "Comment", "// Higher priority assets will be on top\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "Higher priority assets will be on top" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Priority), METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bOverrideAssetBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds = { "bOverrideAssetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "EditCondition", "bOverrideAssetBounds" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds = { "AssetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, AssetBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds_MetaData)) }; // 1090131275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bImportAsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "EditCondition", "!bImportAsReference" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bSubtractiveAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset = { "bSubtractiveAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "EditCondition", "!bImportAsReference" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_MetaData)) }; // 212437002
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "Comment", "// The lower, the better looking but the slower\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "The lower, the better looking but the slower" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD = { "PreviewLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, PreviewLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, UpdateType), Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_MetaData)) }; // 446568803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "Comment", "// If true, the voxel asset actor position will be rounded to the nearest voxel position when moved\n// Always on in cubic mode\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "If true, the voxel asset actor position will be rounded to the nearest voxel position when moved\nAlways on in cubic mode" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bRoundAssetPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition = { "bRoundAssetPosition", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "Comment", "// If true, the voxel asset actor rotation will be rounded to the nearest valid rotation (90/180/-90)\n// Always on in cubic mode\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "If true, the voxel asset actor rotation will be rounded to the nearest valid rotation (90/180/-90)\nAlways on in cubic mode" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bRoundAssetRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation = { "bRoundAssetRotation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "Comment", "// Increase this if you want a higher quality preview\n// Be careful: might freeze Unreal if too high!\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "Increase this if you want a higher quality preview\nBe careful: might freeze Unreal if too high!" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks = { "MaxPreviewChunks", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, MaxPreviewChunks), METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, PrimitiveComponent), Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVoxelAssetActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister, (int32)VTABLE_OFFSET(AVoxelAssetActor, IVoxelEditorDelegatesInterface), false },  // 3973344333
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelAssetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelAssetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelAssetActor_Statics::ClassParams = {
		&AVoxelAssetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelAssetActor()
	{
		if (!Z_Registration_Info_UClass_AVoxelAssetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelAssetActor.OuterSingleton, Z_Construct_UClass_AVoxelAssetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelAssetActor.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelAssetActor>()
	{
		return AVoxelAssetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelAssetActor);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics::EnumInfo[] = {
		{ EVoxelAssetActorPreviewUpdateType_StaticEnum, TEXT("EVoxelAssetActorPreviewUpdateType"), &Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 446568803U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetActorPrimitiveComponent, UAssetActorPrimitiveComponent::StaticClass, TEXT("UAssetActorPrimitiveComponent"), &Z_Registration_Info_UClass_UAssetActorPrimitiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetActorPrimitiveComponent), 1457104586U) },
		{ Z_Construct_UClass_AVoxelAssetActor, AVoxelAssetActor::StaticClass, TEXT("AVoxelAssetActor"), &Z_Registration_Info_UClass_AVoxelAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelAssetActor), 1651071583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_4101551490(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS