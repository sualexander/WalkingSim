// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Logging/INYLogger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINYLogger() {}
// Cross Module References
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENYLoggerLogLevel;
	static UEnum* ENYLoggerLogLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENYLoggerLogLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENYLoggerLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("ENYLoggerLogLevel"));
		}
		return Z_Registration_Info_UEnum_ENYLoggerLogLevel.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<ENYLoggerLogLevel>()
	{
		return ENYLoggerLogLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::Enumerators[] = {
		{ "ENYLoggerLogLevel::NoLogging", (int64)ENYLoggerLogLevel::NoLogging },
		{ "ENYLoggerLogLevel::Error", (int64)ENYLoggerLogLevel::Error },
		{ "ENYLoggerLogLevel::Warning", (int64)ENYLoggerLogLevel::Warning },
		{ "ENYLoggerLogLevel::Info", (int64)ENYLoggerLogLevel::Info },
		{ "ENYLoggerLogLevel::Debug", (int64)ENYLoggerLogLevel::Debug },
		{ "ENYLoggerLogLevel::Trace", (int64)ENYLoggerLogLevel::Trace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::Enum_MetaDataParams[] = {
		{ "Debug.Comment", "// Verbose\n" },
		{ "Debug.Name", "ENYLoggerLogLevel::Debug" },
		{ "Debug.ToolTip", "Verbose" },
		{ "Error.Comment", "// Kills the program\n// TODO use\n// Fatal,\n" },
		{ "Error.Name", "ENYLoggerLogLevel::Error" },
		{ "Error.ToolTip", "Kills the program\nTODO use\nFatal," },
		{ "Info.Comment", "// Log\n" },
		{ "Info.Name", "ENYLoggerLogLevel::Info" },
		{ "Info.ToolTip", "Log" },
		{ "ModuleRelativePath", "Logging/INYLogger.h" },
		{ "NoLogging.Name", "ENYLoggerLogLevel::NoLogging" },
		{ "Trace.Comment", "// VeryVerbose\n// Used for\n" },
		{ "Trace.Name", "ENYLoggerLogLevel::Trace" },
		{ "Trace.ToolTip", "VeryVerbose\nUsed for" },
		{ "Warning.Name", "ENYLoggerLogLevel::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"ENYLoggerLogLevel",
		"ENYLoggerLogLevel",
		Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel()
	{
		if (!Z_Registration_Info_UEnum_ENYLoggerLogLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENYLoggerLogLevel.InnerSingleton, Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENYLoggerLogLevel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Logging_INYLogger_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Logging_INYLogger_h_Statics::EnumInfo[] = {
		{ ENYLoggerLogLevel_StaticEnum, TEXT("ENYLoggerLogLevel"), &Z_Registration_Info_UEnum_ENYLoggerLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1466975387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Logging_INYLogger_h_101734802(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Logging_INYLogger_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Logging_INYLogger_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
