// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgManager.h"
#include "DlgSystem/DlgMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgManager();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgManager_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgObjectsArray();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgObjectsArray;
class UScriptStruct* FDlgObjectsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgObjectsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgObjectsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgObjectsArray, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgObjectsArray"));
	}
	return Z_Registration_Info_UScriptStruct_DlgObjectsArray.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgObjectsArray>()
{
	return FDlgObjectsArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgObjectsArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgObjectsArray>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgObjectsArray, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgObjectsArray",
		sizeof(FDlgObjectsArray),
		alignof(FDlgObjectsArray),
		Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgObjectsArray()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgObjectsArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgObjectsArray.InnerSingleton, Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgObjectsArray.InnerSingleton;
	}
	DEFINE_FUNCTION(UDlgManager::execClearDialoguePersistentWorldContextObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::ClearDialoguePersistentWorldContextObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execSetDialoguePersistentWorldContextObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::SetDialoguePersistentWorldContextObject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialogueWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UDlgManager::GetDialogueWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execUnregisterDialogueConsoleCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::UnregisterDialogueConsoleCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execRegisterDialogueConsoleCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::RegisterDialogueConsoleCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesEventNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesEventNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesConditionNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesConditionNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesNameNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesIntNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesSpeakerStates)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesSpeakerStates(Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesParticipantNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::GetAllDialoguesParticipantNames(Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantEventNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantEventNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantConditionNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantConditionNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantFNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantFNameNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantBoolNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantFloatNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantIntNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesSpeakerStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesSpeakerStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execIsObjectANodeData)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::IsObjectANodeData(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execIsObjectACustomTextArgument)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::IsObjectACustomTextArgument(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execIsObjectACustomCondition)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::IsObjectACustomCondition(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execIsObjectACustomEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::IsObjectACustomEvent(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execDoesObjectImplementDialogueParticipantInterface)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::DoesObjectImplementDialogueParticipantInterface(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetDialogueHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FGuid,FDlgHistory>*)Z_Param__Result=UDlgManager::GetDialogueHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execClearDialogueHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::ClearDialogueHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execSetDialogueHistory)
	{
		P_GET_TMAP_REF(FGuid,FDlgHistory,Z_Param_Out_DlgHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDlgManager::SetDialogueHistory(Z_Param_Out_DlgHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetObjectsMapWithDialogueParticipantInterface)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FDlgObjectsArray>*)Z_Param__Result=UDlgManager::GetObjectsMapWithDialogueParticipantInterface(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execGetObjectsWithDialogueParticipantInterface)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UDlgManager::GetObjectsWithDialogueParticipantInterface(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execStartDialogue4)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UObject,Z_Param_Participant0);
		P_GET_OBJECT(UObject,Z_Param_Participant1);
		P_GET_OBJECT(UObject,Z_Param_Participant2);
		P_GET_OBJECT(UObject,Z_Param_Participant3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue4(Z_Param_Dialogue,Z_Param_Participant0,Z_Param_Participant1,Z_Param_Participant2,Z_Param_Participant3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execStartDialogue3)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UObject,Z_Param_Participant0);
		P_GET_OBJECT(UObject,Z_Param_Participant1);
		P_GET_OBJECT(UObject,Z_Param_Participant2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue3(Z_Param_Dialogue,Z_Param_Participant0,Z_Param_Participant1,Z_Param_Participant2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execStartDialogue2)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UObject,Z_Param_Participant0);
		P_GET_OBJECT(UObject,Z_Param_Participant1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue2(Z_Param_Dialogue,Z_Param_Participant0,Z_Param_Participant1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execStartMonologue)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::StartMonologue(Z_Param_Dialogue,Z_Param_Participant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execResumeDialogueFromNodeGUID)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_StartNodeGUID);
		P_GET_TSET_REF(FGuid,Z_Param_Out_AlreadyVisitedNodes);
		P_GET_UBOOL(Z_Param_bFireEnterEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::ResumeDialogueFromNodeGUID(Z_Param_Dialogue,Z_Param_Out_Participants,Z_Param_Out_StartNodeGUID,Z_Param_Out_AlreadyVisitedNodes,Z_Param_bFireEnterEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execResumeDialogueFromNodeIndex)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_TSET_REF(int32,Z_Param_Out_AlreadyVisitedNodes);
		P_GET_UBOOL(Z_Param_bFireEnterEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::ResumeDialogueFromNodeIndex(Z_Param_Dialogue,Z_Param_Out_Participants,Z_Param_StartIndex,Z_Param_Out_AlreadyVisitedNodes,Z_Param_bFireEnterEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execCanStartDialogue)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDlgManager::CanStartDialogue(Z_Param_Dialogue,Z_Param_Out_Participants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execStartDialogue)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue(Z_Param_Dialogue,Z_Param_Out_Participants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgManager::execStartDialogueWithDefaultParticipants)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogueWithDefaultParticipants(Z_Param_WorldContextObject,Z_Param_Dialogue);
		P_NATIVE_END;
	}
	void UDlgManager::StaticRegisterNativesUDlgManager()
	{
		UClass* Class = UDlgManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartDialogue", &UDlgManager::execCanStartDialogue },
			{ "ClearDialogueHistory", &UDlgManager::execClearDialogueHistory },
			{ "ClearDialoguePersistentWorldContextObject", &UDlgManager::execClearDialoguePersistentWorldContextObject },
			{ "DoesObjectImplementDialogueParticipantInterface", &UDlgManager::execDoesObjectImplementDialogueParticipantInterface },
			{ "GetAllDialoguesBoolNames", &UDlgManager::execGetAllDialoguesBoolNames },
			{ "GetAllDialoguesConditionNames", &UDlgManager::execGetAllDialoguesConditionNames },
			{ "GetAllDialoguesEventNames", &UDlgManager::execGetAllDialoguesEventNames },
			{ "GetAllDialoguesFloatNames", &UDlgManager::execGetAllDialoguesFloatNames },
			{ "GetAllDialoguesIntNames", &UDlgManager::execGetAllDialoguesIntNames },
			{ "GetAllDialoguesNameNames", &UDlgManager::execGetAllDialoguesNameNames },
			{ "GetAllDialoguesParticipantNames", &UDlgManager::execGetAllDialoguesParticipantNames },
			{ "GetAllDialoguesSpeakerStates", &UDlgManager::execGetAllDialoguesSpeakerStates },
			{ "GetDialogueHistory", &UDlgManager::execGetDialogueHistory },
			{ "GetDialoguesParticipantBoolNames", &UDlgManager::execGetDialoguesParticipantBoolNames },
			{ "GetDialoguesParticipantConditionNames", &UDlgManager::execGetDialoguesParticipantConditionNames },
			{ "GetDialoguesParticipantEventNames", &UDlgManager::execGetDialoguesParticipantEventNames },
			{ "GetDialoguesParticipantFloatNames", &UDlgManager::execGetDialoguesParticipantFloatNames },
			{ "GetDialoguesParticipantFNameNames", &UDlgManager::execGetDialoguesParticipantFNameNames },
			{ "GetDialoguesParticipantIntNames", &UDlgManager::execGetDialoguesParticipantIntNames },
			{ "GetDialoguesParticipantNames", &UDlgManager::execGetDialoguesParticipantNames },
			{ "GetDialoguesSpeakerStates", &UDlgManager::execGetDialoguesSpeakerStates },
			{ "GetDialogueWorld", &UDlgManager::execGetDialogueWorld },
			{ "GetObjectsMapWithDialogueParticipantInterface", &UDlgManager::execGetObjectsMapWithDialogueParticipantInterface },
			{ "GetObjectsWithDialogueParticipantInterface", &UDlgManager::execGetObjectsWithDialogueParticipantInterface },
			{ "IsObjectACustomCondition", &UDlgManager::execIsObjectACustomCondition },
			{ "IsObjectACustomEvent", &UDlgManager::execIsObjectACustomEvent },
			{ "IsObjectACustomTextArgument", &UDlgManager::execIsObjectACustomTextArgument },
			{ "IsObjectANodeData", &UDlgManager::execIsObjectANodeData },
			{ "RegisterDialogueConsoleCommands", &UDlgManager::execRegisterDialogueConsoleCommands },
			{ "ResumeDialogueFromNodeGUID", &UDlgManager::execResumeDialogueFromNodeGUID },
			{ "ResumeDialogueFromNodeIndex", &UDlgManager::execResumeDialogueFromNodeIndex },
			{ "SetDialogueHistory", &UDlgManager::execSetDialogueHistory },
			{ "SetDialoguePersistentWorldContextObject", &UDlgManager::execSetDialoguePersistentWorldContextObject },
			{ "StartDialogue", &UDlgManager::execStartDialogue },
			{ "StartDialogue2", &UDlgManager::execStartDialogue2 },
			{ "StartDialogue3", &UDlgManager::execStartDialogue3 },
			{ "StartDialogue4", &UDlgManager::execStartDialogue4 },
			{ "StartDialogueWithDefaultParticipants", &UDlgManager::execStartDialogueWithDefaultParticipants },
			{ "StartMonologue", &UDlgManager::execStartMonologue },
			{ "UnregisterDialogueConsoleCommands", &UDlgManager::execUnregisterDialogueConsoleCommands },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics
	{
		struct DlgManager_eventCanStartDialogue_Parms
		{
			UDlgDialogue* Dialogue;
			TArray<UObject*> Participants;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventCanStartDialogue_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventCanStartDialogue_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventCanStartDialogue_Parms), &Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_Participants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Checks if there is any child of the start node which can be enterred based on the conditions\n\x09 *\n\x09 * @returns true if there is an enterable node from the start node\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Checks if there is any child of the start node which can be enterred based on the conditions\n\n@returns true if there is an enterable node from the start node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "CanStartDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::DlgManager_eventCanStartDialogue_Parms), Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_CanStartDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Memory" },
		{ "Comment", "// Empties the FDlgMemory Dialogue history.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Empties the FDlgMemory Dialogue history." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "ClearDialogueHistory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_ClearDialogueHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Persistence" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "ClearDialoguePersistentWorldContextObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics
	{
		struct DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms), &Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Does the Object implement the Dialogue Participant Interface?\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Does the Object implement the Dialogue Participant Interface?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "DoesObjectImplementDialogueParticipantInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms), Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesBoolNames_Parms
		{
			FName ParticipantName;
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesBoolNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesBoolNames has been deprecated in favour of GetDialoguesParticipantBoolNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesBoolNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::DlgManager_eventGetAllDialoguesBoolNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesConditionNames_Parms
		{
			FName ParticipantName;
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesConditionNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesConditionNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesConditionNames has been deprecated in favour of GetDialoguesParticipantConditionNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesConditionNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::DlgManager_eventGetAllDialoguesConditionNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesEventNames_Parms
		{
			FName ParticipantName;
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesEventNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesEventNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesEventNames has been deprecated in favour of GetDialoguesParticipantEventNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesEventNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::DlgManager_eventGetAllDialoguesEventNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesFloatNames_Parms
		{
			FName ParticipantName;
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesFloatNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesFloatNames has been deprecated in favour of GetDialoguesParticipantFloatNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesFloatNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::DlgManager_eventGetAllDialoguesFloatNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesIntNames_Parms
		{
			FName ParticipantName;
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesIntNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesIntNames has been deprecated in favour of GetDialoguesParticipantIntNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesIntNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::DlgManager_eventGetAllDialoguesIntNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesNameNames_Parms
		{
			FName ParticipantName;
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesNameNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesNameNames has been deprecated in favour of GetDialoguesParticipantFNameNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesNameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::DlgManager_eventGetAllDialoguesNameNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics
	{
		struct DlgManager_eventGetAllDialoguesParticipantNames_Parms
		{
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesParticipantNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesParticipantNames has been deprecated in favour of GetDialoguesParticipantNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesParticipantNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::DlgManager_eventGetAllDialoguesParticipantNames_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics
	{
		struct DlgManager_eventGetAllDialoguesSpeakerStates_Parms
		{
			TArray<FName> OutArray;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesSpeakerStates_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesSpeakerStates has been deprecated in favour of GetDialoguesSpeakerStates" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesSpeakerStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::DlgManager_eventGetAllDialoguesSpeakerStates_Parms), Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics
	{
		struct DlgManager_eventGetDialogueHistory_Parms
		{
			TMap<FGuid,FDlgHistory> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(nullptr, 0) }; // 165595085
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialogueHistory_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_MetaData)) }; // 165595085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Memory" },
		{ "Comment", "// Gets the Dialogue History from the FDlgMemory.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets the Dialogue History from the FDlgMemory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialogueHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::DlgManager_eventGetDialogueHistory_Parms), Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialogueHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantBoolNames_Parms
		{
			FName ParticipantName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantBoolNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique bool variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique bool variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantBoolNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::DlgManager_eventGetDialoguesParticipantBoolNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantConditionNames_Parms
		{
			FName ParticipantName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantConditionNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantConditionNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique condition names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique condition names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantConditionNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::DlgManager_eventGetDialoguesParticipantConditionNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantEventNames_Parms
		{
			FName ParticipantName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantEventNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantEventNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique event names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique event names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantEventNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::DlgManager_eventGetDialoguesParticipantEventNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantFloatNames_Parms
		{
			FName ParticipantName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFloatNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique float variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique float variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantFloatNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::DlgManager_eventGetDialoguesParticipantFloatNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantFNameNames_Parms
		{
			FName ParticipantName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFNameNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique name variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique name variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantFNameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::DlgManager_eventGetDialoguesParticipantFNameNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantIntNames_Parms
		{
			FName ParticipantName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantIntNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique int variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique int variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantIntNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::DlgManager_eventGetDialoguesParticipantIntNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics
	{
		struct DlgManager_eventGetDialoguesParticipantNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique participant names sorted alphabetically from all the Dialogues loaded into memory.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique participant names sorted alphabetically from all the Dialogues loaded into memory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::DlgManager_eventGetDialoguesParticipantNames_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics
	{
		struct DlgManager_eventGetDialoguesSpeakerStates_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialoguesSpeakerStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the used speaker states sorted alphabetically from all the Dialogues loaded into memory.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the used speaker states sorted alphabetically from all the Dialogues loaded into memory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesSpeakerStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::DlgManager_eventGetDialoguesSpeakerStates_Parms), Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics
	{
		struct DlgManager_eventGetDialogueWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetDialogueWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Persistence" },
		{ "Comment", "// This tries to get the source world for the dialogues\n// In the following order (the first one that is valid, returns that):\n// 1. The user set one UserWorldContextObjectPtr (if it is set):\n//\x09- Set with SetDialoguePersistentWorldContextObject_NameMethod\n//\x09- Clear with ClearDialoguePersistentWorldContextObject\n// 2. The first PIE world\n// 3. The first Game World\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "This tries to get the source world for the dialogues\nIn the following order (the first one that is valid, returns that):\n1. The user set one UserWorldContextObjectPtr (if it is set):\n      - Set with SetDialoguePersistentWorldContextObject_NameMethod\n      - Clear with ClearDialoguePersistentWorldContextObject\n2. The first PIE world\n3. The first Game World" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetDialogueWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::DlgManager_eventGetDialogueWorld_Parms), Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetDialogueWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics
	{
		struct DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms
		{
			UObject* WorldContextObject;
			TMap<FName,FDlgObjectsArray> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgObjectsArray, METADATA_PARAMS(nullptr, 0) }; // 2312179198
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2312179198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Same as GetObjectsWithDialogueParticipantInterface but groups the Objects into a Map\n// Where the Key is the Participant Name\n// and the Value is the Participants Array\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Same as GetObjectsWithDialogueParticipantInterface but groups the Objects into a Map\nWhere the Key is the Participant Name\nand the Value is the Participants Array" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetObjectsMapWithDialogueParticipantInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms), Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics
	{
		struct DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms
		{
			UObject* WorldContextObject;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Gets all objects from the World that implement the Dialogue Participant Interface\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all objects from the World that implement the Dialogue Participant Interface" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "GetObjectsWithDialogueParticipantInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms), Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics
	{
		struct DlgManager_eventIsObjectACustomCondition_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventIsObjectACustomCondition_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectACustomCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventIsObjectACustomCondition_Parms), &Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgConditionCustom or a child from that\n" },
		{ "DisplayName", "Is Object A Custom Condition" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgConditionCustom or a child from that" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "IsObjectACustomCondition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::DlgManager_eventIsObjectACustomCondition_Parms), Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics
	{
		struct DlgManager_eventIsObjectACustomEvent_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventIsObjectACustomEvent_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectACustomEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventIsObjectACustomEvent_Parms), &Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgEventCustom or a child from that\n" },
		{ "DisplayName", "Is Object A Custom Event" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgEventCustom or a child from that" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "IsObjectACustomEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::DlgManager_eventIsObjectACustomEvent_Parms), Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics
	{
		struct DlgManager_eventIsObjectACustomTextArgument_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventIsObjectACustomTextArgument_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectACustomTextArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventIsObjectACustomTextArgument_Parms), &Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgTextArgumentCustom or a child from that\n" },
		{ "DisplayName", "Is Object A Custom Text Argument" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgTextArgumentCustom or a child from that" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "IsObjectACustomTextArgument", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::DlgManager_eventIsObjectACustomTextArgument_Parms), Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics
	{
		struct DlgManager_eventIsObjectANodeData_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventIsObjectANodeData_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectANodeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventIsObjectANodeData_Parms), &Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgNodeData or a child from that\n" },
		{ "DisplayName", "Is Object A Node Data" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgNodeData or a child from that" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "IsObjectANodeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::DlgManager_eventIsObjectANodeData_Parms), Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_IsObjectANodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics
	{
		struct DlgManager_eventRegisterDialogueConsoleCommands_Parms
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
	void Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventRegisterDialogueConsoleCommands_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventRegisterDialogueConsoleCommands_Parms), &Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Console" },
		{ "Comment", "// Registers all the DlgSystem Module console commands.\n// To set the custom reference WorldContextObjectPtr, set it with SetDialoguePersistentWorldContextObject\n// @return true on success, false otherwise\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Registers all the DlgSystem Module console commands.\nTo set the custom reference WorldContextObjectPtr, set it with SetDialoguePersistentWorldContextObject\n@return true on success, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "RegisterDialogueConsoleCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::DlgManager_eventRegisterDialogueConsoleCommands_Parms), Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics
	{
		struct DlgManager_eventResumeDialogueFromNodeGUID_Parms
		{
			UDlgDialogue* Dialogue;
			TArray<UObject*> Participants;
			FGuid StartNodeGUID;
			TSet<FGuid> AlreadyVisitedNodes;
			bool bFireEnterEvents;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartNodeGUID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlreadyVisitedNodes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyVisitedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AlreadyVisitedNodes;
		static void NewProp_bFireEnterEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEnterEvents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_StartNodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_StartNodeGUID = { "StartNodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, StartNodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_StartNodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_StartNodeGUID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes_ElementProp = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, AlreadyVisitedNodes), METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_bFireEnterEvents_SetBit(void* Obj)
	{
		((DlgManager_eventResumeDialogueFromNodeGUID_Parms*)Obj)->bFireEnterEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_bFireEnterEvents = { "bFireEnterEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventResumeDialogueFromNodeGUID_Parms), &Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_bFireEnterEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_Participants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_StartNodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_AlreadyVisitedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_bFireEnterEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09* Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\x09*\n\x09* This method can fail in the following situations:\n\x09*  - The Participants number does not match the number of participants from the Dialogue.\n\x09*  - Any UObject in the Participant array does not implement the Participant Interface\n\x09*  - Participant->GetParticipantName() does not exist in the Dialogue\n\x09*  - The given node GUID is invalid\n\x09*  - The starter node does not have any valid child\n\x09*\n\x09* @param Dialogue\x09\x09\x09\x09- The dialogue asset to start\n\x09* @param Participants\x09\x09\x09- Array of participants, has to match with the expected input for the Dialogue\n\x09* @param StartNodeGUID\x09\x09\x09- GUID of the node the dialogue is resumed at\n\x09* @param AlreadyVisitedNodes\x09- Set of nodes already visited in the context the last time this Dialogue was going on.\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09  Can be acquired via GetVisitedNodeGUIDs() on the context\n\x09* @param bFireEnterEvents\x09\x09- decides if the enter events should be fired on the resumed node or not\n\x09* @returns The dialogue context object or nullptr if something wrong happened\n\x09*/" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\nThis method can fail in the following situations:\n - The Participants number does not match the number of participants from the Dialogue.\n - Any UObject in the Participant array does not implement the Participant Interface\n - Participant->GetParticipantName() does not exist in the Dialogue\n - The given node GUID is invalid\n - The starter node does not have any valid child\n\n@param Dialogue                               - The dialogue asset to start\n@param Participants                   - Array of participants, has to match with the expected input for the Dialogue\n@param StartNodeGUID                  - GUID of the node the dialogue is resumed at\n@param AlreadyVisitedNodes    - Set of nodes already visited in the context the last time this Dialogue was going on.\n                                                                Can be acquired via GetVisitedNodeGUIDs() on the context\n@param bFireEnterEvents               - decides if the enter events should be fired on the resumed node or not\n@returns The dialogue context object or nullptr if something wrong happened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "ResumeDialogueFromNodeGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::DlgManager_eventResumeDialogueFromNodeGUID_Parms), Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics
	{
		struct DlgManager_eventResumeDialogueFromNodeIndex_Parms
		{
			UDlgDialogue* Dialogue;
			TArray<UObject*> Participants;
			int32 StartIndex;
			TSet<int32> AlreadyVisitedNodes;
			bool bFireEnterEvents;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AlreadyVisitedNodes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyVisitedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AlreadyVisitedNodes;
		static void NewProp_bFireEnterEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEnterEvents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_StartIndex_MetaData[] = {
		{ "DisplayName", "Start Node Index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, StartIndex), METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_StartIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes_ElementProp = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, AlreadyVisitedNodes), METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes_MetaData)) };
	void Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_bFireEnterEvents_SetBit(void* Obj)
	{
		((DlgManager_eventResumeDialogueFromNodeIndex_Parms*)Obj)->bFireEnterEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_bFireEnterEvents = { "bFireEnterEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventResumeDialogueFromNodeIndex_Parms), &Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_bFireEnterEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_Participants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_AlreadyVisitedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_bFireEnterEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\x09 *\n\x09 * NOTE: You should most likely use ResumeDialogueFromNodeGUID\n\x09 *\n\x09 * This method can fail in the following situations:\n\x09 *  - The Participants number does not match the number of participants from the Dialogue.\n\x09 *  - Any UObject in the Participant array does not implement the Participant Interface\n\x09 *  - Participant->GetParticipantName() does not exist in the Dialogue\n\x09 *  - The given node index is invalid\n\x09 *  - The starter node does not have any valid child\n\x09 *\n\x09 * @param Dialogue\x09\x09\x09\x09- The dialogue asset to start\n\x09 * @param Participants\x09\x09\x09- Array of participants, has to match with the expected input for the Dialogue\n\x09 * @param StartIndex\x09\x09\x09- Index of the node the dialogue is resumed at\n\x09 * @param AlreadyVisitedNodes\x09- Set of nodes already visited in the context the last time this Dialogue was going on.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Can be acquired via GetVisitedNodeIndices() on the context\n\x09 * @param bFireEnterEvents\x09\x09- decides if the enter events should be fired on the resumed node or not\n\x09 * @returns The dialogue context object or nullptr if something wrong happened\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\nNOTE: You should most likely use ResumeDialogueFromNodeGUID\n\nThis method can fail in the following situations:\n - The Participants number does not match the number of participants from the Dialogue.\n - Any UObject in the Participant array does not implement the Participant Interface\n - Participant->GetParticipantName() does not exist in the Dialogue\n - The given node index is invalid\n - The starter node does not have any valid child\n\n@param Dialogue                              - The dialogue asset to start\n@param Participants                  - Array of participants, has to match with the expected input for the Dialogue\n@param StartIndex                    - Index of the node the dialogue is resumed at\n@param AlreadyVisitedNodes   - Set of nodes already visited in the context the last time this Dialogue was going on.\n                                                               Can be acquired via GetVisitedNodeIndices() on the context\n@param bFireEnterEvents              - decides if the enter events should be fired on the resumed node or not\n@returns The dialogue context object or nullptr if something wrong happened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "ResumeDialogueFromNodeIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::DlgManager_eventResumeDialogueFromNodeIndex_Parms), Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics
	{
		struct DlgManager_eventSetDialogueHistory_Parms
		{
			TMap<FGuid,FDlgHistory> DlgHistory;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DlgHistory_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DlgHistory_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DlgHistory_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DlgHistory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_ValueProp = { "DlgHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(nullptr, 0) }; // 165595085
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_Key_KeyProp = { "DlgHistory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory = { "DlgHistory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventSetDialogueHistory_Parms, DlgHistory), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_MetaData)) }; // 165595085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::NewProp_DlgHistory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Memory" },
		{ "Comment", "// Sets the FDlgMemory Dialogue history.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Sets the FDlgMemory Dialogue history." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "SetDialogueHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::DlgManager_eventSetDialogueHistory_Parms), Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_SetDialogueHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics
	{
		struct DlgManager_eventSetDialoguePersistentWorldContextObject_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventSetDialoguePersistentWorldContextObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Persistence" },
		{ "Comment", "// If the user wants to set the world context object manually\n// Otherwise just use GetDialogueWorld\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "If the user wants to set the world context object manually\nOtherwise just use GetDialogueWorld" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "SetDialoguePersistentWorldContextObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::DlgManager_eventSetDialoguePersistentWorldContextObject_Parms), Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_StartDialogue_Statics
	{
		struct DlgManager_eventStartDialogue_Parms
		{
			UDlgDialogue* Dialogue;
			TArray<UObject*> Participants;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_Participants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Starts a Dialogue with the provided Dialogue and Participants array\n\x09 * This method can fail in the following situations:\n\x09 *  - The Participants number does not match the number of participants from the Dialogue.\n\x09 *  - Any UObject in the Participant array does not implement the Participant Interface\n\x09 *  - Participant->GetParticipantName() does not exist in the Dialogue\n\x09 *\n\x09 * @returns The dialogue context object or nullptr if something wrong happened\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue and Participants array\nThis method can fail in the following situations:\n - The Participants number does not match the number of participants from the Dialogue.\n - Any UObject in the Participant array does not implement the Participant Interface\n - Participant->GetParticipantName() does not exist in the Dialogue\n\n@returns The dialogue context object or nullptr if something wrong happened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::DlgManager_eventStartDialogue_Parms), Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_StartDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics
	{
		struct DlgManager_eventStartDialogue2_Parms
		{
			UDlgDialogue* Dialogue;
			UObject* Participant0;
			UObject* Participant1;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant0;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_Participant0 = { "Participant0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, Participant0), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_Participant1 = { "Participant1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, Participant1), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_Participant0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_Participant1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with 2 participants\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with 2 participants\nFor N Participants just use StartDialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::DlgManager_eventStartDialogue2_Parms), Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics
	{
		struct DlgManager_eventStartDialogue3_Parms
		{
			UDlgDialogue* Dialogue;
			UObject* Participant0;
			UObject* Participant1;
			UObject* Participant2;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant0;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Participant0 = { "Participant0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Participant0), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Participant1 = { "Participant1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Participant1), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Participant2 = { "Participant2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Participant2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Participant0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Participant1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_Participant2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with 3 participants\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with 3 participants\nFor N Participants just use StartDialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::DlgManager_eventStartDialogue3_Parms), Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics
	{
		struct DlgManager_eventStartDialogue4_Parms
		{
			UDlgDialogue* Dialogue;
			UObject* Participant0;
			UObject* Participant1;
			UObject* Participant2;
			UObject* Participant3;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant0;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant3;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant0 = { "Participant0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant0), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant1 = { "Participant1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant1), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant2 = { "Participant2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant3 = { "Participant3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant3), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_Participant3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with 4 participants\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with 4 participants\nFor N Participants just use StartDialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::DlgManager_eventStartDialogue4_Parms), Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics
	{
		struct DlgManager_eventStartDialogueWithDefaultParticipants_Parms
		{
			UObject* WorldContextObject;
			UDlgDialogue* Dialogue;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogueWithDefaultParticipants_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogueWithDefaultParticipants_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartDialogueWithDefaultParticipants_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Starts a Dialogue with the provided Dialogue\n\x09 * The function checks all the objects in the world to gather the participants\n\x09 * This method can fail in the following situations:\n\x09 *  - The Dialogue has a Participant which does not exist in the World\n\x09 *\x09- Multiple Objects are using the same Participant Name in the World\n\x09 *\n\x09 *\x09NOTE: If this fails because it can't find the unique participants you should use the StartDialogue* functions\n\x09 *\n\x09 * @returns The dialogue context object or nullptr if something went wrong\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue\nThe function checks all the objects in the world to gather the participants\nThis method can fail in the following situations:\n - The Dialogue has a Participant which does not exist in the World\n     - Multiple Objects are using the same Participant Name in the World\n\n     NOTE: If this fails because it can't find the unique participants you should use the StartDialogue* functions\n\n@returns The dialogue context object or nullptr if something went wrong" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "StartDialogueWithDefaultParticipants", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::DlgManager_eventStartDialogueWithDefaultParticipants_Parms), Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_StartMonologue_Statics
	{
		struct DlgManager_eventStartMonologue_Parms
		{
			UDlgDialogue* Dialogue;
			UObject* Participant;
			UDlgContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartMonologue_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartMonologue_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgManager_eventStartMonologue_Parms, ReturnValue), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::NewProp_Participant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with only a participant\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with only a participant\nFor N Participants just use StartDialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "StartMonologue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::DlgManager_eventStartMonologue_Parms), Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_StartMonologue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_StartMonologue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics
	{
		struct DlgManager_eventUnregisterDialogueConsoleCommands_Parms
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
	void Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventUnregisterDialogueConsoleCommands_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgManager_eventUnregisterDialogueConsoleCommands_Parms), &Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Console" },
		{ "Comment", "// Unregister all the DlgSystem Module console commands.\n// @return true on success, false otherwise\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Unregister all the DlgSystem Module console commands.\n@return true on success, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgManager, nullptr, "UnregisterDialogueConsoleCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::DlgManager_eventUnregisterDialogueConsoleCommands_Parms), Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgManager);
	UClass* Z_Construct_UClass_UDlgManager_NoRegister()
	{
		return UDlgManager::StaticClass();
	}
	struct Z_Construct_UClass_UDlgManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgManager_CanStartDialogue, "CanStartDialogue" }, // 1766619804
		{ &Z_Construct_UFunction_UDlgManager_ClearDialogueHistory, "ClearDialogueHistory" }, // 1774776791
		{ &Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject, "ClearDialoguePersistentWorldContextObject" }, // 95498738
		{ &Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface, "DoesObjectImplementDialogueParticipantInterface" }, // 1564007407
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames, "GetAllDialoguesBoolNames" }, // 2108081738
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames, "GetAllDialoguesConditionNames" }, // 1627103828
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames, "GetAllDialoguesEventNames" }, // 1168318239
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames, "GetAllDialoguesFloatNames" }, // 270638619
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames, "GetAllDialoguesIntNames" }, // 3873810511
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames, "GetAllDialoguesNameNames" }, // 757408659
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames, "GetAllDialoguesParticipantNames" }, // 1751098450
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates, "GetAllDialoguesSpeakerStates" }, // 2736018720
		{ &Z_Construct_UFunction_UDlgManager_GetDialogueHistory, "GetDialogueHistory" }, // 1494331796
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames, "GetDialoguesParticipantBoolNames" }, // 1541306269
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames, "GetDialoguesParticipantConditionNames" }, // 1545577929
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames, "GetDialoguesParticipantEventNames" }, // 1282096748
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames, "GetDialoguesParticipantFloatNames" }, // 2138385416
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames, "GetDialoguesParticipantFNameNames" }, // 2033840295
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames, "GetDialoguesParticipantIntNames" }, // 566835100
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames, "GetDialoguesParticipantNames" }, // 3539942277
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates, "GetDialoguesSpeakerStates" }, // 1493028344
		{ &Z_Construct_UFunction_UDlgManager_GetDialogueWorld, "GetDialogueWorld" }, // 2075287335
		{ &Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface, "GetObjectsMapWithDialogueParticipantInterface" }, // 3325414161
		{ &Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface, "GetObjectsWithDialogueParticipantInterface" }, // 776711303
		{ &Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition, "IsObjectACustomCondition" }, // 629774040
		{ &Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent, "IsObjectACustomEvent" }, // 3908043923
		{ &Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument, "IsObjectACustomTextArgument" }, // 2539567036
		{ &Z_Construct_UFunction_UDlgManager_IsObjectANodeData, "IsObjectANodeData" }, // 3262477379
		{ &Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands, "RegisterDialogueConsoleCommands" }, // 234533156
		{ &Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID, "ResumeDialogueFromNodeGUID" }, // 2878463445
		{ &Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex, "ResumeDialogueFromNodeIndex" }, // 2325178990
		{ &Z_Construct_UFunction_UDlgManager_SetDialogueHistory, "SetDialogueHistory" }, // 3867931001
		{ &Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject, "SetDialoguePersistentWorldContextObject" }, // 3184563474
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue, "StartDialogue" }, // 2593004100
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue2, "StartDialogue2" }, // 900401644
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue3, "StartDialogue3" }, // 265201148
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue4, "StartDialogue4" }, // 1162009938
		{ &Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants, "StartDialogueWithDefaultParticipants" }, // 2396691894
		{ &Z_Construct_UFunction_UDlgManager_StartMonologue, "StartMonologue" }, // 1883172629
		{ &Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands, "UnregisterDialogueConsoleCommands" }, // 4119162269
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Class providing a collection of static functions to start a conversation and work with Dialogues.\n */" },
		{ "IncludePath", "DlgManager.h" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Class providing a collection of static functions to start a conversation and work with Dialogues." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgManager_Statics::ClassParams = {
		&UDlgManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgManager()
	{
		if (!Z_Registration_Info_UClass_UDlgManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgManager.OuterSingleton, Z_Construct_UClass_UDlgManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgManager.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgManager>()
	{
		return UDlgManager::StaticClass();
	}
	UDlgManager::UDlgManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgManager);
	UDlgManager::~UDlgManager() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics::ScriptStructInfo[] = {
		{ FDlgObjectsArray::StaticStruct, Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewStructOps, TEXT("DlgObjectsArray"), &Z_Registration_Info_UScriptStruct_DlgObjectsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgObjectsArray), 2312179198U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgManager, UDlgManager::StaticClass, TEXT("UDlgManager"), &Z_Registration_Info_UClass_UDlgManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgManager), 874148666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_3824091976(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
