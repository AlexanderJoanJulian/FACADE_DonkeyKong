// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/DonkeyKong_USFXCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_USFXCharacter() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ADonkeyKong_USFXCharacter_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ADonkeyKong_USFXCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ADonkeyKong_USFXCharacter::StaticRegisterNativesADonkeyKong_USFXCharacter()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_USFXCharacter_NoRegister()
	{
		return ADonkeyKong_USFXCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftmin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftmax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftmax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightmin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightmax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightmax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_posicionActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_posicionActual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DonkeyKong_USFXCharacter.h" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmin_MetaData[] = {
		{ "Category", "DonkeyKong_USFXCharacter" },
		{ "Comment", "//Salto alto\n" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
		{ "ToolTip", "Salto alto" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmin = { "leftmin", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, leftmin), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmax_MetaData[] = {
		{ "Category", "DonkeyKong_USFXCharacter" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmax = { "leftmax", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, leftmax), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmin_MetaData[] = {
		{ "Category", "DonkeyKong_USFXCharacter" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmin = { "rightmin", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, rightmin), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmax_MetaData[] = {
		{ "Category", "DonkeyKong_USFXCharacter" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmax = { "rightmax", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, rightmax), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_posicionActual_MetaData[] = {
		{ "Category", "DonkeyKong_USFXCharacter" },
		{ "ModuleRelativePath", "DonkeyKong_USFXCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_posicionActual = { "posicionActual", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_USFXCharacter, posicionActual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_posicionActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_posicionActual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_leftmax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_rightmax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::NewProp_posicionActual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_USFXCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::ClassParams = {
		&ADonkeyKong_USFXCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_USFXCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_USFXCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_USFXCharacter, 3418626195);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ADonkeyKong_USFXCharacter>()
	{
		return ADonkeyKong_USFXCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_USFXCharacter(Z_Construct_UClass_ADonkeyKong_USFXCharacter, &ADonkeyKong_USFXCharacter::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ADonkeyKong_USFXCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_USFXCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
