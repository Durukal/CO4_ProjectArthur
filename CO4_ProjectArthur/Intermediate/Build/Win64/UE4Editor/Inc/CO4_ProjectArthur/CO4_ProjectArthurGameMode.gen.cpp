// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO4_ProjectArthur/CO4_ProjectArthurGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCO4_ProjectArthurGameMode() {}
// Cross Module References
	CO4_PROJECTARTHUR_API UClass* Z_Construct_UClass_ACO4_ProjectArthurGameMode_NoRegister();
	CO4_PROJECTARTHUR_API UClass* Z_Construct_UClass_ACO4_ProjectArthurGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CO4_ProjectArthur();
// End Cross Module References
	void ACO4_ProjectArthurGameMode::StaticRegisterNativesACO4_ProjectArthurGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACO4_ProjectArthurGameMode_NoRegister()
	{
		return ACO4_ProjectArthurGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CO4_ProjectArthur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CO4_ProjectArthurGameMode.h" },
		{ "ModuleRelativePath", "CO4_ProjectArthurGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACO4_ProjectArthurGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::ClassParams = {
		&ACO4_ProjectArthurGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACO4_ProjectArthurGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACO4_ProjectArthurGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACO4_ProjectArthurGameMode, 2077745911);
	template<> CO4_PROJECTARTHUR_API UClass* StaticClass<ACO4_ProjectArthurGameMode>()
	{
		return ACO4_ProjectArthurGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACO4_ProjectArthurGameMode(Z_Construct_UClass_ACO4_ProjectArthurGameMode, &ACO4_ProjectArthurGameMode::StaticClass, TEXT("/Script/CO4_ProjectArthur"), TEXT("ACO4_ProjectArthurGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACO4_ProjectArthurGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
