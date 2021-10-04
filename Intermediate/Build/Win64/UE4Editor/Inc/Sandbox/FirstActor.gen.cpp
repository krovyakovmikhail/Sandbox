// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/FirstActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstActor() {}
// Cross Module References
	SANDBOX_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_AFirstActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFirstActor::StaticRegisterNativesAFirstActor()
	{
	}
	UClass* Z_Construct_UClass_AFirstActor_NoRegister()
	{
		return AFirstActor::StaticClass();
	}
	struct Z_Construct_UClass_AFirstActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BasicMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaeaponNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaeaponNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirstActor.h" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_BasicMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_BasicMesh = { "BasicMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, BasicMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_BasicMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_BasicMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_WaeaponNum_MetaData[] = {
		{ "Category", "FirstActor" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_WaeaponNum = { "WaeaponNum", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, WaeaponNum), METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_WaeaponNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_WaeaponNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "FirstActor" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, Health), METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "FirstActor" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	void Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AFirstActor*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstActor), &Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_BasicMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_WaeaponNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstActor_Statics::ClassParams = {
		&AFirstActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstActor, 2175476602);
	template<> SANDBOX_API UClass* StaticClass<AFirstActor>()
	{
		return AFirstActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstActor(Z_Construct_UClass_AFirstActor, &AFirstActor::StaticClass, TEXT("/Script/Sandbox"), TEXT("AFirstActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
