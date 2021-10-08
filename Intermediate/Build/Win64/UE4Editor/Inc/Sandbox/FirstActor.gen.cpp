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
	SANDBOX_API UFunction* Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SANDBOX_API UEnum* Z_Construct_UEnum_Sandbox_EmovementType();
	SANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryData();
	SANDBOX_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_AFirstActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics
	{
		struct _Script_Sandbox_eventOnColorChanged_Parms
		{
			FLinearColor Color;
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Sandbox_eventOnColorChanged_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Sandbox_eventOnColorChanged_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Sandbox, nullptr, "OnColorChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_Sandbox_eventOnColorChanged_Parms), Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EmovementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sandbox_EmovementType, Z_Construct_UPackage__Script_Sandbox(), TEXT("EmovementType"));
		}
		return Singleton;
	}
	template<> SANDBOX_API UEnum* StaticEnum<EmovementType>()
	{
		return EmovementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EmovementType(EmovementType_StaticEnum, TEXT("/Script/Sandbox"), TEXT("EmovementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sandbox_EmovementType_Hash() { return 2542134957U; }
	UEnum* Z_Construct_UEnum_Sandbox_EmovementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sandbox();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EmovementType"), 0, Get_Z_Construct_UEnum_Sandbox_EmovementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EmovementType::Sin", (int64)EmovementType::Sin },
				{ "EmovementType::Static", (int64)EmovementType::Static },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FirstActor.h" },
				{ "Sin.Name", "EmovementType::Sin" },
				{ "Static.Name", "EmovementType::Static" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sandbox,
				nullptr,
				"EmovementType",
				"EmovementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGeometryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SANDBOX_API uint32 Get_Z_Construct_UScriptStruct_FGeometryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryData, Z_Construct_UPackage__Script_Sandbox(), TEXT("GeometryData"), sizeof(FGeometryData), Get_Z_Construct_UScriptStruct_FGeometryData_Hash());
	}
	return Singleton;
}
template<> SANDBOX_API UScriptStruct* StaticStruct<FGeometryData>()
{
	return FGeometryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryData(FGeometryData::StaticStruct, TEXT("/Script/Sandbox"), TEXT("GeometryData"), false, nullptr, nullptr);
static struct FScriptStruct_Sandbox_StaticRegisterNativesFGeometryData
{
	FScriptStruct_Sandbox_StaticRegisterNativesFGeometryData()
	{
		UScriptStruct::DeferCppStructOps<FGeometryData>(FName(TEXT("GeometryData")));
	}
} ScriptStruct_Sandbox_StaticRegisterNativesFGeometryData;
	struct Z_Construct_UScriptStruct_FGeometryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, MoveType), Z_Construct_UEnum_Sandbox_EmovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Design" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate_MetaData[] = {
		{ "Category", "Design" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate = { "TimerRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, TimerRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
		nullptr,
		&NewStructOps,
		"GeometryData",
		sizeof(FGeometryData),
		alignof(FGeometryData),
		Z_Construct_UScriptStruct_FGeometryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Sandbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryData"), sizeof(FGeometryData), Get_Z_Construct_UScriptStruct_FGeometryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryData_Hash() { return 636046688U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryData;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTimerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimerCount;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_OnColorChanged_MetaData[] = {
		{ "Comment", "// Delegates /////////////////////\n" },
		{ "ModuleRelativePath", "FirstActor.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, OnColorChanged), Z_Construct_UDelegateFunction_Sandbox_OnColorChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_OnColorChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_OnColorChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_GeometryData_MetaData[] = {
		{ "Category", "FirstActor" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, GeometryData), Z_Construct_UScriptStruct_FGeometryData, METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_GeometryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_GeometryData_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_MaxTimerCount_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_MaxTimerCount = { "MaxTimerCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, MaxTimerCount), METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_MaxTimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_MaxTimerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_TimerCount_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_TimerCount = { "TimerCount", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, TimerCount), METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_TimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_TimerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_BasicMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_OnColorChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_GeometryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_WaeaponNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_MaxTimerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_TimerCount,
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
	IMPLEMENT_CLASS(AFirstActor, 2469370514);
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
