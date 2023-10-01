// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgDialogue.h"
#include "DlgSystem/DlgDialogueParticipantData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgParticipantClass;
class UScriptStruct* FDlgParticipantClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgParticipantClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgParticipantClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantClass, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgParticipantClass"));
	}
	return Z_Registration_Info_UScriptStruct_DlgParticipantClass.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgParticipantClass>()
{
	return FDlgParticipantClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgParticipantClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParticipantClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure useful to cache all the names used by a participant\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Structure useful to cache all the names used by a participant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantClass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// The Name of the Participant Used inside this Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The Name of the Participant Used inside this Dialogue" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantClass, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// The Participant Class corresponding for the ParticipantName\n// This is used to autocomplete and retrieve the Variables from that Class automatically when Using Class based Conditions/Events\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "MustImplement", "/Script/DlgSystem.DlgDialogueParticipant" },
		{ "ToolTip", "The Participant Class corresponding for the ParticipantName\nThis is used to autocomplete and retrieve the Variables from that Class automatically when Using Class based Conditions/Events" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass = { "ParticipantClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantClass, ParticipantClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgParticipantClass",
		sizeof(FDlgParticipantClass),
		alignof(FDlgParticipantClass),
		Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgParticipantClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgParticipantClass.InnerSingleton, Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgParticipantClass.InnerSingleton;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableNodeFromGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableNodeFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNodeIndexForGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeIndexForGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNodeGUIDForIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUIDForIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execIsValidNodeGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execIsValidNodeIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableStartNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDlgNode*>*)Z_Param__Result=P_THIS->GetMutableStartNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableStartNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableStartNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDlgNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execHasGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetDialogueFName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDialogueFName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetDialogueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDialogueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetDialogueVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDialogueVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassTextNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassTextNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassNameNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassIntNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNameNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIntNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetCustomEvents)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(UClass*,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomEvents(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetEvents)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEvents(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetConditions)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConditions(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetAllSpeakerStates)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSpeakerStates(Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetAllParticipantNames)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllParticipantNames(Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassFTextNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassFTextNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassFNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassFNameNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassBoolNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassFloatNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassIntNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantFNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantFNameNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantBoolNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantFloatNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantIntNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantCustomTextArguments)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetParticipantCustomTextArguments(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantCustomConditions)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetParticipantCustomConditions(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantCustomEvents)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetParticipantCustomEvents(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantFunctionNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantFunctionNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantEventNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantEventNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantConditionNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantConditionNames(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetSpeakerStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetSpeakerStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetParticipantClass(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgParticipantClass>*)Z_Param__Result=P_THIS->GetParticipantClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParticipantsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execHasParticipant)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasParticipant(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FDlgParticipantData>*)Z_Param__Result=P_THIS->GetParticipantsData();
		P_NATIVE_END;
	}
	void UDlgDialogue::StaticRegisterNativesUDlgDialogue()
	{
		UClass* Class = UDlgDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllParticipantNames", &UDlgDialogue::execGetAllParticipantNames },
			{ "GetAllSpeakerStates", &UDlgDialogue::execGetAllSpeakerStates },
			{ "GetBoolNames", &UDlgDialogue::execGetBoolNames },
			{ "GetClassBoolNames", &UDlgDialogue::execGetClassBoolNames },
			{ "GetClassFloatNames", &UDlgDialogue::execGetClassFloatNames },
			{ "GetClassIntNames", &UDlgDialogue::execGetClassIntNames },
			{ "GetClassNameNames", &UDlgDialogue::execGetClassNameNames },
			{ "GetClassTextNames", &UDlgDialogue::execGetClassTextNames },
			{ "GetConditions", &UDlgDialogue::execGetConditions },
			{ "GetCustomEvents", &UDlgDialogue::execGetCustomEvents },
			{ "GetDialogueFName", &UDlgDialogue::execGetDialogueFName },
			{ "GetDialogueName", &UDlgDialogue::execGetDialogueName },
			{ "GetDialogueVersion", &UDlgDialogue::execGetDialogueVersion },
			{ "GetEvents", &UDlgDialogue::execGetEvents },
			{ "GetFloatNames", &UDlgDialogue::execGetFloatNames },
			{ "GetGUID", &UDlgDialogue::execGetGUID },
			{ "GetIntNames", &UDlgDialogue::execGetIntNames },
			{ "GetMutableNodeFromGUID", &UDlgDialogue::execGetMutableNodeFromGUID },
			{ "GetMutableNodeFromIndex", &UDlgDialogue::execGetMutableNodeFromIndex },
			{ "GetMutableStartNode", &UDlgDialogue::execGetMutableStartNode },
			{ "GetMutableStartNodes", &UDlgDialogue::execGetMutableStartNodes },
			{ "GetNameNames", &UDlgDialogue::execGetNameNames },
			{ "GetNodeGUIDForIndex", &UDlgDialogue::execGetNodeGUIDForIndex },
			{ "GetNodeIndexForGUID", &UDlgDialogue::execGetNodeIndexForGUID },
			{ "GetNodes", &UDlgDialogue::execGetNodes },
			{ "GetParticipantBoolNames", &UDlgDialogue::execGetParticipantBoolNames },
			{ "GetParticipantClass", &UDlgDialogue::execGetParticipantClass },
			{ "GetParticipantClassBoolNames", &UDlgDialogue::execGetParticipantClassBoolNames },
			{ "GetParticipantClasses", &UDlgDialogue::execGetParticipantClasses },
			{ "GetParticipantClassFloatNames", &UDlgDialogue::execGetParticipantClassFloatNames },
			{ "GetParticipantClassFNameNames", &UDlgDialogue::execGetParticipantClassFNameNames },
			{ "GetParticipantClassFTextNames", &UDlgDialogue::execGetParticipantClassFTextNames },
			{ "GetParticipantClassIntNames", &UDlgDialogue::execGetParticipantClassIntNames },
			{ "GetParticipantConditionNames", &UDlgDialogue::execGetParticipantConditionNames },
			{ "GetParticipantCustomConditions", &UDlgDialogue::execGetParticipantCustomConditions },
			{ "GetParticipantCustomEvents", &UDlgDialogue::execGetParticipantCustomEvents },
			{ "GetParticipantCustomTextArguments", &UDlgDialogue::execGetParticipantCustomTextArguments },
			{ "GetParticipantEventNames", &UDlgDialogue::execGetParticipantEventNames },
			{ "GetParticipantFloatNames", &UDlgDialogue::execGetParticipantFloatNames },
			{ "GetParticipantFNameNames", &UDlgDialogue::execGetParticipantFNameNames },
			{ "GetParticipantFunctionNames", &UDlgDialogue::execGetParticipantFunctionNames },
			{ "GetParticipantIntNames", &UDlgDialogue::execGetParticipantIntNames },
			{ "GetParticipantNames", &UDlgDialogue::execGetParticipantNames },
			{ "GetParticipantsData", &UDlgDialogue::execGetParticipantsData },
			{ "GetParticipantsNum", &UDlgDialogue::execGetParticipantsNum },
			{ "GetSpeakerStates", &UDlgDialogue::execGetSpeakerStates },
			{ "HasGUID", &UDlgDialogue::execHasGUID },
			{ "HasParticipant", &UDlgDialogue::execHasParticipant },
			{ "IsValidNodeGUID", &UDlgDialogue::execIsValidNodeGUID },
			{ "IsValidNodeIndex", &UDlgDialogue::execIsValidNodeIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics
	{
		struct DlgDialogue_eventGetAllParticipantNames_Parms
		{
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetAllParticipantNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllParticipantNames has been deprecated in favour of GetParticipantNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllParticipantNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::DlgDialogue_eventGetAllParticipantNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics
	{
		struct DlgDialogue_eventGetAllSpeakerStates_Parms
		{
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetAllSpeakerStates_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllSpeakerStates has been deprecated in favour of GetSpeakerStates" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllSpeakerStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::DlgDialogue_eventGetAllSpeakerStates_Parms), Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics
	{
		struct DlgDialogue_eventGetBoolNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetBoolNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetBoolNames has been deprecated in favour of GetParticipantBoolNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetBoolNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::DlgDialogue_eventGetBoolNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics
	{
		struct DlgDialogue_eventGetClassBoolNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassBoolNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassBoolNames has been deprecated in favour of GetParticipantClassBoolNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassBoolNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::DlgDialogue_eventGetClassBoolNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics
	{
		struct DlgDialogue_eventGetClassFloatNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassFloatNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassFloatNames has been deprecated in favour of GetParticipantClassFloatNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassFloatNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::DlgDialogue_eventGetClassFloatNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics
	{
		struct DlgDialogue_eventGetClassIntNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassIntNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassIntNames has been deprecated in favour of GetParticipantClassIntNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassIntNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::DlgDialogue_eventGetClassIntNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics
	{
		struct DlgDialogue_eventGetClassNameNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassNameNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassNameNames has been deprecated in favour of GetParticipantClassFNameNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassNameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::DlgDialogue_eventGetClassNameNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics
	{
		struct DlgDialogue_eventGetClassTextNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassTextNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetClassTextNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassTextNames has been deprecated in favour of GetParticipantClassFTextNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassTextNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::DlgDialogue_eventGetClassTextNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassTextNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics
	{
		struct DlgDialogue_eventGetConditions_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetConditions_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetConditions_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetConditions has been deprecated in favour of GetParticipantConditionNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::DlgDialogue_eventGetConditions_Parms), Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics
	{
		struct DlgDialogue_eventGetCustomEvents_Parms
		{
			FName ParticipantName;
			TSet<UClass*> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetCustomEvents_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetCustomEvents_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetCustomEvents has been deprecated in favour of GetParticipantCustomEvents" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetCustomEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::DlgDialogue_eventGetCustomEvents_Parms), Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetCustomEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics
	{
		struct DlgDialogue_eventGetDialogueFName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetDialogueFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Same as the GetDialogueName only it returns a FName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Same as the GetDialogueName only it returns a FName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueFName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::DlgDialogue_eventGetDialogueFName_Parms), Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueFName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics
	{
		struct DlgDialogue_eventGetDialogueName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetDialogueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets/extracts the name (without extension) of the dialog from the uasset filename\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets/extracts the name (without extension) of the dialog from the uasset filename" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::DlgDialogue_eventGetDialogueName_Parms), Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics
	{
		struct DlgDialogue_eventGetDialogueVersion_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetDialogueVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::DlgDialogue_eventGetDialogueVersion_Parms), Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics
	{
		struct DlgDialogue_eventGetEvents_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetEvents_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetEvents_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetEvents has been deprecated in favour of GetParticipantEventNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::DlgDialogue_eventGetEvents_Parms), Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics
	{
		struct DlgDialogue_eventGetFloatNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetFloatNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetFloatNames has been deprecated in favour of GetParticipantFloatNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetFloatNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::DlgDialogue_eventGetFloatNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics
	{
		struct DlgDialogue_eventGetGUID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|GUID" },
		{ "Comment", "// Gets the unique identifier for this dialogue.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the unique identifier for this dialogue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::DlgDialogue_eventGetGUID_Parms), Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics
	{
		struct DlgDialogue_eventGetIntNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetIntNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetIntNames has been deprecated in favour of GetParticipantIntNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetIntNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::DlgDialogue_eventGetIntNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics
	{
		struct DlgDialogue_eventGetMutableNodeFromGUID_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Node From GUID" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableNodeFromGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::DlgDialogue_eventGetMutableNodeFromGUID_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics
	{
		struct DlgDialogue_eventGetMutableNodeFromIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Node as a mutable pointer.\n" },
		{ "DisplayName", "Get Node From Index" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Node as a mutable pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableNodeFromIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::DlgDialogue_eventGetMutableNodeFromIndex_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics
	{
		struct DlgDialogue_eventGetMutableStartNode_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetMutableStartNode_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Function has been deprecated, Please use GetMutableStartNodes" },
		{ "DisplayName", "Get Start Node" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableStartNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::DlgDialogue_eventGetMutableStartNode_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics
	{
		struct DlgDialogue_eventGetMutableStartNodes_Parms
		{
			TArray<UDlgNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetMutableStartNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DisplayName", "Get Start Nodes" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableStartNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::DlgDialogue_eventGetMutableStartNodes_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics
	{
		struct DlgDialogue_eventGetNameNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNameNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetNameNames has been deprecated in favour of GetParticipantFNameNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::DlgDialogue_eventGetNameNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics
	{
		struct DlgDialogue_eventGetNodeGUIDForIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNodeGUIDForIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNodeGUIDForIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the GUID for the Node at NodeIndex\n" },
		{ "DisplayName", "Get Node GUID For Index" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the GUID for the Node at NodeIndex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodeGUIDForIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::DlgDialogue_eventGetNodeGUIDForIndex_Parms), Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics
	{
		struct DlgDialogue_eventGetNodeIndexForGUID_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNodeIndexForGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNodeIndexForGUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the corresponding Node Index for the supplied NodeGUID\n// Returns -1 (INDEX_NONE) if the Node GUID does not exist.\n" },
		{ "DisplayName", "Get Node Index For GUID" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the corresponding Node Index for the supplied NodeGUID\nReturns -1 (INDEX_NONE) if the Node GUID does not exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodeIndexForGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::DlgDialogue_eventGetNodeIndexForGUID_Parms), Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics
	{
		struct DlgDialogue_eventGetNodes_Parms
		{
			TArray<UDlgNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the nodes\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets all the nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::DlgDialogue_eventGetNodes_Parms), Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics
	{
		struct DlgDialogue_eventGetParticipantBoolNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantBoolNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the bool variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the bool variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantBoolNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::DlgDialogue_eventGetParticipantBoolNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics
	{
		struct DlgDialogue_eventGetParticipantClass_Parms
		{
			FName ParticipantName;
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClass_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/// EDITOR function, it only works if the participant class is setup in the ParticipantsClasses array\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "EDITOR function, it only works if the participant class is setup in the ParticipantsClasses array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::DlgDialogue_eventGetParticipantClass_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics
	{
		struct DlgDialogue_eventGetParticipantClassBoolNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassBoolNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the bool variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the bool variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassBoolNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::DlgDialogue_eventGetParticipantClassBoolNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics
	{
		struct DlgDialogue_eventGetParticipantClasses_Parms
		{
			TArray<FDlgParticipantClass> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgParticipantClass, METADATA_PARAMS(nullptr, 0) }; // 1639853776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue_MetaData)) }; // 1639853776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::DlgDialogue_eventGetParticipantClasses_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics
	{
		struct DlgDialogue_eventGetParticipantClassFloatNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFloatNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the float variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the float variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassFloatNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::DlgDialogue_eventGetParticipantClassFloatNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics
	{
		struct DlgDialogue_eventGetParticipantClassFNameNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFNameNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FName variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the FName variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassFNameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::DlgDialogue_eventGetParticipantClassFNameNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics
	{
		struct DlgDialogue_eventGetParticipantClassFTextNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFTextNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFTextNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FText variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the FText variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassFTextNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::DlgDialogue_eventGetParticipantClassFTextNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics
	{
		struct DlgDialogue_eventGetParticipantClassIntNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassIntNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the int variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the int variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassIntNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::DlgDialogue_eventGetParticipantClassIntNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics
	{
		struct DlgDialogue_eventGetParticipantConditionNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantConditionNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantConditionNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Condition Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Condition Names that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantConditionNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::DlgDialogue_eventGetParticipantConditionNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics
	{
		struct DlgDialogue_eventGetParticipantCustomConditions_Parms
		{
			FName ParticipantName;
			TSet<UClass*> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomConditions_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomConditions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Conditions UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Conditions UClasses that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantCustomConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::DlgDialogue_eventGetParticipantCustomConditions_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics
	{
		struct DlgDialogue_eventGetParticipantCustomEvents_Parms
		{
			FName ParticipantName;
			TSet<UClass*> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomEvents_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomEvents_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Events UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Events UClasses that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantCustomEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::DlgDialogue_eventGetParticipantCustomEvents_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics
	{
		struct DlgDialogue_eventGetParticipantCustomTextArguments_Parms
		{
			FName ParticipantName;
			TSet<UClass*> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomTextArguments_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomTextArguments_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Text Arguments UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Text Arguments UClasses that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantCustomTextArguments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::DlgDialogue_eventGetParticipantCustomTextArguments_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics
	{
		struct DlgDialogue_eventGetParticipantEventNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantEventNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantEventNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Event Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Event Names that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantEventNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::DlgDialogue_eventGetParticipantEventNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics
	{
		struct DlgDialogue_eventGetParticipantFloatNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFloatNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the float variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the float variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantFloatNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::DlgDialogue_eventGetParticipantFloatNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics
	{
		struct DlgDialogue_eventGetParticipantFNameNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFNameNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FName variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the FName variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantFNameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::DlgDialogue_eventGetParticipantFNameNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics
	{
		struct DlgDialogue_eventGetParticipantFunctionNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFunctionNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFunctionNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Unreal Functions that can be called based on the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Unreal Functions that can be called based on the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantFunctionNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::DlgDialogue_eventGetParticipantFunctionNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics
	{
		struct DlgDialogue_eventGetParticipantIntNames_Parms
		{
			FName ParticipantName;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantIntNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the int variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the int variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantIntNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::DlgDialogue_eventGetParticipantIntNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics
	{
		struct DlgDialogue_eventGetParticipantNames_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the keys (participant names) of the DlgData Map\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets all the keys (participant names) of the DlgData Map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::DlgDialogue_eventGetParticipantNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics
	{
		struct DlgDialogue_eventGetParticipantsData_Parms
		{
			TMap<FName,FDlgParticipantData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgParticipantData, METADATA_PARAMS(nullptr, 0) }; // 1561816090
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantsData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_MetaData)) }; // 1561816090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Dialogue Data Map. It maps Participant Name => Participant Data\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Dialogue Data Map. It maps Participant Name => Participant Data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantsData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::DlgDialogue_eventGetParticipantsData_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics
	{
		struct DlgDialogue_eventGetParticipantsNum_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetParticipantsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the number of participants in the Dialogue Data Map.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the number of participants in the Dialogue Data Map." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantsNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::DlgDialogue_eventGetParticipantsNum_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics
	{
		struct DlgDialogue_eventGetSpeakerStates_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventGetSpeakerStates_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the SpeakerStates used inside this Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets all the SpeakerStates used inside this Dialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetSpeakerStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::DlgDialogue_eventGetSpeakerStates_Parms), Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics
	{
		struct DlgDialogue_eventHasGUID_Parms
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
	void Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventHasGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogue_eventHasGUID_Parms), &Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|GUID" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "HasGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::DlgDialogue_eventHasGUID_Parms), Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_HasGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics
	{
		struct DlgDialogue_eventHasParticipant_Parms
		{
			FName ParticipantName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventHasParticipant_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventHasParticipant_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogue_eventHasParticipant_Parms), &Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Checks if the provided ParticipantName (SpeakerName) is a key in the Dialogue Data Map\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Checks if the provided ParticipantName (SpeakerName) is a key in the Dialogue Data Map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "HasParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::DlgDialogue_eventHasParticipant_Parms), Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_HasParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics
	{
		struct DlgDialogue_eventIsValidNodeGUID_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventIsValidNodeGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData)) };
	void Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventIsValidNodeGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogue_eventIsValidNodeGUID_Parms), &Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "IsValidNodeGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::DlgDialogue_eventIsValidNodeGUID_Parms), Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics
	{
		struct DlgDialogue_eventIsValidNodeIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogue_eventIsValidNodeIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventIsValidNodeIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogue_eventIsValidNodeIndex_Parms), &Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "IsValidNodeIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::DlgDialogue_eventIsValidNodeIndex_Parms), Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgDialogue);
	UClass* Z_Construct_UClass_UDlgDialogue_NoRegister()
	{
		return UDlgDialogue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgDialogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantsClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantsClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticipantsClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantsData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantsData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantsData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParticipantsData;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AllSpeakerStates_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllSpeakerStates_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllSpeakerStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNodes_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodesGUIDToIndexMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesGUIDToIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesGUIDToIndexMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodesGUIDToIndexMap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DlgGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DlgGraph;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgDialogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgDialogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames, "GetAllParticipantNames" }, // 18369922
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates, "GetAllSpeakerStates" }, // 968283781
		{ &Z_Construct_UFunction_UDlgDialogue_GetBoolNames, "GetBoolNames" }, // 1533056747
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames, "GetClassBoolNames" }, // 1363891954
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames, "GetClassFloatNames" }, // 3010516972
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassIntNames, "GetClassIntNames" }, // 3912481308
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassNameNames, "GetClassNameNames" }, // 4173766477
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassTextNames, "GetClassTextNames" }, // 3753232640
		{ &Z_Construct_UFunction_UDlgDialogue_GetConditions, "GetConditions" }, // 1629449169
		{ &Z_Construct_UFunction_UDlgDialogue_GetCustomEvents, "GetCustomEvents" }, // 3582168606
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueFName, "GetDialogueFName" }, // 3242398928
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueName, "GetDialogueName" }, // 2146445774
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion, "GetDialogueVersion" }, // 4048509466
		{ &Z_Construct_UFunction_UDlgDialogue_GetEvents, "GetEvents" }, // 321613524
		{ &Z_Construct_UFunction_UDlgDialogue_GetFloatNames, "GetFloatNames" }, // 1177969584
		{ &Z_Construct_UFunction_UDlgDialogue_GetGUID, "GetGUID" }, // 1377951249
		{ &Z_Construct_UFunction_UDlgDialogue_GetIntNames, "GetIntNames" }, // 4155696395
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID, "GetMutableNodeFromGUID" }, // 3955315853
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex, "GetMutableNodeFromIndex" }, // 1026727624
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode, "GetMutableStartNode" }, // 2348295881
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes, "GetMutableStartNodes" }, // 506417289
		{ &Z_Construct_UFunction_UDlgDialogue_GetNameNames, "GetNameNames" }, // 1192397499
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex, "GetNodeGUIDForIndex" }, // 3841883027
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID, "GetNodeIndexForGUID" }, // 3988761140
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodes, "GetNodes" }, // 2106714550
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames, "GetParticipantBoolNames" }, // 2388544654
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClass, "GetParticipantClass" }, // 520517791
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames, "GetParticipantClassBoolNames" }, // 183717807
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses, "GetParticipantClasses" }, // 1349009762
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames, "GetParticipantClassFloatNames" }, // 415310652
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames, "GetParticipantClassFNameNames" }, // 3501459213
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames, "GetParticipantClassFTextNames" }, // 583450229
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames, "GetParticipantClassIntNames" }, // 3204906764
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames, "GetParticipantConditionNames" }, // 41132992
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions, "GetParticipantCustomConditions" }, // 1637345175
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents, "GetParticipantCustomEvents" }, // 1240164865
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments, "GetParticipantCustomTextArguments" }, // 583116013
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames, "GetParticipantEventNames" }, // 4095167160
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames, "GetParticipantFloatNames" }, // 3001300885
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames, "GetParticipantFNameNames" }, // 4171757433
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames, "GetParticipantFunctionNames" }, // 2509748413
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames, "GetParticipantIntNames" }, // 3951244777
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantNames, "GetParticipantNames" }, // 502286785
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantsData, "GetParticipantsData" }, // 1937888976
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum, "GetParticipantsNum" }, // 573927391
		{ &Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates, "GetSpeakerStates" }, // 1818857562
		{ &Z_Construct_UFunction_UDlgDialogue_HasGUID, "HasGUID" }, // 2593340517
		{ &Z_Construct_UFunction_UDlgDialogue_HasParticipant, "HasParticipant" }, // 3279163251
		{ &Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID, "IsValidNodeGUID" }, // 3825911042
		{ &Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex, "IsValidNodeIndex" }, // 3815460839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Dialogue asset containing the static data of a dialogue\n *  Instances can be created in content browser\n *  Dialogues have a custom blueprint editor\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "DlgDialogue.h" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Dialogue asset containing the static data of a dialogue\nInstances can be created in content browser\nDialogues have a custom blueprint editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "// Used to keep track of the version in text  file too, besides being written in the .uasset file.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Used to keep track of the version in text  file too, besides being written in the .uasset file." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, Version), METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The name of the dialog, only used for reference in the text file, as this must always match the .uasset file name and .dlg file name\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The name of the dialog, only used for reference in the text file, as this must always match the .uasset file name and .dlg file name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, Name), METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The Unique identifier for each dialogue. This is used to uniquely identify a Dialogue, instead of it's name or path. Much more safer.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The Unique identifier for each dialogue. This is used to uniquely identify a Dialogue, instead of it's name or path. Much more safer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_Inner = { "ParticipantsClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgParticipantClass, METADATA_PARAMS(nullptr, 0) }; // 1639853776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// All the Participants that require for you to define its UClass otherwise the auto completion/suggestion won't work in case you want to modify/check Class variables.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "All the Participants that require for you to define its UClass otherwise the auto completion/suggestion won't work in case you want to modify/check Class variables." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses = { "ParticipantsClasses", nullptr, (EPropertyFlags)0x0020080000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, ParticipantsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_MetaData)) }; // 1639853776
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_ValueProp = { "ParticipantsData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgParticipantData, METADATA_PARAMS(nullptr, 0) }; // 1561816090
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_Key_KeyProp = { "ParticipantsData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gathered data about events/conditions for each participant (for bp nodes, suggestions, etc.)\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gathered data about events/conditions for each participant (for bp nodes, suggestions, etc.)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData = { "ParticipantsData", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, ParticipantsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_MetaData)) }; // 1561816090
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_ElementProp = { "AllSpeakerStates", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// All the speaker states used inside this Dialogue.\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "All the speaker states used inside this Dialogue." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates = { "AllSpeakerStates", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, AllSpeakerStates), METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode_MetaData[] = {
		{ "Comment", "// Root node, Dialogue is started from the first child with satisfied condition (like the SelectorFirst node)\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Root node, Dialogue is started from the first child with satisfied condition (like the SelectorFirst node)\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0022080020080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, StartNode_DEPRECATED), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_Inner_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n// (node itself works like the SelectorFirst node, first satisfied child will be picked)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n(node itself works like the SelectorFirst node, first satisfied child will be picked)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_Inner = { "StartNodes", nullptr, (EPropertyFlags)0x00020000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n// (node itself works like the SelectorFirst node, first satisfied child will be picked)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n(node itself works like the SelectorFirst node, first satisfied child will be picked)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes = { "StartNodes", nullptr, (EPropertyFlags)0x0020088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, StartNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner_MetaData[] = {
		{ "Comment", "// The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\n// to other nodes in this array.\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "DlgWriteIndex", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\nto other nodes in this array.\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "// The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\n// to other nodes in this array.\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "DlgWriteIndex", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\nto other nodes in this array.\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x00200c8000000048, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_ValueProp = { "NodesGUIDToIndexMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_Key_KeyProp = { "NodesGUIDToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Maps Node GUID => Node Index\n" },
		{ "DisplayName", "Nodes GUID To Index Map" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Maps Node GUID => Node Index" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap = { "NodesGUIDToIndexMap", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, NodesGUIDToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph_MetaData[] = {
		{ "Comment", "// EdGraph based representation of the DlgDialogue class\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "EdGraph based representation of the DlgDialogue class" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph = { "DlgGraph", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgDialogue, DlgGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgDialogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgDialogue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgDialogue_Statics::ClassParams = {
		&UDlgDialogue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgDialogue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgDialogue()
	{
		if (!Z_Registration_Info_UClass_UDlgDialogue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgDialogue.OuterSingleton, Z_Construct_UClass_UDlgDialogue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgDialogue.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgDialogue>()
	{
		return UDlgDialogue::StaticClass();
	}
	UDlgDialogue::UDlgDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgDialogue);
	UDlgDialogue::~UDlgDialogue() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgDialogue)
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics::ScriptStructInfo[] = {
		{ FDlgParticipantClass::StaticStruct, Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewStructOps, TEXT("DlgParticipantClass"), &Z_Registration_Info_UScriptStruct_DlgParticipantClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgParticipantClass), 1639853776U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgDialogue, UDlgDialogue::StaticClass, TEXT("UDlgDialogue"), &Z_Registration_Info_UClass_UDlgDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgDialogue), 476673358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_4284033027(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
