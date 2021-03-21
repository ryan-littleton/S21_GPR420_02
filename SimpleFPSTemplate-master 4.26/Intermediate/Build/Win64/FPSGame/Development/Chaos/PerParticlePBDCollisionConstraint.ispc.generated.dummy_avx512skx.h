//
// C:\Users\Alex\Desktop\S21_GPR420_02\SimpleFPSTemplate-master 4.26\Intermediate\Build\Win64\FPSGame\Development\Chaos\PerParticlePBDCollisionConstraint.ispc.generated.dummy_avx512skx.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    float4  V;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyPerParticleCollision(struct FVector * ParticlesP, const struct FVector * ParticlesX, const float * ParticlesInvM, const struct FVector * CollisionV, const struct FVector * CollisionX, const struct FVector * CollisionW, const struct FVector4 * CollisionR, const uint32_t * DynamicGroupIds, const uint32_t * KinematicGroupIds, const float * PerGroupFriction, const float * PerGroupThickness, const uint8_t * CollisionParticles, const uint8_t * Geometry, const int32_t SizeofFImplicitObject, const int32_t OffsetofGeometryType, const int32_t OffsetOfMargin, const float Dt, const int32_t InnerOffset, const int32_t InnerRange, const int32_t OuterOffset, const int32_t OuterRange);
    extern void ApplyPerParticleCollisionFastFriction(struct FVector * ParticlesP, const struct FVector * ParticlesX, const float * ParticlesInvM, const struct FVector * CollisionV, const struct FVector * CollisionX, const struct FVector * CollisionW, const struct FVector4 * CollisionR, const uint32_t DynamicGroupId, const uint32_t * KinematicGroupIds, const float PerGroupFriction, const float PerGroupThickness, const uint8_t * CollisionParticles, const uint8_t * Geometry, const int32_t SizeofFImplicitObject, const int32_t OffsetofGeometryType, const int32_t OffsetOfMargin, const float Dt, const int32_t InnerOffset, const int32_t InnerRange, const int32_t OuterOffset, const int32_t OuterRange);
    extern void ApplyPerParticleCollisionNoFriction(struct FVector * ParticlesP, const struct FVector * ParticlesX, const float * ParticlesInvM, const struct FVector * CollisionV, const struct FVector * CollisionX, const struct FVector * CollisionW, const struct FVector4 * CollisionR, const uint32_t DynamicGroupId, const uint32_t * KinematicGroupIds, const float PerGroupThickness, const uint8_t * CollisionParticles, const uint8_t * Geometry, const int32_t SizeofFImplicitObject, const int32_t OffsetofGeometryType, const int32_t OffsetOfMargin, const float Dt, const int32_t InnerOffset, const int32_t InnerRange, const int32_t OuterOffset, const int32_t OuterRange);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
