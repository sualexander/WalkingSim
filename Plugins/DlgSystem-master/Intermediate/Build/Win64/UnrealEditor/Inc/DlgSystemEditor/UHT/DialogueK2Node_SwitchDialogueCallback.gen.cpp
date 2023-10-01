// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_SwitchDialogueCallback() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_NoRegister();
	DLGSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgDialogueCallback;
	static UEnum* EDlgDialogueCallback_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgDialogueCallback.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgDialogueCallback.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("EDlgDialogueCallback"));
		}
		return Z_Registration_Info_UEnum_EDlgDialogueCallback.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UEnum* StaticEnum<EDlgDialogueCallback>()
	{
		return EDlgDialogueCallback_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::Enumerators[] = {
		{ "EDlgDialogueCallback::Event", (int64)EDlgDialogueCallback::Event },
		{ "EDlgDialogueCallback::Condition", (int64)EDlgDialogueCallback::Condition },
		{ "EDlgDialogueCallback::FloatValue", (int64)EDlgDialogueCallback::FloatValue },
		{ "EDlgDialogueCallback::IntValue", (int64)EDlgDialogueCallback::IntValue },
		{ "EDlgDialogueCallback::BoolValue", (int64)EDlgDialogueCallback::BoolValue },
		{ "EDlgDialogueCallback::NameValue", (int64)EDlgDialogueCallback::NameValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::Enum_MetaDataParams[] = {
		{ "BoolValue.DisplayName", "Condition asking for a bool value" },
		{ "BoolValue.Name", "EDlgDialogueCallback::BoolValue" },
		{ "Condition.Comment", "/** Function call to check a condition */" },
		{ "Condition.DisplayName", "Dialogue Condition" },
		{ "Condition.Name", "EDlgDialogueCallback::Condition" },
		{ "Condition.ToolTip", "Function call to check a condition" },
		{ "Event.Comment", "/** Normal dialogue event during the conversation */" },
		{ "Event.DisplayName", "Dialogue Event" },
		{ "Event.Name", "EDlgDialogueCallback::Event" },
		{ "Event.ToolTip", "Normal dialogue event during the conversation" },
		{ "FloatValue.DisplayName", "Condition asking for a float value" },
		{ "FloatValue.Name", "EDlgDialogueCallback::FloatValue" },
		{ "IntValue.DisplayName", "Condition asking for an int value" },
		{ "IntValue.Name", "EDlgDialogueCallback::IntValue" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "NameValue.DisplayName", "Condition asking for a name value" },
		{ "NameValue.Name", "EDlgDialogueCallback::NameValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		"EDlgDialogueCallback",
		"EDlgDialogueCallback",
		Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback()
	{
		if (!Z_Registration_Info_UEnum_EDlgDialogueCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgDialogueCallback.InnerSingleton, Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgDialogueCallback.InnerSingleton;
	}
	void UDialogueK2Node_SwitchDialogueCallback::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallback()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueK2Node_SwitchDialogueCallback);
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallback::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialoguePinNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialoguePinNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialoguePinNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_Inner = { "DialoguePinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames = { "DialoguePinNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueK2Node_SwitchDialogueCallback, DialoguePinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueK2Node_SwitchDialogueCallback, CallbackType), Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_MetaData)) }; // 5839553
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallback>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback()
	{
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.OuterSingleton, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallback>()
	{
		return UDialogueK2Node_SwitchDialogueCallback::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallback);
	UDialogueK2Node_SwitchDialogueCallback::~UDialogueK2Node_SwitchDialogueCallback() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics::EnumInfo[] = {
		{ EDlgDialogueCallback_StaticEnum, TEXT("EDlgDialogueCallback"), &Z_Registration_Info_UEnum_EDlgDialogueCallback, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 5839553U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback, UDialogueK2Node_SwitchDialogueCallback::StaticClass, TEXT("UDialogueK2Node_SwitchDialogueCallback"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallback), 2735275189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_848840275(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
