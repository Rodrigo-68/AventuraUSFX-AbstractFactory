// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ConstructorNaveCrucero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorNaveCrucero() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AConstructorNaveCrucero_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AConstructorNaveCrucero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UConstructorNave_NoRegister();
// End Cross Module References
	void AConstructorNaveCrucero::StaticRegisterNativesAConstructorNaveCrucero()
	{
	}
	UClass* Z_Construct_UClass_AConstructorNaveCrucero_NoRegister()
	{
		return AConstructorNaveCrucero::StaticClass();
	}
	struct Z_Construct_UClass_AConstructorNaveCrucero_Statics
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
	UObject* (*const Z_Construct_UClass_AConstructorNaveCrucero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorNaveCrucero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructorNaveCrucero.h" },
		{ "ModuleRelativePath", "ConstructorNaveCrucero.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorNaveCrucero_Statics::NewProp_Nave_MetaData[] = {
		{ "Category", "Constructor" },
		{ "ModuleRelativePath", "ConstructorNaveCrucero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorNaveCrucero_Statics::NewProp_Nave = { "Nave", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructorNaveCrucero, Nave), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructorNaveCrucero_Statics::NewProp_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNaveCrucero_Statics::NewProp_Nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructorNaveCrucero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorNaveCrucero_Statics::NewProp_Nave,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstructorNaveCrucero_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorNave_NoRegister, (int32)VTABLE_OFFSET(AConstructorNaveCrucero, IConstructorNave), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructorNaveCrucero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructorNaveCrucero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructorNaveCrucero_Statics::ClassParams = {
		&AConstructorNaveCrucero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConstructorNaveCrucero_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNaveCrucero_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructorNaveCrucero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNaveCrucero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructorNaveCrucero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructorNaveCrucero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructorNaveCrucero, 3597872238);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AConstructorNaveCrucero>()
	{
		return AConstructorNaveCrucero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructorNaveCrucero(Z_Construct_UClass_AConstructorNaveCrucero, &AConstructorNaveCrucero::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AConstructorNaveCrucero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructorNaveCrucero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
