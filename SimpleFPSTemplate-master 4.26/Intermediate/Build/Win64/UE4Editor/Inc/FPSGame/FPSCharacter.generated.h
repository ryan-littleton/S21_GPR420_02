// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSGAME_FPSCharacter_generated_h

#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_20_DELEGATE \
static inline void FMultiCast_DelegateWrapper(const FMulticastScriptDelegate& MultiCast) \
{ \
	MultiCast.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_SPARSE_DATA
#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCooldown); \
	DECLARE_FUNCTION(execActivateMulticast); \
	DECLARE_FUNCTION(execBeginMulticast); \
	DECLARE_FUNCTION(execRunSpecialAttack); \
	DECLARE_FUNCTION(execSpecialAttack);


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCooldown); \
	DECLARE_FUNCTION(execActivateMulticast); \
	DECLARE_FUNCTION(execBeginMulticast); \
	DECLARE_FUNCTION(execRunSpecialAttack); \
	DECLARE_FUNCTION(execSpecialAttack);


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1PComponent() { return STRUCT_OFFSET(AFPSCharacter, Mesh1PComponent); } \
	FORCEINLINE static uint32 __PPO__GunMeshComponent() { return STRUCT_OFFSET(AFPSCharacter, GunMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AFPSCharacter, CameraComponent); }


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_22_PROLOG
#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_SPARSE_DATA \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_RPC_WRAPPERS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_INCLASS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_SPARSE_DATA \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_INCLASS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
