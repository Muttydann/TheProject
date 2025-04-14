// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TheProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TheProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TheProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TheProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xED3E2EA4,
				0xD814A20B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TheProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TheProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TheProject(Z_Construct_UPackage__Script_TheProject, TEXT("/Script/TheProject"), Z_Registration_Info_UPackage__Script_TheProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xED3E2EA4, 0xD814A20B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
