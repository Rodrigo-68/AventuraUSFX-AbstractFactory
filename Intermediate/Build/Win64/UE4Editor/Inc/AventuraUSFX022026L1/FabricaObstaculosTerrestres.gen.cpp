// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaObstaculosTerrestres.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaObstaculosTerrestres() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosTerrestres_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosTerrestres();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaAbstractaObstaculos();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaObstaculosTerrestres::StaticRegisterNativesAFabricaObstaculosTerrestres()
	{
	}
	UClass* Z_Construct_UClass_AFabricaObstaculosTerrestres_NoRegister()
	{
		return AFabricaObstaculosTerrestres::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaAbstractaObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaObstaculosTerrestres.h" },
		{ "ModuleRelativePath", "FabricaObstaculosTerrestres.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaObstaculosTerrestres>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::ClassParams = {
		&AFabricaObstaculosTerrestres::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaObstaculosTerrestres()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaObstaculosTerrestres_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaObstaculosTerrestres, 2832965153);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaObstaculosTerrestres>()
	{
		return AFabricaObstaculosTerrestres::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaObstaculosTerrestres(Z_Construct_UClass_AFabricaObstaculosTerrestres, &AFabricaObstaculosTerrestres::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaObstaculosTerrestres"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaObstaculosTerrestres);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
