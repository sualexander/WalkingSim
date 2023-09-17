// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgEventCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgEventCustom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustomHideCategories();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustomHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDlgEventCustom::execGetEditorDisplayString)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_OwnerDialogue);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEditorDisplayString_Implementation(Z_Param_OwnerDialogue,Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgEventCustom::execEnterEvent)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterEvent_Implementation(Z_Param_Context,Z_Param_Participant);
		P_NATIVE_END;
	}
	struct DlgEventCustom_eventEnterEvent_Parms
	{
		UDlgContext* Context;
		UObject* Participant;
	};
	struct DlgEventCustom_eventGetEditorDisplayString_Parms
	{
		UDlgDialogue* OwnerDialogue;
		FName ParticipantName;
		FString ReturnValue;
	};
	static FName NAME_UDlgEventCustom_EnterEvent = FName(TEXT("EnterEvent"));
	void UDlgEventCustom::EnterEvent(UDlgContext* Context, UObject* Participant)
	{
		DlgEventCustom_eventEnterEvent_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		ProcessEvent(FindFunctionChecked(NAME_UDlgEventCustom_EnterEvent),&Parms);
	}
	static FName NAME_UDlgEventCustom_GetEditorDisplayString = FName(TEXT("GetEditorDisplayString"));
	FString UDlgEventCustom::GetEditorDisplayString(UDlgDialogue* OwnerDialogue, FName ParticipantName)
	{
		DlgEventCustom_eventGetEditorDisplayString_Parms Parms;
		Parms.OwnerDialogue=OwnerDialogue;
		Parms.ParticipantName=ParticipantName;
		ProcessEvent(FindFunctionChecked(NAME_UDlgEventCustom_GetEditorDisplayString),&Parms);
		return Parms.ReturnValue;
	}
	void UDlgEventCustom::StaticRegisterNativesUDlgEventCustom()
	{
		UClass* Class = UDlgEventCustom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterEvent", &UDlgEventCustom::execEnterEvent },
			{ "GetEditorDisplayString", &UDlgEventCustom::execGetEditorDisplayString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgEventCustom_eventEnterEvent_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgEventCustom_eventEnterEvent_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Participant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Called when the event is triggered.\n" },
		{ "DisplayName", "Enter" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "Called when the event is triggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgEventCustom, nullptr, "EnterEvent", nullptr, nullptr, sizeof(DlgEventCustom_eventEnterEvent_Parms), Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgEventCustom_EnterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerDialogue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::NewProp_OwnerDialogue = { "OwnerDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgEventCustom_eventGetEditorDisplayString_Parms, OwnerDialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgEventCustom_eventGetEditorDisplayString_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgEventCustom_eventGetEditorDisplayString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::NewProp_OwnerDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Display text for editor graph node\n" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "Display text for editor graph node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgEventCustom, nullptr, "GetEditorDisplayString", nullptr, nullptr, sizeof(DlgEventCustom_eventGetEditorDisplayString_Parms), Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgEventCustom);
	UClass* Z_Construct_UClass_UDlgEventCustom_NoRegister()
	{
		return UDlgEventCustom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgEventCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgEventCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgEventCustom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgEventCustom_EnterEvent, "EnterEvent" }, // 3951075504
		{ &Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString, "GetEditorDisplayString" }, // 3044245998
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgEventCustom_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom event\n// Extend this class to define additional data you want to store\n//\n// 1. Override EnterEvent\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgEventCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "Abstract base class for a custom event\nExtend this class to define additional data you want to store\n\n1. Override EnterEvent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgEventCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgEventCustom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgEventCustom_Statics::ClassParams = {
		&UDlgEventCustom::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgEventCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgEventCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgEventCustom()
	{
		if (!Z_Registration_Info_UClass_UDlgEventCustom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgEventCustom.OuterSingleton, Z_Construct_UClass_UDlgEventCustom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgEventCustom.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgEventCustom>()
	{
		return UDlgEventCustom::StaticClass();
	}
	UDlgEventCustom::UDlgEventCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgEventCustom);
	UDlgEventCustom::~UDlgEventCustom() {}
	void UDlgEventCustomHideCategories::StaticRegisterNativesUDlgEventCustomHideCategories()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgEventCustomHideCategories);
	UClass* Z_Construct_UClass_UDlgEventCustomHideCategories_NoRegister()
	{
		return UDlgEventCustomHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgEventCustomHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgEventCustom,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgEventCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgEventCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "This is the same as UDlgEventCustom but it does NOT show the categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgEventCustomHideCategories>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::ClassParams = {
		&UDlgEventCustomHideCategories::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgEventCustomHideCategories()
	{
		if (!Z_Registration_Info_UClass_UDlgEventCustomHideCategories.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgEventCustomHideCategories.OuterSingleton, Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgEventCustomHideCategories.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgEventCustomHideCategories>()
	{
		return UDlgEventCustomHideCategories::StaticClass();
	}
	UDlgEventCustomHideCategories::UDlgEventCustomHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgEventCustomHideCategories);
	UDlgEventCustomHideCategories::~UDlgEventCustomHideCategories() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEventCustom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEventCustom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgEventCustom, UDlgEventCustom::StaticClass, TEXT("UDlgEventCustom"), &Z_Registration_Info_UClass_UDlgEventCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgEventCustom), 4262891542U) },
		{ Z_Construct_UClass_UDlgEventCustomHideCategories, UDlgEventCustomHideCategories::StaticClass, TEXT("UDlgEventCustomHideCategories"), &Z_Registration_Info_UClass_UDlgEventCustomHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgEventCustomHideCategories), 326899404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEventCustom_h_1393449493(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEventCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgEventCustom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
