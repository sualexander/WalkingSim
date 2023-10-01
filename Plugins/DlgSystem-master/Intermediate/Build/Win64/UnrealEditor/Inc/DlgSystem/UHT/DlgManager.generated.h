// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FDlgObjectsArray;
class UDlgContext;
class UDlgDialogue;
class UObject;
class UWorld;
struct FGuid;
struct FGuid; struct FDlgHistory;
#ifdef DLGSYSTEM_DlgManager_generated_h
#error "DlgManager.generated.h already included, missing '#pragma once' in DlgManager.h"
#endif
#define DLGSYSTEM_DlgManager_generated_h

#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgObjectsArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgObjectsArray>();

#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_SPARSE_DATA
#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execSetDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execGetDialogueWorld); \
	DECLARE_FUNCTION(execUnregisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execRegisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execGetAllDialoguesEventNames); \
	DECLARE_FUNCTION(execGetAllDialoguesConditionNames); \
	DECLARE_FUNCTION(execGetAllDialoguesNameNames); \
	DECLARE_FUNCTION(execGetAllDialoguesBoolNames); \
	DECLARE_FUNCTION(execGetAllDialoguesFloatNames); \
	DECLARE_FUNCTION(execGetAllDialoguesIntNames); \
	DECLARE_FUNCTION(execGetAllDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetAllDialoguesParticipantNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantEventNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantConditionNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantFNameNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantBoolNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantFloatNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantIntNames); \
	DECLARE_FUNCTION(execGetDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetDialoguesParticipantNames); \
	DECLARE_FUNCTION(execIsObjectANodeData); \
	DECLARE_FUNCTION(execIsObjectACustomTextArgument); \
	DECLARE_FUNCTION(execIsObjectACustomCondition); \
	DECLARE_FUNCTION(execIsObjectACustomEvent); \
	DECLARE_FUNCTION(execDoesObjectImplementDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetDialogueHistory); \
	DECLARE_FUNCTION(execClearDialogueHistory); \
	DECLARE_FUNCTION(execSetDialogueHistory); \
	DECLARE_FUNCTION(execGetObjectsMapWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetObjectsWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execStartDialogue4); \
	DECLARE_FUNCTION(execStartDialogue3); \
	DECLARE_FUNCTION(execStartDialogue2); \
	DECLARE_FUNCTION(execStartMonologue); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeGUID); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeIndex); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStartDialogueWithDefaultParticipants);


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execSetDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execGetDialogueWorld); \
	DECLARE_FUNCTION(execUnregisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execRegisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execGetAllDialoguesEventNames); \
	DECLARE_FUNCTION(execGetAllDialoguesConditionNames); \
	DECLARE_FUNCTION(execGetAllDialoguesNameNames); \
	DECLARE_FUNCTION(execGetAllDialoguesBoolNames); \
	DECLARE_FUNCTION(execGetAllDialoguesFloatNames); \
	DECLARE_FUNCTION(execGetAllDialoguesIntNames); \
	DECLARE_FUNCTION(execGetAllDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetAllDialoguesParticipantNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantEventNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantConditionNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantFNameNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantBoolNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantFloatNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantIntNames); \
	DECLARE_FUNCTION(execGetDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetDialoguesParticipantNames); \
	DECLARE_FUNCTION(execIsObjectANodeData); \
	DECLARE_FUNCTION(execIsObjectACustomTextArgument); \
	DECLARE_FUNCTION(execIsObjectACustomCondition); \
	DECLARE_FUNCTION(execIsObjectACustomEvent); \
	DECLARE_FUNCTION(execDoesObjectImplementDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetDialogueHistory); \
	DECLARE_FUNCTION(execClearDialogueHistory); \
	DECLARE_FUNCTION(execSetDialogueHistory); \
	DECLARE_FUNCTION(execGetObjectsMapWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetObjectsWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execStartDialogue4); \
	DECLARE_FUNCTION(execStartDialogue3); \
	DECLARE_FUNCTION(execStartDialogue2); \
	DECLARE_FUNCTION(execStartMonologue); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeGUID); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeIndex); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStartDialogueWithDefaultParticipants);


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_ACCESSORS
#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgManager(); \
	friend struct Z_Construct_UClass_UDlgManager_Statics; \
public: \
	DECLARE_CLASS(UDlgManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgManager)


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDlgManager(); \
	friend struct Z_Construct_UClass_UDlgManager_Statics; \
public: \
	DECLARE_CLASS(UDlgManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgManager)


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgManager(UDlgManager&&); \
	NO_API UDlgManager(const UDlgManager&); \
public: \
	NO_API virtual ~UDlgManager();


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgManager(UDlgManager&&); \
	NO_API UDlgManager(const UDlgManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgManager) \
	NO_API virtual ~UDlgManager();


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_29_PROLOG
#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_SPARSE_DATA \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_RPC_WRAPPERS \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_ACCESSORS \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_INCLASS \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_SPARSE_DATA \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_ACCESSORS \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
