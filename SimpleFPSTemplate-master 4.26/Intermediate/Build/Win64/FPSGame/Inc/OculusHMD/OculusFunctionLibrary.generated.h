// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETrackedDeviceType : uint8;
enum class EBoundaryType : uint8;
struct FGuardianTestResult;
struct FVector;
struct FTransform;
enum class EColorSpace : uint8;
struct FLinearColor;
enum class EOculusDeviceType : uint8;
enum class EFixedFoveatedRenderingLevel : uint8;
class UTexture2D;
struct FRotator;
struct FVector2D;
struct FHmdUserProfile;
#ifdef OCULUSHMD_OculusFunctionLibrary_generated_h
#error "OculusFunctionLibrary.generated.h already included, missing '#pragma once' in OculusFunctionLibrary.h"
#endif
#define OCULUSHMD_OculusFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGuardianTestResult_Statics; \
	OCULUSHMD_API static class UScriptStruct* StaticStruct();


template<> OCULUSHMD_API UScriptStruct* StaticStruct<struct FGuardianTestResult>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHmdUserProfile_Statics; \
	OCULUSHMD_API static class UScriptStruct* StaticStruct();


template<> OCULUSHMD_API UScriptStruct* StaticStruct<struct FHmdUserProfile>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHmdUserProfileField_Statics; \
	OCULUSHMD_API static class UScriptStruct* StaticStruct();


template<> OCULUSHMD_API UScriptStruct* StaticStruct<struct FHmdUserProfileField>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_SPARSE_DATA
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execSetClientColorDesc); \
	DECLARE_FUNCTION(execGetHmdColorDesc); \
	DECLARE_FUNCTION(execGetSystemHmd3DofModeEnabled); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execSetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetReorientHMDOnControllerRecenter); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execSetClientColorDesc); \
	DECLARE_FUNCTION(execGetHmdColorDesc); \
	DECLARE_FUNCTION(execGetSystemHmd3DofModeEnabled); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execSetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetReorientHMDOnControllerRecenter); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUOculusFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusFunctionLibrary(UOculusFunctionLibrary&&); \
	NO_API UOculusFunctionLibrary(const UOculusFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusFunctionLibrary(UOculusFunctionLibrary&&); \
	NO_API UOculusFunctionLibrary(const UOculusFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_182_PROLOG
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_SPARSE_DATA \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_INCLASS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_SPARSE_DATA \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_185_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSHMD_API UClass* StaticClass<class UOculusFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h


#define FOREACH_ENUM_EOCULUSDEVICETYPE(op) \
	op(EOculusDeviceType::OculusMobile_Deprecated0) \
	op(EOculusDeviceType::OculusQuest) \
	op(EOculusDeviceType::OculusQuest2) \
	op(EOculusDeviceType::Rift) \
	op(EOculusDeviceType::Rift_S) \
	op(EOculusDeviceType::Quest_Link) \
	op(EOculusDeviceType::OculusUnknown) 

enum class EOculusDeviceType : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<EOculusDeviceType>();

#define FOREACH_ENUM_EHANDTRACKINGSUPPORT(op) \
	op(EHandTrackingSupport::ControllersOnly) \
	op(EHandTrackingSupport::ControllersAndHands) \
	op(EHandTrackingSupport::HandsOnly) 

enum class EHandTrackingSupport : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<EHandTrackingSupport>();

#define FOREACH_ENUM_ECOLORSPACE(op) \
	op(EColorSpace::Unknown) \
	op(EColorSpace::Unmanaged) \
	op(EColorSpace::Rec_2020) \
	op(EColorSpace::Rec_709) \
	op(EColorSpace::Rift_CV1) \
	op(EColorSpace::Rift_S) \
	op(EColorSpace::Quest) \
	op(EColorSpace::P3) \
	op(EColorSpace::Adobe_RGB) 

enum class EColorSpace : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<EColorSpace>();

#define FOREACH_ENUM_EBOUNDARYTYPE(op) \
	op(EBoundaryType::Boundary_Outer) \
	op(EBoundaryType::Boundary_PlayArea) 

enum class EBoundaryType : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<EBoundaryType>();

#define FOREACH_ENUM_EFIXEDFOVEATEDRENDERINGLEVEL(op) \
	op(EFixedFoveatedRenderingLevel::FFR_Off) \
	op(EFixedFoveatedRenderingLevel::FFR_Low) \
	op(EFixedFoveatedRenderingLevel::FFR_Medium) \
	op(EFixedFoveatedRenderingLevel::FFR_High) \
	op(EFixedFoveatedRenderingLevel::FFR_HighTop) 

enum class EFixedFoveatedRenderingLevel : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<EFixedFoveatedRenderingLevel>();

#define FOREACH_ENUM_ETRACKEDDEVICETYPE(op) \
	op(ETrackedDeviceType::None) \
	op(ETrackedDeviceType::HMD) \
	op(ETrackedDeviceType::LTouch) \
	op(ETrackedDeviceType::RTouch) \
	op(ETrackedDeviceType::Touch) \
	op(ETrackedDeviceType::DeviceObjectZero) \
	op(ETrackedDeviceType::All) 

enum class ETrackedDeviceType : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<ETrackedDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
