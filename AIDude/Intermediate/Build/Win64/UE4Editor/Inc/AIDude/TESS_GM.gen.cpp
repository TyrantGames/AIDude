// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIDude/TESS_GM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESS_GM() {}
// Cross Module References
	AIDUDE_API UClass* Z_Construct_UClass_ATESS_GM_NoRegister();
	AIDUDE_API UClass* Z_Construct_UClass_ATESS_GM();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AIDude();
// End Cross Module References
	void ATESS_GM::StaticRegisterNativesATESS_GM()
	{
	}
	UClass* Z_Construct_UClass_ATESS_GM_NoRegister()
	{
		return ATESS_GM::StaticClass();
	}
	struct Z_Construct_UClass_ATESS_GM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATESS_GM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIDude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATESS_GM_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TESS_GM.h" },
		{ "ModuleRelativePath", "TESS_GM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATESS_GM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATESS_GM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATESS_GM_Statics::ClassParams = {
		&ATESS_GM::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATESS_GM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATESS_GM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATESS_GM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATESS_GM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATESS_GM, 4162544699);
	template<> AIDUDE_API UClass* StaticClass<ATESS_GM>()
	{
		return ATESS_GM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATESS_GM(Z_Construct_UClass_ATESS_GM, &ATESS_GM::StaticClass, TEXT("/Script/AIDude"), TEXT("ATESS_GM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATESS_GM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
