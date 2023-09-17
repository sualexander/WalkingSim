// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode.h"
#include "DlgSystem/DlgCondition.h"
#include "DlgSystem/DlgEdge.h"
#include "DlgSystem/DlgEvent.h"
#include "DlgSystem/DlgTextArgument.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgEntryRestriction;
	static UEnum* EDlgEntryRestriction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgEntryRestriction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgEntryRestriction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgEntryRestriction"));
		}
		return Z_Registration_Info_UEnum_EDlgEntryRestriction.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgEntryRestriction>()
	{
		return EDlgEntryRestriction_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::Enumerators[] = {
		{ "EDlgEntryRestriction::None", (int64)EDlgEntryRestriction::None },
		{ "EDlgEntryRestriction::OncePerContext", (int64)EDlgEntryRestriction::OncePerContext },
		{ "EDlgEntryRestriction::Once", (int64)EDlgEntryRestriction::Once },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "None.Comment", "// Node can be entered multiple times\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDlgEntryRestriction::None" },
		{ "None.ToolTip", "Node can be entered multiple times" },
		{ "Once.Comment", "// Node can only be entered once globally (same as WasNodeAlreadyVisited check in global memory (Dialogue history))\n" },
		{ "Once.DisplayName", "Only Once" },
		{ "Once.Name", "EDlgEntryRestriction::Once" },
		{ "Once.ToolTip", "Node can only be entered once globally (same as WasNodeAlreadyVisited check in global memory (Dialogue history))" },
		{ "OncePerContext.Comment", "// Node can only be entered once per context (same as WasNodeAlreadyVisited check in local memory)\n" },
		{ "OncePerContext.DisplayName", "Once per Context" },
		{ "OncePerContext.Name", "EDlgEntryRestriction::OncePerContext" },
		{ "OncePerContext.ToolTip", "Node can only be entered once per context (same as WasNodeAlreadyVisited check in local memory)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgEntryRestriction",
		"EDlgEntryRestriction",
		Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction()
	{
		if (!Z_Registration_Info_UEnum_EDlgEntryRestriction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgEntryRestriction.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgEntryRestriction.InnerSingleton;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNodeData**)Z_Param__Result=P_THIS->GetNodeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeGenericData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetNodeGenericData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetSpeakerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSpeakerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceDialogueWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDialogueWave**)Z_Param__Result=P_THIS->GetNodeVoiceDialogueWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceSoundBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetNodeVoiceSoundBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceSoundWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=P_THIS->GetNodeVoiceSoundWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeUnformattedText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeUnformattedText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetCheckChildrenOnEvaluation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCheckChildrenOnEvaluation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetTextArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgTextArgument>*)Z_Param__Result=P_THIS->GetTextArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeChildAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EdgeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDlgEdge*)Z_Param__Result=P_THIS->GetNodeChildAt(Z_Param_EdgeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNumNodeChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumNodeChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEdge>*)Z_Param__Result=P_THIS->GetNodeChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeEnterEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEvent>*)Z_Param__Result=P_THIS->GetNodeEnterEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execHasAnyEnterEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyEnterEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeEnterConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgCondition>*)Z_Param__Result=P_THIS->GetNodeEnterConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execHasAnyEnterConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyEnterConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeParticipantName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNodeParticipantName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execHasGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGUID();
		P_NATIVE_END;
	}
	void UDlgNode::StaticRegisterNativesUDlgNode()
	{
		UClass* Class = UDlgNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheckChildrenOnEvaluation", &UDlgNode::execGetCheckChildrenOnEvaluation },
			{ "GetGUID", &UDlgNode::execGetGUID },
			{ "GetNodeChildAt", &UDlgNode::execGetNodeChildAt },
			{ "GetNodeChildren", &UDlgNode::execGetNodeChildren },
			{ "GetNodeData", &UDlgNode::execGetNodeData },
			{ "GetNodeEnterConditions", &UDlgNode::execGetNodeEnterConditions },
			{ "GetNodeEnterEvents", &UDlgNode::execGetNodeEnterEvents },
			{ "GetNodeGenericData", &UDlgNode::execGetNodeGenericData },
			{ "GetNodeParticipantName", &UDlgNode::execGetNodeParticipantName },
			{ "GetNodeText", &UDlgNode::execGetNodeText },
			{ "GetNodeUnformattedText", &UDlgNode::execGetNodeUnformattedText },
			{ "GetNodeVoiceDialogueWave", &UDlgNode::execGetNodeVoiceDialogueWave },
			{ "GetNodeVoiceSoundBase", &UDlgNode::execGetNodeVoiceSoundBase },
			{ "GetNodeVoiceSoundWave", &UDlgNode::execGetNodeVoiceSoundWave },
			{ "GetNumNodeChildren", &UDlgNode::execGetNumNodeChildren },
			{ "GetSpeakerState", &UDlgNode::execGetSpeakerState },
			{ "GetTextArguments", &UDlgNode::execGetTextArguments },
			{ "HasAnyEnterConditions", &UDlgNode::execHasAnyEnterConditions },
			{ "HasAnyEnterEvents", &UDlgNode::execHasAnyEnterEvents },
			{ "HasGUID", &UDlgNode::execHasGUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics
	{
		struct DlgNode_eventGetCheckChildrenOnEvaluation_Parms
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
	void Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventGetCheckChildrenOnEvaluation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgNode_eventGetCheckChildrenOnEvaluation_Parms), &Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetCheckChildrenOnEvaluation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::DlgNode_eventGetCheckChildrenOnEvaluation_Parms), Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetGUID_Statics
	{
		struct DlgNode_eventGetGUID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// Getters/Setters:\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Getters/Setters:" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::DlgNode_eventGetGUID_Parms), Z_Construct_UFunction_UDlgNode_GetGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics
	{
		struct DlgNode_eventGetNodeChildAt_Parms
		{
			int32 EdgeIndex;
			FDlgEdge ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeChildAt_Parms, EdgeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeChildAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_EdgeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeChildAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::DlgNode_eventGetNodeChildAt_Parms), Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics
	{
		struct DlgNode_eventGetNodeChildren_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) }; // 273406106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/// Gets this nodes children (edges) as a const/mutable array\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets this nodes children (edges) as a const/mutable array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::DlgNode_eventGetNodeChildren_Parms), Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeData_Statics
	{
		struct DlgNode_eventGetNodeData_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeData_Parms, ReturnValue), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::DlgNode_eventGetNodeData_Parms), Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics
	{
		struct DlgNode_eventGetNodeEnterConditions_Parms
		{
			TArray<FDlgCondition> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) }; // 3914112931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeEnterConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_MetaData)) }; // 3914112931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeEnterConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::DlgNode_eventGetNodeEnterConditions_Parms), Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics
	{
		struct DlgNode_eventGetNodeEnterEvents_Parms
		{
			TArray<FDlgEvent> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEvent, METADATA_PARAMS(nullptr, 0) }; // 1281847551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeEnterEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_MetaData)) }; // 1281847551
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeEnterEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::DlgNode_eventGetNodeEnterEvents_Parms), Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics
	{
		struct DlgNode_eventGetNodeGenericData_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeGenericData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the generic data asset of this Node.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the generic data asset of this Node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeGenericData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::DlgNode_eventGetNodeGenericData_Parms), Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeGenericData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics
	{
		struct DlgNode_eventGetNodeParticipantName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeParticipantName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the ParticipantName\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "For the ParticipantName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeParticipantName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::DlgNode_eventGetNodeParticipantName_Parms), Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeParticipantName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeText_Statics
	{
		struct DlgNode_eventGetNodeText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the Text of this Node. This can be the final formatted string.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the Text of this Node. This can be the final formatted string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::DlgNode_eventGetNodeText_Parms), Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics
	{
		struct DlgNode_eventGetNodeUnformattedText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeUnformattedText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/**\n\x09 * Gets the Raw unformatted Text of this Node. Usually the same as GetNodeText but in case the node supports formatted string this\n\x09 * is the raw form with all the arguments intact. To get the text arguments call GetTextArguments.\n\x09 */" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the Raw unformatted Text of this Node. Usually the same as GetNodeText but in case the node supports formatted string this\nis the raw form with all the arguments intact. To get the text arguments call GetTextArguments." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeUnformattedText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::DlgNode_eventGetNodeUnformattedText_Parms), Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics
	{
		struct DlgNode_eventGetNodeVoiceDialogueWave_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceDialogueWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a DialogueWave. Only the first Dialogue context in the wave should be used.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a DialogueWave. Only the first Dialogue context in the wave should be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceDialogueWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::DlgNode_eventGetNodeVoiceDialogueWave_Parms), Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics
	{
		struct DlgNode_eventGetNodeVoiceSoundBase_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a SoundWave.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a SoundWave." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceSoundBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::DlgNode_eventGetNodeVoiceSoundBase_Parms), Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics
	{
		struct DlgNode_eventGetNodeVoiceSoundWave_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a SoundWave.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a SoundWave." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::DlgNode_eventGetNodeVoiceSoundWave_Parms), Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics
	{
		struct DlgNode_eventGetNumNodeChildren_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetNumNodeChildren_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNumNodeChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::DlgNode_eventGetNumNodeChildren_Parms), Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNumNodeChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics
	{
		struct DlgNode_eventGetSpeakerState_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetSpeakerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the speaker state ordered to this node (can be used e.g. for icon selection)\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the speaker state ordered to this node (can be used e.g. for icon selection)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetSpeakerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::DlgNode_eventGetSpeakerState_Parms), Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetSpeakerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics
	{
		struct DlgNode_eventGetTextArguments_Parms
		{
			TArray<FDlgTextArgument> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(nullptr, 0) }; // 865560136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_eventGetTextArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_MetaData)) }; // 865560136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the text arguments for this Node (if any). Used for FText::Format\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the text arguments for this Node (if any). Used for FText::Format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetTextArguments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::DlgNode_eventGetTextArguments_Parms), Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetTextArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics
	{
		struct DlgNode_eventHasAnyEnterConditions_Parms
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
	void Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasAnyEnterConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgNode_eventHasAnyEnterConditions_Parms), &Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the EnterConditions\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "For the EnterConditions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "HasAnyEnterConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::DlgNode_eventHasAnyEnterConditions_Parms), Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics
	{
		struct DlgNode_eventHasAnyEnterEvents_Parms
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
	void Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasAnyEnterEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgNode_eventHasAnyEnterEvents_Parms), &Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the EnterEvents\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "For the EnterEvents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "HasAnyEnterEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::DlgNode_eventHasAnyEnterEvents_Parms), Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_HasGUID_Statics
	{
		struct DlgNode_eventHasGUID_Parms
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
	void Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgNode_eventHasGUID_Parms), &Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_HasGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_HasGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_HasGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "HasGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::DlgNode_eventHasGUID_Parms), Z_Construct_UFunction_UDlgNode_HasGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_HasGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_HasGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode);
	UClass* Z_Construct_UClass_UDlgNode_NoRegister()
	{
		return UDlgNode::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckChildrenOnEvaluation_MetaData[];
#endif
		static void NewProp_bCheckChildrenOnEvaluation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckChildrenOnEvaluation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnterConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterConditions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnterRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnterRestriction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnterEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation, "GetCheckChildrenOnEvaluation" }, // 3602902597
		{ &Z_Construct_UFunction_UDlgNode_GetGUID, "GetGUID" }, // 1442945205
		{ &Z_Construct_UFunction_UDlgNode_GetNodeChildAt, "GetNodeChildAt" }, // 4126491144
		{ &Z_Construct_UFunction_UDlgNode_GetNodeChildren, "GetNodeChildren" }, // 2988950916
		{ &Z_Construct_UFunction_UDlgNode_GetNodeData, "GetNodeData" }, // 2753135680
		{ &Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions, "GetNodeEnterConditions" }, // 81160205
		{ &Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents, "GetNodeEnterEvents" }, // 190916507
		{ &Z_Construct_UFunction_UDlgNode_GetNodeGenericData, "GetNodeGenericData" }, // 3014312381
		{ &Z_Construct_UFunction_UDlgNode_GetNodeParticipantName, "GetNodeParticipantName" }, // 2775469615
		{ &Z_Construct_UFunction_UDlgNode_GetNodeText, "GetNodeText" }, // 1890347675
		{ &Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText, "GetNodeUnformattedText" }, // 3494402014
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave, "GetNodeVoiceDialogueWave" }, // 2271126889
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase, "GetNodeVoiceSoundBase" }, // 1865705160
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave, "GetNodeVoiceSoundWave" }, // 1535086403
		{ &Z_Construct_UFunction_UDlgNode_GetNumNodeChildren, "GetNumNodeChildren" }, // 3160101395
		{ &Z_Construct_UFunction_UDlgNode_GetSpeakerState, "GetSpeakerState" }, // 1065670048
		{ &Z_Construct_UFunction_UDlgNode_GetTextArguments, "GetTextArguments" }, // 790057529
		{ &Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions, "HasAnyEnterConditions" }, // 1087410101
		{ &Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents, "HasAnyEnterEvents" }, // 2033646420
		{ &Z_Construct_UFunction_UDlgNode_HasGUID, "HasGUID" }, // 2662162321
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n *  Abstract base class for Dialogue nodes\n *  Depending on the implementation in the child class the dialogue node can contain one or more lines of one or more participants,\n *  or simply some logic to go on in the UDlgNode graph\n */" },
		{ "IncludePath", "Nodes/DlgNode.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Abstract base class for Dialogue nodes\nDepending on the implementation in the child class the dialogue node can contain one or more lines of one or more participants,\nor simply some logic to go on in the UDlgNode graph" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "Comment", "// Node's Graph representation, used to get position.\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Node's Graph representation, used to get position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Name of a participant (speaker) associated with this node.\n" },
		{ "DisplayName", "Participant Name" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Name of a participant (speaker) associated with this node." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, OwnerName), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/**\n\x09 *  If it is set the node is only satisfied if at least one of its children is\n\x09 *  Should not be used if entering this node can modify the condition results of its children.\n\x09 */" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "If it is set the node is only satisfied if at least one of its children is\nShould not be used if entering this node can modify the condition results of its children." },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_SetBit(void* Obj)
	{
		((UDlgNode*)Obj)->bCheckChildrenOnEvaluation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation = { "bCheckChildrenOnEvaluation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDlgNode), &Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_Inner = { "EnterConditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) }; // 3914112931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Conditions necessary to enter this node\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Conditions necessary to enter this node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions = { "EnterConditions", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, EnterConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_MetaData)) }; // 3914112931
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Additional restriction on node enter\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Additional restriction on node enter" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction = { "EnterRestriction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, EnterRestriction), Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction_MetaData)) }; // 687223663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_Inner = { "EnterEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEvent, METADATA_PARAMS(nullptr, 0) }; // 1281847551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Events fired when the node is reached in the dialogue\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Events fired when the node is reached in the dialogue" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents = { "EnterEvents", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, EnterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_MetaData)) }; // 1281847551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// The Unique identifier for each Node. This is much safer than a Node Index.\n// Compile/Save Asset to generate this\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "The Unique identifier for each Node. This is much safer than a Node Index.\nCompile/Save Asset to generate this" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) }; // 273406106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Edges that point to Children of this Node\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Edges that point to Children of this Node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x00200c8000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_MetaData)) }; // 273406106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Statics::ClassParams = {
		&UDlgNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode()
	{
		if (!Z_Registration_Info_UClass_UDlgNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode.OuterSingleton, Z_Construct_UClass_UDlgNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode>()
	{
		return UDlgNode::StaticClass();
	}
	UDlgNode::UDlgNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode);
	UDlgNode::~UDlgNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgNode)
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics::EnumInfo[] = {
		{ EDlgEntryRestriction_StaticEnum, TEXT("EDlgEntryRestriction"), &Z_Registration_Info_UEnum_EDlgEntryRestriction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 687223663U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode, UDlgNode::StaticClass, TEXT("UDlgNode"), &Z_Registration_Info_UClass_UDlgNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode), 52542650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_2582137211(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
