// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgDialogueParticipantData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogueParticipantData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgParticipantData;
class UScriptStruct* FDlgParticipantData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgParticipantData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgParticipantData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantData, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgParticipantData"));
	}
	return Z_Registration_Info_UScriptStruct_DlgParticipantData.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgParticipantData>()
{
	return FDlgParticipantData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgParticipantData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Conditions_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Conditions;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomConditions_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomConditions_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomConditions;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Events_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Events;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UnrealFunctions_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_UnrealFunctions;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomEvents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomEvents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomEvents;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomTextArguments_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTextArguments_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomTextArguments;
		static const UECodeGen_Private::FNamePropertyParams NewProp_IntVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IntVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FloatVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_FloatVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoolVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_BoolVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_NameVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassIntVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassIntVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ClassIntVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassFloatVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassFloatVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ClassFloatVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassBoolVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassBoolVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ClassBoolVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassNameVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNameVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ClassNameVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassTextVariableNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassTextVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ClassTextVariableNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure useful to cache all the names used by a participant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Structure useful to cache all the names used by a participant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantData>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_ElementProp = { "Conditions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// FName based conditions (aka conditions of type EventCall).\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "FName based conditions (aka conditions of type EventCall)." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, Conditions), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_ElementProp = { "CustomConditions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Conditions UClasses of type UDlgConditionCustom\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Conditions UClasses of type UDlgConditionCustom" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions = { "CustomConditions", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, CustomConditions), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_ElementProp = { "Events", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// FName based events (aka events of type EDlgEventType)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "FName based events (aka events of type EDlgEventType)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, Events), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions_ElementProp = { "UnrealFunctions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Unreal Function based events\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Unreal Function based events" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions = { "UnrealFunctions", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, UnrealFunctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_ElementProp = { "CustomEvents", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Events UClasses of type UDlgEventCustom\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Events UClasses of type UDlgEventCustom" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents = { "CustomEvents", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, CustomEvents), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_ElementProp = { "CustomTextArguments", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Events UClasses of type UDlgTextArgumentCustom\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Events UClasses of type UDlgTextArgumentCustom" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments = { "CustomTextArguments", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, CustomTextArguments), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_ElementProp = { "IntVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Integers used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Integers used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames = { "IntVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, IntVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_ElementProp = { "FloatVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Floats used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Floats used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames = { "FloatVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, FloatVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_ElementProp = { "BoolVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Booleans used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Booleans used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames = { "BoolVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, BoolVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_ElementProp = { "NameVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Names used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Names used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames = { "NameVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, NameVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_ElementProp = { "ClassIntVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Integers used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Integers used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames = { "ClassIntVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, ClassIntVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_ElementProp = { "ClassFloatVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Floats used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Floats used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames = { "ClassFloatVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, ClassFloatVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_ElementProp = { "ClassBoolVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Booleans used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Booleans used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames = { "ClassBoolVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, ClassBoolVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_ElementProp = { "ClassNameVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Names used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Names used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames = { "ClassNameVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, ClassNameVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_ElementProp = { "ClassTextVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Texts used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Texts used in a Dialogue" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames = { "ClassTextVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantData, ClassTextVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgParticipantData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_UnrealFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgParticipantData",
		sizeof(FDlgParticipantData),
		alignof(FDlgParticipantData),
		Z_Construct_UScriptStruct_FDlgParticipantData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgParticipantData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgParticipantData.InnerSingleton, Z_Construct_UScriptStruct_FDlgParticipantData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgParticipantData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipantData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipantData_h_Statics::ScriptStructInfo[] = {
		{ FDlgParticipantData::StaticStruct, Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewStructOps, TEXT("DlgParticipantData"), &Z_Registration_Info_UScriptStruct_DlgParticipantData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgParticipantData), 1561816090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipantData_h_1515572768(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipantData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgDialogueParticipantData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
