// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLGSYSTEM_DlgCondition_generated_h
#error "DlgCondition.generated.h already included, missing '#pragma once' in DlgCondition.h"
#endif
#define DLGSYSTEM_DlgCondition_generated_h

#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgCondition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h


#define FOREACH_ENUM_EDLGCONDITIONSTRENGTH(op) \
	op(EDlgConditionStrength::Strong) \
	op(EDlgConditionStrength::Weak) 

enum class EDlgConditionStrength : uint8;
template<> struct TIsUEnumClass<EDlgConditionStrength> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgConditionStrength>();

#define FOREACH_ENUM_EDLGCONDITIONTYPE(op) \
	op(EDlgConditionType::IntCall) \
	op(EDlgConditionType::FloatCall) \
	op(EDlgConditionType::BoolCall) \
	op(EDlgConditionType::NameCall) \
	op(EDlgConditionType::EventCall) \
	op(EDlgConditionType::ClassIntVariable) \
	op(EDlgConditionType::ClassFloatVariable) \
	op(EDlgConditionType::ClassBoolVariable) \
	op(EDlgConditionType::ClassNameVariable) \
	op(EDlgConditionType::WasNodeVisited) \
	op(EDlgConditionType::HasSatisfiedChild) \
	op(EDlgConditionType::Custom) 

enum class EDlgConditionType : uint8;
template<> struct TIsUEnumClass<EDlgConditionType> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgConditionType>();

#define FOREACH_ENUM_EDLGOPERATION(op) \
	op(EDlgOperation::Equal) \
	op(EDlgOperation::NotEqual) \
	op(EDlgOperation::Less) \
	op(EDlgOperation::LessOrEqual) \
	op(EDlgOperation::Greater) \
	op(EDlgOperation::GreaterOrEqual) 

enum class EDlgOperation : uint8;
template<> struct TIsUEnumClass<EDlgOperation> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgOperation>();

#define FOREACH_ENUM_EDLGCOMPARE(op) \
	op(EDlgCompare::ToConst) \
	op(EDlgCompare::ToVariable) \
	op(EDlgCompare::ToClassVariable) 

enum class EDlgCompare : uint8;
template<> struct TIsUEnumClass<EDlgCompare> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgCompare>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
