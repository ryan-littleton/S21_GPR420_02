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
			{ "MyHttpCall", &AHttpActor::execMyHttpCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHttpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHttpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHttpActor_MyHttpCall, "MyHttpCall" }, // 2528142930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpActor.h" },
		{ "ModuleRelativePath", "Public/HttpActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHttpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHttpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHttpActor_Statics::ClassParams = {
		&AHttpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
	IMPLEMENT_CLASS(AHttpActor, 2199150750);
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
