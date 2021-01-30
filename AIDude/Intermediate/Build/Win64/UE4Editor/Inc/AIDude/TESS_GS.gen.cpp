// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIDude/TESS_GS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESS_GS() {}
// Cross Module References
	AIDUDE_API UClass* Z_Construct_UClass_ATESS_GS_NoRegister();
	AIDUDE_API UClass* Z_Construct_UClass_ATESS_GS();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_AIDude();
// End Cross Module References
	void ATESS_GS::StaticRegisterNativesATESS_GS()
	{
	}
	UClass* Z_Construct_UClass_ATESS_GS_NoRegister()
	{
		return ATESS_GS::StaticClass();
	}
	struct Z_Construct_UClass_ATESS_GS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATESS_GS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIDude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATESS_GS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TESS_GS.h" },
		{ "ModuleRelativePath", "TESS_GS.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATESS_GS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATESS_GS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATESS_GS_Statics::ClassParams = {
		&ATESS_GS::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATESS_GS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATESS_GS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATESS_GS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATESS_GS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATESS_GS, 1505654195);
	template<> AIDUDE_API UClass* StaticClass<ATESS_GS>()
	{
		return ATESS_GS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATESS_GS(Z_Construct_UClass_ATESS_GS, &ATESS_GS::StaticClass, TEXT("/Script/AIDude"), TEXT("ATESS_GS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATESS_GS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
