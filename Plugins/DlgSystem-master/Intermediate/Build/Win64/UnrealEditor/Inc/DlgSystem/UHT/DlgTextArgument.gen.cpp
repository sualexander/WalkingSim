// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgTextArgument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgTextArgument() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgTextArgumentType;
	static UEnum* EDlgTextArgumentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgTextArgumentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgTextArgumentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgTextArgumentType"));
		}
		return Z_Registration_Info_UEnum_EDlgTextArgumentType.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextArgumentType>()
	{
		return EDlgTextArgumentType_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::Enumerators[] = {
		{ "EDlgTextArgumentType::DisplayName", (int64)EDlgTextArgumentType::DisplayName },
		{ "EDlgTextArgumentType::Gender", (int64)EDlgTextArgumentType::Gender },
		{ "EDlgTextArgumentType::DialogueInt", (int64)EDlgTextArgumentType::DialogueInt },
		{ "EDlgTextArgumentType::DialogueFloat", (int64)EDlgTextArgumentType::DialogueFloat },
		{ "EDlgTextArgumentType::ClassInt", (int64)EDlgTextArgumentType::ClassInt },
		{ "EDlgTextArgumentType::ClassFloat", (int64)EDlgTextArgumentType::ClassFloat },
		{ "EDlgTextArgumentType::ClassText", (int64)EDlgTextArgumentType::ClassText },
		{ "EDlgTextArgumentType::Custom", (int64)EDlgTextArgumentType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassFloat.Comment", "// Gets the value from the Participant Float Variable\n" },
		{ "ClassFloat.DisplayName", "Class Float Variable" },
		{ "ClassFloat.Name", "EDlgTextArgumentType::ClassFloat" },
		{ "ClassFloat.ToolTip", "Gets the value from the Participant Float Variable" },
		{ "ClassInt.Comment", "// Gets the value from the Participant Int Variable\n" },
		{ "ClassInt.DisplayName", "Class Int Variable" },
		{ "ClassInt.Name", "EDlgTextArgumentType::ClassInt" },
		{ "ClassInt.ToolTip", "Gets the value from the Participant Int Variable" },
		{ "ClassText.Comment", "// Gets the value from the Participant Text Variable\n" },
		{ "ClassText.DisplayName", "Class Text Variable" },
		{ "ClassText.Name", "EDlgTextArgumentType::ClassText" },
		{ "ClassText.ToolTip", "Gets the value from the Participant Text Variable" },
		{ "Comment", "// Argument type, which defines both the type of the argument and the way the system will acquire the value\n// NOTE: the values are out of order here for backwards compatibility\n" },
		{ "Custom.Comment", "// User Defined Text Argument, calls GetText on the custom text argument object.\n//\n// 1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n// 2. Override GetText\n" },
		{ "Custom.DisplayName", "Custom Text Argument" },
		{ "Custom.Name", "EDlgTextArgumentType::Custom" },
		{ "Custom.ToolTip", "User Defined Text Argument, calls GetText on the custom text argument object.\n\n1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n2. Override GetText" },
		{ "DialogueFloat.Comment", "// Calls GetFloatValue on the Participant\n" },
		{ "DialogueFloat.DisplayName", "Dialogue Float Value" },
		{ "DialogueFloat.Name", "EDlgTextArgumentType::DialogueFloat" },
		{ "DialogueFloat.ToolTip", "Calls GetFloatValue on the Participant" },
		{ "DialogueInt.Comment", "// Calls GetIntValue on the Participant\n" },
		{ "DialogueInt.DisplayName", "Dialogue Int Value" },
		{ "DialogueInt.Name", "EDlgTextArgumentType::DialogueInt" },
		{ "DialogueInt.ToolTip", "Calls GetIntValue on the Participant" },
		{ "DisplayName.Comment", "// Calls GetParticipantDisplayName on the Participant\n" },
		{ "DisplayName.DisplayName", "Participant Display Name" },
		{ "DisplayName.Name", "EDlgTextArgumentType::DisplayName" },
		{ "DisplayName.ToolTip", "Calls GetParticipantDisplayName on the Participant" },
		{ "Gender.Comment", "// Calls GetParticipantGender on the Participant\n" },
		{ "Gender.DisplayName", "Participant Gender" },
		{ "Gender.Name", "EDlgTextArgumentType::Gender" },
		{ "Gender.ToolTip", "Calls GetParticipantGender on the Participant" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
		{ "ToolTip", "Argument type, which defines both the type of the argument and the way the system will acquire the value\nNOTE: the values are out of order here for backwards compatibility" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgTextArgumentType",
		"EDlgTextArgumentType",
		Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType()
	{
		if (!Z_Registration_Info_UEnum_EDlgTextArgumentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgTextArgumentType.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgTextArgumentType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTextArgument;
class UScriptStruct* FDlgTextArgument::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTextArgument.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTextArgument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTextArgument, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTextArgument"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTextArgument.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTextArgument>()
{
	return FDlgTextArgument::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTextArgument_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTextArgument_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTextArgument;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An argument is a variable to extend node texts with dynamic values runtime\n * It can be inserted to the FText, the same way FText::Format works\n * See: https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting\n */" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
		{ "ToolTip", "An argument is a variable to extend node texts with dynamic values runtime\nIt can be inserted to the FText, the same way FText::Format works\nSee: https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTextArgument>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString = { "DisplayString", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTextArgument, DisplayString), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTextArgument, Type), Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_MetaData)) }; // 4136331586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTextArgument, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTextArgument, VariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "Comment", "// User Defined Text Argument, calls GetText on the custom text argument object.\n//\n// 1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n// 2. Override GetText\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
		{ "ToolTip", "User Defined Text Argument, calls GetText on the custom text argument object.\n\n1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n2. Override GetText" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument = { "CustomTextArgument", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTextArgument, CustomTextArgument), Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTextArgument_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTextArgument",
		sizeof(FDlgTextArgument),
		alignof(FDlgTextArgument),
		Z_Construct_UScriptStruct_FDlgTextArgument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTextArgument.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTextArgument.InnerSingleton, Z_Construct_UScriptStruct_FDlgTextArgument_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTextArgument.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics::EnumInfo[] = {
		{ EDlgTextArgumentType_StaticEnum, TEXT("EDlgTextArgumentType"), &Z_Registration_Info_UEnum_EDlgTextArgumentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4136331586U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics::ScriptStructInfo[] = {
		{ FDlgTextArgument::StaticStruct, Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewStructOps, TEXT("DlgTextArgument"), &Z_Registration_Info_UScriptStruct_DlgTextArgument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTextArgument), 865560136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_3879738891(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgument_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
