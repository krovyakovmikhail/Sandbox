// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANDBOX_HubActor_generated_h
#error "HubActor.generated.h already included, missing '#pragma once' in HubActor.h"
#endif
#define SANDBOX_HubActor_generated_h

#define Sandbox_Source_Sandbox_HubActor_h_12_SPARSE_DATA
#define Sandbox_Source_Sandbox_HubActor_h_12_RPC_WRAPPERS
#define Sandbox_Source_Sandbox_HubActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Sandbox_Source_Sandbox_HubActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHubActor(); \
	friend struct Z_Construct_UClass_AHubActor_Statics; \
public: \
	DECLARE_CLASS(AHubActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(AHubActor)


#define Sandbox_Source_Sandbox_HubActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHubActor(); \
	friend struct Z_Construct_UClass_AHubActor_Statics; \
public: \
	DECLARE_CLASS(AHubActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(AHubActor)


#define Sandbox_Source_Sandbox_HubActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHubActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHubActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHubActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHubActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHubActor(AHubActor&&); \
	NO_API AHubActor(const AHubActor&); \
public:


#define Sandbox_Source_Sandbox_HubActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHubActor(AHubActor&&); \
	NO_API AHubActor(const AHubActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHubActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHubActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHubActor)


#define Sandbox_Source_Sandbox_HubActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Sandbox_Source_Sandbox_HubActor_h_9_PROLOG
#define Sandbox_Source_Sandbox_HubActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sandbox_Source_Sandbox_HubActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Sandbox_Source_Sandbox_HubActor_h_12_SPARSE_DATA \
	Sandbox_Source_Sandbox_HubActor_h_12_RPC_WRAPPERS \
	Sandbox_Source_Sandbox_HubActor_h_12_INCLASS \
	Sandbox_Source_Sandbox_HubActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sandbox_Source_Sandbox_HubActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sandbox_Source_Sandbox_HubActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Sandbox_Source_Sandbox_HubActor_h_12_SPARSE_DATA \
	Sandbox_Source_Sandbox_HubActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Sandbox_Source_Sandbox_HubActor_h_12_INCLASS_NO_PURE_DECLS \
	Sandbox_Source_Sandbox_HubActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class AHubActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sandbox_Source_Sandbox_HubActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
