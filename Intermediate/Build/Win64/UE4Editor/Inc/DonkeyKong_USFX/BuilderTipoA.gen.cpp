// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/BuilderTipoA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderTipoA() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoA_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UBuilderNiveles_NoRegister();
// End Cross Module References
	void ABuilderTipoA::StaticRegisterNativesABuilderTipoA()
	{
	}
	UClass* Z_Construct_UClass_ABuilderTipoA_NoRegister()
	{
		return ABuilderTipoA::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderTipoA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderTipoA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderTipoA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderTipoA.h" },
		{ "ModuleRelativePath", "BuilderTipoA.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderTipoA_Statics::NewProp_Escenario_MetaData[] = {
		{ "Category", "Alojamiento Hotelero" },
		{ "ModuleRelativePath", "BuilderTipoA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderTipoA_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderTipoA, Escenario), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderTipoA_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoA_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderTipoA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderTipoA_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderTipoA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderNiveles_NoRegister, (int32)VTABLE_OFFSET(ABuilderTipoA, IBuilderNiveles), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderTipoA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderTipoA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderTipoA_Statics::ClassParams = {
		&ABuilderTipoA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderTipoA_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoA_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderTipoA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderTipoA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderTipoA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderTipoA, 1329562622);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ABuilderTipoA>()
	{
		return ABuilderTipoA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderTipoA(Z_Construct_UClass_ABuilderTipoA, &ABuilderTipoA::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ABuilderTipoA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderTipoA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
