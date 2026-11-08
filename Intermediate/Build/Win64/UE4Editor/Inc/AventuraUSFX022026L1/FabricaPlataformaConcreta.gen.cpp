// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaPlataformaConcreta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaPlataformaConcreta() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaPlataformasConcreta_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaPlataformasConcreta();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaPlataformas();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaPlataformasConcreta::StaticRegisterNativesAFabricaPlataformasConcreta()
	{
	}
	UClass* Z_Construct_UClass_AFabricaPlataformasConcreta_NoRegister()
	{
		return AFabricaPlataformasConcreta::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaPlataformasConcreta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaPlataformas,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaPlataformaConcreta.h" },
		{ "ModuleRelativePath", "FabricaPlataformaConcreta.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaPlataformasConcreta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::ClassParams = {
		&AFabricaPlataformasConcreta::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaPlataformasConcreta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaPlataformasConcreta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaPlataformasConcreta, 3842252261);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaPlataformasConcreta>()
	{
		return AFabricaPlataformasConcreta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaPlataformasConcreta(Z_Construct_UClass_AFabricaPlataformasConcreta, &AFabricaPlataformasConcreta::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaPlataformasConcreta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaPlataformasConcreta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
