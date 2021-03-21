// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MagicLeapTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapTypes() {}
// Cross Module References
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapResult();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
// End Cross Module References
class UScriptStruct* FMagicLeapResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapResult, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapResult"), sizeof(FMagicLeapResult), Get_Z_Construct_UScriptStruct_FMagicLeapResult_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapResult>()
{
	return FMagicLeapResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapResult(FMagicLeapResult::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapResult"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapResult
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapResult")),new UScriptStruct::TCppStructOps<FMagicLeapResult>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapResult;
	struct Z_Construct_UScriptStruct_FMagicLeapResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Contains the result of a magic leap plugin/module call from blueprints. */" },
		{ "ModuleRelativePath", "Public/MagicLeapTypes.h" },
		{ "ToolTip", "Contains the result of a magic leap plugin/module call from blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "MagicLeap" },
		{ "Comment", "/** The success of the operation. */" },
		{ "ModuleRelativePath", "Public/MagicLeapTypes.h" },
		{ "ToolTip", "The success of the operation." },
	};
#endif
	void Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FMagicLeapResult*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMagicLeapResult), &Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_AdditionalInfo_MetaData[] = {
		{ "Category", "MagicLeap" },
		{ "Comment", "/** Optional information about the result of the operation. */" },
		{ "ModuleRelativePath", "Public/MagicLeapTypes.h" },
		{ "ToolTip", "Optional information about the result of the operation." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_AdditionalInfo = { "AdditionalInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapResult, AdditionalInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_AdditionalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_AdditionalInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapResult_Statics::NewProp_AdditionalInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapResult",
		sizeof(FMagicLeapResult),
		alignof(FMagicLeapResult),
		Z_Construct_UScriptStruct_FMagicLeapResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapResult"), sizeof(FMagicLeapResult), Get_Z_Construct_UScriptStruct_FMagicLeapResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapResult_Hash() { return 35438305U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
