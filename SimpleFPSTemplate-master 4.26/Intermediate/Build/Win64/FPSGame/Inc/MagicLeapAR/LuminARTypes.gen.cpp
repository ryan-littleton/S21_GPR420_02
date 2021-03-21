// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapAR/Public/LuminARTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuminARTypes() {}
// Cross Module References
	MAGICLEAPAR_API UEnum* Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel();
	UPackage* Z_Construct_UPackage__Script_MagicLeapAR();
	MAGICLEAPAR_API UEnum* Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARLightEstimate_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARLightEstimate();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARCandidateImage_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARCandidateImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage();
	MAGICLEAPIMAGETRACKER_API UEnum* Z_Construct_UEnum_MagicLeapImageTracker_EMagicLeapImageTargetOrientation();
// End Cross Module References
	static UEnum* ELuminARLineTraceChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel, Z_Construct_UPackage__Script_MagicLeapAR(), TEXT("ELuminARLineTraceChannel"));
		}
		return Singleton;
	}
	template<> MAGICLEAPAR_API UEnum* StaticEnum<ELuminARLineTraceChannel>()
	{
		return ELuminARLineTraceChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminARLineTraceChannel(ELuminARLineTraceChannel_StaticEnum, TEXT("/Script/MagicLeapAR"), TEXT("ELuminARLineTraceChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel_Hash() { return 1151449453U; }
	UEnum* Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapAR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminARLineTraceChannel"), 0, Get_Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminARLineTraceChannel::None", (int64)ELuminARLineTraceChannel::None },
				{ "ELuminARLineTraceChannel::FeaturePoint", (int64)ELuminARLineTraceChannel::FeaturePoint },
				{ "ELuminARLineTraceChannel::InfinitePlane", (int64)ELuminARLineTraceChannel::InfinitePlane },
				{ "ELuminARLineTraceChannel::PlaneUsingExtent", (int64)ELuminARLineTraceChannel::PlaneUsingExtent },
				{ "ELuminARLineTraceChannel::PlaneUsingBoundaryPolygon", (int64)ELuminARLineTraceChannel::PlaneUsingBoundaryPolygon },
				{ "ELuminARLineTraceChannel::FeaturePointWithSurfaceNormal", (int64)ELuminARLineTraceChannel::FeaturePointWithSurfaceNormal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Category", "LuminAR|TraceChannel" },
				{ "Comment", "/**\n * @ingroup LuminARBase\n * Describes which channel ARLineTrace will be performed on.\n */" },
				{ "FeaturePoint.Comment", "/** Trace against feature point cloud. */" },
				{ "FeaturePoint.Name", "ELuminARLineTraceChannel::FeaturePoint" },
				{ "FeaturePoint.ToolTip", "Trace against feature point cloud." },
				{ "FeaturePointWithSurfaceNormal.Comment", "/**\n\x09 * Trace against feature point and attempt to estimate the normal of the surface centered around the trace hit point.\n\x09 * Surface normal estimation is most likely to succeed on textured surfaces and with camera motion.\n\x09 */" },
				{ "FeaturePointWithSurfaceNormal.Name", "ELuminARLineTraceChannel::FeaturePointWithSurfaceNormal" },
				{ "FeaturePointWithSurfaceNormal.ToolTip", "Trace against feature point and attempt to estimate the normal of the surface centered around the trace hit point.\nSurface normal estimation is most likely to succeed on textured surfaces and with camera motion." },
				{ "InfinitePlane.Comment", "/** Trace against the infinite plane. */" },
				{ "InfinitePlane.Name", "ELuminARLineTraceChannel::InfinitePlane" },
				{ "InfinitePlane.ToolTip", "Trace against the infinite plane." },
				{ "ModuleRelativePath", "Public/LuminARTypes.h" },
				{ "None.Name", "ELuminARLineTraceChannel::None" },
				{ "PlaneUsingBoundaryPolygon.Comment", "/** Trace against the plane using its boundary polygon. */" },
				{ "PlaneUsingBoundaryPolygon.Name", "ELuminARLineTraceChannel::PlaneUsingBoundaryPolygon" },
				{ "PlaneUsingBoundaryPolygon.ToolTip", "Trace against the plane using its boundary polygon." },
				{ "PlaneUsingExtent.Comment", "/** Trace against the plane using its extent. */" },
				{ "PlaneUsingExtent.Name", "ELuminARLineTraceChannel::PlaneUsingExtent" },
				{ "PlaneUsingExtent.ToolTip", "Trace against the plane using its extent." },
				{ "ToolTip", "@ingroup LuminARBase\nDescribes which channel ARLineTrace will be performed on." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapAR,
				nullptr,
				"ELuminARLineTraceChannel",
				"ELuminARLineTraceChannel",
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
	static UEnum* ELuminARTrackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState, Z_Construct_UPackage__Script_MagicLeapAR(), TEXT("ELuminARTrackingState"));
		}
		return Singleton;
	}
	template<> MAGICLEAPAR_API UEnum* StaticEnum<ELuminARTrackingState>()
	{
		return ELuminARTrackingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminARTrackingState(ELuminARTrackingState_StaticEnum, TEXT("/Script/MagicLeapAR"), TEXT("ELuminARTrackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState_Hash() { return 4234604796U; }
	UEnum* Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapAR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminARTrackingState"), 0, Get_Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminARTrackingState::Tracking", (int64)ELuminARTrackingState::Tracking },
				{ "ELuminARTrackingState::NotTracking", (int64)ELuminARTrackingState::NotTracking },
				{ "ELuminARTrackingState::StoppedTracking", (int64)ELuminARTrackingState::StoppedTracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * @ingroup LuminARBase\n * Describes the tracking state of the current ARCore session.\n */" },
				{ "ModuleRelativePath", "Public/LuminARTypes.h" },
				{ "NotTracking.Comment", "/** Tracking is temporary lost but could recover in the future. */" },
				{ "NotTracking.Name", "ELuminARTrackingState::NotTracking" },
				{ "NotTracking.ToolTip", "Tracking is temporary lost but could recover in the future." },
				{ "StoppedTracking.Comment", "/** Tracking is lost will not recover. */" },
				{ "StoppedTracking.Name", "ELuminARTrackingState::StoppedTracking" },
				{ "StoppedTracking.ToolTip", "Tracking is lost will not recover." },
				{ "ToolTip", "@ingroup LuminARBase\nDescribes the tracking state of the current ARCore session." },
				{ "Tracking.Comment", "/** Tracking is valid. */" },
				{ "Tracking.Name", "ELuminARTrackingState::Tracking" },
				{ "Tracking.ToolTip", "Tracking is valid." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapAR,
				nullptr,
				"ELuminARTrackingState",
				"ELuminARTrackingState",
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
	DEFINE_FUNCTION(ULuminARLightEstimate::execGetAmbientIntensityNits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetAmbientIntensityNits();
		P_NATIVE_END;
	}
	void ULuminARLightEstimate::StaticRegisterNativesULuminARLightEstimate()
	{
		UClass* Class = ULuminARLightEstimate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmbientIntensityNits", &ULuminARLightEstimate::execGetAmbientIntensityNits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics
	{
		struct LuminARLightEstimate_eventGetAmbientIntensityNits_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARLightEstimate_eventGetAmbientIntensityNits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARLightEstimate, nullptr, "GetAmbientIntensityNits", nullptr, nullptr, sizeof(LuminARLightEstimate_eventGetAmbientIntensityNits_Parms), Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuminARLightEstimate_NoRegister()
	{
		return ULuminARLightEstimate::StaticClass();
	}
	struct Z_Construct_UClass_ULuminARLightEstimate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensityNits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensityNits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AmbientIntensityNits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminARLightEstimate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBasicLightEstimate,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuminARLightEstimate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuminARLightEstimate_GetAmbientIntensityNits, "GetAmbientIntensityNits" }, // 2391252196
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARLightEstimate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "IncludePath", "LuminARTypes.h" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits_Inner = { "AmbientIntensityNits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits_MetaData[] = {
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits = { "AmbientIntensityNits", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARLightEstimate, AmbientIntensityNits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuminARLightEstimate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARLightEstimate_Statics::NewProp_AmbientIntensityNits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminARLightEstimate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminARLightEstimate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminARLightEstimate_Statics::ClassParams = {
		&ULuminARLightEstimate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuminARLightEstimate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARLightEstimate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuminARLightEstimate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARLightEstimate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminARLightEstimate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminARLightEstimate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminARLightEstimate, 3652752546);
	template<> MAGICLEAPAR_API UClass* StaticClass<ULuminARLightEstimate>()
	{
		return ULuminARLightEstimate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminARLightEstimate(Z_Construct_UClass_ULuminARLightEstimate, &ULuminARLightEstimate::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ULuminARLightEstimate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminARLightEstimate);
	DEFINE_FUNCTION(ULuminARCandidateImage::execGetAxisOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapImageTargetOrientation*)Z_Param__Result=P_THIS->GetAxisOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuminARCandidateImage::execGetImageIsStationary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImageIsStationary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuminARCandidateImage::execGetUseUnreliablePose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseUnreliablePose();
		P_NATIVE_END;
	}
	void ULuminARCandidateImage::StaticRegisterNativesULuminARCandidateImage()
	{
		UClass* Class = ULuminARCandidateImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAxisOrientation", &ULuminARCandidateImage::execGetAxisOrientation },
			{ "GetImageIsStationary", &ULuminARCandidateImage::execGetImageIsStationary },
			{ "GetUseUnreliablePose", &ULuminARCandidateImage::execGetUseUnreliablePose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics
	{
		struct LuminARCandidateImage_eventGetAxisOrientation_Parms
		{
			EMagicLeapImageTargetOrientation ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARCandidateImage_eventGetAxisOrientation_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapImageTracker_EMagicLeapImageTargetOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lumin AR Candidate Image" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARCandidateImage, nullptr, "GetAxisOrientation", nullptr, nullptr, sizeof(LuminARCandidateImage_eventGetAxisOrientation_Parms), Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics
	{
		struct LuminARCandidateImage_eventGetImageIsStationary_Parms
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
	void Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LuminARCandidateImage_eventGetImageIsStationary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuminARCandidateImage_eventGetImageIsStationary_Parms), &Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lumin AR Candidate Image" },
		{ "Comment", "/** @see FriendlyName */" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
		{ "ToolTip", "@see FriendlyName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARCandidateImage, nullptr, "GetImageIsStationary", nullptr, nullptr, sizeof(LuminARCandidateImage_eventGetImageIsStationary_Parms), Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics
	{
		struct LuminARCandidateImage_eventGetUseUnreliablePose_Parms
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
	void Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LuminARCandidateImage_eventGetUseUnreliablePose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuminARCandidateImage_eventGetUseUnreliablePose_Parms), &Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lumin AR Candidate Image" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARCandidateImage, nullptr, "GetUseUnreliablePose", nullptr, nullptr, sizeof(LuminARCandidateImage_eventGetUseUnreliablePose_Parms), Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuminARCandidateImage_NoRegister()
	{
		return ULuminARCandidateImage::StaticClass();
	}
	struct Z_Construct_UClass_ULuminARCandidateImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUnreliablePose_MetaData[];
#endif
		static void NewProp_bUseUnreliablePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnreliablePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImageIsStationary_MetaData[];
#endif
		static void NewProp_bImageIsStationary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImageIsStationary;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisOrientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminARCandidateImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARCandidateImage,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuminARCandidateImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuminARCandidateImage_GetAxisOrientation, "GetAxisOrientation" }, // 452308835
		{ &Z_Construct_UFunction_ULuminARCandidateImage_GetImageIsStationary, "GetImageIsStationary" }, // 101896350
		{ &Z_Construct_UFunction_ULuminARCandidateImage_GetUseUnreliablePose, "GetUseUnreliablePose" }, // 3949555742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARCandidateImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lumin AR Candidate Image" },
		{ "IncludePath", "LuminARTypes.h" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose_MetaData[] = {
		{ "Category", "Lumin AR Candidate Image" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	void Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose_SetBit(void* Obj)
	{
		((ULuminARCandidateImage*)Obj)->bUseUnreliablePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose = { "bUseUnreliablePose", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminARCandidateImage), &Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary_MetaData[] = {
		{ "Category", "Lumin AR Candidate Image" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	void Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary_SetBit(void* Obj)
	{
		((ULuminARCandidateImage*)Obj)->bImageIsStationary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary = { "bImageIsStationary", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminARCandidateImage), &Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation_MetaData[] = {
		{ "Category", "Lumin AR Candidate Image" },
		{ "ModuleRelativePath", "Public/LuminARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation = { "AxisOrientation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARCandidateImage, AxisOrientation), Z_Construct_UEnum_MagicLeapImageTracker_EMagicLeapImageTargetOrientation, METADATA_PARAMS(Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuminARCandidateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bUseUnreliablePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_bImageIsStationary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARCandidateImage_Statics::NewProp_AxisOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminARCandidateImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminARCandidateImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminARCandidateImage_Statics::ClassParams = {
		&ULuminARCandidateImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuminARCandidateImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARCandidateImage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuminARCandidateImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARCandidateImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminARCandidateImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminARCandidateImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminARCandidateImage, 632502512);
	template<> MAGICLEAPAR_API UClass* StaticClass<ULuminARCandidateImage>()
	{
		return ULuminARCandidateImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminARCandidateImage(Z_Construct_UClass_ULuminARCandidateImage, &ULuminARCandidateImage::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ULuminARCandidateImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminARCandidateImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
