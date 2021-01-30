// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIDude/MechanicState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechanicState() {}
// Cross Module References
	AIDUDE_API UClass* Z_Construct_UClass_UMechanicState_NoRegister();
	AIDUDE_API UClass* Z_Construct_UClass_UMechanicState();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	UPackage* Z_Construct_UPackage__Script_AIDude();
// End Cross Module References
	void UMechanicState::StaticRegisterNativesUMechanicState()
	{
	}
	UClass* Z_Construct_UClass_UMechanicState_NoRegister()
	{
		return UMechanicState::StaticClass();
	}
	struct Z_Construct_UClass_UMechanicState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMechanicState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_AIDude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechanicState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MechanicState.h" },
		{ "ModuleRelativePath", "MechanicState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMechanicState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMechanicState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMechanicState_Statics::ClassParams = {
		&UMechanicState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMechanicState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMechanicState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMechanicState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMechanicState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMechanicState, 3648043485);
	template<> AIDUDE_API UClass* StaticClass<UMechanicState>()
	{
		return UMechanicState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMechanicState(Z_Construct_UClass_UMechanicState, &UMechanicState::StaticClass, TEXT("/Script/AIDude"), TEXT("UMechanicState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMechanicState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
