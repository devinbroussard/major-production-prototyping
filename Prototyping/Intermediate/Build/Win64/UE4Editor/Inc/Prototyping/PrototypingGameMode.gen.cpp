// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototyping/PrototypingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypingGameMode() {}
// Cross Module References
	PROTOTYPING_API UClass* Z_Construct_UClass_APrototypingGameMode_NoRegister();
	PROTOTYPING_API UClass* Z_Construct_UClass_APrototypingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prototyping();
// End Cross Module References
	void APrototypingGameMode::StaticRegisterNativesAPrototypingGameMode()
	{
	}
	UClass* Z_Construct_UClass_APrototypingGameMode_NoRegister()
	{
		return APrototypingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrototypingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototyping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PrototypingGameMode.h" },
		{ "ModuleRelativePath", "PrototypingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrototypingGameMode_Statics::ClassParams = {
		&APrototypingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrototypingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototypingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrototypingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrototypingGameMode, 437860132);
	template<> PROTOTYPING_API UClass* StaticClass<APrototypingGameMode>()
	{
		return APrototypingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototypingGameMode(Z_Construct_UClass_APrototypingGameMode, &APrototypingGameMode::StaticClass, TEXT("/Script/Prototyping"), TEXT("APrototypingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
