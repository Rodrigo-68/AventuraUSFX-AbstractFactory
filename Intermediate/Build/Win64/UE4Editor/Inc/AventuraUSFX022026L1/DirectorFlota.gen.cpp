// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/DirectorFlota.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorFlota() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_ADirectorFlota_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_ADirectorFlota();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void ADirectorFlota::StaticRegisterNativesADirectorFlota()
	{
	}
	UClass* Z_Construct_UClass_ADirectorFlota_NoRegister()
	{
		return ADirectorFlota::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorFlota_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorFlota_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorFlota_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorFlota.h" },
		{ "ModuleRelativePath", "DirectorFlota.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorFlota_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorFlota>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorFlota_Statics::ClassParams = {
		&ADirectorFlota::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorFlota_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorFlota_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorFlota()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorFlota_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorFlota, 2849865703);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<ADirectorFlota>()
	{
		return ADirectorFlota::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorFlota(Z_Construct_UClass_ADirectorFlota, &ADirectorFlota::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("ADirectorFlota"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorFlota);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
