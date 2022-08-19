// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldInterface() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding;
	static UEnum* EVoxelWorldCoordinatesRounding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelWorldCoordinatesRounding"));
		}
		return Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.OuterSingleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldCoordinatesRounding>()
	{
		return EVoxelWorldCoordinatesRounding_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enumerators[] = {
		{ "EVoxelWorldCoordinatesRounding::RoundToNearest", (int64)EVoxelWorldCoordinatesRounding::RoundToNearest },
		{ "EVoxelWorldCoordinatesRounding::RoundUp", (int64)EVoxelWorldCoordinatesRounding::RoundUp },
		{ "EVoxelWorldCoordinatesRounding::RoundDown", (int64)EVoxelWorldCoordinatesRounding::RoundDown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldInterface.h" },
		{ "RoundDown.Name", "EVoxelWorldCoordinatesRounding::RoundDown" },
		{ "RoundToNearest.Name", "EVoxelWorldCoordinatesRounding::RoundToNearest" },
		{ "RoundUp.Name", "EVoxelWorldCoordinatesRounding::RoundUp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		"EVoxelWorldCoordinatesRounding",
		"EVoxelWorldCoordinatesRounding",
		Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding()
	{
		if (!Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.InnerSingleton;
	}
	void AVoxelWorldInterface::StaticRegisterNativesAVoxelWorldInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelWorldInterface);
	UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister()
	{
		return AVoxelWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// AActor so we can keep a weak ptr to it\n" },
		{ "IncludePath", "VoxelWorldInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelWorldInterface.h" },
		{ "ToolTip", "AActor so we can keep a weak ptr to it" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorldInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorldInterface_Statics::ClassParams = {
		&AVoxelWorldInterface::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelWorldInterface()
	{
		if (!Z_Registration_Info_UClass_AVoxelWorldInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelWorldInterface.OuterSingleton, Z_Construct_UClass_AVoxelWorldInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelWorldInterface.OuterSingleton;
	}
	template<> VOXEL_API UClass* StaticClass<AVoxelWorldInterface>()
	{
		return AVoxelWorldInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelWorldInterface);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics::EnumInfo[] = {
		{ EVoxelWorldCoordinatesRounding_StaticEnum, TEXT("EVoxelWorldCoordinatesRounding"), &Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 621493053U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelWorldInterface, AVoxelWorldInterface::StaticClass, TEXT("AVoxelWorldInterface"), &Z_Registration_Info_UClass_AVoxelWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelWorldInterface), 1463482069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_3938105200(TEXT("/Script/Voxel"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
