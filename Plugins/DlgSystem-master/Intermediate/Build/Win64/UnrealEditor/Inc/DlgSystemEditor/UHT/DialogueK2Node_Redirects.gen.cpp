// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_Redirects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_Redirects() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_Select();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_Select_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgK2Node_Select::StaticRegisterNativesUDlgK2Node_Select()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_Select);
	UClass* Z_Construct_UClass_UDlgK2Node_Select_NoRegister()
	{
		return UDlgK2Node_Select::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_Select_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_Select_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_Select_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Selects\n" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ToolTip", "Selects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_Select_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_Select>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_Select_Statics::ClassParams = {
		&UDlgK2Node_Select::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_Select_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_Select_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_Select()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_Select.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_Select.OuterSingleton, Z_Construct_UClass_UDlgK2Node_Select_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_Select.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_Select>()
	{
		return UDlgK2Node_Select::StaticClass();
	}
	UDlgK2Node_Select::UDlgK2Node_Select(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_Select);
	UDlgK2Node_Select::~UDlgK2Node_Select() {}
	void UDlgK2Node_SelectFloat::StaticRegisterNativesUDlgK2Node_SelectFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SelectFloat);
	UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat_NoRegister()
	{
		return UDlgK2Node_SelectFloat::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SelectFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SelectFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::ClassParams = {
		&UDlgK2Node_SelectFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SelectFloat>()
	{
		return UDlgK2Node_SelectFloat::StaticClass();
	}
	UDlgK2Node_SelectFloat::UDlgK2Node_SelectFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SelectFloat);
	UDlgK2Node_SelectFloat::~UDlgK2Node_SelectFloat() {}
	void UDlgK2Node_SwitchDialogueCallback::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallback()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SwitchDialogueCallback);
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallback::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Switches\n" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ToolTip", "Switches" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallback>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallback>()
	{
		return UDlgK2Node_SwitchDialogueCallback::StaticClass();
	}
	UDlgK2Node_SwitchDialogueCallback::UDlgK2Node_SwitchDialogueCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallback);
	UDlgK2Node_SwitchDialogueCallback::~UDlgK2Node_SwitchDialogueCallback() {}
	void UDlgK2Node_SwitchDialogueCallbackEvent::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SwitchDialogueCallbackEvent);
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackEvent>()
	{
		return UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass();
	}
	UDlgK2Node_SwitchDialogueCallbackEvent::UDlgK2Node_SwitchDialogueCallbackEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackEvent);
	UDlgK2Node_SwitchDialogueCallbackEvent::~UDlgK2Node_SwitchDialogueCallbackEvent() {}
	void UDlgK2Node_SwitchDialogueCallbackCondition::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SwitchDialogueCallbackCondition);
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackCondition>()
	{
		return UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass();
	}
	UDlgK2Node_SwitchDialogueCallbackCondition::UDlgK2Node_SwitchDialogueCallbackCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackCondition);
	UDlgK2Node_SwitchDialogueCallbackCondition::~UDlgK2Node_SwitchDialogueCallbackCondition() {}
	void UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackFloatValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SwitchDialogueCallbackFloatValue);
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackFloatValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackFloatValue>()
	{
		return UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass();
	}
	UDlgK2Node_SwitchDialogueCallbackFloatValue::UDlgK2Node_SwitchDialogueCallbackFloatValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackFloatValue);
	UDlgK2Node_SwitchDialogueCallbackFloatValue::~UDlgK2Node_SwitchDialogueCallbackFloatValue() {}
	void UDlgK2Node_SwitchDialogueCallbackIntValue::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackIntValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SwitchDialogueCallbackIntValue);
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackIntValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackIntValue>()
	{
		return UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass();
	}
	UDlgK2Node_SwitchDialogueCallbackIntValue::UDlgK2Node_SwitchDialogueCallbackIntValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackIntValue);
	UDlgK2Node_SwitchDialogueCallbackIntValue::~UDlgK2Node_SwitchDialogueCallbackIntValue() {}
	void UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackBoolValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgK2Node_SwitchDialogueCallbackBoolValue);
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackBoolValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue()
	{
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackBoolValue>()
	{
		return UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass();
	}
	UDlgK2Node_SwitchDialogueCallbackBoolValue::UDlgK2Node_SwitchDialogueCallbackBoolValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackBoolValue);
	UDlgK2Node_SwitchDialogueCallbackBoolValue::~UDlgK2Node_SwitchDialogueCallbackBoolValue() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgK2Node_Select, UDlgK2Node_Select::StaticClass, TEXT("UDlgK2Node_Select"), &Z_Registration_Info_UClass_UDlgK2Node_Select, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_Select), 2410068216U) },
		{ Z_Construct_UClass_UDlgK2Node_SelectFloat, UDlgK2Node_SelectFloat::StaticClass, TEXT("UDlgK2Node_SelectFloat"), &Z_Registration_Info_UClass_UDlgK2Node_SelectFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SelectFloat), 2497043026U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback, UDlgK2Node_SwitchDialogueCallback::StaticClass, TEXT("UDlgK2Node_SwitchDialogueCallback"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallback), 2828301207U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent, UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass, TEXT("UDlgK2Node_SwitchDialogueCallbackEvent"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackEvent), 2045917028U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition, UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass, TEXT("UDlgK2Node_SwitchDialogueCallbackCondition"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackCondition), 3914140930U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue, UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass, TEXT("UDlgK2Node_SwitchDialogueCallbackFloatValue"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackFloatValue), 2353337756U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue, UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass, TEXT("UDlgK2Node_SwitchDialogueCallbackIntValue"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackIntValue), 2837691886U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue, UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass, TEXT("UDlgK2Node_SwitchDialogueCallbackBoolValue"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackBoolValue), 152649117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h_865252921(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
