// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UObject;
class UDialogueWave;
class UDlgDialogue;
class UDlgNode;
class UDlgNode_SpeechSequence;
class UDlgNodeData;
class UObject;
class USoundBase;
class USoundWave;
class UTexture2D;
struct FDlgCondition;
struct FDlgEdge;
struct FDlgEdgeData;
struct FDlgParticipantName;
struct FGuid;
#ifdef DLGSYSTEM_DlgContext_generated_h
#error "DlgContext.generated.h already included, missing '#pragma once' in DlgContext.h"
#endif
#define DLGSYSTEM_DlgContext_generated_h

#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgEdgeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgEdgeData>();

#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_SPARSE_DATA
#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetContextString); \
	DECLARE_FUNCTION(execWasNodeGUIDVisitedInThisContext); \
	DECLARE_FUNCTION(execWasNodeIndexVisitedInThisContext); \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execIsNodeVisited); \
	DECLARE_FUNCTION(execGetParticipants); \
	DECLARE_FUNCTION(execGetDialoguePathName); \
	DECLARE_FUNCTION(execGetDialogueGUID); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogue); \
	DECLARE_FUNCTION(execGetVisitedNodeGUIDs); \
	DECLARE_FUNCTION(execGetVisitedNodeIndices); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableActiveNodeAsSpeechSequence); \
	DECLARE_FUNCTION(execGetMutableActiveNode); \
	DECLARE_FUNCTION(execGetActiveNodeGUID); \
	DECLARE_FUNCTION(execGetActiveNodeIndex); \
	DECLARE_FUNCTION(execGetParticipantFromName); \
	DECLARE_FUNCTION(execGetParticipantsMap); \
	DECLARE_FUNCTION(execGetMutableParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantDisplayName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantIcon); \
	DECLARE_FUNCTION(execGetActiveNodeData); \
	DECLARE_FUNCTION(execGetActiveNodeGenericData); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetActiveNodeSpeakerState); \
	DECLARE_FUNCTION(execGetActiveNodeText); \
	DECLARE_FUNCTION(execIsOptionConnectedToEndNode); \
	DECLARE_FUNCTION(execIsOptionConnectedToVisitedNode); \
	DECLARE_FUNCTION(execGetAllOptionsArray); \
	DECLARE_FUNCTION(execGetOptionFromAll); \
	DECLARE_FUNCTION(execGetOptionSpeakerStateFromAll); \
	DECLARE_FUNCTION(execIsOptionSatisfied); \
	DECLARE_FUNCTION(execGetOptionTextFromAll); \
	DECLARE_FUNCTION(execIsValidAllOptionIndex); \
	DECLARE_FUNCTION(execGetAllOptionsNum); \
	DECLARE_FUNCTION(execGetOptionsArray); \
	DECLARE_FUNCTION(execGetOption); \
	DECLARE_FUNCTION(execGetOptionEnterConditions); \
	DECLARE_FUNCTION(execGetOptionSpeakerState); \
	DECLARE_FUNCTION(execGetOptionText); \
	DECLARE_FUNCTION(execIsValidOptionIndex); \
	DECLARE_FUNCTION(execGetOptionsNum); \
	DECLARE_FUNCTION(execHasDialogueEnded); \
	DECLARE_FUNCTION(execReevaluateOptions); \
	DECLARE_FUNCTION(execReevaluateChildren); \
	DECLARE_FUNCTION(execChooseOptionFromAll); \
	DECLARE_FUNCTION(execChooseSpeechSequenceOptionFromReplicated); \
	DECLARE_FUNCTION(execChooseOption); \
	DECLARE_FUNCTION(execChooseChild); \
	DECLARE_FUNCTION(execOnRep_SerializedParticipants);


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetContextString); \
	DECLARE_FUNCTION(execWasNodeGUIDVisitedInThisContext); \
	DECLARE_FUNCTION(execWasNodeIndexVisitedInThisContext); \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execIsNodeVisited); \
	DECLARE_FUNCTION(execGetParticipants); \
	DECLARE_FUNCTION(execGetDialoguePathName); \
	DECLARE_FUNCTION(execGetDialogueGUID); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogue); \
	DECLARE_FUNCTION(execGetVisitedNodeGUIDs); \
	DECLARE_FUNCTION(execGetVisitedNodeIndices); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableActiveNodeAsSpeechSequence); \
	DECLARE_FUNCTION(execGetMutableActiveNode); \
	DECLARE_FUNCTION(execGetActiveNodeGUID); \
	DECLARE_FUNCTION(execGetActiveNodeIndex); \
	DECLARE_FUNCTION(execGetParticipantFromName); \
	DECLARE_FUNCTION(execGetParticipantsMap); \
	DECLARE_FUNCTION(execGetMutableParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantDisplayName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantIcon); \
	DECLARE_FUNCTION(execGetActiveNodeData); \
	DECLARE_FUNCTION(execGetActiveNodeGenericData); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetActiveNodeSpeakerState); \
	DECLARE_FUNCTION(execGetActiveNodeText); \
	DECLARE_FUNCTION(execIsOptionConnectedToEndNode); \
	DECLARE_FUNCTION(execIsOptionConnectedToVisitedNode); \
	DECLARE_FUNCTION(execGetAllOptionsArray); \
	DECLARE_FUNCTION(execGetOptionFromAll); \
	DECLARE_FUNCTION(execGetOptionSpeakerStateFromAll); \
	DECLARE_FUNCTION(execIsOptionSatisfied); \
	DECLARE_FUNCTION(execGetOptionTextFromAll); \
	DECLARE_FUNCTION(execIsValidAllOptionIndex); \
	DECLARE_FUNCTION(execGetAllOptionsNum); \
	DECLARE_FUNCTION(execGetOptionsArray); \
	DECLARE_FUNCTION(execGetOption); \
	DECLARE_FUNCTION(execGetOptionEnterConditions); \
	DECLARE_FUNCTION(execGetOptionSpeakerState); \
	DECLARE_FUNCTION(execGetOptionText); \
	DECLARE_FUNCTION(execIsValidOptionIndex); \
	DECLARE_FUNCTION(execGetOptionsNum); \
	DECLARE_FUNCTION(execHasDialogueEnded); \
	DECLARE_FUNCTION(execReevaluateOptions); \
	DECLARE_FUNCTION(execReevaluateChildren); \
	DECLARE_FUNCTION(execChooseOptionFromAll); \
	DECLARE_FUNCTION(execChooseSpeechSequenceOptionFromReplicated); \
	DECLARE_FUNCTION(execChooseOption); \
	DECLARE_FUNCTION(execChooseChild); \
	DECLARE_FUNCTION(execOnRep_SerializedParticipants);


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_ACCESSORS
#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgContext(); \
	friend struct Z_Construct_UClass_UDlgContext_Statics; \
