// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/HttpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpActor() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AHttpActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AHttpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References
	DEFINE_FUNCTION(AHttpActor::execGetRetainerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetRetainerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execMyHttpCall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyHttpCall();
		P_NATIVE_END;
	}
	void AHttpActor::StaticRegisterNativesAHttpActor()
	{
		UClass* Class = AHttpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRetainerName", &AHttpActor::execGetRetainerName },
			{ "MyHttpCall", &AHttpActor::execMyHttpCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics
	{
		struct HttpActor_eventGetRetainerName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventGetRetainerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "GetRetainerName", nullptr, nullptr, sizeof(HttpActor_eventGetRetainerName_Parms), Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_GetRetainerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_GetRetainerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_MyHttpCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_MyHttpCall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_MyHttpCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "MyHttpCall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_MyHttpCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_MyHttpCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_MyHttpCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_MyHttpCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHttpActor_NoRegister()
	{
		return AHttpActor::StaticClass();
	}
	struct Z_Construct_UClass_AHttpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetainerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RetainerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHttpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHttpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHttpActor_GetRetainerName, "GetRetainerName" }, // 3474662830
		{ &Z_Construct_UFunction_AHttpActor_MyHttpCall, "MyHttpCall" }, // 2528142930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpActor.h" },
		{ "ModuleRelativePath", "Public/HttpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_RetainerName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_RetainerName = { "RetainerName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, RetainerName), METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_RetainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_RetainerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHttpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_RetainerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHttpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHttpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHttpActor_Statics::ClassParams = {
		&AHttpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHttpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHttpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHttpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHttpActor, 2855176334);
	template<> FPSGAME_API UClass* StaticClass<AHttpActor>()
	{
		return AHttpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHttpActor(Z_Construct_UClass_AHttpActor, &AHttpActor::StaticClass, TEXT("/Script/FPSGame"), TEXT("AHttpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHttpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
