// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelSurfaceEdits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceEdits() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase;
class UScriptStruct* FVoxelSurfaceEditsVoxelBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxelBase"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsVoxelBase>()
{
	return FVoxelSurfaceEditsVoxelBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfacePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxelBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition = { "SurfacePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, SurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsVoxelBase",
		sizeof(FVoxelSurfaceEditsVoxelBase),
		alignof(FVoxelSurfaceEditsVoxelBase),
		Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoxelSurfaceEditsVoxel>() == std::is_polymorphic<FVoxelSurfaceEditsVoxelBase>(), "USTRUCT FVoxelSurfaceEditsVoxel cannot be polymorphic unless super FVoxelSurfaceEditsVoxelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel;
class UScriptStruct* FVoxelSurfaceEditsVoxel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxel"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsVoxel>()
{
	return FVoxelSurfaceEditsVoxel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxel, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase,
		&NewStructOps,
		"VoxelSurfaceEditsVoxel",
		sizeof(FVoxelSurfaceEditsVoxel),
		alignof(FVoxelSurfaceEditsVoxel),
		Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels;
class UScriptStruct* FVoxelSurfaceEditsVoxels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxels"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsVoxels>()
{
	return FVoxelSurfaceEditsVoxels::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxels>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsVoxels",
		sizeof(FVoxelSurfaceEditsVoxels),
		alignof(FVoxelSurfaceEditsVoxels),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels;
class UScriptStruct* FVoxelSurfaceEditsProcessedVoxels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsProcessedVoxels"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsProcessedVoxels>()
{
	return FVoxelSurfaceEditsProcessedVoxels::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsProcessedVoxels>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsProcessedVoxels",
		sizeof(FVoxelSurfaceEditsProcessedVoxels),
		alignof(FVoxelSurfaceEditsProcessedVoxels),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement;
class UScriptStruct* FVoxelSurfaceEditsStackElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsStackElement"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsStackElement>()
{
	return FVoxelSurfaceEditsStackElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStackElement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsStackElement",
		sizeof(FVoxelSurfaceEditsStackElement),
		alignof(FVoxelSurfaceEditsStackElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack;
class UScriptStruct* FVoxelSurfaceEditsStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsStack"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack.OuterSingleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsStack>()
{
	return FVoxelSurfaceEditsStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStack>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsStack",
		sizeof(FVoxelSurfaceEditsStack),
		alignof(FVoxelSurfaceEditsStack),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h_Statics::ScriptStructInfo[] = {
		{ FVoxelSurfaceEditsVoxelBase::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewStructOps, TEXT("VoxelSurfaceEditsVoxelBase"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxelBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsVoxelBase), 745209302U) },
		{ FVoxelSurfaceEditsVoxel::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewStructOps, TEXT("VoxelSurfaceEditsVoxel"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsVoxel), 2948431285U) },
		{ FVoxelSurfaceEditsVoxels::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::NewStructOps, TEXT("VoxelSurfaceEditsVoxels"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsVoxels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsVoxels), 3938285345U) },
		{ FVoxelSurfaceEditsProcessedVoxels::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::NewStructOps, TEXT("VoxelSurfaceEditsProcessedVoxels"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsProcessedVoxels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsProcessedVoxels), 1421313598U) },
		{ FVoxelSurfaceEditsStackElement::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::NewStructOps, TEXT("VoxelSurfaceEditsStackElement"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStackElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsStackElement), 35946222U) },
		{ FVoxelSurfaceEditsStack::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::NewStructOps, TEXT("VoxelSurfaceEditsStack"), &Z_Registration_Info_UScriptStruct_VoxelSurfaceEditsStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsStack), 1834207093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h_3197356185(TEXT("/Script/Voxel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
