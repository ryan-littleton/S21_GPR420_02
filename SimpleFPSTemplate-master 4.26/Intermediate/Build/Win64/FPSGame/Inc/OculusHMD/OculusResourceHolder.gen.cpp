// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Private/OculusResourceHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusResourceHolder() {}
// Cross Module References
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusResourceHolder_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusResourceHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UOculusResourceHolder::StaticRegisterNativesUOculusResourceHolder()
	{
	}
	UClass* Z_Construct_UClass_UOculusResourceHolder_NoRegister()
	{
		return UOculusResourceHolder::StaticClass();
	}
	struct Z_Construct_UClass_UOculusResourceHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokeAHoleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PokeAHoleMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusResourceHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusResourceHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OculusResourceHolder.h" },
		{ "ModuleRelativePath", "Private/OculusResourceHolder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusResourceHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial = { "PokeAHoleMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusResourceHolder, PokeAHoleMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusResourceHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusResourceHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusResourceHolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusResourceHolder_Statics::ClassParams = {
		&UOculusResourceHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusResourceHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusResourceHolder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusResourceHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusResourceHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusResourceHolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusResourceHolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusResourceHolder, 1053058174);
	template<> OCULUSHMD_API UClass* StaticClass<UOculusResourceHolder>()
	{
		return UOculusResourceHolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusResourceHolder(Z_Construct_UClass_UOculusResourceHolder, &UOculusResourceHolder::StaticClass, TEXT("/Script/OculusHMD"), TEXT("UOculusResourceHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusResourceHolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
