// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_TP_GASTest/AttributeSets/PlayerAttributes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributes() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
P_TP_GASTEST_API UClass* Z_Construct_UClass_UPlayerAttributes();
P_TP_GASTEST_API UClass* Z_Construct_UClass_UPlayerAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_TP_GASTest();
// End Cross Module References

// Begin Class UPlayerAttributes
void UPlayerAttributes::StaticRegisterNativesUPlayerAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAttributes);
UClass* Z_Construct_UClass_UPlayerAttributes_NoRegister()
{
	return UPlayerAttributes::StaticClass();
}
struct Z_Construct_UClass_UPlayerAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeSets/PlayerAttributes.h" },
		{ "ModuleRelativePath", "AttributeSets/PlayerAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current Health\n" },
#endif
		{ "ModuleRelativePath", "AttributeSets/PlayerAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Max Health\n" },
#endif
		{ "ModuleRelativePath", "AttributeSets/PlayerAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current Mana\n" },
#endif
		{ "ModuleRelativePath", "AttributeSets/PlayerAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Max Mana\n" },
#endif
		{ "ModuleRelativePath", "AttributeSets/PlayerAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attack Speed\n" },
#endif
		{ "ModuleRelativePath", "AttributeSets/PlayerAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack Speed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributes, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributes, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributes, CurrentMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributes, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributes, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_AttackSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_P_TP_GASTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributes_Statics::ClassParams = {
	&UPlayerAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAttributes()
{
	if (!Z_Registration_Info_UClass_UPlayerAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAttributes.OuterSingleton, Z_Construct_UClass_UPlayerAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAttributes.OuterSingleton;
}
template<> P_TP_GASTEST_API UClass* StaticClass<UPlayerAttributes>()
{
	return UPlayerAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributes);
UPlayerAttributes::~UPlayerAttributes() {}
// End Class UPlayerAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_P_TP_GASTest_Source_P_TP_GASTest_AttributeSets_PlayerAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttributes, UPlayerAttributes::StaticClass, TEXT("UPlayerAttributes"), &Z_Registration_Info_UClass_UPlayerAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttributes), 1460735436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_TP_GASTest_Source_P_TP_GASTest_AttributeSets_PlayerAttributes_h_1438158988(TEXT("/Script/P_TP_GASTest"),
	Z_CompiledInDeferFile_FID_P_TP_GASTest_Source_P_TP_GASTest_AttributeSets_PlayerAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_TP_GASTest_Source_P_TP_GASTest_AttributeSets_PlayerAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
