// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSGAME_FPSSpecialProjectile_generated_h
#error "FPSSpecialProjectile.generated.h already included, missing '#pragma once' in FPSSpecialProjectile.h"
#endif
#define FPSGAME_FPSSpecialProjectile_generated_h

#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_SPARSE_DATA
#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSSpecialProjectile(); \
	friend struct Z_Construct_UClass_AFPSSpecialProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSSpecialProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSSpecialProjectile)


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFPSSpecialProjectile(); \
	friend struct Z_Construct_UClass_AFPSSpecialProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSSpecialProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSSpecialProjectile)


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSSpecialProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSSpecialProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSSpecialProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSSpecialProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSSpecialProjectile(AFPSSpecialProjectile&&); \
	NO_API AFPSSpecialProjectile(const AFPSSpecialProjectile&); \
public:


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSSpecialProjectile(AFPSSpecialProjectile&&); \
	NO_API AFPSSpecialProjectile(const AFPSSpecialProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSSpecialProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSSpecialProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSSpecialProjectile)


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPSSpecialProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__BombClass() { return STRUCT_OFFSET(AFPSSpecialProjectile, BombClass); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPSSpecialProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionTemplate() { return STRUCT_OFFSET(AFPSSpecialProjectile, ExplosionTemplate); }


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_14_PROLOG
#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_SPARSE_DATA \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_RPC_WRAPPERS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_INCLASS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_SPARSE_DATA \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_INCLASS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSSpecialProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleFPSTemplate_master_4_26_Source_FPSGame_Public_FPSSpecialProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
