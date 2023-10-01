// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgEvent() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom_NoRegister();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgEventType();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgEventType;
	static UEnum* EDlgEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgEventType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgEventType"));
		}
		return Z_Registration_Info_UEnum_EDlgEventType.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgEventType>()
	{
		return EDlgEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::Enumerators[] = {
		{ "EDlgEventType::Event", (int64)EDlgEventType::Event },
		{ "EDlgEventType::ModifyInt", (int64)EDlgEventType::ModifyInt },
		{ "EDlgEventType::ModifyFloat", (int64)EDlgEventType::ModifyFloat },
		{ "EDlgEventType::ModifyBool", (int64)EDlgEventType::ModifyBool },
		{ "EDlgEventType::ModifyName", (int64)EDlgEventType::ModifyName },
		{ "EDlgEventType::ModifyClassIntVariable", (int64)EDlgEventType::ModifyClassIntVariable },
		{ "EDlgEventType::ModifyClassFloatVariable", (int64)EDlgEventType::ModifyClassFloatVariable },
		{ "EDlgEventType::ModifyClassBoolVariable", (int64)EDlgEventType::ModifyClassBoolVariable },
		{ "EDlgEventType::ModifyClassNameVariable", (int64)EDlgEventType::ModifyClassNameVariable },
		{ "EDlgEventType::Custom", (int64)EDlgEventType::Custom },
		{ "EDlgEventType::UnrealFunction", (int64)EDlgEventType::UnrealFunction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "// User Defined Event, calls EnterEvent on the custom event object.\n//\n// 1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n// 2. Override EnterEvent\n" },
		{ "Custom.DisplayName", "Custom Event" },
		{ "Custom.Name", "EDlgEventType::Custom" },
		{ "Custom.ToolTip", "User Defined Event, calls EnterEvent on the custom event object.\n\n1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n2. Override EnterEvent" },
		{ "Event.Comment", "// Calls OnDialogueEvent on the Participant\n" },
		{ "Event.DisplayName", "Event" },
		{ "Event.Name", "EDlgEventType::Event" },
		{ "Event.ToolTip", "Calls OnDialogueEvent on the Participant" },
		{ "ModifyBool.Comment", "// Calls ModifyBoolValue on the Participant\n" },
		{ "ModifyBool.DisplayName", "Modify Dialogue Bool Value" },
		{ "ModifyBool.Name", "EDlgEventType::ModifyBool" },
		{ "ModifyBool.ToolTip", "Calls ModifyBoolValue on the Participant" },
		{ "ModifyClassBoolVariable.Comment", "// Modifies the value from the Participant Bool Variable\n" },
		{ "ModifyClassBoolVariable.DisplayName", "Modify Class Bool Variable" },
		{ "ModifyClassBoolVariable.Name", "EDlgEventType::ModifyClassBoolVariable" },
		{ "ModifyClassBoolVariable.ToolTip", "Modifies the value from the Participant Bool Variable" },
		{ "ModifyClassFloatVariable.Comment", "// Modifies the value from the Participant Float Variable\n" },
		{ "ModifyClassFloatVariable.DisplayName", "Modify Class Float Variable" },
		{ "ModifyClassFloatVariable.Name", "EDlgEventType::ModifyClassFloatVariable" },
		{ "ModifyClassFloatVariable.ToolTip", "Modifies the value from the Participant Float Variable" },
		{ "ModifyClassIntVariable.Comment", "// Modifies the value from the Participant Int Variable\n" },
		{ "ModifyClassIntVariable.DisplayName", "Modify Class Int Variable" },
		{ "ModifyClassIntVariable.Name", "EDlgEventType::ModifyClassIntVariable" },
		{ "ModifyClassIntVariable.ToolTip", "Modifies the value from the Participant Int Variable" },
		{ "ModifyClassNameVariable.Comment", "// Modifies the value from the Participant Name Variable\n" },
		{ "ModifyClassNameVariable.DisplayName", "Modify Class Name Variable" },
		{ "ModifyClassNameVariable.Name", "EDlgEventType::ModifyClassNameVariable" },
		{ "ModifyClassNameVariable.ToolTip", "Modifies the value from the Participant Name Variable" },
		{ "ModifyFloat.Comment", "// Calls ModifyFloatValue on the Participant\n" },
		{ "ModifyFloat.DisplayName", "Modify Dialogue Float Value" },
		{ "ModifyFloat.Name", "EDlgEventType::ModifyFloat" },
		{ "ModifyFloat.ToolTip", "Calls ModifyFloatValue on the Participant" },
		{ "ModifyInt.Comment", "// Calls ModifyIntValue on the Participant\n" },
		{ "ModifyInt.DisplayName", "Modify Dialogue Int Value" },
		{ "ModifyInt.Name", "EDlgEventType::ModifyInt" },
		{ "ModifyInt.ToolTip", "Calls ModifyIntValue on the Participant" },
		{ "ModifyName.Comment", "// Calls ModifyNameValue on the Participant\n" },
		{ "ModifyName.DisplayName", "Modify Dialogue Name Value" },
		{ "ModifyName.Name", "EDlgEventType::ModifyName" },
		{ "ModifyName.ToolTip", "Calls ModifyNameValue on the Participant" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "UnrealFunction.Comment", "// Calls a regular Function (or Event) on the Participant (without any parameters)\n" },
		{ "UnrealFunction.DisplayName", "Unreal Function" },
		{ "UnrealFunction.Name", "EDlgEventType::UnrealFunction" },
		{ "UnrealFunction.ToolTip", "Calls a regular Function (or Event) on the Participant (without any parameters)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgEventType",
		"EDlgEventType",
		Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgEventType()
	{
		if (!Z_Registration_Info_UEnum_EDlgEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgEventType.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgEventType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgEvent;
class UScriptStruct* FDlgEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEvent, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgEvent"));
	}
	return Z_Registration_Info_UScriptStruct_DlgEvent.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgEvent>()
{
	return FDlgEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelta_MetaData[];
#endif
		static void NewProp_bDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomEvent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Events are executed via calling IDlgDialogueParticipant methods on dialogue participants\n// They must be handled in game side, can be used to modify game state based on dialogue\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Events are executed via calling IDlgDialogueParticipant methods on dialogue participants\nThey must be handled in game side, can be used to modify game state based on dialogue" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Name of the participant (speaker) the event is called on.\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Name of the participant (speaker) the event is called on." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_ParticipantName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Type of the event, can be a simple event or a call to modify a bool/int/float variable\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Type of the event, can be a simple event or a call to modify a bool/int/float variable" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, EventType), Z_Construct_UEnum_DlgSystem_EDlgEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType_MetaData)) }; // 1091108906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Name of the relevant variable or event\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Name of the relevant variable or event" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_NameValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, NameValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_NameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_NameValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Weather to add the value to the existing one, or simply override it\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Weather to add the value to the existing one, or simply override it" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta_SetBit(void* Obj)
	{
		((FDlgEvent*)Obj)->bDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta = { "bDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgEvent), &Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((FDlgEvent*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgEvent), &Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_CustomEvent_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// User Defined Event, calls EnterEvent on the custom event object.\n//\n// 1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n// 2. Override EnterEvent\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "User Defined Event, calls EnterEvent on the custom event object.\n\n1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n2. Override EnterEvent" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_CustomEvent = { "CustomEvent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEvent, CustomEvent), Z_Construct_UClass_UDlgEventCustom_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_CustomEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_CustomEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEvent_Statics::NewProp_CustomEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgEvent",
		sizeof(FDlgEvent),
		alignof(FDlgEvent),
		Z_Construct_UScriptStruct_FDlgEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgEvent.InnerSingleton, Z_Construct_UScriptStruct_FDlgEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics::EnumInfo[] = {
		{ EDlgEventType_StaticEnum, TEXT("EDlgEventType"), &Z_Registration_Info_UEnum_EDlgEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1091108906U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics::ScriptStructInfo[] = {
		{ FDlgEvent::StaticStruct, Z_Construct_UScriptStruct_FDlgEvent_Statics::NewStructOps, TEXT("DlgEvent"), &Z_Registration_Info_UScriptStruct_DlgEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEvent), 1281847551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_3796883393(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEvent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
