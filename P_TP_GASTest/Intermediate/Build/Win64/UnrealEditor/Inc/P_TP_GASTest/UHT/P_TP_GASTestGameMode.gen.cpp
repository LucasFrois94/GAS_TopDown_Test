// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_TP_GASTest/P_TP_GASTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_TP_GASTestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
P_TP_GASTEST_API UClass* Z_Construct_UClass_AP_TP_GASTestGameMode();
P_TP_GASTEST_API UClass* Z_Construct_UClass_AP_TP_GASTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_TP_GASTest();
// End Cross Module References

// Begin Class AP_TP_GASTestGameMode
void AP_TP_GASTestGameMode::StaticRegisterNativesAP_TP_GASTestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AP_TP_GASTestGameMode);
UClass* Z_Construct_UClass_AP_TP_GASTestGameMode_NoRegister()
{
	return AP_TP_GASTestGameMode::StaticClass();
}
struct Z_Construct_UClass_AP_TP_GASTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "P_TP_GASTestGameMode.h" },
		{ "ModuleRelativePath", "P_TP_GASTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_TP_GASTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AP_TP_GASTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_P_TP_GASTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_TP_GASTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AP_TP_GASTestGameMode_Statics::ClassParams = {
	&AP_TP_GASTestGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AP_TP_GASTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AP_TP_GASTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AP_TP_GASTestGameMode()
{
	if (!Z_Registration_Info_UClass_AP_TP_GASTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AP_TP_GASTestGameMode.OuterSingleton, Z_Construct_UClass_AP_TP_GASTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AP_TP_GASTestGameMode.OuterSingleton;
}
template<> P_TP_GASTEST_API UClass* StaticClass<AP_TP_GASTestGameMode>()
{
	return AP_TP_GASTestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AP_TP_GASTestGameMode);
AP_TP_GASTestGameMode::~AP_TP_GASTestGameMode() {}
// End Class AP_TP_GASTestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_P_TP_GASTestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AP_TP_GASTestGameMode, AP_TP_GASTestGameMode::StaticClass, TEXT("AP_TP_GASTestGameMode"), &Z_Registration_Info_UClass_AP_TP_GASTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AP_TP_GASTestGameMode), 296432711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_P_TP_GASTestGameMode_h_1650115002(TEXT("/Script/P_TP_GASTest"),
	Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_P_TP_GASTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lucas_Documents_Unreal_Projects_P_TP_GASTest_Source_P_TP_GASTest_P_TP_GASTestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