public: \
	DECLARE_CLASS(UDlgContext, UDlgObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgContext) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Dialogue=NETFIELD_REP_START, \
		SerializedParticipants, \
		NETFIELD_REP_END=SerializedParticipants	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDlgContext) \
public:


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUDlgContext(); \
	friend struct Z_Construct_UClass_UDlgContext_Statics; \
public: \
	DECLARE_CLASS(UDlgContext, UDlgObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgContext) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Dialogue=NETFIELD_REP_START, \
		SerializedParticipants, \
		NETFIELD_REP_END=SerializedParticipants	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDlgContext) \
public:


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgContext(UDlgContext&&); \
	NO_API UDlgContext(const UDlgContext&); \
public: \
	NO_API virtual ~UDlgContext();


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgContext(UDlgContext&&); \
	NO_API UDlgContext(const UDlgContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgContext) \
	NO_API virtual ~UDlgContext();


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_79_PROLOG
#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_SPARSE_DATA \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_RPC_WRAPPERS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_ACCESSORS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_INCLASS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_SPARSE_DATA \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_ACCESSORS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_INCLASS_NO_PURE_DECLS \
	FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h


#define FOREACH_ENUM_EDLGVALIDATESTATUS(op) \
	op(EDlgValidateStatus::Valid) \
	op(EDlgValidateStatus::ParticipantIsNull) \
	op(EDlgValidateStatus::DialogueIsNull) \
	op(EDlgValidateStatus::ParticipantDoesNotImplementInterface) \
	op(EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface) 

enum class EDlgValidateStatus : uint8;
template<> struct TIsUEnumClass<EDlgValidateStatus> { enum { Value = true }; };
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgValidateStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
