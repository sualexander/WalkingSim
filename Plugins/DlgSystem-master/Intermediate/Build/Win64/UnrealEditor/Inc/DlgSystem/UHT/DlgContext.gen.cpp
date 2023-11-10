// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgContext.h"
#include "DlgSystem/DlgCondition.h"
#include "DlgSystem/DlgEdge.h"
#include "DlgSystem/DlgParticipantName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgValidateStatus();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeData();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantName();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgEdgeData;
class UScriptStruct* FDlgEdgeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgEdgeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgEdgeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdgeData, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgEdgeData"));
	}
	return Z_Registration_Info_UScriptStruct_DlgEdgeData.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgEdgeData>()
{
	return FDlgEdgeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgEdgeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSatisfied_MetaData[];
#endif
		static void NewProp_bSatisfied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSatisfied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edge_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used to store temporary state of edges\n// This represents a const version of an Edge\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Used to store temporary state of edges\nThis represents a const version of an Edge" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdgeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_SetBit(void* Obj)
	{
		((FDlgEdgeData*)Obj)->bSatisfied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied = { "bSatisfied", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgEdgeData), &Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge = { "Edge", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdgeData, Edge), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdgeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdgeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgEdgeData",
		sizeof(FDlgEdgeData),
		alignof(FDlgEdgeData),
		Z_Construct_UScriptStruct_FDlgEdgeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeData()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgEdgeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgEdgeData.InnerSingleton, Z_Construct_UScriptStruct_FDlgEdgeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgEdgeData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgValidateStatus;
	static UEnum* EDlgValidateStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgValidateStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgValidateStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgValidateStatus, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgValidateStatus"));
		}
		return Z_Registration_Info_UEnum_EDlgValidateStatus.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgValidateStatus>()
	{
		return EDlgValidateStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::Enumerators[] = {
		{ "EDlgValidateStatus::Valid", (int64)EDlgValidateStatus::Valid },
		{ "EDlgValidateStatus::ParticipantIsNull", (int64)EDlgValidateStatus::ParticipantIsNull },
		{ "EDlgValidateStatus::DialogueIsNull", (int64)EDlgValidateStatus::DialogueIsNull },
		{ "EDlgValidateStatus::ParticipantDoesNotImplementInterface", (int64)EDlgValidateStatus::ParticipantDoesNotImplementInterface },
		{ "EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface", (int64)EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::Enum_MetaDataParams[] = {
		{ "DialogueIsNull.Name", "EDlgValidateStatus::DialogueIsNull" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ParticipantDoesNotImplementInterface.Comment", "// Is an instance but does not implement the UDlgDialogueParticipant interface\n" },
		{ "ParticipantDoesNotImplementInterface.Name", "EDlgValidateStatus::ParticipantDoesNotImplementInterface" },
		{ "ParticipantDoesNotImplementInterface.ToolTip", "Is an instance but does not implement the UDlgDialogueParticipant interface" },
		{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.Comment", "// Is a blueprint class from the content browser and does not implement the UDlgDialogueParticipant interface\n" },
		{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.Name", "EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface" },
		{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.ToolTip", "Is a blueprint class from the content browser and does not implement the UDlgDialogueParticipant interface" },
		{ "ParticipantIsNull.Comment", "// Either the participant or dialogue is invalid\n" },
		{ "ParticipantIsNull.Name", "EDlgValidateStatus::ParticipantIsNull" },
		{ "ParticipantIsNull.ToolTip", "Either the participant or dialogue is invalid" },
		{ "Valid.Name", "EDlgValidateStatus::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgValidateStatus",
		"EDlgValidateStatus",
		Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgValidateStatus()
	{
		if (!Z_Registration_Info_UEnum_EDlgValidateStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgValidateStatus.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgValidateStatus.InnerSingleton;
	}
	DEFINE_FUNCTION(UDlgContext::execGetContextString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContextString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execWasNodeGUIDVisitedInThisContext)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasNodeGUIDVisitedInThisContext(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execWasNodeIndexVisitedInThisContext)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasNodeIndexVisitedInThisContext(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableNodeFromGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableNodeFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsNodeVisited)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_GET_UBOOL(Z_Param_bLocalHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeVisited(Z_Param_NodeIndex,Z_Param_Out_NodeGUID,Z_Param_bLocalHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetParticipants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UObject*>*)Z_Param__Result=P_THIS->GetParticipants();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialoguePathName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDialoguePathName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialogueGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetDialogueGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialogueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDialogueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgDialogue**)Z_Param__Result=P_THIS->GetDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetVisitedNodeGUIDs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FGuid>*)Z_Param__Result=P_THIS->GetVisitedNodeGUIDs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetVisitedNodeIndices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<int32>*)Z_Param__Result=P_THIS->GetVisitedNodeIndices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetNodeIndexForGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeIndexForGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetNodeGUIDForIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUIDForIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidNodeGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidNodeIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableActiveNodeAsSpeechSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode_SpeechSequence**)Z_Param__Result=P_THIS->GetMutableActiveNodeAsSpeechSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableActiveNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableActiveNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetActiveNodeGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveNodeIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetParticipantFromName)
	{
		P_GET_STRUCT_REF(FDlgParticipantName,Z_Param_Out_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetParticipantFromName(Z_Param_Out_Participant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetParticipantsMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UObject*>*)Z_Param__Result=P_THIS->GetParticipantsMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableParticipant)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetMutableParticipant(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetActiveNodeParticipantDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveNodeParticipantName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetActiveNodeParticipant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetActiveNodeParticipantIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNodeData**)Z_Param__Result=P_THIS->GetActiveNodeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeGenericData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetActiveNodeGenericData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceDialogueWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDialogueWave**)Z_Param__Result=P_THIS->GetActiveNodeVoiceDialogueWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceSoundBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetActiveNodeVoiceSoundBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceSoundWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=P_THIS->GetActiveNodeVoiceSoundWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeSpeakerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveNodeSpeakerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetActiveNodeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsOptionConnectedToEndNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptionConnectedToEndNode(Z_Param_Index,Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsOptionConnectedToVisitedNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bLocalHistory);
		P_GET_UBOOL(Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptionConnectedToVisitedNode(Z_Param_Index,Z_Param_bLocalHistory,Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetAllOptionsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEdgeData>*)Z_Param__Result=P_THIS->GetAllOptionsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDlgEdgeData*)Z_Param__Result=P_THIS->GetOptionFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionSpeakerStateFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetOptionSpeakerStateFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsOptionSatisfied)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptionSatisfied(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionTextFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOptionTextFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidAllOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidAllOptionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetAllOptionsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAllOptionsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEdge>*)Z_Param__Result=P_THIS->GetOptionsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOption)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDlgEdge*)Z_Param__Result=P_THIS->GetOption(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionEnterConditions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgCondition>*)Z_Param__Result=P_THIS->GetOptionEnterConditions(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionSpeakerState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetOptionSpeakerState(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOptionText(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidOptionIndex(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOptionsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execHasDialogueEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDialogueEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execReevaluateOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReevaluateOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execReevaluateChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReevaluateChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseOptionFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseOptionFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseSpeechSequenceOptionFromReplicated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseSpeechSequenceOptionFromReplicated(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseOption)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseOption(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseChild)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseChild(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execOnRep_SerializedParticipants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SerializedParticipants();
		P_NATIVE_END;
	}
	void UDlgContext::StaticRegisterNativesUDlgContext()
	{
		UClass* Class = UDlgContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseChild", &UDlgContext::execChooseChild },
			{ "ChooseOption", &UDlgContext::execChooseOption },
			{ "ChooseOptionFromAll", &UDlgContext::execChooseOptionFromAll },
			{ "ChooseSpeechSequenceOptionFromReplicated", &UDlgContext::execChooseSpeechSequenceOptionFromReplicated },
			{ "GetActiveNodeData", &UDlgContext::execGetActiveNodeData },
			{ "GetActiveNodeGenericData", &UDlgContext::execGetActiveNodeGenericData },
			{ "GetActiveNodeGUID", &UDlgContext::execGetActiveNodeGUID },
			{ "GetActiveNodeIndex", &UDlgContext::execGetActiveNodeIndex },
			{ "GetActiveNodeParticipant", &UDlgContext::execGetActiveNodeParticipant },
			{ "GetActiveNodeParticipantDisplayName", &UDlgContext::execGetActiveNodeParticipantDisplayName },
			{ "GetActiveNodeParticipantIcon", &UDlgContext::execGetActiveNodeParticipantIcon },
			{ "GetActiveNodeParticipantName", &UDlgContext::execGetActiveNodeParticipantName },
			{ "GetActiveNodeSpeakerState", &UDlgContext::execGetActiveNodeSpeakerState },
			{ "GetActiveNodeText", &UDlgContext::execGetActiveNodeText },
			{ "GetActiveNodeVoiceDialogueWave", &UDlgContext::execGetActiveNodeVoiceDialogueWave },
			{ "GetActiveNodeVoiceSoundBase", &UDlgContext::execGetActiveNodeVoiceSoundBase },
			{ "GetActiveNodeVoiceSoundWave", &UDlgContext::execGetActiveNodeVoiceSoundWave },
			{ "GetAllOptionsArray", &UDlgContext::execGetAllOptionsArray },
			{ "GetAllOptionsNum", &UDlgContext::execGetAllOptionsNum },
			{ "GetContextString", &UDlgContext::execGetContextString },
			{ "GetDialogue", &UDlgContext::execGetDialogue },
			{ "GetDialogueGUID", &UDlgContext::execGetDialogueGUID },
			{ "GetDialogueName", &UDlgContext::execGetDialogueName },
			{ "GetDialoguePathName", &UDlgContext::execGetDialoguePathName },
			{ "GetMutableActiveNode", &UDlgContext::execGetMutableActiveNode },
			{ "GetMutableActiveNodeAsSpeechSequence", &UDlgContext::execGetMutableActiveNodeAsSpeechSequence },
			{ "GetMutableNodeFromGUID", &UDlgContext::execGetMutableNodeFromGUID },
			{ "GetMutableNodeFromIndex", &UDlgContext::execGetMutableNodeFromIndex },
			{ "GetMutableParticipant", &UDlgContext::execGetMutableParticipant },
			{ "GetNodeGUIDForIndex", &UDlgContext::execGetNodeGUIDForIndex },
			{ "GetNodeIndexForGUID", &UDlgContext::execGetNodeIndexForGUID },
			{ "GetOption", &UDlgContext::execGetOption },
			{ "GetOptionEnterConditions", &UDlgContext::execGetOptionEnterConditions },
			{ "GetOptionFromAll", &UDlgContext::execGetOptionFromAll },
			{ "GetOptionsArray", &UDlgContext::execGetOptionsArray },
			{ "GetOptionsNum", &UDlgContext::execGetOptionsNum },
			{ "GetOptionSpeakerState", &UDlgContext::execGetOptionSpeakerState },
			{ "GetOptionSpeakerStateFromAll", &UDlgContext::execGetOptionSpeakerStateFromAll },
			{ "GetOptionText", &UDlgContext::execGetOptionText },
			{ "GetOptionTextFromAll", &UDlgContext::execGetOptionTextFromAll },
			{ "GetParticipantFromName", &UDlgContext::execGetParticipantFromName },
			{ "GetParticipants", &UDlgContext::execGetParticipants },
			{ "GetParticipantsMap", &UDlgContext::execGetParticipantsMap },
			{ "GetVisitedNodeGUIDs", &UDlgContext::execGetVisitedNodeGUIDs },
			{ "GetVisitedNodeIndices", &UDlgContext::execGetVisitedNodeIndices },
			{ "HasDialogueEnded", &UDlgContext::execHasDialogueEnded },
			{ "IsNodeVisited", &UDlgContext::execIsNodeVisited },
			{ "IsOptionConnectedToEndNode", &UDlgContext::execIsOptionConnectedToEndNode },
			{ "IsOptionConnectedToVisitedNode", &UDlgContext::execIsOptionConnectedToVisitedNode },
			{ "IsOptionSatisfied", &UDlgContext::execIsOptionSatisfied },
			{ "IsValidAllOptionIndex", &UDlgContext::execIsValidAllOptionIndex },
			{ "IsValidNodeGUID", &UDlgContext::execIsValidNodeGUID },
			{ "IsValidNodeIndex", &UDlgContext::execIsValidNodeIndex },
			{ "IsValidOptionIndex", &UDlgContext::execIsValidOptionIndex },
			{ "OnRep_SerializedParticipants", &UDlgContext::execOnRep_SerializedParticipants },
			{ "ReevaluateChildren", &UDlgContext::execReevaluateChildren },
			{ "ReevaluateOptions", &UDlgContext::execReevaluateOptions },
			{ "WasNodeGUIDVisitedInThisContext", &UDlgContext::execWasNodeGUIDVisitedInThisContext },
			{ "WasNodeIndexVisitedInThisContext", &UDlgContext::execWasNodeIndexVisitedInThisContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseChild_Statics
	{
		struct DlgContext_eventChooseChild_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventChooseChild_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventChooseChild_Parms), &Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ChooseChild has been deprecated in favour of ChooseOption" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::DlgContext_eventChooseChild_Parms), Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseOption_Statics
	{
		struct DlgContext_eventChooseOption_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventChooseOption_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventChooseOption_Parms), &Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09* Chooses the option with index OptionIndex of the active node index and it enters that node.\n\x09* Typically called based on user input.\n\x09* NOTICE: If the return value is false the dialogue is over and the context should be dropped\n\x09*\n\x09* @return true if the dialogue did not end, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Chooses the option with index OptionIndex of the active node index and it enters that node.\nTypically called based on user input.\nNOTICE: If the return value is false the dialogue is over and the context should be dropped\n\n@return true if the dialogue did not end, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::DlgContext_eventChooseOption_Parms), Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics
	{
		struct DlgContext_eventChooseOptionFromAll_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventChooseOptionFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseOptionFromAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventChooseOptionFromAll_Parms), &Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control|All" },
		{ "Comment", "/**\n\x09 *  Exactly as ChooseOption but expects an index from the AllOptions array\n\x09 *  If the index is invalid the call fails\n\x09 */" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Exactly as ChooseOption but expects an index from the AllOptions array\nIf the index is invalid the call fails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseOptionFromAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::DlgContext_eventChooseOptionFromAll_Parms), Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics
	{
		struct DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms), &Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09 * Chooses the option with OptionIndex that is replicated\n\x09 * NOTE: the ActiveNodeIndex must be a speech sequence node, otherwise the dialogue will end\n\x09 *\n\x09 * @return true if the dialogue did not end, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Chooses the option with OptionIndex that is replicated\nNOTE: the ActiveNodeIndex must be a speech sequence node, otherwise the dialogue will end\n\n@return true if the dialogue did not end, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseSpeechSequenceOptionFromReplicated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms), Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics
	{
		struct DlgContext_eventGetActiveNodeData_Parms
		{
			UDlgNodeData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeData_Parms, ReturnValue), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::DlgContext_eventGetActiveNodeData_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics
	{
		struct DlgContext_eventGetActiveNodeGenericData_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeGenericData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeGenericData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::DlgContext_eventGetActiveNodeGenericData_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics
	{
		struct DlgContext_eventGetActiveNodeGUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::DlgContext_eventGetActiveNodeGUID_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics
	{
		struct DlgContext_eventGetActiveNodeIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::DlgContext_eventGetActiveNodeIndex_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipant_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipant_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Object associated with the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Object associated with the active node participant name (owner name)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::DlgContext_eventGetActiveNodeParticipant_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipantDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the active participant display name\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the active participant display name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::DlgContext_eventGetActiveNodeParticipantDisplayName_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipantIcon_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Icon associated with the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Icon associated with the active node participant name (owner name)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::DlgContext_eventGetActiveNodeParticipantIcon_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipantName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the active node participant name (owner name)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::DlgContext_eventGetActiveNodeParticipantName_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics
	{
		struct DlgContext_eventGetActiveNodeSpeakerState_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeSpeakerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the SpeakerState of the active node index\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the active node index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeSpeakerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::DlgContext_eventGetActiveNodeSpeakerState_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics
	{
		struct DlgContext_eventGetActiveNodeText_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Text of the active node index\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Text of the active node index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::DlgContext_eventGetActiveNodeText_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics
	{
		struct DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms
		{
			UDialogueWave* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Voice as a Dialogue Wave of the active node index\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Voice as a Dialogue Wave of the active node index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceDialogueWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics
	{
		struct DlgContext_eventGetActiveNodeVoiceSoundBase_Parms
		{
			USoundBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Same as GetActiveNodeVoiceSoundWave but this just returns the variable without casting it\n// to a USoundWave\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Same as GetActiveNodeVoiceSoundWave but this just returns the variable without casting it\nto a USoundWave" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceSoundBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::DlgContext_eventGetActiveNodeVoiceSoundBase_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics
	{
		struct DlgContext_eventGetActiveNodeVoiceSoundWave_Parms
		{
			USoundWave* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Voice as a Sound Wave of the active node index\n// This will get cast to USoundWave from a USoundBase\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Voice as a Sound Wave of the active node index\nThis will get cast to USoundWave from a USoundBase" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::DlgContext_eventGetActiveNodeVoiceSoundWave_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics
	{
		struct DlgContext_eventGetAllOptionsArray_Parms
		{
			TArray<FDlgEdgeData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdgeData, METADATA_PARAMS(nullptr, 0) }; // 21566738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetAllOptionsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_MetaData)) }; // 21566738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets all edges (both satisfied and unsatisfied)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets all edges (both satisfied and unsatisfied)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetAllOptionsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::DlgContext_eventGetAllOptionsArray_Parms), Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetAllOptionsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics
	{
		struct DlgContext_eventGetAllOptionsNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetAllOptionsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the number of options (both satisfied and unsatisfied ones are counted)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the number of options (both satisfied and unsatisfied ones are counted)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetAllOptionsNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::DlgContext_eventGetAllOptionsNum_Parms), Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetAllOptionsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetContextString_Statics
	{
		struct DlgContext_eventGetContextString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgContext_GetContextString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetContextString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetContextString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetContextString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetContextString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetContextString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetContextString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::DlgContext_eventGetContextString_Parms), Z_Construct_UFunction_UDlgContext_GetContextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetContextString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetContextString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialogue_Statics
	{
		struct DlgContext_eventGetDialogue_Parms
		{
			UDlgDialogue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetDialogue_Parms, ReturnValue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Helper methods to get some Dialogue properties\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Helper methods to get some Dialogue properties" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::DlgContext_eventGetDialogue_Parms), Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics
	{
		struct DlgContext_eventGetDialogueGUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetDialogueGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialogueGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::DlgContext_eventGetDialogueGUID_Parms), Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialogueGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics
	{
		struct DlgContext_eventGetDialogueName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetDialogueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialogueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::DlgContext_eventGetDialogueName_Parms), Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialogueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics
	{
		struct DlgContext_eventGetDialoguePathName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetDialoguePathName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialoguePathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::DlgContext_eventGetDialoguePathName_Parms), Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialoguePathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics
	{
		struct DlgContext_eventGetMutableActiveNode_Parms
		{
			UDlgNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableActiveNode_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "DisplayName", "Get Active Node" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableActiveNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::DlgContext_eventGetMutableActiveNode_Parms), Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableActiveNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics
	{
		struct DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms
		{
			UDlgNode_SpeechSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_SpeechSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Just a helper method for GetActiveNode that casts to UDlgNode_SpeechSequence\n" },
		{ "DisplayName", "Get Active Node As Speech Sequence" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Just a helper method for GetActiveNode that casts to UDlgNode_SpeechSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableActiveNodeAsSpeechSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms), Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics
	{
		struct DlgContext_eventGetMutableNodeFromGUID_Parms
		{
			FGuid NodeGUID;
			UDlgNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Node From GUID" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableNodeFromGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::DlgContext_eventGetMutableNodeFromGUID_Parms), Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics
	{
		struct DlgContext_eventGetMutableNodeFromIndex_Parms
		{
			int32 NodeIndex;
			UDlgNode* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the Node at the NodeIndex index\n" },
		{ "DisplayName", "Get Node From Index" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Node at the NodeIndex index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableNodeFromIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::DlgContext_eventGetMutableNodeFromIndex_Parms), Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics
	{
		struct DlgContext_eventGetMutableParticipant_Parms
		{
			FName ParticipantName;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableParticipant_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetMutableParticipant_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Participant" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::DlgContext_eventGetMutableParticipant_Parms), Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics
	{
		struct DlgContext_eventGetNodeGUIDForIndex_Parms
		{
			int32 NodeIndex;
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetNodeGUIDForIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetNodeGUIDForIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the GUID for the Node at NodeIndex\n" },
		{ "DisplayName", "Get Node GUID For Index" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the GUID for the Node at NodeIndex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetNodeGUIDForIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::DlgContext_eventGetNodeGUIDForIndex_Parms), Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics
	{
		struct DlgContext_eventGetNodeIndexForGUID_Parms
		{
			FGuid NodeGUID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetNodeIndexForGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetNodeIndexForGUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the corresponding Node Index for the supplied NodeGUID\n// Returns -1 (INDEX_NONE) if the Node GUID does not exist.\n" },
		{ "DisplayName", "Get Node Index For GUID" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the corresponding Node Index for the supplied NodeGUID\nReturns -1 (INDEX_NONE) if the Node GUID does not exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetNodeIndexForGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::DlgContext_eventGetNodeIndexForGUID_Parms), Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOption_Statics
	{
		struct DlgContext_eventGetOption_Parms
		{
			int32 OptionIndex;
			FDlgEdge ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOption_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the edge representing a player option from the satisfied options\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the edge representing a player option from the satisfied options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOption_Statics::DlgContext_eventGetOption_Parms), Z_Construct_UFunction_UDlgContext_GetOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics
	{
		struct DlgContext_eventGetOptionEnterConditions_Parms
		{
			int32 OptionIndex;
			TArray<FDlgCondition> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionEnterConditions_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) }; // 3914112931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionEnterConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_MetaData)) }; // 3914112931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the Enter Conditions of the (satisfied) edge with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Enter Conditions of the (satisfied) edge with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionEnterConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::DlgContext_eventGetOptionEnterConditions_Parms), Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics
	{
		struct DlgContext_eventGetOptionFromAll_Parms
		{
			int32 Index;
			FDlgEdgeData ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionFromAll_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdgeData, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue_MetaData)) }; // 21566738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the edge representing a player option from all options\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the edge representing a player option from all options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionFromAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::DlgContext_eventGetOptionFromAll_Parms), Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics
	{
		struct DlgContext_eventGetOptionsArray_Parms
		{
			TArray<FDlgEdge> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) }; // 273406106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets all satisfied edges\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets all satisfied edges" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::DlgContext_eventGetOptionsArray_Parms), Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics
	{
		struct DlgContext_eventGetOptionsNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the number of options with satisfied conditions (number of options)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the number of options with satisfied conditions (number of options)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionsNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::DlgContext_eventGetOptionsNum_Parms), Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics
	{
		struct DlgContext_eventGetOptionSpeakerState_Parms
		{
			int32 OptionIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerState_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the SpeakerState of the (satisfied) edge with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the (satisfied) edge with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionSpeakerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::DlgContext_eventGetOptionSpeakerState_Parms), Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics
	{
		struct DlgContext_eventGetOptionSpeakerStateFromAll_Parms
		{
			int32 Index;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerStateFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerStateFromAll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the SpeakerState of the edge with index OptionIndex\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the edge with index OptionIndex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionSpeakerStateFromAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::DlgContext_eventGetOptionSpeakerStateFromAll_Parms), Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionText_Statics
	{
		struct DlgContext_eventGetOptionText_Parms
		{
			int32 OptionIndex;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionText_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the Text of the (satisfied) option with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Text of the (satisfied) option with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::DlgContext_eventGetOptionText_Parms), Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics
	{
		struct DlgContext_eventGetOptionTextFromAll_Parms
		{
			int32 Index;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionTextFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetOptionTextFromAll_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the Text of an option from the all list, which includes the unsatisfied ones as well\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Text of an option from the all list, which includes the unsatisfied ones as well" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionTextFromAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::DlgContext_eventGetOptionTextFromAll_Parms), Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics
	{
		struct DlgContext_eventGetParticipantFromName_Parms
		{
			FDlgParticipantName Participant;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Participant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetParticipantFromName_Parms, Participant), Z_Construct_UScriptStruct_FDlgParticipantName, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_Participant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_Participant_MetaData)) }; // 1851908335
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetParticipantFromName_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_Participant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetParticipantFromName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::DlgContext_eventGetParticipantFromName_Parms), Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetParticipantFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetParticipants_Statics
	{
		struct DlgContext_eventGetParticipants_Parms
		{
			TMap<FName,UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetParticipants_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetParticipants", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::DlgContext_eventGetParticipants_Parms), Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetParticipants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics
	{
		struct DlgContext_eventGetParticipantsMap_Parms
		{
			TMap<FName,UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetParticipantsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetParticipantsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::DlgContext_eventGetParticipantsMap_Parms), Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetParticipantsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics
	{
		struct DlgContext_eventGetVisitedNodeGUIDs_Parms
		{
			TSet<FGuid> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetVisitedNodeGUIDs_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Returns the GUIDs which were visited inside this single context. For global data check DlgMemory\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Returns the GUIDs which were visited inside this single context. For global data check DlgMemory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetVisitedNodeGUIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::DlgContext_eventGetVisitedNodeGUIDs_Parms), Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics
	{
		struct DlgContext_eventGetVisitedNodeIndices_Parms
		{
			TSet<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventGetVisitedNodeIndices_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Returns the indices which were visited inside this single context. For global data check DlgMemory\n// NOTE: You should use GetVisitedNodeGUIDs\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Returns the indices which were visited inside this single context. For global data check DlgMemory\nNOTE: You should use GetVisitedNodeGUIDs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetVisitedNodeIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::DlgContext_eventGetVisitedNodeIndices_Parms), Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics
	{
		struct DlgContext_eventHasDialogueEnded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventHasDialogueEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventHasDialogueEnded_Parms), &Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "HasDialogueEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::DlgContext_eventHasDialogueEnded_Parms), Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_HasDialogueEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics
	{
		struct DlgContext_eventIsNodeVisited_Parms
		{
			int32 NodeIndex;
			FGuid NodeGUID;
			bool bLocalHistory;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static void NewProp_bLocalHistory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalHistory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsNodeVisited_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsNodeVisited_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeGUID_MetaData)) };
	void Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_bLocalHistory_SetBit(void* Obj)
	{
		((DlgContext_eventIsNodeVisited_Parms*)Obj)->bLocalHistory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_bLocalHistory = { "bLocalHistory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsNodeVisited_Parms), &Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_bLocalHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsNodeVisited_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsNodeVisited_Parms), &Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_bLocalHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsNodeVisited", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::DlgContext_eventIsNodeVisited_Parms), Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsNodeVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics
	{
		struct DlgContext_eventIsOptionConnectedToEndNode_Parms
		{
			int32 Index;
			bool bIndexSkipsUnsatisfiedEdges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndexSkipsUnsatisfiedEdges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsOptionConnectedToEndNode_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToEndNode_Parms*)Obj)->bIndexSkipsUnsatisfiedEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges = { "bIndexSkipsUnsatisfiedEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToEndNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "/**\n\x09*  Checks if the node is connected directly to an end node or not\n\x09*  Does not handle complicated logic - if the said node is a logical one it will still check that node, and not one\n\x09*  of its option\n\x09*\n\x09* @param Index  Index of the edge/player option to test\n\x09* @param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n\x09* @return true if the node is an end node\n\x09*/" },
		{ "CPP_Default_bIndexSkipsUnsatisfiedEdges", "true" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Checks if the node is connected directly to an end node or not\nDoes not handle complicated logic - if the said node is a logical one it will still check that node, and not one\nof its option\n\n@param Index  Index of the edge/player option to test\n@param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n@return true if the node is an end node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsOptionConnectedToEndNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::DlgContext_eventIsOptionConnectedToEndNode_Parms), Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics
	{
		struct DlgContext_eventIsOptionConnectedToVisitedNode_Parms
		{
			int32 Index;
			bool bLocalHistory;
			bool bIndexSkipsUnsatisfiedEdges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bLocalHistory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalHistory;
		static void NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndexSkipsUnsatisfiedEdges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsOptionConnectedToVisitedNode_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->bLocalHistory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory = { "bLocalHistory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->bIndexSkipsUnsatisfiedEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges = { "bIndexSkipsUnsatisfiedEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "/**\n\x09*  Checks if the node connected directly to one of the active player choices was already visited or not\n\x09*  Does not handle complicated logic - if the said node is a logical one it will still check that node, and not one\n\x09*  of its options\n\x09*\n\x09* @param Index  Index of the edge/player option to test\n\x09* @param bLocalHistory If true, only the history of this dialogue context is checked. If false, it is a global check\n\x09* @param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n\x09* @return true if the node was already IsOptionConnectedToVisitedNode\n\x09*/" },
		{ "CPP_Default_bIndexSkipsUnsatisfiedEdges", "true" },
		{ "CPP_Default_bLocalHistory", "false" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Checks if the node connected directly to one of the active player choices was already visited or not\nDoes not handle complicated logic - if the said node is a logical one it will still check that node, and not one\nof its options\n\n@param Index  Index of the edge/player option to test\n@param bLocalHistory If true, only the history of this dialogue context is checked. If false, it is a global check\n@param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n@return true if the node was already IsOptionConnectedToVisitedNode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsOptionConnectedToVisitedNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::DlgContext_eventIsOptionConnectedToVisitedNode_Parms), Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics
	{
		struct DlgContext_eventIsOptionSatisfied_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsOptionSatisfied_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionSatisfied_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsOptionSatisfied_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Is the option at Index satisfied? (Does it meet all the conditions)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Is the option at Index satisfied? (Does it meet all the conditions)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsOptionSatisfied", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::DlgContext_eventIsOptionSatisfied_Parms), Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsOptionSatisfied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics
	{
		struct DlgContext_eventIsValidAllOptionIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsValidAllOptionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidAllOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsValidAllOptionIndex_Parms), &Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Is the Index valid index for both satisfied and unsatisfied conditions\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Is the Index valid index for both satisfied and unsatisfied conditions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidAllOptionIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::DlgContext_eventIsValidAllOptionIndex_Parms), Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics
	{
		struct DlgContext_eventIsValidNodeGUID_Parms
		{
			FGuid NodeGUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsValidNodeGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData)) };
	void Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidNodeGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsValidNodeGUID_Parms), &Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidNodeGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::DlgContext_eventIsValidNodeGUID_Parms), Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics
	{
		struct DlgContext_eventIsValidNodeIndex_Parms
		{
			int32 NodeIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsValidNodeIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidNodeIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsValidNodeIndex_Parms), &Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "//\n// Data\n//\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidNodeIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::DlgContext_eventIsValidNodeIndex_Parms), Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics
	{
		struct DlgContext_eventIsValidOptionIndex_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventIsValidOptionIndex_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventIsValidOptionIndex_Parms), &Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Is the OptionIndex valid index for the satisfied conditions?\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Is the OptionIndex valid index for the satisfied conditions?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidOptionIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::DlgContext_eventIsValidOptionIndex_Parms), Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Own methods\n//\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Own methods" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "OnRep_SerializedParticipants", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics
	{
		struct DlgContext_eventReevaluateChildren_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventReevaluateChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventReevaluateChildren_Parms), &Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ReevaluateChildren has been deprecated in Favour of ReevaluateOptions" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ReevaluateChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::DlgContext_eventReevaluateChildren_Parms), Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ReevaluateChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics
	{
		struct DlgContext_eventReevaluateOptions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventReevaluateOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventReevaluateOptions_Parms), &Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09 * Normally the options of the active node are checked only once, when the conversation enters the node.\n\x09 * If an option can appear/disappear real time in the middle of the conversation this function should be called manually each frame\n\x09 */" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Normally the options of the active node are checked only once, when the conversation enters the node.\nIf an option can appear/disappear real time in the middle of the conversation this function should be called manually each frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ReevaluateOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::DlgContext_eventReevaluateOptions_Parms), Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ReevaluateOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics
	{
		struct DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms
		{
			FGuid NodeGUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID_MetaData)) };
	void Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms), &Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Was the node GUID visited in the lifetime of this context?\n" },
		{ "DisplayName", "Was Node GUID Visited In This Context" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Was the node GUID visited in the lifetime of this context?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "WasNodeGUIDVisitedInThisContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms), Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics
	{
		struct DlgContext_eventWasNodeIndexVisitedInThisContext_Parms
		{
			int32 NodeIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventWasNodeIndexVisitedInThisContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms), &Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Was the node Index visited in the lifetime of this context?\n// NOTE: you should  most likely use WasNodeGUIDVisitedInThisContext\n" },
		{ "DisplayName", "Was Node Index Visited In This Context" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Was the node Index visited in the lifetime of this context?\nNOTE: you should  most likely use WasNodeGUIDVisitedInThisContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "WasNodeIndexVisitedInThisContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::DlgContext_eventWasNodeIndexVisitedInThisContext_Parms), Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgContext);
	UClass* Z_Construct_UClass_UDlgContext_NoRegister()
	{
		return UDlgContext::StaticClass();
	}
	struct Z_Construct_UClass_UDlgContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SerializedParticipants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedParticipants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedParticipants;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Participants_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Participants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgContext_ChooseChild, "ChooseChild" }, // 3708724668
		{ &Z_Construct_UFunction_UDlgContext_ChooseOption, "ChooseOption" }, // 1709980505
		{ &Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll, "ChooseOptionFromAll" }, // 1376812793
		{ &Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated, "ChooseSpeechSequenceOptionFromReplicated" }, // 189105165
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeData, "GetActiveNodeData" }, // 2672981910
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData, "GetActiveNodeGenericData" }, // 3739669728
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID, "GetActiveNodeGUID" }, // 1447397280
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex, "GetActiveNodeIndex" }, // 3933820591
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant, "GetActiveNodeParticipant" }, // 2853271017
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName, "GetActiveNodeParticipantDisplayName" }, // 1429329887
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon, "GetActiveNodeParticipantIcon" }, // 258942710
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName, "GetActiveNodeParticipantName" }, // 1461428875
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState, "GetActiveNodeSpeakerState" }, // 1581647784
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeText, "GetActiveNodeText" }, // 1347913547
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave, "GetActiveNodeVoiceDialogueWave" }, // 665578815
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase, "GetActiveNodeVoiceSoundBase" }, // 3672005585
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave, "GetActiveNodeVoiceSoundWave" }, // 2291801112
		{ &Z_Construct_UFunction_UDlgContext_GetAllOptionsArray, "GetAllOptionsArray" }, // 1968397557
		{ &Z_Construct_UFunction_UDlgContext_GetAllOptionsNum, "GetAllOptionsNum" }, // 2546121788
		{ &Z_Construct_UFunction_UDlgContext_GetContextString, "GetContextString" }, // 2791560215
		{ &Z_Construct_UFunction_UDlgContext_GetDialogue, "GetDialogue" }, // 1580985310
		{ &Z_Construct_UFunction_UDlgContext_GetDialogueGUID, "GetDialogueGUID" }, // 2196504437
		{ &Z_Construct_UFunction_UDlgContext_GetDialogueName, "GetDialogueName" }, // 3926114739
		{ &Z_Construct_UFunction_UDlgContext_GetDialoguePathName, "GetDialoguePathName" }, // 90127384
		{ &Z_Construct_UFunction_UDlgContext_GetMutableActiveNode, "GetMutableActiveNode" }, // 1122246932
		{ &Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence, "GetMutableActiveNodeAsSpeechSequence" }, // 1749119202
		{ &Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID, "GetMutableNodeFromGUID" }, // 3870925305
		{ &Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex, "GetMutableNodeFromIndex" }, // 2319518583
		{ &Z_Construct_UFunction_UDlgContext_GetMutableParticipant, "GetMutableParticipant" }, // 909651496
		{ &Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex, "GetNodeGUIDForIndex" }, // 2558054254
		{ &Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID, "GetNodeIndexForGUID" }, // 1302421804
		{ &Z_Construct_UFunction_UDlgContext_GetOption, "GetOption" }, // 1447005122
		{ &Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions, "GetOptionEnterConditions" }, // 1444836401
		{ &Z_Construct_UFunction_UDlgContext_GetOptionFromAll, "GetOptionFromAll" }, // 4153792153
		{ &Z_Construct_UFunction_UDlgContext_GetOptionsArray, "GetOptionsArray" }, // 2562905838
		{ &Z_Construct_UFunction_UDlgContext_GetOptionsNum, "GetOptionsNum" }, // 827781729
		{ &Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState, "GetOptionSpeakerState" }, // 441076810
		{ &Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll, "GetOptionSpeakerStateFromAll" }, // 282836140
		{ &Z_Construct_UFunction_UDlgContext_GetOptionText, "GetOptionText" }, // 4177922852
		{ &Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll, "GetOptionTextFromAll" }, // 808752607
		{ &Z_Construct_UFunction_UDlgContext_GetParticipantFromName, "GetParticipantFromName" }, // 192059822
		{ &Z_Construct_UFunction_UDlgContext_GetParticipants, "GetParticipants" }, // 1501122635
		{ &Z_Construct_UFunction_UDlgContext_GetParticipantsMap, "GetParticipantsMap" }, // 415772077
		{ &Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs, "GetVisitedNodeGUIDs" }, // 3814887588
		{ &Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices, "GetVisitedNodeIndices" }, // 2623594488
		{ &Z_Construct_UFunction_UDlgContext_HasDialogueEnded, "HasDialogueEnded" }, // 2479678685
		{ &Z_Construct_UFunction_UDlgContext_IsNodeVisited, "IsNodeVisited" }, // 1355954772
		{ &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode, "IsOptionConnectedToEndNode" }, // 309011525
		{ &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode, "IsOptionConnectedToVisitedNode" }, // 3026285356
		{ &Z_Construct_UFunction_UDlgContext_IsOptionSatisfied, "IsOptionSatisfied" }, // 489205118
		{ &Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex, "IsValidAllOptionIndex" }, // 3501346556
		{ &Z_Construct_UFunction_UDlgContext_IsValidNodeGUID, "IsValidNodeGUID" }, // 2112555119
		{ &Z_Construct_UFunction_UDlgContext_IsValidNodeIndex, "IsValidNodeIndex" }, // 2345643315
		{ &Z_Construct_UFunction_UDlgContext_IsValidOptionIndex, "IsValidOptionIndex" }, // 4170661759
		{ &Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants, "OnRep_SerializedParticipants" }, // 2816308618
		{ &Z_Construct_UFunction_UDlgContext_ReevaluateChildren, "ReevaluateChildren" }, // 1473844139
		{ &Z_Construct_UFunction_UDlgContext_ReevaluateOptions, "ReevaluateOptions" }, // 3146050007
		{ &Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext, "WasNodeGUIDVisitedInThisContext" }, // 876257640
		{ &Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext, "WasNodeIndexVisitedInThisContext" }, // 1884496109
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Class representing an active dialogue, can be used to gain information and to control it\n *  Should be controlled from Player Character/Player controller\n *  For starting a dialogue check UDlgManager - the proper function creates an UDlgContext for you\n *\n *  Call ChooseOption() if an option is selected\n *  If the return value is false the dialogue is over and the context should be dropped\n *  This abstract class contains the outer functionality only\n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgContext.h" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class representing an active dialogue, can be used to gain information and to control it\nShould be controlled from Player Character/Player controller\nFor starting a dialogue check UDlgManager - the proper function creates an UDlgContext for you\n\nCall ChooseOption() if an option is selected\nIf the return value is false the dialogue is over and the context should be dropped\nThis abstract class contains the outer functionality only" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Comment", "// Current Dialogue used in this context at runtime.\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Current Dialogue used in this context at runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgContext, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_Inner = { "SerializedParticipants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_MetaData[] = {
		{ "Comment", "// Helper array to serialize to Participants map for clients as well\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Helper array to serialize to Participants map for clients as well" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants = { "SerializedParticipants", "OnRep_SerializedParticipants", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgContext, SerializedParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_ValueProp = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_Key_KeyProp = { "Participants_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_MetaData[] = {
		{ "Comment", "// All object is expected to implement the IDlgDialogueParticipant interface\n// the key is the return value of IDlgDialogueParticipant::GetParticipantName()\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "All object is expected to implement the IDlgDialogueParticipant interface\nthe key is the return value of IDlgDialogueParticipant::GetParticipantName()" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgContext, Participants), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgContext_Statics::ClassParams = {
		&UDlgContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgContext()
	{
		if (!Z_Registration_Info_UClass_UDlgContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgContext.OuterSingleton, Z_Construct_UClass_UDlgContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgContext.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgContext>()
	{
		return UDlgContext::StaticClass();
	}

	void UDlgContext::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Dialogue(TEXT("Dialogue"));
		static const FName Name_SerializedParticipants(TEXT("SerializedParticipants"));

		const bool bIsValid = true
			&& Name_Dialogue == ClassReps[(int32)ENetFields_Private::Dialogue].Property->GetFName()
			&& Name_SerializedParticipants == ClassReps[(int32)ENetFields_Private::SerializedParticipants].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDlgContext"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgContext);
	UDlgContext::~UDlgContext() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::EnumInfo[] = {
		{ EDlgValidateStatus_StaticEnum, TEXT("EDlgValidateStatus"), &Z_Registration_Info_UEnum_EDlgValidateStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4233015615U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::ScriptStructInfo[] = {
		{ FDlgEdgeData::StaticStruct, Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewStructOps, TEXT("DlgEdgeData"), &Z_Registration_Info_UScriptStruct_DlgEdgeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdgeData), 21566738U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgContext, UDlgContext::StaticClass, TEXT("UDlgContext"), &Z_Registration_Info_UClass_UDlgContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgContext), 2553379544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_3169105675(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
