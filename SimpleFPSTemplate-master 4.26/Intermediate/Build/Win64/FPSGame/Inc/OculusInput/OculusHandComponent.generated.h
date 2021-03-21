// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSINPUT_OculusHandComponent_generated_h
#error "OculusHandComponent.generated.h already included, missing '#pragma once' in OculusHandComponent.h"
#endif
#define OCULUSINPUT_OculusHandComponent_generated_h

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_SPARSE_DATA
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_RPC_WRAPPERS
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusHandComponent(); \
	friend struct Z_Construct_UClass_UOculusHandComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusHandComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInput"), NO_API) \
	DECLARE_SERIALIZER(UOculusHandComponent)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUOculusHandComponent(); \
	friend struct Z_Construct_UClass_UOculusHandComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusHandComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInput"), NO_API) \
	DECLARE_SERIALIZER(UOculusHandComponent)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusHandComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusHandComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusHandComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusHandComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusHandComponent(UOculusHandComponent&&); \
	NO_API UOculusHandComponent(const UOculusHandComponent&); \
public:


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusHandComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusHandComponent(UOculusHandComponent&&); \
	NO_API UOculusHandComponent(const UOculusHandComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusHandComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusHandComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusHandComponent)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_24_PROLOG
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_SPARSE_DATA \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_INCLASS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_SPARSE_DATA \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusHandComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSINPUT_API UClass* StaticClass<class UOculusHandComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h


#define FOREACH_ENUM_ESYSTEMGESTUREBEHAVIOR(op) \
	op(ESystemGestureBehavior::None) \
	op(ESystemGestureBehavior::SwapMaterial) 

enum class ESystemGestureBehavior : uint8;
template<> OCULUSINPUT_API UEnum* StaticEnum<ESystemGestureBehavior>();

#define FOREACH_ENUM_ECONFIDENCEBEHAVIOR(op) \
	op(EConfidenceBehavior::None) \
	op(EConfidenceBehavior::HideActor) 

enum class EConfidenceBehavior : uint8;
template<> OCULUSINPUT_API UEnum* StaticEnum<EConfidenceBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
