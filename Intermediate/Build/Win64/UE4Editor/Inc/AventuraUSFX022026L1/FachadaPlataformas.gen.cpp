// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FachadaPlataformas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFachadaPlataformas() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFachadaPlataformas_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFachadaPlataformas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaPlataformasConcreta_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataforma_NoRegister();
// End Cross Module References
	void AFachadaPlataformas::StaticRegisterNativesAFachadaPlataformas()
	{
	}
	UClass* Z_Construct_UClass_AFachadaPlataformas_NoRegister()
	{
		return AFachadaPlataformas::StaticClass();
	}
	struct Z_Construct_UClass_AFachadaPlataformas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fabrica_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fabrica;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Plataformas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plataformas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Plataformas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFachadaPlataformas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFachadaPlataformas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FachadaPlataformas.h" },
		{ "ModuleRelativePath", "FachadaPlataformas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Fabrica_MetaData[] = {
		{ "ModuleRelativePath", "FachadaPlataformas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Fabrica = { "Fabrica", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFachadaPlataformas, Fabrica), Z_Construct_UClass_AFabricaPlataformasConcreta_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Fabrica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Fabrica_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas_Inner = { "Plataformas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlataforma_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas_MetaData[] = {
		{ "ModuleRelativePath", "FachadaPlataformas.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas = { "Plataformas", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFachadaPlataformas, Plataformas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFachadaPlataformas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Fabrica,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFachadaPlataformas_Statics::NewProp_Plataformas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFachadaPlataformas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFachadaPlataformas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFachadaPlataformas_Statics::ClassParams = {
		&AFachadaPlataformas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFachadaPlataformas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaPlataformas_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFachadaPlataformas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaPlataformas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFachadaPlataformas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFachadaPlataformas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFachadaPlataformas, 866651728);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFachadaPlataformas>()
	{
		return AFachadaPlataformas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFachadaPlataformas(Z_Construct_UClass_AFachadaPlataformas, &AFachadaPlataformas::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFachadaPlataformas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFachadaPlataformas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
