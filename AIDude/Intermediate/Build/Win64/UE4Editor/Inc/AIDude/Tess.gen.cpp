// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIDude/Tess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTess() {}
// Cross Module References
	AIDUDE_API UClass* Z_Construct_UClass_ATess_NoRegister();
	AIDUDE_API UClass* Z_Construct_UClass_ATess();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AIDude();
// End Cross Module References
	void ATess::StaticRegisterNativesATess()
	{
	}
	UClass* Z_Construct_UClass_ATess_NoRegister()
	{
		return ATess::StaticClass();
	}
	struct Z_Construct_UClass_ATess_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AIDude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATess_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tess.h" },
		{ "ModuleRelativePath", "Tess.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATess>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATess_Statics::ClassParams = {
		&ATess::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ATess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATess()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATess_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATess, 503040867);
	template<> AIDUDE_API UClass* StaticClass<ATess>()
	{
		return ATess::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATess(Z_Construct_UClass_ATess, &ATess::StaticClass, TEXT("/Script/AIDude"), TEXT("ATess"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATess);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
