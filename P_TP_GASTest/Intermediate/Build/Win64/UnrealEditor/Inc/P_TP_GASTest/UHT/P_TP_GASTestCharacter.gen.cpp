// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_TP_GASTest/Character/P_TP_GASTestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_TP_GASTestCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
P_TP_GASTEST_API UClass* Z_Construct_UClass_AP_TP_GASTestCharacter();
P_TP_GASTEST_API UClass* Z_Construct_UClass_AP_TP_GASTestCharacter_NoRegister();
P_TP_GASTEST_API UClass* Z_Construct_UClass_UPlayerAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_TP_GASTest();
// End Cross Module References

// Begin Class AP_TP_GASTestCharacter
void AP_TP_GASTestCharacter::StaticRegisterNativesAP_TP_GASTestCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AP_TP_GASTestCharacter);
UClass* Z_Construct_UClass_AP_TP_GASTestCharacter_NoRegister()
{
	return AP_TP_GASTestCharacter::StaticClass();
}
struct Z_Construct_UClass_AP_TP_GASTestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/P_TP_GASTestCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/P_TP_GASTestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitiySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ability System Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/P_TP_GASTestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAttributeSet_MetaData[] = {
		{ "Category", "AbilitiySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/P_TP_GASTestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASCReplicationMode_MetaData[] = {
		{ "Category", "AbilitiySystem" },
		{ "ModuleRelativePath", "Character/P_TP_GASTestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAttributeSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ASCReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ASCReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_TP_GASTestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_TP_GASTestCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_PlayerAttributeSet = { "PlayerAttributeSet", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_TP_GASTestCharacter, PlayerAttributeSet), Z_Construct_UClass_UPlayerAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAttributeSet_MetaData), NewProp_PlayerAttributeSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_ASCReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_ASCReplicationMode = { "ASCReplicationMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_TP_GASTestCharacter, ASCReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASCReplicationMode_MetaData), NewProp_ASCReplicationMode_MetaData) }; // 3979288675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_PlayerAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_ASCReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::NewProp_ASCReplicationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_P_TP_GASTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AP_TP_GASTestCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::ClassParams = {
	&AP_TP_GASTestCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AP_TP_GASTestCharacter()
{
	if (!Z_Registration_Info_UClass_AP_TP_GASTestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AP_TP_GASTestCharacter.OuterSingleton, Z_Construct_UClass_AP_TP_GASTestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AP_TP_GASTestCharacter.OuterSingleton;
}
template<> P_TP_GASTEST_API UClass* StaticClass<AP_TP_GASTestCharacter>()
{
	return AP_TP_GASTestCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AP_TP_GASTestCharacter);
AP_TP_GASTestCharacter::~AP_TP_GASTestCharacter() {}
// End Class AP_TP_GASTestCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Character_P_TP_GASTestCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AP_TP_GASTestCharacter, AP_TP_GASTestCharacter::StaticClass, TEXT("AP_TP_GASTestCharacter"), &Z_Registration_Info_UClass_AP_TP_GASTestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AP_TP_GASTestCharacter), 2090596057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Character_P_TP_GASTestCharacter_h_2839557401(TEXT("/Script/P_TP_GASTest"),
	Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Character_P_TP_GASTestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_Character_P_TP_GASTestCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
