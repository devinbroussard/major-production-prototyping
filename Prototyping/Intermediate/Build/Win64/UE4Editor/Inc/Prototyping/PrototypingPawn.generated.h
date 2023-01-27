// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPING_PrototypingPawn_generated_h
#error "PrototypingPawn.generated.h already included, missing '#pragma once' in PrototypingPawn.h"
#endif
#define PROTOTYPING_PrototypingPawn_generated_h

#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_SPARSE_DATA
#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_RPC_WRAPPERS
#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypingPawn(); \
	friend struct Z_Construct_UClass_APrototypingPawn_Statics; \
public: \
	DECLARE_CLASS(APrototypingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototyping"), NO_API) \
	DECLARE_SERIALIZER(APrototypingPawn)


#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypingPawn(); \
	friend struct Z_Construct_UClass_APrototypingPawn_Statics; \
public: \
	DECLARE_CLASS(APrototypingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototyping"), NO_API) \
	DECLARE_SERIALIZER(APrototypingPawn)


#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypingPawn(APrototypingPawn&&); \
	NO_API APrototypingPawn(const APrototypingPawn&); \
public:


#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypingPawn(APrototypingPawn&&); \
	NO_API APrototypingPawn(const APrototypingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypingPawn)


#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(APrototypingPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APrototypingPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APrototypingPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(APrototypingPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(APrototypingPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(APrototypingPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(APrototypingPawn, MinSpeed); }


#define Prototyping_Source_Prototyping_PrototypingPawn_h_8_PROLOG
#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_SPARSE_DATA \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_RPC_WRAPPERS \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_INCLASS \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototyping_Source_Prototyping_PrototypingPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_SPARSE_DATA \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_INCLASS_NO_PURE_DECLS \
	Prototyping_Source_Prototyping_PrototypingPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPING_API UClass* StaticClass<class APrototypingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototyping_Source_Prototyping_PrototypingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
