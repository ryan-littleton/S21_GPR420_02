// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusInput/Public/OculusInputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusInputFunctionLibrary() {}
// Cross Module References
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EBone();
	UPackage* Z_Construct_UPackage__Script_OculusInput();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_ETrackingConfidence();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType();
	OCULUSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusCapsuleCollider();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UOculusInputFunctionLibrary_NoRegister();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UOculusInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EBone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_EBone, Z_Construct_UPackage__Script_OculusInput(), TEXT("EBone"));
		}
		return Singleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<EBone>()
	{
		return EBone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBone(EBone_StaticEnum, TEXT("/Script/OculusInput"), TEXT("EBone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusInput_EBone_Hash() { return 2480513867U; }
	UEnum* Z_Construct_UEnum_OculusInput_EBone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBone"), 0, Get_Z_Construct_UEnum_OculusInput_EBone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBone::Wrist_Root", (int64)EBone::Wrist_Root },
				{ "EBone::Hand_Start", (int64)EBone::Hand_Start },
				{ "EBone::Forearm_Stub", (int64)EBone::Forearm_Stub },
				{ "EBone::Thumb_0", (int64)EBone::Thumb_0 },
				{ "EBone::Thumb_1", (int64)EBone::Thumb_1 },
				{ "EBone::Thumb_2", (int64)EBone::Thumb_2 },
				{ "EBone::Thumb_3", (int64)EBone::Thumb_3 },
				{ "EBone::Index_1", (int64)EBone::Index_1 },
				{ "EBone::Index_2", (int64)EBone::Index_2 },
				{ "EBone::Index_3", (int64)EBone::Index_3 },
				{ "EBone::Middle_1", (int64)EBone::Middle_1 },
				{ "EBone::Middle_2", (int64)EBone::Middle_2 },
				{ "EBone::Middle_3", (int64)EBone::Middle_3 },
				{ "EBone::Ring_1", (int64)EBone::Ring_1 },
				{ "EBone::Ring_2", (int64)EBone::Ring_2 },
				{ "EBone::Ring_3", (int64)EBone::Ring_3 },
				{ "EBone::Pinky_0", (int64)EBone::Pinky_0 },
				{ "EBone::Pinky_1", (int64)EBone::Pinky_1 },
				{ "EBone::Pinky_2", (int64)EBone::Pinky_2 },
				{ "EBone::Pinky_3", (int64)EBone::Pinky_3 },
				{ "EBone::Thumb_Tip", (int64)EBone::Thumb_Tip },
				{ "EBone::Max_Skinnable", (int64)EBone::Max_Skinnable },
				{ "EBone::Index_Tip", (int64)EBone::Index_Tip },
				{ "EBone::Middle_Tip", (int64)EBone::Middle_Tip },
				{ "EBone::Ring_Tip", (int64)EBone::Ring_Tip },
				{ "EBone::Pinky_Tip", (int64)EBone::Pinky_Tip },
				{ "EBone::Hand_End", (int64)EBone::Hand_End },
				{ "EBone::Bone_Max", (int64)EBone::Bone_Max },
				{ "EBone::Invalid", (int64)EBone::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bone_Max.DisplayName", "Hand Max" },
				{ "Bone_Max.Name", "EBone::Bone_Max" },
				{ "Comment", "/**\n* EBone is enum representing the Bone Ids that come from the Oculus Runtime. \n*/" },
				{ "Forearm_Stub.DisplayName", "Forearm Stub" },
				{ "Forearm_Stub.Name", "EBone::Forearm_Stub" },
				{ "Hand_End.DisplayName", "Hand End" },
				{ "Hand_End.Name", "EBone::Hand_End" },
				{ "Hand_Start.DisplayName", "Hand Start" },
				{ "Hand_Start.Name", "EBone::Hand_Start" },
				{ "Index_1.DisplayName", "Index1" },
				{ "Index_1.Name", "EBone::Index_1" },
				{ "Index_2.DisplayName", "Index2" },
				{ "Index_2.Name", "EBone::Index_2" },
				{ "Index_3.DisplayName", "Index3" },
				{ "Index_3.Name", "EBone::Index_3" },
				{ "Index_Tip.DisplayName", "Index Tip" },
				{ "Index_Tip.Name", "EBone::Index_Tip" },
				{ "Invalid.DisplayName", "Invalid" },
				{ "Invalid.Name", "EBone::Invalid" },
				{ "Max_Skinnable.DisplayName", "Max Skinnable" },
				{ "Max_Skinnable.Name", "EBone::Max_Skinnable" },
				{ "Middle_1.DisplayName", "Middle1" },
				{ "Middle_1.Name", "EBone::Middle_1" },
				{ "Middle_2.DisplayName", "Middle2" },
				{ "Middle_2.Name", "EBone::Middle_2" },
				{ "Middle_3.DisplayName", "Middle3" },
				{ "Middle_3.Name", "EBone::Middle_3" },
				{ "Middle_Tip.DisplayName", "Middle Tip" },
				{ "Middle_Tip.Name", "EBone::Middle_Tip" },
				{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
				{ "Pinky_0.DisplayName", "Pinky0" },
				{ "Pinky_0.Name", "EBone::Pinky_0" },
				{ "Pinky_1.DisplayName", "Pinky1" },
				{ "Pinky_1.Name", "EBone::Pinky_1" },
				{ "Pinky_2.DisplayName", "Pinky2" },
				{ "Pinky_2.Name", "EBone::Pinky_2" },
				{ "Pinky_3.DisplayName", "Pinky3" },
				{ "Pinky_3.Name", "EBone::Pinky_3" },
				{ "Pinky_Tip.DisplayName", "Pinky Tip" },
				{ "Pinky_Tip.Name", "EBone::Pinky_Tip" },
				{ "Ring_1.DisplayName", "Ring1" },
				{ "Ring_1.Name", "EBone::Ring_1" },
				{ "Ring_2.DisplayName", "Ring2" },
				{ "Ring_2.Name", "EBone::Ring_2" },
				{ "Ring_3.DisplayName", "Ring3" },
				{ "Ring_3.Name", "EBone::Ring_3" },
				{ "Ring_Tip.DisplayName", "Ring Tip" },
				{ "Ring_Tip.Name", "EBone::Ring_Tip" },
				{ "Thumb_0.DisplayName", "Thumb0" },
				{ "Thumb_0.Name", "EBone::Thumb_0" },
				{ "Thumb_1.DisplayName", "Thumb1" },
				{ "Thumb_1.Name", "EBone::Thumb_1" },
				{ "Thumb_2.DisplayName", "Thumb2" },
				{ "Thumb_2.Name", "EBone::Thumb_2" },
				{ "Thumb_3.DisplayName", "Thumb3" },
				{ "Thumb_3.Name", "EBone::Thumb_3" },
				{ "Thumb_Tip.DisplayName", "Thumb Tip" },
				{ "Thumb_Tip.Name", "EBone::Thumb_Tip" },
				{ "ToolTip", "EBone is enum representing the Bone Ids that come from the Oculus Runtime." },
				{ "Wrist_Root.DisplayName", "Wrist Root" },
				{ "Wrist_Root.Name", "EBone::Wrist_Root" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
				nullptr,
				"EBone",
				"EBone",
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
	static UEnum* ETrackingConfidence_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_ETrackingConfidence, Z_Construct_UPackage__Script_OculusInput(), TEXT("ETrackingConfidence"));
		}
		return Singleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<ETrackingConfidence>()
	{
		return ETrackingConfidence_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingConfidence(ETrackingConfidence_StaticEnum, TEXT("/Script/OculusInput"), TEXT("ETrackingConfidence"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusInput_ETrackingConfidence_Hash() { return 1821561462U; }
	UEnum* Z_Construct_UEnum_OculusInput_ETrackingConfidence()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingConfidence"), 0, Get_Z_Construct_UEnum_OculusInput_ETrackingConfidence_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingConfidence::Low", (int64)ETrackingConfidence::Low },
				{ "ETrackingConfidence::High", (int64)ETrackingConfidence::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "ETrackingConfidence::High" },
				{ "Low.Name", "ETrackingConfidence::Low" },
				{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
				nullptr,
				"ETrackingConfidence",
				"ETrackingConfidence",
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
	static UEnum* EOculusHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_EOculusHandType, Z_Construct_UPackage__Script_OculusInput(), TEXT("EOculusHandType"));
		}
		return Singleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<EOculusHandType>()
	{
		return EOculusHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusHandType(EOculusHandType_StaticEnum, TEXT("/Script/OculusInput"), TEXT("EOculusHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusInput_EOculusHandType_Hash() { return 2478360015U; }
	UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusHandType"), 0, Get_Z_Construct_UEnum_OculusInput_EOculusHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusHandType::None", (int64)EOculusHandType::None },
				{ "EOculusHandType::HandLeft", (int64)EOculusHandType::HandLeft },
				{ "EOculusHandType::HandRight", (int64)EOculusHandType::HandRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HandLeft.Name", "EOculusHandType::HandLeft" },
				{ "HandRight.Name", "EOculusHandType::HandRight" },
				{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
				{ "None.Name", "EOculusHandType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
				nullptr,
				"EOculusHandType",
				"EOculusHandType",
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
class UScriptStruct* FOculusCapsuleCollider::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FOculusCapsuleCollider_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusCapsuleCollider, Z_Construct_UPackage__Script_OculusInput(), TEXT("OculusCapsuleCollider"), sizeof(FOculusCapsuleCollider), Get_Z_Construct_UScriptStruct_FOculusCapsuleCollider_Hash());
	}
	return Singleton;
}
template<> OCULUSINPUT_API UScriptStruct* StaticStruct<FOculusCapsuleCollider>()
{
	return FOculusCapsuleCollider::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOculusCapsuleCollider(FOculusCapsuleCollider::StaticStruct, TEXT("/Script/OculusInput"), TEXT("OculusCapsuleCollider"), false, nullptr, nullptr);
static struct FScriptStruct_OculusInput_StaticRegisterNativesFOculusCapsuleCollider
{
	FScriptStruct_OculusInput_StaticRegisterNativesFOculusCapsuleCollider()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OculusCapsuleCollider")),new UScriptStruct::TCppStructOps<FOculusCapsuleCollider>);
	}
} ScriptStruct_OculusInput_StaticRegisterNativesFOculusCapsuleCollider;
	struct Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* FOculusCapsuleCollider is a struct that contains information on the physics/collider capsules created by the runtime for hands.\n*\n* @var Capsule\x09\x09The UCapsuleComponent that is the collision capsule on the bone. Use this to register for overlap/collision events\n* @var BoneIndex\x09The Bone that this collision capsule is parented to. Corresponds to the EBone enum.\n*\n*/" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "FOculusCapsuleCollider is a struct that contains information on the physics/collider capsules created by the runtime for hands.\n\n@var Capsule         The UCapsuleComponent that is the collision capsule on the bone. Use this to register for overlap/collision events\n@var BoneIndex       The Bone that this collision capsule is parented to. Corresponds to the EBone enum." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusCapsuleCollider>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusCapsuleCollider, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusCapsuleCollider, BoneId), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		&NewStructOps,
		"OculusCapsuleCollider",
		sizeof(FOculusCapsuleCollider),
		alignof(FOculusCapsuleCollider),
		Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusCapsuleCollider()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOculusCapsuleCollider_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OculusCapsuleCollider"), sizeof(FOculusCapsuleCollider), Get_Z_Construct_UScriptStruct_FOculusCapsuleCollider_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOculusCapsuleCollider_Hash() { return 2833721367U; }
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetBoneName)
	{
		P_GET_ENUM(EBone,Z_Param_BoneId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOculusInputFunctionLibrary::GetBoneName(EBone(Z_Param_BoneId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execIsHandTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::IsHandTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetDominantHand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusHandType*)Z_Param__Result=UOculusInputFunctionLibrary::GetDominantHand(Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetHandScale)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusInputFunctionLibrary::GetHandScale(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetTrackingConfidence)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETrackingConfidence*)Z_Param__Result=UOculusInputFunctionLibrary::GetTrackingConfidence(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execIsPointerPoseValid)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::IsPointerPoseValid(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetPointerPose)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UOculusInputFunctionLibrary::GetPointerPose(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetBoneRotation)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EBone,Z_Param_BoneId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UOculusInputFunctionLibrary::GetBoneRotation(EOculusHandType(Z_Param_DeviceHand),EBone(Z_Param_BoneId),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execInitializeHandPhysics)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_SkeletonType);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_HandComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOculusCapsuleCollider>*)Z_Param__Result=UOculusInputFunctionLibrary::InitializeHandPhysics(EOculusHandType(Z_Param_SkeletonType),Z_Param_HandComponent,Z_Param_WorldToMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetHandSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_HandSkeletalMesh);
		P_GET_ENUM(EOculusHandType,Z_Param_SkeletonType);
		P_GET_ENUM(EOculusHandType,Z_Param_MeshType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::GetHandSkeletalMesh(Z_Param_HandSkeletalMesh,EOculusHandType(Z_Param_SkeletonType),EOculusHandType(Z_Param_MeshType),Z_Param_WorldToMeters);
		P_NATIVE_END;
	}
	void UOculusInputFunctionLibrary::StaticRegisterNativesUOculusInputFunctionLibrary()
	{
		UClass* Class = UOculusInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneName", &UOculusInputFunctionLibrary::execGetBoneName },
			{ "GetBoneRotation", &UOculusInputFunctionLibrary::execGetBoneRotation },
			{ "GetDominantHand", &UOculusInputFunctionLibrary::execGetDominantHand },
			{ "GetHandScale", &UOculusInputFunctionLibrary::execGetHandScale },
			{ "GetHandSkeletalMesh", &UOculusInputFunctionLibrary::execGetHandSkeletalMesh },
			{ "GetPointerPose", &UOculusInputFunctionLibrary::execGetPointerPose },
			{ "GetTrackingConfidence", &UOculusInputFunctionLibrary::execGetTrackingConfidence },
			{ "InitializeHandPhysics", &UOculusInputFunctionLibrary::execInitializeHandPhysics },
			{ "IsHandTrackingEnabled", &UOculusInputFunctionLibrary::execIsHandTrackingEnabled },
			{ "IsPointerPoseValid", &UOculusInputFunctionLibrary::execIsPointerPoseValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics
	{
		struct OculusInputFunctionLibrary_eventGetBoneName_Parms
		{
			EBone BoneId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneName_Parms, BoneId), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the bone name from the bone index\n\x09 *\n\x09 * @param BoneIndex\x09\x09\x09\x09\x09(in) Bone index to get the name of\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the bone name from the bone index\n\n@param BoneIndex                                     (in) Bone index to get the name of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetBoneName", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetBoneName_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics
	{
		struct OculusInputFunctionLibrary_eventGetBoneRotation_Parms
		{
			EOculusHandType DeviceHand;
			EBone BoneId;
			int32 ControllerIndex;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, BoneId), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the rotation of a specific bone\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the rotations from\n\x09 * @param BoneId\x09\x09\x09\x09\x09(in) The specific bone to get the rotation from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the rotation of a specific bone\n\n@param DeviceHand                            (in) The hand to get the rotations from\n@param BoneId                                        (in) The specific bone to get the rotation from\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetBoneRotation", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetBoneRotation_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics
	{
		struct OculusInputFunctionLibrary_eventGetDominantHand_Parms
		{
			int32 ControllerIndex;
			EOculusHandType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetDominantHand_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetDominantHand_Parms, ReturnValue), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the user's dominant hand\n\x09 *\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the user's dominant hand\n\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetDominantHand", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetDominantHand_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics
	{
		struct OculusInputFunctionLibrary_eventGetHandScale_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandScale_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the scale of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get scale of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the scale of the hand\n\n@param DeviceHand                            (in) The hand to get scale of\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetHandScale", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetHandScale_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics
	{
		struct OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms
		{
			USkeletalMesh* HandSkeletalMesh;
			EOculusHandType SkeletonType;
			EOculusHandType MeshType;
			float WorldToMeters;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandSkeletalMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_HandSkeletalMesh = { "HandSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, HandSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, SkeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, MeshType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, WorldToMeters), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters_MetaData)) };
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_HandSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Creates a new runtime hand skeletal mesh.\n\x09 *\n\x09 * @param HandSkeletalMesh\x09\x09\x09(out) Skeletal Mesh object that will be used for the runtime hand mesh\n\x09 * @param SkeletonType\x09\x09\x09\x09(in) The skeleton type that will be used for generating the hand bones\n\x09 * @param MeshType\x09\x09\x09\x09\x09(in) The mesh type that will be used for generating the hand mesh\n\x09 * @param WorldTometers\x09\x09\x09\x09(in) Optional change to the world to meters conversion value\n\x09 */" },
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Creates a new runtime hand skeletal mesh.\n\n@param HandSkeletalMesh                      (out) Skeletal Mesh object that will be used for the runtime hand mesh\n@param SkeletonType                          (in) The skeleton type that will be used for generating the hand bones\n@param MeshType                                      (in) The mesh type that will be used for generating the hand mesh\n@param WorldTometers                         (in) Optional change to the world to meters conversion value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetHandSkeletalMesh", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics
	{
		struct OculusInputFunctionLibrary_eventGetPointerPose_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetPointerPose_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetPointerPose_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetPointerPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the pointer pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer pose from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the pointer pose\n\n@param DeviceHand                            (in) The hand to get the pointer pose from\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetPointerPose", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetPointerPose_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics
	{
		struct OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			ETrackingConfidence ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_OculusInput_ETrackingConfidence, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the tracking confidence of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the tracking confidence of the hand\n\n@param DeviceHand                            (in) The hand to get tracking confidence of\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetTrackingConfidence", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics
	{
		struct OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms
		{
			EOculusHandType SkeletonType;
			USkinnedMeshComponent* HandComponent;
			float WorldToMeters;
			TArray<FOculusCapsuleCollider> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, SkeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent = { "HandComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, HandComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, WorldToMeters), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOculusCapsuleCollider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Initializes physics capsules for collision and physics on the runtime mesh\n\x09 *\n\x09 * @param SkeletonType\x09\x09\x09\x09(in) The skeleton type that will be used to generated the capsules\n\x09 * @param HandComponent\x09\x09\x09\x09(in) The skinned mesh component that the capsules will be attached to\n\x09 * @param WorldTometers\x09\x09\x09\x09(in) Optional change to the world to meters conversion value\n\x09 */" },
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Initializes physics capsules for collision and physics on the runtime mesh\n\n@param SkeletonType                          (in) The skeleton type that will be used to generated the capsules\n@param HandComponent                         (in) The skinned mesh component that the capsules will be attached to\n@param WorldTometers                         (in) Optional change to the world to meters conversion value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "InitializeHandPhysics", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics
	{
		struct OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Check if hand tracking is enabled currently\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Check if hand tracking is enabled currently" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics
	{
		struct OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex_MetaData)) };
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Check if the pointer pose is a valid pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer status from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Check if the pointer pose is a valid pose\n\n@param DeviceHand                            (in) The hand to get the pointer status from\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "IsPointerPoseValid", nullptr, nullptr, sizeof(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOculusInputFunctionLibrary_NoRegister()
	{
		return UOculusInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName, "GetBoneName" }, // 3090701853
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 3580130607
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand, "GetDominantHand" }, // 324623031
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 4112378794
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh, "GetHandSkeletalMesh" }, // 1548274346
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose, "GetPointerPose" }, // 606239981
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 2687641771
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics, "InitializeHandPhysics" }, // 788649309
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 24584251
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid, "IsPointerPoseValid" }, // 843013390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::ClassParams = {
		&UOculusInputFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusInputFunctionLibrary, 812204381);
	template<> OCULUSINPUT_API UClass* StaticClass<UOculusInputFunctionLibrary>()
	{
		return UOculusInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusInputFunctionLibrary(Z_Construct_UClass_UOculusInputFunctionLibrary, &UOculusInputFunctionLibrary::StaticClass, TEXT("/Script/OculusInput"), TEXT("UOculusInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
