// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/PlataformaVerticalAerea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformaVerticalAerea() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataformaVerticalAerea_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataformaVerticalAerea();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataformaVertical();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void APlataformaVerticalAerea::StaticRegisterNativesAPlataformaVerticalAerea()
	{
	}
	UClass* Z_Construct_UClass_APlataformaVerticalAerea_NoRegister()
	{
		return APlataformaVerticalAerea::StaticClass();
	}
	struct Z_Construct_UClass_APlataformaVerticalAerea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataformaVerticalAerea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlataformaVertical,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaVerticalAerea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlataformaVerticalAerea.h" },
		{ "ModuleRelativePath", "PlataformaVerticalAerea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataformaVerticalAerea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformaVerticalAerea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataformaVerticalAerea_Statics::ClassParams = {
		&APlataformaVerticalAerea::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlataformaVerticalAerea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaVerticalAerea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataformaVerticalAerea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataformaVerticalAerea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataformaVerticalAerea, 3073767304);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<APlataformaVerticalAerea>()
	{
		return APlataformaVerticalAerea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataformaVerticalAerea(Z_Construct_UClass_APlataformaVerticalAerea, &APlataformaVerticalAerea::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("APlataformaVerticalAerea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformaVerticalAerea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
