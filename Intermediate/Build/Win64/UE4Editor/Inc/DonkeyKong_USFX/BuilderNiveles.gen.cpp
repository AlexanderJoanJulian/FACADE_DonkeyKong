// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/BuilderNiveles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderNiveles() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UBuilderNiveles_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UBuilderNiveles();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void UBuilderNiveles::StaticRegisterNativesUBuilderNiveles()
	{
	}
	UClass* Z_Construct_UClass_UBuilderNiveles_NoRegister()
	{
		return UBuilderNiveles::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderNiveles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderNiveles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderNiveles_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderNiveles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderNiveles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderNiveles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderNiveles_Statics::ClassParams = {
		&UBuilderNiveles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderNiveles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderNiveles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderNiveles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderNiveles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderNiveles, 1827695183);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<UBuilderNiveles>()
	{
		return UBuilderNiveles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderNiveles(Z_Construct_UClass_UBuilderNiveles, &UBuilderNiveles::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("UBuilderNiveles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderNiveles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
