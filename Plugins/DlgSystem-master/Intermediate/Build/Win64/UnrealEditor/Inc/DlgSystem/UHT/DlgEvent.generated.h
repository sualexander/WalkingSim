// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLGSYSTEM_DlgEvent_generated_h
#error "DlgEvent.generated.h already included, missing '#pragma once' in DlgEvent.h"
#endif
#define DLGSYSTEM_DlgEvent_generated_h

#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h


#define FOREACH_ENUM_EDLGEVENTTYPE(op) \
	op(EDlgEventType::Event) \
	op(EDlgEventType::ModifyInt) \
	op(EDlgEventType::ModifyFloat) \
	op(EDlgEventType::ModifyBool) \
	op(EDlgEventType::ModifyName) \
	op(EDlgEventType::ModifyClassIntVariable) \
	op(EDlgEventType::ModifyClassFloatVariable) \
	op(EDlgEventType::ModifyClassBoolVariable) \
	op(EDlgEventType::ModifyClassNameVariable) \
	op(EDlgEventType::Custom) \
	op(EDlgEventType::UnrealFunction) 

enum class EDlgEventType : uint8;
template<> struct TIsUEnumClass<EDlgEventType> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
