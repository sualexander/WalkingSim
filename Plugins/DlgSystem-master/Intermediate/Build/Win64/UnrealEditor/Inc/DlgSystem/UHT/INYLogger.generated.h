// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Logging/INYLogger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLGSYSTEM_INYLogger_generated_h
#error "INYLogger.generated.h already included, missing '#pragma once' in INYLogger.h"
#endif
#define DLGSYSTEM_INYLogger_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Logging_INYLogger_h


#define FOREACH_ENUM_ENYLOGGERLOGLEVEL(op) \
	op(ENYLoggerLogLevel::NoLogging) \
	op(ENYLoggerLogLevel::Error) \
	op(ENYLoggerLogLevel::Warning) \
	op(ENYLoggerLogLevel::Info) \
	op(ENYLoggerLogLevel::Debug) \
	op(ENYLoggerLogLevel::Trace) 

enum class ENYLoggerLogLevel : uint8;
template<> struct TIsUEnumClass<ENYLoggerLogLevel> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<ENYLoggerLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
