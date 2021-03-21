// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieScenePropertyTemplates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplates() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneVectorPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneVectorPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneVectorPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVectorPropertySectionTemplate"), sizeof(FMovieSceneVectorPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVectorPropertySectionTemplate>()
{
	return FMovieSceneVectorPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate(FMovieSceneVectorPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVectorPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVectorPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneVectorPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVectorPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_ComponentCurves_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_ComponentCurves = { "ComponentCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ComponentCurves, FMovieSceneVectorPropertySectionTemplate), STRUCT_OFFSET(FMovieSceneVectorPropertySectionTemplate, ComponentCurves), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_ComponentCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_ComponentCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_NumChannelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_NumChannelsUsed = { "NumChannelsUsed", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneVectorPropertySectionTemplate, NumChannelsUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_NumChannelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_NumChannelsUsed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneVectorPropertySectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_ComponentCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_NumChannelsUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::NewProp_BlendType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneVectorPropertySectionTemplate",
		sizeof(FMovieSceneVectorPropertySectionTemplate),
		alignof(FMovieSceneVectorPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVectorPropertySectionTemplate"), sizeof(FMovieSceneVectorPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_Hash() { return 2037285632U; }

static_assert(std::is_polymorphic<FMovieSceneStringPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneStringPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneStringPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneStringPropertySectionTemplate"), sizeof(FMovieSceneStringPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneStringPropertySectionTemplate>()
{
	return FMovieSceneStringPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneStringPropertySectionTemplate(FMovieSceneStringPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneStringPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneStringPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneStringPropertySectionTemplate, StringCurve), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneStringPropertySectionTemplate",
		sizeof(FMovieSceneStringPropertySectionTemplate),
		alignof(FMovieSceneStringPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneStringPropertySectionTemplate"), sizeof(FMovieSceneStringPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash() { return 288785249U; }

static_assert(std::is_polymorphic<FMovieSceneIntegerPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneIntegerPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneIntegerPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneIntegerPropertySectionTemplate"), sizeof(FMovieSceneIntegerPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneIntegerPropertySectionTemplate>()
{
	return FMovieSceneIntegerPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate(FMovieSceneIntegerPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneIntegerPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneIntegerPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneIntegerPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneIntegerPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneIntegerPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneIntegerPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntegerCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneIntegerPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_IntegerCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_IntegerCurve = { "IntegerCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneIntegerPropertySectionTemplate, IntegerCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_IntegerCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_IntegerCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneIntegerPropertySectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_IntegerCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::NewProp_BlendType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneIntegerPropertySectionTemplate",
		sizeof(FMovieSceneIntegerPropertySectionTemplate),
		alignof(FMovieSceneIntegerPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneIntegerPropertySectionTemplate"), sizeof(FMovieSceneIntegerPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_Hash() { return 4159615269U; }

static_assert(std::is_polymorphic<FMovieSceneEnumPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneEnumPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneEnumPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEnumPropertySectionTemplate"), sizeof(FMovieSceneEnumPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEnumPropertySectionTemplate>()
{
	return FMovieSceneEnumPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate(FMovieSceneEnumPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEnumPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEnumPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEnumPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEnumPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEnumPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEnumPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnumCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEnumPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::NewProp_EnumCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::NewProp_EnumCurve = { "EnumCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEnumPropertySectionTemplate, EnumCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::NewProp_EnumCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::NewProp_EnumCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::NewProp_EnumCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneEnumPropertySectionTemplate",
		sizeof(FMovieSceneEnumPropertySectionTemplate),
		alignof(FMovieSceneEnumPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEnumPropertySectionTemplate"), sizeof(FMovieSceneEnumPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_Hash() { return 1939082614U; }

static_assert(std::is_polymorphic<FMovieSceneBytePropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneBytePropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneBytePropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBytePropertySectionTemplate"), sizeof(FMovieSceneBytePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBytePropertySectionTemplate>()
{
	return FMovieSceneBytePropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBytePropertySectionTemplate(FMovieSceneBytePropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneBytePropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBytePropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBytePropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBytePropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneBytePropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBytePropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ByteCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBytePropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::NewProp_ByteCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::NewProp_ByteCurve = { "ByteCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBytePropertySectionTemplate, ByteCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::NewProp_ByteCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::NewProp_ByteCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::NewProp_ByteCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneBytePropertySectionTemplate",
		sizeof(FMovieSceneBytePropertySectionTemplate),
		alignof(FMovieSceneBytePropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBytePropertySectionTemplate"), sizeof(FMovieSceneBytePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_Hash() { return 1715993716U; }

static_assert(std::is_polymorphic<FMovieSceneBoolPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneBoolPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneBoolPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBoolPropertySectionTemplate"), sizeof(FMovieSceneBoolPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBoolPropertySectionTemplate>()
{
	return FMovieSceneBoolPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate(FMovieSceneBoolPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneBoolPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBoolPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneBoolPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBoolPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve = { "BoolCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBoolPropertySectionTemplate, BoolCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneBoolPropertySectionTemplate",
		sizeof(FMovieSceneBoolPropertySectionTemplate),
		alignof(FMovieSceneBoolPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBoolPropertySectionTemplate"), sizeof(FMovieSceneBoolPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash() { return 3598620156U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
