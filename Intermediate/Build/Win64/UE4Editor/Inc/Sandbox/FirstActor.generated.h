// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef SANDBOX_FirstActor_generated_h
#error "FirstActor.generated.h already included, missing '#pragma once' in FirstActor.h"
#endif
#define SANDBOX_FirstActor_generated_h

#define Sandbox_Source_Sandbox_FirstActor_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	SANDBOX_API static class UScriptStruct* StaticStruct();


template<> SANDBOX_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define Sandbox_Source_Sandbox_FirstActor_h_14_DELEGATE \
struct _Script_Sandbox_eventOnColorChanged_Parms \
{ \
	FLinearColor Color; \
	FString Name; \
}; \
static inline void FOnColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnColorChanged, FLinearColor const& Color, const FString& Name) \
{ \
	_Script_Sandbox_eventOnColorChanged_Parms Parms; \
	Parms.Color=Color; \
	Parms.Name=Name; \
	OnColorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sandbox_Source_Sandbox_FirstActor_h_45_SPARSE_DATA
#define Sandbox_Source_Sandbox_FirstActor_h_45_RPC_WRAPPERS
#define Sandbox_Source_Sandbox_FirstActor_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define Sandbox_Source_Sandbox_FirstActor_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstActor(); \
	friend struct Z_Construct_UClass_AFirstActor_Statics; \
public: \
	DECLARE_CLASS(AFirstActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(AFirstActor)


#define Sandbox_Source_Sandbox_FirstActor_h_45_INCLASS \
private: \
	static void StaticRegisterNativesAFirstActor(); \
	friend struct Z_Construct_UClass_AFirstActor_Statics; \
public: \
	DECLARE_CLASS(AFirstActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(AFirstActor)


#define Sandbox_Source_Sandbox_FirstActor_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstActor(AFirstActor&&); \
	NO_API AFirstActor(const AFirstActor&); \
public:


#define Sandbox_Source_Sandbox_FirstActor_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstActor(AFirstActor&&); \
	NO_API AFirstActor(const AFirstActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstActor)


#define Sandbox_Source_Sandbox_FirstActor_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(AFirstActor, GeometryData); } \
	FORCEINLINE static uint32 __PPO__WaeaponNum() { return STRUCT_OFFSET(AFirstActor, WaeaponNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AFirstActor, Health); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(AFirstActor, IsDead); } \
	FORCEINLINE static uint32 __PPO__MaxTimerCount() { return STRUCT_OFFSET(AFirstActor, MaxTimerCount); } \
	FORCEINLINE static uint32 __PPO__TimerCount() { return STRUCT_OFFSET(AFirstActor, TimerCount); }


#define Sandbox_Source_Sandbox_FirstActor_h_42_PROLOG
#define Sandbox_Source_Sandbox_FirstActor_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sandbox_Source_Sandbox_FirstActor_h_45_PRIVATE_PROPERTY_OFFSET \
	Sandbox_Source_Sandbox_FirstActor_h_45_SPARSE_DATA \
	Sandbox_Source_Sandbox_FirstActor_h_45_RPC_WRAPPERS \
	Sandbox_Source_Sandbox_FirstActor_h_45_INCLASS \
	Sandbox_Source_Sandbox_FirstActor_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sandbox_Source_Sandbox_FirstActor_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sandbox_Source_Sandbox_FirstActor_h_45_PRIVATE_PROPERTY_OFFSET \
	Sandbox_Source_Sandbox_FirstActor_h_45_SPARSE_DATA \
	Sandbox_Source_Sandbox_FirstActor_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Sandbox_Source_Sandbox_FirstActor_h_45_INCLASS_NO_PURE_DECLS \
	Sandbox_Source_Sandbox_FirstActor_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class AFirstActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sandbox_Source_Sandbox_FirstActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EmovementType::Sin) \
	op(EmovementType::Static) 

enum class EmovementType : uint8;
template<> SANDBOX_API UEnum* StaticEnum<EmovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
