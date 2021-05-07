// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT3_CubeActor_generated_h
#error "CubeActor.generated.h already included, missing '#pragma once' in CubeActor.h"
#endif
#define PROJECT3_CubeActor_generated_h

#define Project3_Source_Project3_Public_CubeActor_h_15_SPARSE_DATA
#define Project3_Source_Project3_Public_CubeActor_h_15_RPC_WRAPPERS
#define Project3_Source_Project3_Public_CubeActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Project3_Source_Project3_Public_CubeActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubeActor(); \
	friend struct Z_Construct_UClass_ACubeActor_Statics; \
public: \
	DECLARE_CLASS(ACubeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project3"), NO_API) \
	DECLARE_SERIALIZER(ACubeActor)


#define Project3_Source_Project3_Public_CubeActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACubeActor(); \
	friend struct Z_Construct_UClass_ACubeActor_Statics; \
public: \
	DECLARE_CLASS(ACubeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project3"), NO_API) \
	DECLARE_SERIALIZER(ACubeActor)


#define Project3_Source_Project3_Public_CubeActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACubeActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeActor(ACubeActor&&); \
	NO_API ACubeActor(const ACubeActor&); \
public:


#define Project3_Source_Project3_Public_CubeActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeActor(ACubeActor&&); \
	NO_API ACubeActor(const ACubeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubeActor)


#define Project3_Source_Project3_Public_CubeActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CubeMesh() { return STRUCT_OFFSET(ACubeActor, CubeMesh); } \
	FORCEINLINE static uint32 __PPO__Universalis() { return STRUCT_OFFSET(ACubeActor, Universalis); } \
	FORCEINLINE static uint32 __PPO__RetainerName() { return STRUCT_OFFSET(ACubeActor, RetainerName); } \
	FORCEINLINE static uint32 __PPO__Price() { return STRUCT_OFFSET(ACubeActor, Price); }


#define Project3_Source_Project3_Public_CubeActor_h_12_PROLOG
#define Project3_Source_Project3_Public_CubeActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project3_Source_Project3_Public_CubeActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Project3_Source_Project3_Public_CubeActor_h_15_SPARSE_DATA \
	Project3_Source_Project3_Public_CubeActor_h_15_RPC_WRAPPERS \
	Project3_Source_Project3_Public_CubeActor_h_15_INCLASS \
	Project3_Source_Project3_Public_CubeActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project3_Source_Project3_Public_CubeActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project3_Source_Project3_Public_CubeActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Project3_Source_Project3_Public_CubeActor_h_15_SPARSE_DATA \
	Project3_Source_Project3_Public_CubeActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project3_Source_Project3_Public_CubeActor_h_15_INCLASS_NO_PURE_DECLS \
	Project3_Source_Project3_Public_CubeActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT3_API UClass* StaticClass<class ACubeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project3_Source_Project3_Public_CubeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
