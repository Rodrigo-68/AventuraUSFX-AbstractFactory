// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaPlataformasAereas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaPlataformasAereas() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaPlataformasAereas_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaPlataformasAereas();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaAbstractaPlataformas();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaPlataformasAereas::StaticRegisterNativesAFabricaPlataformasAereas()
	{
	}
	UClass* Z_Construct_UClass_AFabricaPlataformasAereas_NoRegister()
	{
		return AFabricaPlataformasAereas::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaPlataformasAereas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaPlataformasAereas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaAbstractaPlataformas,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaPlataformasAereas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaPlataformasAereas.h" },
		{ "ModuleRelativePath", "FabricaPlataformasAereas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaPlataformasAereas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaPlataformasAereas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaPlataformasAereas_Statics::ClassParams = {
		&AFabricaPlataformasAereas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaPlataformasAereas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaPlataformasAereas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaPlataformasAereas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaPlataformasAereas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaPlataformasAereas, 2184293012);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaPlataformasAereas>()
	{
		return AFabricaPlataformasAereas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaPlataformasAereas(Z_Construct_UClass_AFabricaPlataformasAereas, &AFabricaPlataformasAereas::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaPlataformasAereas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaPlataformasAereas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
