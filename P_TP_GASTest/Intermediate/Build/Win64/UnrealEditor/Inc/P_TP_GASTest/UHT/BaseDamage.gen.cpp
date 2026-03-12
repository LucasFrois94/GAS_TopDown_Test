// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_TP_GASTest/Gameplay/Damages/BaseDamage.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDamage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
P_TP_GASTEST_API UClass* Z_Construct_UClass_ABaseDamage();
P_TP_GASTEST_API UClass* Z_Construct_UClass_ABaseDamage_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_TP_GASTest();
// End Cross Module References

// Begin Class ABaseDamage
void ABaseDamage::StaticRegisterNativesABaseDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseDamage);
UClass* Z_Construct_UClass_ABaseDamage_NoRegister()
{
	return ABaseDamage::StaticClass();
}
struct Z_Construct_UClass_ABaseDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/Damages/BaseDamage.h" },
		{ "ModuleRelativePath", "Gameplay/Damages/BaseDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMagnitude_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Gameplay/Damages/BaseDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffect_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Gameplay/Damages/BaseDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Gameplay/Damages/BaseDamage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMagnitude;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseDamage_Statics::NewProp_DamageMagnitude = { "DamageMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseDamage, DamageMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMagnitude_MetaData), NewProp_DamageMagnitude_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseDamage_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseDamage, DamageEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffect_MetaData), NewProp_DamageEffect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseDamage_Statics::NewProp_DamageTag = { "DamageTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseDamage, DamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTag_MetaData), NewProp_DamageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDamage_Statics::NewProp_DamageMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDamage_Statics::NewProp_DamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDamage_Statics::NewProp_DamageTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDamage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_P_TP_GASTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseDamage_Statics::ClassParams = {
	&ABaseDamage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseDamage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDamage_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseDamage()
{
	if (!Z_Registration_Info_UClass_ABaseDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseDamage.OuterSingleton, Z_Construct_UClass_ABaseDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseDamage.OuterSingleton;
}
template<> P_TP_GASTEST_API UClass* StaticClass<ABaseDamage>()
{
	return ABaseDamage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseDamage);
ABaseDamage::~ABaseDamage() {}
// End Class ABaseDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Gameplay_Damages_BaseDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseDamage, ABaseDamage::StaticClass, TEXT("ABaseDamage"), &Z_Registration_Info_UClass_ABaseDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseDamage), 1790301450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Gameplay_Damages_BaseDamage_h_551911427(TEXT("/Script/P_TP_GASTest"),
	Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Gameplay_Damages_BaseDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Gameplay_Damages_BaseDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
