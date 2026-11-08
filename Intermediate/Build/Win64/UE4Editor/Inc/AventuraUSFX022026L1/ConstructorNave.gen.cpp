// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ConstructorNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorNave() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UConstructorNave_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UConstructorNave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void UConstructorNave::StaticRegisterNativesUConstructorNave()
	{
	}
	UClass* Z_Construct_UClass_UConstructorNave_NoRegister()
	{
		return UConstructorNave::StaticClass();
	}
	struct Z_Construct_UClass_UConstructorNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructorNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructorNave_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConstructorNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructorNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConstructorNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructorNave_Statics::ClassParams = {
		&UConstructorNave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructorNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructorNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructorNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructorNave, 3017815699);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<UConstructorNave>()
	{
		return UConstructorNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructorNave(Z_Construct_UClass_UConstructorNave, &UConstructorNave::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("UConstructorNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructorNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
