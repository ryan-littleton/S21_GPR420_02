// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapAR/Private/LuminAROrigin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuminAROrigin() {}
// Cross Module References
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ALuminAROrigin_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ALuminAROrigin();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AAROriginActor();
	UPackage* Z_Construct_UPackage__Script_MagicLeapAR();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ALuminAROrigin::StaticRegisterNativesALuminAROrigin()
	{
	}
	UClass* Z_Construct_UClass_ALuminAROrigin_NoRegister()
	{
		return ALuminAROrigin::StaticClass();
	}
	struct Z_Construct_UClass_ALuminAROrigin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneSurfaceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneSurfaceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WireframeMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALuminAROrigin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAROriginActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuminAROrigin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Because of the way ARPlanesTracker works, assuming the current ARSession \n *\x09\x09""configuration contains the flag 'bGenerateMeshDataFromTrackedGeometry',\n *\x09\x09the ARPlanesTracker requires that there exists a UMaterialInterface\n *\x09\x09which is compatible with the mesh data provided to UMRMeshComponents\n *\x09\x09which are subsequently attached to the AROrigin.  This is because for\n *\x09\x09some reason, the default surface material obtained via \n *\x09\x09UMaterial::GetDefaultMaterial(MD_Surface) does not correctly render\n *\x09\x09vertex data provided to the UMRMeshComponents, even if an exact copy\n *\x09\x09of the WorldGridMaterial itself does!\n *\x09""For this reason, the LuminAROrigin will store a compatible material which\n *\x09\x09is loaded via standard UE4 constructor interfaces.\n */" },
		{ "IncludePath", "LuminAROrigin.h" },
		{ "ModuleRelativePath", "Private/LuminAROrigin.h" },
		{ "ToolTip", "Because of the way ARPlanesTracker works, assuming the current ARSession\n        configuration contains the flag 'bGenerateMeshDataFromTrackedGeometry',\n        the ARPlanesTracker requires that there exists a UMaterialInterface\n        which is compatible with the mesh data provided to UMRMeshComponents\n        which are subsequently attached to the AROrigin.  This is because for\n        some reason, the default surface material obtained via\n        UMaterial::GetDefaultMaterial(MD_Surface) does not correctly render\n        vertex data provided to the UMRMeshComponents, even if an exact copy\n        of the WorldGridMaterial itself does!\nFor this reason, the LuminAROrigin will store a compatible material which\n        is loaded via standard UE4 constructor interfaces." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_MRMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LuminAROrigin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_MRMeshComponent = { "MRMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuminAROrigin, MRMeshComponent), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_MRMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_MRMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_PlaneSurfaceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/LuminAROrigin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_PlaneSurfaceMaterial = { "PlaneSurfaceMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuminAROrigin, PlaneSurfaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_PlaneSurfaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_PlaneSurfaceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_WireframeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/LuminAROrigin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_WireframeMaterial = { "WireframeMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuminAROrigin, WireframeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_WireframeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_WireframeMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuminAROrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_MRMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_PlaneSurfaceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuminAROrigin_Statics::NewProp_WireframeMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuminAROrigin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuminAROrigin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuminAROrigin_Statics::ClassParams = {
		&ALuminAROrigin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALuminAROrigin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuminAROrigin_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuminAROrigin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuminAROrigin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuminAROrigin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuminAROrigin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuminAROrigin, 742540079);
	template<> MAGICLEAPAR_API UClass* StaticClass<ALuminAROrigin>()
	{
		return ALuminAROrigin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuminAROrigin(Z_Construct_UClass_ALuminAROrigin, &ALuminAROrigin::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ALuminAROrigin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuminAROrigin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
