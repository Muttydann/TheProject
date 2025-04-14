// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheProject/TheProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEPROJECT_API UClass* Z_Construct_UClass_ATheProjectGameMode();
THEPROJECT_API UClass* Z_Construct_UClass_ATheProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheProject();
// End Cross Module References

// Begin Class ATheProjectGameMode
void ATheProjectGameMode::StaticRegisterNativesATheProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheProjectGameMode);
UClass* Z_Construct_UClass_ATheProjectGameMode_NoRegister()
{
	return ATheProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ATheProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheProjectGameMode.h" },
		{ "ModuleRelativePath", "TheProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheProjectGameMode_Statics::ClassParams = {
	&ATheProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ATheProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheProjectGameMode.OuterSingleton, Z_Construct_UClass_ATheProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheProjectGameMode.OuterSingleton;
}
template<> THEPROJECT_API UClass* StaticClass<ATheProjectGameMode>()
{
	return ATheProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheProjectGameMode);
ATheProjectGameMode::~ATheProjectGameMode() {}
// End Class ATheProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mrd21_Documents_GitHub_TheProject_TheProject_Source_TheProject_TheProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheProjectGameMode, ATheProjectGameMode::StaticClass, TEXT("ATheProjectGameMode"), &Z_Registration_Info_UClass_ATheProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheProjectGameMode), 2229534804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mrd21_Documents_GitHub_TheProject_TheProject_Source_TheProject_TheProjectGameMode_h_2714336897(TEXT("/Script/TheProject"),
	Z_CompiledInDeferFile_FID_Users_mrd21_Documents_GitHub_TheProject_TheProject_Source_TheProject_TheProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mrd21_Documents_GitHub_TheProject_TheProject_Source_TheProject_TheProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
