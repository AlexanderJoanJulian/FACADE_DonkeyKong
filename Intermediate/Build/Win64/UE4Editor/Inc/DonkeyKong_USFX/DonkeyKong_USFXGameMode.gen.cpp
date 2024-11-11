// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/DonkeyKong_USFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_USFXGameMode() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ADonkeyKong_USFXGameMode_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ADonkeyKong_USFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoA_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoB_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AArquitecto_NoRegister();
// End Cross Module References
	void ADonkeyKong_USFXGameMode::StaticRegisterNativesADonkeyKong_USFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_USFXGameMode_NoRegister()
	{
		return ADonkeyKong_USFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constructor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Constructor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constructor2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Constructor2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ingeniero_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ingeniero;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKong_USFXGameMode.h" },
		{ "ModuleRelativePath", "DonkeyKong_USFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "Comment", "//El Actor Constructor\n" },
		{ "ModuleRelativePath", "DonkeyKong_USFXGameMode.h" },
		{ "ToolTip", "El Actor Constructor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor = { "Constructor", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXGameMode, Constructor), Z_Construct_UClass_ABuilderTipoA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor2_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "DonkeyKong_USFXGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor2 = { "Constructor2", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXGameMode, Constructor2), Z_Construct_UClass_ABuilderTipoB_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Ingeniero_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "Comment", "//El Actor Ingeniero\n" },
		{ "ModuleRelativePath", "DonkeyKong_USFXGameMode.h" },
		{ "ToolTip", "El Actor Ingeniero" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Ingeniero = { "Ingeniero", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXGameMode, Ingeniero), Z_Construct_UClass_AArquitecto_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Ingeniero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Ingeniero_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Constructor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::NewProp_Ingeniero,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_USFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::ClassParams = {
		&ADonkeyKong_USFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_USFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_USFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_USFXGameMode, 3705842299);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ADonkeyKong_USFXGameMode>()
	{
		return ADonkeyKong_USFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_USFXGameMode(Z_Construct_UClass_ADonkeyKong_USFXGameMode, &ADonkeyKong_USFXGameMode::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ADonkeyKong_USFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_USFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
