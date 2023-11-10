// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgCondition() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgCompare();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionStrength();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionType();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgOperation();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgConditionStrength;
	static UEnum* EDlgConditionStrength_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgConditionStrength.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgConditionStrength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgConditionStrength, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgConditionStrength"));
		}
		return Z_Registration_Info_UEnum_EDlgConditionStrength.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgConditionStrength>()
	{
		return EDlgConditionStrength_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::Enumerators[] = {
		{ "EDlgConditionStrength::Strong", (int64)EDlgConditionStrength::Strong },
		{ "EDlgConditionStrength::Weak", (int64)EDlgConditionStrength::Weak },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines the way the condition is interpreted inside a condition array\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "Strong.Comment", "/// All strong condition must be satisfied inside the condition array\n// Aka an AND condition\n" },
		{ "Strong.DisplayName", "Strong Condition (AND Condition)" },
		{ "Strong.Name", "EDlgConditionStrength::Strong" },
		{ "Strong.ToolTip", "All strong condition must be satisfied inside the condition array\nAka an AND condition" },
		{ "ToolTip", "Defines the way the condition is interpreted inside a condition array" },
		{ "Weak.Comment", "// At least one of the weak conditions must be satisfied inside the condition array (if there is any)\n// Aka an OR condition\n" },
		{ "Weak.DisplayName", "Weak Condition (OR Condition)" },
		{ "Weak.Name", "EDlgConditionStrength::Weak" },
		{ "Weak.ToolTip", "At least one of the weak conditions must be satisfied inside the condition array (if there is any)\nAka an OR condition" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgConditionStrength",
		"EDlgConditionStrength",
		Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionStrength()
	{
		if (!Z_Registration_Info_UEnum_EDlgConditionStrength.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgConditionStrength.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgConditionStrength.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgConditionType;
	static UEnum* EDlgConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgConditionType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgConditionType"));
		}
		return Z_Registration_Info_UEnum_EDlgConditionType.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgConditionType>()
	{
		return EDlgConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::Enumerators[] = {
		{ "EDlgConditionType::IntCall", (int64)EDlgConditionType::IntCall },
		{ "EDlgConditionType::FloatCall", (int64)EDlgConditionType::FloatCall },
		{ "EDlgConditionType::BoolCall", (int64)EDlgConditionType::BoolCall },
		{ "EDlgConditionType::NameCall", (int64)EDlgConditionType::NameCall },
		{ "EDlgConditionType::EventCall", (int64)EDlgConditionType::EventCall },
		{ "EDlgConditionType::ClassIntVariable", (int64)EDlgConditionType::ClassIntVariable },
		{ "EDlgConditionType::ClassFloatVariable", (int64)EDlgConditionType::ClassFloatVariable },
		{ "EDlgConditionType::ClassBoolVariable", (int64)EDlgConditionType::ClassBoolVariable },
		{ "EDlgConditionType::ClassNameVariable", (int64)EDlgConditionType::ClassNameVariable },
		{ "EDlgConditionType::WasNodeVisited", (int64)EDlgConditionType::WasNodeVisited },
		{ "EDlgConditionType::HasSatisfiedChild", (int64)EDlgConditionType::HasSatisfiedChild },
		{ "EDlgConditionType::Custom", (int64)EDlgConditionType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoolCall.Comment", "// Calls GetBoolValue on the Participant\n" },
		{ "BoolCall.DisplayName", "Check Dialogue Bool Value" },
		{ "BoolCall.Name", "EDlgConditionType::BoolCall" },
		{ "BoolCall.ToolTip", "Calls GetBoolValue on the Participant" },
		{ "ClassBoolVariable.Comment", "// Gets the value from the Participant Bool Variable\n" },
		{ "ClassBoolVariable.DisplayName", "Check Class Bool Variable" },
		{ "ClassBoolVariable.Name", "EDlgConditionType::ClassBoolVariable" },
		{ "ClassBoolVariable.ToolTip", "Gets the value from the Participant Bool Variable" },
		{ "ClassFloatVariable.Comment", "// Gets the value from the Participant Float Variable\n" },
		{ "ClassFloatVariable.DisplayName", "Check Class Float Variable" },
		{ "ClassFloatVariable.Name", "EDlgConditionType::ClassFloatVariable" },
		{ "ClassFloatVariable.ToolTip", "Gets the value from the Participant Float Variable" },
		{ "ClassIntVariable.Comment", "// Gets the value from the Participant Int Variable\n" },
		{ "ClassIntVariable.DisplayName", "Check Class Int Variable" },
		{ "ClassIntVariable.Name", "EDlgConditionType::ClassIntVariable" },
		{ "ClassIntVariable.ToolTip", "Gets the value from the Participant Int Variable" },
		{ "ClassNameVariable.Comment", "// Gets the value from the Participant Name Variable\n" },
		{ "ClassNameVariable.DisplayName", "Check Class Name Variable" },
		{ "ClassNameVariable.Name", "EDlgConditionType::ClassNameVariable" },
		{ "ClassNameVariable.ToolTip", "Gets the value from the Participant Name Variable" },
		{ "Comment", "// The Type of condition FDlgCondition is based upon\n" },
		{ "Custom.Comment", "// User Defined Condition, calls IsConditionMet on the custom condition object.\n//\n// 1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n// 2. Override IsConditionMet\n// 3. Return true if you want the condition to succeed or false otherwise\n" },
		{ "Custom.DisplayName", "Custom Condition" },
		{ "Custom.Name", "EDlgConditionType::Custom" },
		{ "Custom.ToolTip", "User Defined Condition, calls IsConditionMet on the custom condition object.\n\n1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n2. Override IsConditionMet\n3. Return true if you want the condition to succeed or false otherwise" },
		{ "EventCall.Comment", "// A named condition call.\n// Calls CheckCondition on the Participant\n" },
		{ "EventCall.DisplayName", "Check Dialogue Named Condition" },
		{ "EventCall.Name", "EDlgConditionType::EventCall" },
		{ "EventCall.ToolTip", "A named condition call.\nCalls CheckCondition on the Participant" },
		{ "FloatCall.Comment", "// Calls GetFloatValue on the Participant\n" },
		{ "FloatCall.DisplayName", "Check Dialogue Float Value" },
		{ "FloatCall.Name", "EDlgConditionType::FloatCall" },
		{ "FloatCall.ToolTip", "Calls GetFloatValue on the Participant" },
		{ "HasSatisfiedChild.Comment", "// Checks if the target node has any satisfied child\n" },
		{ "HasSatisfiedChild.DisplayName", "Has satisfied child?" },
		{ "HasSatisfiedChild.Name", "EDlgConditionType::HasSatisfiedChild" },
		{ "HasSatisfiedChild.ToolTip", "Checks if the target node has any satisfied child" },
		{ "IntCall.Comment", "// Calls GetIntValue on the Participant\n" },
		{ "IntCall.DisplayName", "Check Dialogue Int Value" },
		{ "IntCall.Name", "EDlgConditionType::IntCall" },
		{ "IntCall.ToolTip", "Calls GetIntValue on the Participant" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "NameCall.Comment", "// Calls GetNameValue on the Participant\n" },
		{ "NameCall.DisplayName", "Check Dialogue Name Value" },
		{ "NameCall.Name", "EDlgConditionType::NameCall" },
		{ "NameCall.ToolTip", "Calls GetNameValue on the Participant" },
		{ "ToolTip", "The Type of condition FDlgCondition is based upon" },
		{ "WasNodeVisited.Comment", "// Checks if the target node was already visited\n" },
		{ "WasNodeVisited.DisplayName", "Was node already visited?" },
		{ "WasNodeVisited.Name", "EDlgConditionType::WasNodeVisited" },
		{ "WasNodeVisited.ToolTip", "Checks if the target node was already visited" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgConditionType",
		"EDlgConditionType",
		Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionType()
	{
		if (!Z_Registration_Info_UEnum_EDlgConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgConditionType.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgConditionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgOperation;
	static UEnum* EDlgOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgOperation, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgOperation"));
		}
		return Z_Registration_Info_UEnum_EDlgOperation.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgOperation>()
	{
		return EDlgOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::Enumerators[] = {
		{ "EDlgOperation::Equal", (int64)EDlgOperation::Equal },
		{ "EDlgOperation::NotEqual", (int64)EDlgOperation::NotEqual },
		{ "EDlgOperation::Less", (int64)EDlgOperation::Less },
		{ "EDlgOperation::LessOrEqual", (int64)EDlgOperation::LessOrEqual },
		{ "EDlgOperation::Greater", (int64)EDlgOperation::Greater },
		{ "EDlgOperation::GreaterOrEqual", (int64)EDlgOperation::GreaterOrEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Operation the return value of a IntCall/FloatCall is checked with\n" },
		{ "Equal.DisplayName", "== (Is Equal To)" },
		{ "Equal.Name", "EDlgOperation::Equal" },
		{ "Greater.DisplayName", ">  (Is Greater Than)" },
		{ "Greater.Name", "EDlgOperation::Greater" },
		{ "GreaterOrEqual.DisplayName", ">= (Is Greater Than Or Equal To)" },
		{ "GreaterOrEqual.Name", "EDlgOperation::GreaterOrEqual" },
		{ "Less.DisplayName", "<  (Is Less Than)" },
		{ "Less.Name", "EDlgOperation::Less" },
		{ "LessOrEqual.DisplayName", "<= (Is Less Than Or Equal To)" },
		{ "LessOrEqual.Name", "EDlgOperation::LessOrEqual" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "NotEqual.DisplayName", "!= (Is Not Equal To)" },
		{ "NotEqual.Name", "EDlgOperation::NotEqual" },
		{ "ToolTip", "Operation the return value of a IntCall/FloatCall is checked with" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgOperation",
		"EDlgOperation",
		Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgOperation()
	{
		if (!Z_Registration_Info_UEnum_EDlgOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgOperation.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgCompare;
	static UEnum* EDlgCompare_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgCompare.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgCompare.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgCompare, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgCompare"));
		}
		return Z_Registration_Info_UEnum_EDlgCompare.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgCompare>()
	{
		return EDlgCompare_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::Enumerators[] = {
		{ "EDlgCompare::ToConst", (int64)EDlgCompare::ToConst },
		{ "EDlgCompare::ToVariable", (int64)EDlgCompare::ToVariable },
		{ "EDlgCompare::ToClassVariable", (int64)EDlgCompare::ToClassVariable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Type of value the participant's value is checked against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToClassVariable.Comment", "// Compares against a Participant Class Variable\n" },
		{ "ToClassVariable.DisplayName", "Compare to Class Variable" },
		{ "ToClassVariable.Name", "EDlgCompare::ToClassVariable" },
		{ "ToClassVariable.ToolTip", "Compares against a Participant Class Variable" },
		{ "ToConst.Comment", "// Compares against a constat value\n" },
		{ "ToConst.DisplayName", "Compare to Constant" },
		{ "ToConst.Name", "EDlgCompare::ToConst" },
		{ "ToConst.ToolTip", "Compares against a constat value" },
		{ "ToolTip", "Type of value the participant's value is checked against" },
		{ "ToVariable.Comment", "// Compares against a Dialogue Value\n" },
		{ "ToVariable.DisplayName", "Compare to Dialogue Value" },
		{ "ToVariable.Name", "EDlgCompare::ToVariable" },
		{ "ToVariable.ToolTip", "Compares against a Dialogue Value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgCompare",
		"EDlgCompare",
		Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgCompare()
	{
		if (!Z_Registration_Info_UEnum_EDlgCompare.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgCompare.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgCompare.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgCondition;
class UScriptStruct* FDlgCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgCondition, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgCondition"));
	}
	return Z_Registration_Info_UScriptStruct_DlgCondition.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgCondition>()
{
	return FDlgCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Strength_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CallbackName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompareType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompareType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherParticipantName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherVariableName;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolValue_MetaData[];
#endif
		static void NewProp_bBoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLongTermMemory_MetaData[];
#endif
		static void NewProp_bLongTermMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongTermMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCondition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCondition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A condition is a logical operation which is evaluated based on a participant or on the local (context based) or global dialogue memory.\n// More conditions are stored together in condition arrays in FDlgEdge and in UDlgNode, the node (or the edge's target node) is only visitable\n// if the condition array is satisfied\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "A condition is a logical operation which is evaluated based on a participant or on the local (context based) or global dialogue memory.\nMore conditions are stored together in condition arrays in FDlgEdge and in UDlgNode, the node (or the edge's target node) is only visitable\nif the condition array is satisfied" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgCondition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Defines the way the condition is interpreted inside the condition array\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Defines the way the condition is interpreted inside the condition array" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, Strength), Z_Construct_UEnum_DlgSystem_EDlgConditionStrength, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength_MetaData)) }; // 853221322
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Type of the condition, defines the behavior\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Type of the condition, defines the behavior" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, ConditionType), Z_Construct_UEnum_DlgSystem_EDlgConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType_MetaData)) }; // 3896586742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the participant (speaker) the event is called on.\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the participant (speaker) the event is called on." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ParticipantName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CallbackName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the variable or event, passed in the function call to the participant\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the variable or event, passed in the function call to the participant" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CallbackName = { "CallbackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, CallbackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CallbackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CallbackName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// The desired operation on the selected variable\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "The desired operation on the selected variable" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, Operation), Z_Construct_UEnum_DlgSystem_EDlgOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation_MetaData)) }; // 3517559392
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Type of value to check against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Type of value to check against" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, CompareType), Z_Construct_UEnum_DlgSystem_EDlgCompare, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType_MetaData)) }; // 3714359969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the other participant (speaker) the check is performed against (with some compare types)\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the other participant (speaker) the check is performed against (with some compare types)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherParticipantName = { "OtherParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, OtherParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherParticipantName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherVariableName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the variable of the other participant the value is checked against (with some compare types)\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the variable of the other participant the value is checked against (with some compare types)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherVariableName = { "OtherVariableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, OtherVariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Node index for \"node already visited\" condition, the value the participant's int is checked against otherwise\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Node index for \"node already visited\" condition, the value the participant's int is checked against otherwise" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Float the participants float is checked against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Float the participants float is checked against" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_NameValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// FName the participants name is checked against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "FName the participants name is checked against" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, NameValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_NameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_NameValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Weather the result defined by the other params has to be true or false in order for this condition to be satisfied\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Weather the result defined by the other params has to be true or false in order for this condition to be satisfied" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue_SetBit(void* Obj)
	{
		((FDlgCondition*)Obj)->bBoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue = { "bBoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgCondition), &Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Weather to check if the node was visited at all (in the long term).\n// Set it to false to check if it was visited in the actual dialogue context\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Weather to check if the node was visited at all (in the long term).\nSet it to false to check if it was visited in the actual dialogue context" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory_SetBit(void* Obj)
	{
		((FDlgCondition*)Obj)->bLongTermMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory = { "bLongTermMemory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgCondition), &Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_GUID_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// GUID for the Node, used for \"node already visited\"\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "GUID for the Node, used for \"node already visited\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_GUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_GUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CustomCondition_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// User Defined Condition, calls IsConditionMet on the custom condition object.\n//\n// 1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n// 2. Override IsConditionMet\n// 3. Return true if you want the condition to succeed or false otherwise\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "User Defined Condition, calls IsConditionMet on the custom condition object.\n\n1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n2. Override IsConditionMet\n3. Return true if you want the condition to succeed or false otherwise" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CustomCondition = { "CustomCondition", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgCondition, CustomCondition), Z_Construct_UClass_UDlgConditionCustom_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CustomCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CustomCondition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CallbackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CompareType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_OtherVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bBoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_bLongTermMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_GUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgCondition_Statics::NewProp_CustomCondition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgCondition",
		sizeof(FDlgCondition),
		alignof(FDlgCondition),
		Z_Construct_UScriptStruct_FDlgCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgCondition.InnerSingleton, Z_Construct_UScriptStruct_FDlgCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics::EnumInfo[] = {
		{ EDlgConditionStrength_StaticEnum, TEXT("EDlgConditionStrength"), &Z_Registration_Info_UEnum_EDlgConditionStrength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 853221322U) },
		{ EDlgConditionType_StaticEnum, TEXT("EDlgConditionType"), &Z_Registration_Info_UEnum_EDlgConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3896586742U) },
		{ EDlgOperation_StaticEnum, TEXT("EDlgOperation"), &Z_Registration_Info_UEnum_EDlgOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3517559392U) },
		{ EDlgCompare_StaticEnum, TEXT("EDlgCompare"), &Z_Registration_Info_UEnum_EDlgCompare, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3714359969U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics::ScriptStructInfo[] = {
		{ FDlgCondition::StaticStruct, Z_Construct_UScriptStruct_FDlgCondition_Statics::NewStructOps, TEXT("DlgCondition"), &Z_Registration_Info_UScriptStruct_DlgCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgCondition), 3914112931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_2359396910(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgCondition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
