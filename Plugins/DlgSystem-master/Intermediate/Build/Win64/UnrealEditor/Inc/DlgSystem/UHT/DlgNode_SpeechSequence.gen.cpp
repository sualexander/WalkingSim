// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_SpeechSequence.h"
#include "DlgSystem/DlgEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_SpeechSequence() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry;
class UScriptStruct* FDlgSpeechSequenceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgSpeechSequenceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgSpeechSequenceEntry>()
{
	return FDlgSpeechSequenceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EdgeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceDialogueWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceDialogueWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GenericData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgSpeechSequenceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// The Participant Name (speaker) associated with this speech entry.\n" },
		{ "DisplayName", "Participant Name" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "The Participant Name (speaker) associated with this speech entry." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when this node participant name speaks to someone else.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when this node participant name speaks to someone else." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_EdgeText_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when you want to continue down this edge to the next conversation. Usually \"Next\".\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when you want to continue down this edge to the next conversation. Usually \"Next\"." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_EdgeText = { "EdgeText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, EdgeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_EdgeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_EdgeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_SpeakerState_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// State of the speaker attached to the entry. Passed to the GetParticipantIcon function.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "State of the speaker attached to the entry. Passed to the GetParticipantIcon function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, SpeakerState), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_SpeakerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_SpeakerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Node data that you can customize yourself with your own data types\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Node data that you can customize yourself with your own data types" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, NodeData), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_NodeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceSoundWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Sound Wave variant.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Voice attached to this node. The Sound Wave variant.\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceSoundWave = { "VoiceSoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, VoiceSoundWave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceDialogueWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceDialogueWave = { "VoiceDialogueWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, VoiceDialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceDialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceDialogueWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_GenericData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Any generic object you would like\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Any generic object you would like\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_GenericData = { "GenericData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry, GenericData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_GenericData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_GenericData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_EdgeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_SpeakerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_NodeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_VoiceDialogueWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewProp_GenericData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgSpeechSequenceEntry",
		sizeof(FDlgSpeechSequenceEntry),
		alignof(FDlgSpeechSequenceEntry),
		Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry.InnerSingleton, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UDlgNode_SpeechSequence::execHasSpeechSequences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSpeechSequences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode_SpeechSequence::execGetNodeSpeechSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgSpeechSequenceEntry>*)Z_Param__Result=P_THIS->GetNodeSpeechSequence();
		P_NATIVE_END;
	}
	void UDlgNode_SpeechSequence::StaticRegisterNativesUDlgNode_SpeechSequence()
	{
		UClass* Class = UDlgNode_SpeechSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeSpeechSequence", &UDlgNode_SpeechSequence::execGetNodeSpeechSequence },
			{ "HasSpeechSequences", &UDlgNode_SpeechSequence::execHasSpeechSequences },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics
	{
		struct DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms
		{
			TArray<FDlgSpeechSequenceEntry> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, METADATA_PARAMS(nullptr, 0) }; // 694255345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue_MetaData)) }; // 694255345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the SpeechSequence as a const array\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Gets the SpeechSequence as a const array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode_SpeechSequence, nullptr, "GetNodeSpeechSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms), Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics
	{
		struct DlgNode_SpeechSequence_eventHasSpeechSequences_Parms
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
	void Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_SpeechSequence_eventHasSpeechSequences_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgNode_SpeechSequence_eventHasSpeechSequences_Parms), &Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Tells us if the speech sequence has any speeches (aka not empty)\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Tells us if the speech sequence has any speeches (aka not empty)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode_SpeechSequence, nullptr, "HasSpeechSequences", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::DlgNode_SpeechSequence_eventHasSpeechSequences_Parms), Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_SpeechSequence);
	UClass* Z_Construct_UClass_UDlgNode_SpeechSequence_NoRegister()
	{
		return UDlgNode_SpeechSequence::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_SpeechSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechSequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechSequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerEdges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerEdges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerEdges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence, "GetNodeSpeechSequence" }, // 1399132967
		{ &Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences, "HasSpeechSequences" }, // 1496730467
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Sequence of speeches - each can have a different speaker independently from the node owner.\n * The node stays active and proceeds one step in the SpeechSequence (internal) array until everyone said everything.\n */" },
		{ "IncludePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Sequence of speeches - each can have a different speaker independently from the node owner.\nThe node stays active and proceeds one step in the SpeechSequence (internal) array until everyone said everything." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence_Inner = { "SpeechSequence", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, METADATA_PARAMS(nullptr, 0) }; // 694255345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Array of important stuff to say\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Array of important stuff to say" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence = { "SpeechSequence", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_SpeechSequence, SpeechSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence_MetaData)) }; // 694255345
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges_Inner = { "InnerEdges", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) }; // 273406106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges_MetaData[] = {
		{ "Comment", "// Inner edge, filled automatically based on SpeechSequence\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Inner edge, filled automatically based on SpeechSequence" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges = { "InnerEdges", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_SpeechSequence, InnerEdges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_SpeechSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::NewProp_InnerEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_SpeechSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::ClassParams = {
		&UDlgNode_SpeechSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_SpeechSequence()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_SpeechSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_SpeechSequence.OuterSingleton, Z_Construct_UClass_UDlgNode_SpeechSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_SpeechSequence.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_SpeechSequence>()
	{
		return UDlgNode_SpeechSequence::StaticClass();
	}
	UDlgNode_SpeechSequence::UDlgNode_SpeechSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_SpeechSequence);
	UDlgNode_SpeechSequence::~UDlgNode_SpeechSequence() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics::ScriptStructInfo[] = {
		{ FDlgSpeechSequenceEntry::StaticStruct, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewStructOps, TEXT("DlgSpeechSequenceEntry"), &Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgSpeechSequenceEntry), 694255345U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_SpeechSequence, UDlgNode_SpeechSequence::StaticClass, TEXT("UDlgNode_SpeechSequence"), &Z_Registration_Info_UClass_UDlgNode_SpeechSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_SpeechSequence), 818612705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_614745161(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
