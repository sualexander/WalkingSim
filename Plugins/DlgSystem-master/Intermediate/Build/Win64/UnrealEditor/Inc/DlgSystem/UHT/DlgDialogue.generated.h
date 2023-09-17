// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgDialogue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FDlgParticipantData;
class UDlgNode;
class UObject;
struct FDlgParticipantClass;
struct FGuid;
#ifdef DLGSYSTEM_DlgDialogue_generated_h
#error "DlgDialogue.generated.h already included, missing '#pragma once' in DlgDialogue.h"
#endif
#define DLGSYSTEM_DlgDialogue_generated_h

#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgParticipantClass_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgParticipantClass>();

#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_SPARSE_DATA
#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableStartNodes); \
	DECLARE_FUNCTION(execGetMutableStartNode); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID); \
	DECLARE_FUNCTION(execGetDialogueFName); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogueVersion); \
	DECLARE_FUNCTION(execGetClassTextNames); \
	DECLARE_FUNCTION(execGetClassNameNames); \
	DECLARE_FUNCTION(execGetClassBoolNames); \
	DECLARE_FUNCTION(execGetClassFloatNames); \
	DECLARE_FUNCTION(execGetClassIntNames); \
	DECLARE_FUNCTION(execGetNameNames); \
	DECLARE_FUNCTION(execGetBoolNames); \
	DECLARE_FUNCTION(execGetFloatNames); \
	DECLARE_FUNCTION(execGetIntNames); \
	DECLARE_FUNCTION(execGetCustomEvents); \
	DECLARE_FUNCTION(execGetEvents); \
	DECLARE_FUNCTION(execGetConditions); \
	DECLARE_FUNCTION(execGetAllSpeakerStates); \
	DECLARE_FUNCTION(execGetAllParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantClassFTextNames); \
	DECLARE_FUNCTION(execGetParticipantClassFNameNames); \
	DECLARE_FUNCTION(execGetParticipantClassBoolNames); \
	DECLARE_FUNCTION(execGetParticipantClassFloatNames); \
	DECLARE_FUNCTION(execGetParticipantClassIntNames); \
	DECLARE_FUNCTION(execGetParticipantFNameNames); \
	DECLARE_FUNCTION(execGetParticipantBoolNames); \
	DECLARE_FUNCTION(execGetParticipantFloatNames); \
	DECLARE_FUNCTION(execGetParticipantIntNames); \
	DECLARE_FUNCTION(execGetParticipantCustomTextArguments); \
	DECLARE_FUNCTION(execGetParticipantCustomConditions); \
	DECLARE_FUNCTION(execGetParticipantCustomEvents); \
	DECLARE_FUNCTION(execGetParticipantFunctionNames); \
	DECLARE_FUNCTION(execGetParticipantEventNames); \
	DECLARE_FUNCTION(execGetParticipantConditionNames); \
	DECLARE_FUNCTION(execGetSpeakerStates); \
	DECLARE_FUNCTION(execGetParticipantClass); \
	DECLARE_FUNCTION(execGetParticipantClasses); \
	DECLARE_FUNCTION(execGetParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantsNum); \
	DECLARE_FUNCTION(execHasParticipant); \
	DECLARE_FUNCTION(execGetParticipantsData);


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableStartNodes); \
	DECLARE_FUNCTION(execGetMutableStartNode); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID); \
	DECLARE_FUNCTION(execGetDialogueFName); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogueVersion); \
	DECLARE_FUNCTION(execGetClassTextNames); \
	DECLARE_FUNCTION(execGetClassNameNames); \
	DECLARE_FUNCTION(execGetClassBoolNames); \
	DECLARE_FUNCTION(execGetClassFloatNames); \
	DECLARE_FUNCTION(execGetClassIntNames); \
	DECLARE_FUNCTION(execGetNameNames); \
	DECLARE_FUNCTION(execGetBoolNames); \
	DECLARE_FUNCTION(execGetFloatNames); \
	DECLARE_FUNCTION(execGetIntNames); \
	DECLARE_FUNCTION(execGetCustomEvents); \
	DECLARE_FUNCTION(execGetEvents); \
	DECLARE_FUNCTION(execGetConditions); \
	DECLARE_FUNCTION(execGetAllSpeakerStates); \
	DECLARE_FUNCTION(execGetAllParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantClassFTextNames); \
	DECLARE_FUNCTION(execGetParticipantClassFNameNames); \
	DECLARE_FUNCTION(execGetParticipantClassBoolNames); \
	DECLARE_FUNCTION(execGetParticipantClassFloatNames); \
	DECLARE_FUNCTION(execGetParticipantClassIntNames); \
	DECLARE_FUNCTION(execGetParticipantFNameNames); \
	DECLARE_FUNCTION(execGetParticipantBoolNames); \
	DECLARE_FUNCTION(execGetParticipantFloatNames); \
	DECLARE_FUNCTION(execGetParticipantIntNames); \
	DECLARE_FUNCTION(execGetParticipantCustomTextArguments); \
	DECLARE_FUNCTION(execGetParticipantCustomConditions); \
	DECLARE_FUNCTION(execGetParticipantCustomEvents); \
	DECLARE_FUNCTION(execGetParticipantFunctionNames); \
	DECLARE_FUNCTION(execGetParticipantEventNames); \
	DECLARE_FUNCTION(execGetParticipantConditionNames); \
	DECLARE_FUNCTION(execGetSpeakerStates); \
	DECLARE_FUNCTION(execGetParticipantClass); \
	DECLARE_FUNCTION(execGetParticipantClasses); \
	DECLARE_FUNCTION(execGetParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantsNum); \
	DECLARE_FUNCTION(execHasParticipant); \
	DECLARE_FUNCTION(execGetParticipantsData);


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ACCESSORS
#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgDialogue, NO_API)


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgDialogue(); \
	friend struct Z_Construct_UClass_UDlgDialogue_Statics; \
public: \
	DECLARE_CLASS(UDlgDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgDialogue) \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ARCHIVESERIALIZER


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUDlgDialogue(); \
	friend struct Z_Construct_UClass_UDlgDialogue_Statics; \
public: \
	DECLARE_CLASS(UDlgDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgDialogue) \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ARCHIVESERIALIZER


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgDialogue(UDlgDialogue&&); \
	NO_API UDlgDialogue(const UDlgDialogue&); \
public: \
	NO_API virtual ~UDlgDialogue();


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgDialogue(UDlgDialogue&&); \
	NO_API UDlgDialogue(const UDlgDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogue) \
	NO_API virtual ~UDlgDialogue();


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_74_PROLOG
#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_SPARSE_DATA \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_RPC_WRAPPERS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ACCESSORS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_INCLASS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_SPARSE_DATA \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ACCESSORS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_INCLASS_NO_PURE_DECLS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
