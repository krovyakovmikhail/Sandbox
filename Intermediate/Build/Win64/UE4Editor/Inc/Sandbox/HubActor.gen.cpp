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
	SANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayload();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SANDBOX_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
	SANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SANDBOX_API UClass* Z_Construct_UClass_AHubActor_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_AHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FGeometryPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SANDBOX_API uint32 Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryPayload, Z_Construct_UPackage__Script_Sandbox(), TEXT("GeometryPayload"), sizeof(FGeometryPayload), Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash());
	}
	return Singleton;
}
template<> SANDBOX_API UScriptStruct* StaticStruct<FGeometryPayload>()
{
	return FGeometryPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryPayload(FGeometryPayload::StaticStruct, TEXT("/Script/Sandbox"), TEXT("GeometryPayload"), false, nullptr, nullptr);
static struct FScriptStruct_Sandbox_StaticRegisterNativesFGeometryPayload
{
	FScriptStruct_Sandbox_StaticRegisterNativesFGeometryPayload()
	{
		UScriptStruct::DeferCppStructOps<FGeometryPayload>(FName(TEXT("GeometryPayload")));
	}
} ScriptStruct_Sandbox_StaticRegisterNativesFGeometryPayload;
	struct Z_Construct_UScriptStruct_FGeometryPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorBaseGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorBaseGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_initialTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_ActorBaseGeometry_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_ActorBaseGeometry = { "ActorBaseGeometry", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, ActorBaseGeometry), Z_Construct_UClass_AFirstActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_ActorBaseGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_ActorBaseGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, Data), Z_Construct_UScriptStruct_FGeometryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_initialTransform_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_initialTransform = { "initialTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, initialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_initialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_initialTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_ActorBaseGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_initialTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
		nullptr,
		&NewStructOps,
		"GeometryPayload",
		sizeof(FGeometryPayload),
		alignof(FGeometryPayload),
		Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Sandbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryPayload"), sizeof(FGeometryPayload), Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash() { return 1602596733U; }
	DEFINE_FUNCTION(AHubActor::execOnTimerFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimerFinished(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHubActor::execOnColorChanged)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorChanged(Z_Param_Out_Color,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	void AHubActor::StaticRegisterNativesAHubActor()
	{
		UClass* Class = AHubActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnColorChanged", &AHubActor::execOnColorChanged },
			{ "OnTimerFinished", &AHubActor::execOnTimerFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHubActor_OnColorChanged_Statics
	{
		struct HubActor_eventOnColorChanged_Parms
		{
			FLinearColor Color;
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HubActor_eventOnColorChanged_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HubActor_eventOnColorChanged_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHubActor, nullptr, "OnColorChanged", nullptr, nullptr, sizeof(HubActor_eventOnColorChanged_Parms), Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHubActor_OnColorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHubActor_OnColorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics
	{
		struct HubActor_eventOnTimerFinished_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HubActor_eventOnTimerFinished_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHubActor, nullptr, "OnTimerFinished", nullptr, nullptr, sizeof(HubActor_eventOnTimerFinished_Parms), Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHubActor_OnTimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHubActor_OnTimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHubActor_NoRegister()
	{
		return AHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstActorGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FirstActorGeometry;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryPayloads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryPayloads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeometryPayloads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerRate;
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
	UObject* (*const Z_Construct_UClass_AHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHubActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHubActor_OnColorChanged, "OnColorChanged" }, // 1639052496
		{ &Z_Construct_UFunction_AHubActor_OnTimerFinished, "OnTimerFinished" }, // 3977734640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HubActor.h" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::NewProp_FirstActorGeometry_MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHubActor_Statics::NewProp_FirstActorGeometry = { "FirstActorGeometry", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHubActor, FirstActorGeometry), Z_Construct_UClass_AFirstActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHubActor_Statics::NewProp_FirstActorGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::NewProp_FirstActorGeometry_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads_Inner = { "GeometryPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeometryPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads_MetaData[] = {
		{ "Category", "HubActor" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads = { "GeometryPayloads", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHubActor, GeometryPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::NewProp_TimerRate_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHubActor_Statics::NewProp_TimerRate = { "TimerRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHubActor, TimerRate), METADATA_PARAMS(Z_Construct_UClass_AHubActor_Statics::NewProp_TimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::NewProp_TimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::NewProp_MaxTimerCount_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHubActor_Statics::NewProp_MaxTimerCount = { "MaxTimerCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHubActor, MaxTimerCount), METADATA_PARAMS(Z_Construct_UClass_AHubActor_Statics::NewProp_MaxTimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::NewProp_MaxTimerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHubActor_Statics::NewProp_TimerCount_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "HubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHubActor_Statics::NewProp_TimerCount = { "TimerCount", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHubActor, TimerCount), METADATA_PARAMS(Z_Construct_UClass_AHubActor_Statics::NewProp_TimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::NewProp_TimerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHubActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHubActor_Statics::NewProp_FirstActorGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHubActor_Statics::NewProp_GeometryPayloads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHubActor_Statics::NewProp_TimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHubActor_Statics::NewProp_MaxTimerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHubActor_Statics::NewProp_TimerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHubActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHubActor_Statics::ClassParams = {
		&AHubActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHubActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHubActor_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AHubActor, 3048411202);
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
