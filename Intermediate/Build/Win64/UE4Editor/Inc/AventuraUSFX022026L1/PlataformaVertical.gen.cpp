// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/PlataformaVertical.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformaVertical() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataformaVertical_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataformaVertical();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataforma();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void APlataformaVertical::StaticRegisterNativesAPlataformaVertical()
	{
	}
	UClass* Z_Construct_UClass_APlataformaVertical_NoRegister()
	{
		return APlataformaVertical::StaticClass();
	}
	struct Z_Construct_UClass_APlataformaVertical_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataformaVertical_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlataforma,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaVertical_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlataformaVertical.h" },
		{ "ModuleRelativePath", "PlataformaVertical.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataformaVertical_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformaVertical>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataformaVertical_Statics::ClassParams = {
		&APlataformaVertical::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APlataformaVertical_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaVertical_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataformaVertical()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataformaVertical_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataformaVertical, 249817716);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<APlataformaVertical>()
	{
		return APlataformaVertical::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataformaVertical(Z_Construct_UClass_APlataformaVertical, &APlataformaVertical::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("APlataformaVertical"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformaVertical);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
