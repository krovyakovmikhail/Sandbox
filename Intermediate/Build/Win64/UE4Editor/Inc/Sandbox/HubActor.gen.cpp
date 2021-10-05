// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/HubActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHubActor() {}
// Cross Module References
	SANDBOX_API UClass* Z_Construct_UClass_AHubActor_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_AHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	void AHubActor::StaticRegisterNativesAHubActor()
	{
	}
	UClass* Z_Construct_UClass_AHubActor_NoRegister()
	{
		return AHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HubActor.h" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHubActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHubActor_Statics::ClassParams = {
		&AHubActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHubActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHubActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHubActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHubActor, 220767167);
	template<> SANDBOX_API UClass* StaticClass<AHubActor>()
	{
		return AHubActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHubActor(Z_Construct_UClass_AHubActor, &AHubActor::StaticClass, TEXT("/Script/Sandbox"), TEXT("AHubActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHubActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
