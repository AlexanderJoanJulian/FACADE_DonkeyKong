// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/BuilderTipoB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderTipoB() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoB_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoB();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UBuilderNiveles_NoRegister();
// End Cross Module References
	void ABuilderTipoB::StaticRegisterNativesABuilderTipoB()
	{
	}
	UClass* Z_Construct_UClass_ABuilderTipoB_NoRegister()
	{
		return ABuilderTipoB::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderTipoB_Statics
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
	UObject* (*const Z_Construct_UClass_ABuilderTipoB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderTipoB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderTipoB.h" },
		{ "ModuleRelativePath", "BuilderTipoB.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderTipoB_Statics::NewProp_Escenario_MetaData[] = {
		{ "Category", "Alojamiento Hotelero" },
		{ "ModuleRelativePath", "BuilderTipoB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderTipoB_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderTipoB, Escenario), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderTipoB_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoB_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderTipoB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderTipoB_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderTipoB_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderNiveles_NoRegister, (int32)VTABLE_OFFSET(ABuilderTipoB, IBuilderNiveles), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderTipoB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderTipoB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderTipoB_Statics::ClassParams = {
		&ABuilderTipoB::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderTipoB_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoB_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderTipoB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderTipoB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderTipoB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderTipoB, 2595567433);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ABuilderTipoB>()
	{
		return ABuilderTipoB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderTipoB(Z_Construct_UClass_ABuilderTipoB, &ABuilderTipoB::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ABuilderTipoB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderTipoB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
