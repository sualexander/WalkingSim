// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgDialogueParticipant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogueParticipant() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogueParticipant();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogueParticipant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyNameValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ModifyNameValue_Implementation(Z_Param_ValueName,Z_Param_NameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyBoolValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ModifyBoolValue_Implementation(Z_Param_ValueName,Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyIntValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_GET_UBOOL(Z_Param_bDelta);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ModifyIntValue_Implementation(Z_Param_ValueName,Z_Param_bDelta,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyFloatValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_GET_UBOOL(Z_Param_bDelta);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ModifyFloatValue_Implementation(Z_Param_ValueName,Z_Param_bDelta,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execOnDialogueEvent)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnDialogueEvent_Implementation(Z_Param_Context,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetNameValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNameValue_Implementation(Z_Param_ValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetBoolValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolValue_Implementation(Z_Param_ValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetIntValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntValue_Implementation(Z_Param_ValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetFloatValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatValue_Implementation(Z_Param_ValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execCheckCondition)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConditionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_Context,Z_Param_ConditionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantIcon)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActiveSpeaker);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActiveSpeakerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetParticipantIcon_Implementation(Z_Param_ActiveSpeaker,Z_Param_ActiveSpeakerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETextGender*)Z_Param__Result=P_THIS->GetParticipantGender_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantDisplayName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActiveSpeaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetParticipantDisplayName_Implementation(Z_Param_ActiveSpeaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetParticipantName_Implementation();
		P_NATIVE_END;
	}
	struct DlgDialogueParticipant_eventCheckCondition_Parms
	{
		const UDlgContext* Context;
		FName ConditionName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventCheckCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DlgDialogueParticipant_eventGetBoolValue_Parms
	{
		FName ValueName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventGetBoolValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DlgDialogueParticipant_eventGetFloatValue_Parms
	{
		FName ValueName;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventGetFloatValue_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct DlgDialogueParticipant_eventGetIntValue_Parms
	{
		FName ValueName;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventGetIntValue_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct DlgDialogueParticipant_eventGetNameValue_Parms
	{
		FName ValueName;
		FName ReturnValue;
	};
	struct DlgDialogueParticipant_eventGetParticipantDisplayName_Parms
	{
		FName ActiveSpeaker;
		FText ReturnValue;
	};
	struct DlgDialogueParticipant_eventGetParticipantGender_Parms
	{
		ETextGender ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventGetParticipantGender_Parms()
			: ReturnValue((ETextGender)0)
		{
		}
	};
	struct DlgDialogueParticipant_eventGetParticipantIcon_Parms
	{
		FName ActiveSpeaker;
		FName ActiveSpeakerState;
		UTexture2D* ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventGetParticipantIcon_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct DlgDialogueParticipant_eventGetParticipantName_Parms
	{
		FName ReturnValue;
	};
	struct DlgDialogueParticipant_eventModifyBoolValue_Parms
	{
		FName ValueName;
		bool bNewValue;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventModifyBoolValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DlgDialogueParticipant_eventModifyFloatValue_Parms
	{
		FName ValueName;
		bool bDelta;
		float Value;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventModifyFloatValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DlgDialogueParticipant_eventModifyIntValue_Parms
	{
		FName ValueName;
		bool bDelta;
		int32 Value;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventModifyIntValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DlgDialogueParticipant_eventModifyNameValue_Parms
	{
		FName ValueName;
		FName NameValue;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventModifyNameValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DlgDialogueParticipant_eventOnDialogueEvent_Parms
	{
		UDlgContext* Context;
		FName EventName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgDialogueParticipant_eventOnDialogueEvent_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IDlgDialogueParticipant::CheckCondition(const UDlgContext* Context, FName ConditionName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckCondition instead.");
		DlgDialogueParticipant_eventCheckCondition_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDlgDialogueParticipant::GetBoolValue(FName ValueName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBoolValue instead.");
		DlgDialogueParticipant_eventGetBoolValue_Parms Parms;
		return Parms.ReturnValue;
	}
	float IDlgDialogueParticipant::GetFloatValue(FName ValueName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFloatValue instead.");
		DlgDialogueParticipant_eventGetFloatValue_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IDlgDialogueParticipant::GetIntValue(FName ValueName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIntValue instead.");
		DlgDialogueParticipant_eventGetIntValue_Parms Parms;
		return Parms.ReturnValue;
	}
	FName IDlgDialogueParticipant::GetNameValue(FName ValueName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNameValue instead.");
		DlgDialogueParticipant_eventGetNameValue_Parms Parms;
		return Parms.ReturnValue;
	}
	FText IDlgDialogueParticipant::GetParticipantDisplayName(FName ActiveSpeaker) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantDisplayName instead.");
		DlgDialogueParticipant_eventGetParticipantDisplayName_Parms Parms;
		return Parms.ReturnValue;
	}
	ETextGender IDlgDialogueParticipant::GetParticipantGender() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantGender instead.");
		DlgDialogueParticipant_eventGetParticipantGender_Parms Parms;
		return Parms.ReturnValue;
	}
	UTexture2D* IDlgDialogueParticipant::GetParticipantIcon(FName ActiveSpeaker, FName ActiveSpeakerState) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantIcon instead.");
		DlgDialogueParticipant_eventGetParticipantIcon_Parms Parms;
		return Parms.ReturnValue;
	}
	FName IDlgDialogueParticipant::GetParticipantName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantName instead.");
		DlgDialogueParticipant_eventGetParticipantName_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDlgDialogueParticipant::ModifyBoolValue(FName ValueName, bool bNewValue)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyBoolValue instead.");
		DlgDialogueParticipant_eventModifyBoolValue_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDlgDialogueParticipant::ModifyFloatValue(FName ValueName, bool bDelta, float Value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyFloatValue instead.");
		DlgDialogueParticipant_eventModifyFloatValue_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDlgDialogueParticipant::ModifyIntValue(FName ValueName, bool bDelta, int32 Value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyIntValue instead.");
		DlgDialogueParticipant_eventModifyIntValue_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDlgDialogueParticipant::ModifyNameValue(FName ValueName, FName NameValue)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyNameValue instead.");
		DlgDialogueParticipant_eventModifyNameValue_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDlgDialogueParticipant::OnDialogueEvent(UDlgContext* Context, FName EventName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueEvent instead.");
		DlgDialogueParticipant_eventOnDialogueEvent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UDlgDialogueParticipant::StaticRegisterNativesUDlgDialogueParticipant()
	{
		UClass* Class = UDlgDialogueParticipant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCondition", &IDlgDialogueParticipant::execCheckCondition },
			{ "GetBoolValue", &IDlgDialogueParticipant::execGetBoolValue },
			{ "GetFloatValue", &IDlgDialogueParticipant::execGetFloatValue },
			{ "GetIntValue", &IDlgDialogueParticipant::execGetIntValue },
			{ "GetNameValue", &IDlgDialogueParticipant::execGetNameValue },
			{ "GetParticipantDisplayName", &IDlgDialogueParticipant::execGetParticipantDisplayName },
			{ "GetParticipantGender", &IDlgDialogueParticipant::execGetParticipantGender },
			{ "GetParticipantIcon", &IDlgDialogueParticipant::execGetParticipantIcon },
			{ "GetParticipantName", &IDlgDialogueParticipant::execGetParticipantName },
			{ "ModifyBoolValue", &IDlgDialogueParticipant::execModifyBoolValue },
			{ "ModifyFloatValue", &IDlgDialogueParticipant::execModifyFloatValue },
			{ "ModifyIntValue", &IDlgDialogueParticipant::execModifyIntValue },
			{ "ModifyNameValue", &IDlgDialogueParticipant::execModifyNameValue },
			{ "OnDialogueEvent", &IDlgDialogueParticipant::execOnDialogueEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventCheckCondition_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_Context_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventCheckCondition_Parms, ConditionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventCheckCondition_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_ConditionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::EventCall (Check Dialogue Named Condition)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::EventCall (Check Dialogue Named Condition)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "CheckCondition", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventCheckCondition_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetBoolValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventGetBoolValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::BoolCall (Check Dialogue Bool Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::BoolCall (Check Dialogue Bool Value)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetBoolValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetBoolValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetFloatValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::FloatCall (Check Dialogue Float Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::FloatCall (Check Dialogue Float Value)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetFloatValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetFloatValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetIntValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetIntValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::IntCall (Check Dialogue Int Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::IntCall (Check Dialogue Int Value)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetIntValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetIntValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetNameValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetNameValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::NameCall (Check Dialogue Name Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::NameCall (Check Dialogue Name Value)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetNameValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetNameValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveSpeaker;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::NewProp_ActiveSpeaker = { "ActiveSpeaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantDisplayName_Parms, ActiveSpeaker), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::NewProp_ActiveSpeaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantDisplayName", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetParticipantDisplayName_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantGender_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(nullptr, 0) }; // 3697711109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "/** May be used for formatted node texts, check https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting for more information */" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "May be used for formatted node texts, check https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting for more information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantGender", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetParticipantGender_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveSpeaker;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveSpeakerState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::NewProp_ActiveSpeaker = { "ActiveSpeaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantIcon_Parms, ActiveSpeaker), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::NewProp_ActiveSpeakerState = { "ActiveSpeakerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantIcon_Parms, ActiveSpeakerState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::NewProp_ActiveSpeaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::NewProp_ActiveSpeakerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "/**\n\x09* @param\x09""ActiveSpeaker: name of the active speaker at the time of the call (might or might not this participant)\n\x09* @param\x09""ActiveSpeakerState: state of the active participant (might or might not belong to this participant)\n\x09*\x09\x09\x09If it is not displayed in editor it has to be turned on in the dialogue settings\n\x09* @return\x09Participant icon to display\n\x09*/" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "@param        ActiveSpeaker: name of the active speaker at the time of the call (might or might not this participant)\n@param        ActiveSpeakerState: state of the active participant (might or might not belong to this participant)\n                      If it is not displayed in editor it has to be turned on in the dialogue settings\n@return       Participant icon to display" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantIcon", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetParticipantIcon_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "//\n// Participant information\n//\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Participant information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantName", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventGetParticipantName_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyBoolValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyBoolValue_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyBoolValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyBoolValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_bNewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyBool (Modify Dialogue Bool Value)\n// @return value: irrelevant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyBool (Modify Dialogue Bool Value)\n@return value: irrelevant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyBoolValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventModifyBoolValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static void NewProp_bDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelta;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyFloatValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_bDelta_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyFloatValue_Parms*)Obj)->bDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_bDelta = { "bDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyFloatValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_bDelta_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyFloatValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyFloatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyFloatValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_bDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyFloat (Modify Dialogue Float Value)\n// @param\x09""bDelta Whether we expect the value to be set or modified\n// @return\x09Irrelevant, ignored\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyFloat (Modify Dialogue Float Value)\n@param        bDelta Whether we expect the value to be set or modified\n@return       Irrelevant, ignored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyFloatValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventModifyFloatValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static void NewProp_bDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelta;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyIntValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_bDelta_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyIntValue_Parms*)Obj)->bDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_bDelta = { "bDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyIntValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_bDelta_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyIntValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyIntValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyIntValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_bDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyInt (Modify Dialogue Int Value)\n// @param\x09""bDelta Whether we expect the value to be set or modified\n// @return\x09Irrelevant, ignored\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyInt (Modify Dialogue Int Value)\n@param        bDelta Whether we expect the value to be set or modified\n@return       Irrelevant, ignored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyIntValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventModifyIntValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyNameValue_Parms, ValueName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyNameValue_Parms, NameValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyNameValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyNameValue_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_ValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyName (Modify Dialogue Name Value)\n// @return value: irrelevant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyName (Modify Dialogue Name Value)\n@return value: irrelevant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyNameValue", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventModifyNameValue_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventOnDialogueEvent_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgDialogueParticipant_eventOnDialogueEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventOnDialogueEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgDialogueParticipant_eventOnDialogueEvent_Parms), &Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::Event (Event)\n// @return value: irrelevant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::Event (Event)\n@return value: irrelevant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "OnDialogueEvent", nullptr, nullptr, sizeof(DlgDialogueParticipant_eventOnDialogueEvent_Parms), Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgDialogueParticipant);
	UClass* Z_Construct_UClass_UDlgDialogueParticipant_NoRegister()
	{
		return UDlgDialogueParticipant::StaticClass();
	}
	struct Z_Construct_UClass_UDlgDialogueParticipant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgDialogueParticipant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgDialogueParticipant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition, "CheckCondition" }, // 2676385867
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue, "GetBoolValue" }, // 2327323510
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue, "GetFloatValue" }, // 2030911767
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue, "GetIntValue" }, // 1941658718
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue, "GetNameValue" }, // 2335831698
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName, "GetParticipantDisplayName" }, // 3346019731
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender, "GetParticipantGender" }, // 404047399
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon, "GetParticipantIcon" }, // 3115634376
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName, "GetParticipantName" }, // 3120745434
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue, "ModifyBoolValue" }, // 451285216
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue, "ModifyFloatValue" }, // 2431521598
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue, "ModifyIntValue" }, // 3662101289
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue, "ModifyNameValue" }, // 1407924182
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent, "OnDialogueEvent" }, // 3510585368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogueParticipant_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgDialogueParticipant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDlgDialogueParticipant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgDialogueParticipant_Statics::ClassParams = {
		&UDlgDialogueParticipant::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgDialogueParticipant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogueParticipant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgDialogueParticipant()
	{
		if (!Z_Registration_Info_UClass_UDlgDialogueParticipant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgDialogueParticipant.OuterSingleton, Z_Construct_UClass_UDlgDialogueParticipant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgDialogueParticipant.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgDialogueParticipant>()
	{
		return UDlgDialogueParticipant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgDialogueParticipant);
	UDlgDialogueParticipant::~UDlgDialogueParticipant() {}
	static FName NAME_UDlgDialogueParticipant_CheckCondition = FName(TEXT("CheckCondition"));
	bool IDlgDialogueParticipant::Execute_CheckCondition(const UObject* O, const UDlgContext* Context, FName ConditionName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventCheckCondition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_CheckCondition);
		if (Func)
		{
			Parms.Context=Context;
			Parms.ConditionName=ConditionName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->CheckCondition_Implementation(Context,ConditionName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetBoolValue = FName(TEXT("GetBoolValue"));
	bool IDlgDialogueParticipant::Execute_GetBoolValue(const UObject* O, FName ValueName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetBoolValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetBoolValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetBoolValue_Implementation(ValueName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetFloatValue = FName(TEXT("GetFloatValue"));
	float IDlgDialogueParticipant::Execute_GetFloatValue(const UObject* O, FName ValueName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetFloatValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetFloatValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetFloatValue_Implementation(ValueName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetIntValue = FName(TEXT("GetIntValue"));
	int32 IDlgDialogueParticipant::Execute_GetIntValue(const UObject* O, FName ValueName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetIntValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetIntValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetIntValue_Implementation(ValueName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetNameValue = FName(TEXT("GetNameValue"));
	FName IDlgDialogueParticipant::Execute_GetNameValue(const UObject* O, FName ValueName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetNameValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetNameValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetNameValue_Implementation(ValueName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetParticipantDisplayName = FName(TEXT("GetParticipantDisplayName"));
	FText IDlgDialogueParticipant::Execute_GetParticipantDisplayName(const UObject* O, FName ActiveSpeaker)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetParticipantDisplayName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantDisplayName);
		if (Func)
		{
			Parms.ActiveSpeaker=ActiveSpeaker;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetParticipantDisplayName_Implementation(ActiveSpeaker);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetParticipantGender = FName(TEXT("GetParticipantGender"));
	ETextGender IDlgDialogueParticipant::Execute_GetParticipantGender(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetParticipantGender_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantGender);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetParticipantGender_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetParticipantIcon = FName(TEXT("GetParticipantIcon"));
	UTexture2D* IDlgDialogueParticipant::Execute_GetParticipantIcon(const UObject* O, FName ActiveSpeaker, FName ActiveSpeakerState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetParticipantIcon_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantIcon);
		if (Func)
		{
			Parms.ActiveSpeaker=ActiveSpeaker;
			Parms.ActiveSpeakerState=ActiveSpeakerState;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetParticipantIcon_Implementation(ActiveSpeaker,ActiveSpeakerState);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_GetParticipantName = FName(TEXT("GetParticipantName"));
	FName IDlgDialogueParticipant::Execute_GetParticipantName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventGetParticipantName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->GetParticipantName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_ModifyBoolValue = FName(TEXT("ModifyBoolValue"));
	bool IDlgDialogueParticipant::Execute_ModifyBoolValue(UObject* O, FName ValueName, bool bNewValue)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventModifyBoolValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyBoolValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			Parms.bNewValue=bNewValue;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->ModifyBoolValue_Implementation(ValueName,bNewValue);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_ModifyFloatValue = FName(TEXT("ModifyFloatValue"));
	bool IDlgDialogueParticipant::Execute_ModifyFloatValue(UObject* O, FName ValueName, bool bDelta, float Value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventModifyFloatValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyFloatValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			Parms.bDelta=bDelta;
			Parms.Value=Value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->ModifyFloatValue_Implementation(ValueName,bDelta,Value);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_ModifyIntValue = FName(TEXT("ModifyIntValue"));
	bool IDlgDialogueParticipant::Execute_ModifyIntValue(UObject* O, FName ValueName, bool bDelta, int32 Value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventModifyIntValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyIntValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			Parms.bDelta=bDelta;
			Parms.Value=Value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->ModifyIntValue_Implementation(ValueName,bDelta,Value);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_ModifyNameValue = FName(TEXT("ModifyNameValue"));
	bool IDlgDialogueParticipant::Execute_ModifyNameValue(UObject* O, FName ValueName, FName NameValue)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventModifyNameValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyNameValue);
		if (Func)
		{
			Parms.ValueName=ValueName;
			Parms.NameValue=NameValue;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->ModifyNameValue_Implementation(ValueName,NameValue);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgDialogueParticipant_OnDialogueEvent = FName(TEXT("OnDialogueEvent"));
	bool IDlgDialogueParticipant::Execute_OnDialogueEvent(UObject* O, UDlgContext* Context, FName EventName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
		DlgDialogueParticipant_eventOnDialogueEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_OnDialogueEvent);
		if (Func)
		{
			Parms.Context=Context;
			Parms.EventName=EventName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
		{
			Parms.ReturnValue = I->OnDialogueEvent_Implementation(Context,EventName);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgDialogueParticipant, UDlgDialogueParticipant::StaticClass, TEXT("UDlgDialogueParticipant"), &Z_Registration_Info_UClass_UDlgDialogueParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgDialogueParticipant), 2702260125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipant_h_842862700(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
