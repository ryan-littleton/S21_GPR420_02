// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project3/Public/CustomEnemyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomEnemyActor() {}
// Cross Module References
	PROJECT3_API UClass* Z_Construct_UClass_ACustomEnemyActor_NoRegister();
	PROJECT3_API UClass* Z_Construct_UClass_ACustomEnemyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Project3();
// End Cross Module References
	DEFINE_FUNCTION(ACustomEnemyActor::execFindOverlaps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOverlaps();
		P_NATIVE_END;
	}
	void ACustomEnemyActor::StaticRegisterNativesACustomEnemyActor()
	{
		UClass* Class = ACustomEnemyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOverlaps", &ACustomEnemyActor::execFindOverlaps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomEnemyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEnemyActor, nullptr, "FindOverlaps", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomEnemyActor_NoRegister()
	{
		return ACustomEnemyActor::StaticClass();
	}
	struct Z_Construct_UClass_ACustomEnemyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomEnemyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomEnemyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomEnemyActor_FindOverlaps, "FindOverlaps" }, // 2862189620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomEnemyActor.h" },
		{ "ModuleRelativePath", "Public/CustomEnemyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_DetectionRange_MetaData[] = {
		{ "Category", "CustomEnemyActor" },
		{ "ModuleRelativePath", "Public/CustomEnemyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomEnemyActor, DetectionRange), METADATA_PARAMS(Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_DetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_DetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "CustomEnemyActor" },
		{ "ModuleRelativePath", "Public/CustomEnemyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomEnemyActor, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_InterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomEnemyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_DetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEnemyActor_Statics::NewProp_InterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomEnemyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomEnemyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomEnemyActor_Statics::ClassParams = {
		&ACustomEnemyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomEnemyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomEnemyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomEnemyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomEnemyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomEnemyActor, 3158106764);
	template<> PROJECT3_API UClass* StaticClass<ACustomEnemyActor>()
	{
		return ACustomEnemyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomEnemyActor(Z_Construct_UClass_ACustomEnemyActor, &ACustomEnemyActor::StaticClass, TEXT("/Script/Project3"), TEXT("ACustomEnemyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomEnemyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
