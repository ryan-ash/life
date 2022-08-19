// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/VoxelColorWheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelColorWheel() {}
// Cross Module References
	VOXELHELPERS_API UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel();
	UMG_API UClass* Z_Construct_UClass_UWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics
	{
		struct _Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VoxelHelpers, nullptr, "OnVoxelColorWheelColorChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms), Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UVoxelColorWheel::StaticRegisterNativesUVoxelColorWheel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelColorWheel);
	UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister()
	{
		return UVoxelColorWheel::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelColorWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelColorWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelColorWheel.h" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel Color Wheel" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelColorWheel, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Voxel Color Wheel" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelColorWheel, OnColorChanged), Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged_MetaData)) }; // 3654513067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelColorWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelColorWheel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelColorWheel_Statics::ClassParams = {
		&UVoxelColorWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelColorWheel()
	{
		if (!Z_Registration_Info_UClass_UVoxelColorWheel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelColorWheel.OuterSingleton, Z_Construct_UClass_UVoxelColorWheel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelColorWheel.OuterSingleton;
	}
	template<> VOXELHELPERS_API UClass* StaticClass<UVoxelColorWheel>()
	{
		return UVoxelColorWheel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelColorWheel);
	struct Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelColorWheel, UVoxelColorWheel::StaticClass, TEXT("UVoxelColorWheel"), &Z_Registration_Info_UClass_UVoxelColorWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelColorWheel), 2327026367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_929526819(TEXT("/Script/VoxelHelpers"),
		Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_of_life_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
