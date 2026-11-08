// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ConstructorNaveCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorNaveCaza() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AConstructorNaveCaza_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AConstructorNaveCaza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UConstructorNave_NoRegister();
// End Cross Module References
	void AConstructorNaveCaza::StaticRegisterNativesAConstructorNaveCaza()
	{
	}
	UClass* Z_Construct_UClass_AConstructorNaveCaza_NoRegister()
	{
		return AConstructorNaveCaza::StaticClass();
	}
	struct Z_Construct_UClass_AConstructorNaveCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructorNaveCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorNaveCaza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructorNaveCaza.h" },
		{ "ModuleRelativePath", "ConstructorNaveCaza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorNaveCaza_Statics::NewProp_Nave_MetaData[] = {
		{ "Category", "Constructor" },
		{ "ModuleRelativePath", "ConstructorNaveCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorNaveCaza_Statics::NewProp_Nave = { "Nave", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructorNaveCaza, Nave), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructorNaveCaza_Statics::NewProp_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNaveCaza_Statics::NewProp_Nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructorNaveCaza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorNaveCaza_Statics::NewProp_Nave,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstructorNaveCaza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorNave_NoRegister, (int32)VTABLE_OFFSET(AConstructorNaveCaza, IConstructorNave), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructorNaveCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructorNaveCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructorNaveCaza_Statics::ClassParams = {
		&AConstructorNaveCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConstructorNaveCaza_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNaveCaza_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructorNaveCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNaveCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructorNaveCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructorNaveCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructorNaveCaza, 1788289877);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AConstructorNaveCaza>()
	{
		return AConstructorNaveCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructorNaveCaza(Z_Construct_UClass_AConstructorNaveCaza, &AConstructorNaveCaza::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AConstructorNaveCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructorNaveCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
