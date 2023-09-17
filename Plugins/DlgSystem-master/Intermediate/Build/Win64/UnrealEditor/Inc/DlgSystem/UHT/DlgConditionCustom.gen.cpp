// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgConditionCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgConditionCustom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDlgConditionCustom::execGetEditorDisplayString)
	{
		P_GET_OBJECT(UDlgDialogue,Z_Param_OwnerDialogue);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEditorDisplayString_Implementation(Z_Param_OwnerDialogue,Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgConditionCustom::execIsConditionMet)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_Context,Z_Param_Participant);
		P_NATIVE_END;
	}
	struct DlgConditionCustom_eventGetEditorDisplayString_Parms
	{
		UDlgDialogue* OwnerDialogue;
		FName ParticipantName;
		FString ReturnValue;
	};
	struct DlgConditionCustom_eventIsConditionMet_Parms
	{
		const UDlgContext* Context;
		const UObject* Participant;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DlgConditionCustom_eventIsConditionMet_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UDlgConditionCustom_GetEditorDisplayString = FName(TEXT("GetEditorDisplayString"));
	FString UDlgConditionCustom::GetEditorDisplayString(UDlgDialogue* OwnerDialogue, FName ParticipantName)
	{
		DlgConditionCustom_eventGetEditorDisplayString_Parms Parms;
		Parms.OwnerDialogue=OwnerDialogue;
		Parms.ParticipantName=ParticipantName;
		ProcessEvent(FindFunctionChecked(NAME_UDlgConditionCustom_GetEditorDisplayString),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDlgConditionCustom_IsConditionMet = FName(TEXT("IsConditionMet"));
	bool UDlgConditionCustom::IsConditionMet(const UDlgContext* Context, const UObject* Participant)
	{
		DlgConditionCustom_eventIsConditionMet_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		ProcessEvent(FindFunctionChecked(NAME_UDlgConditionCustom_IsConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDlgConditionCustom::StaticRegisterNativesUDlgConditionCustom()
	{
		UClass* Class = UDlgConditionCustom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorDisplayString", &UDlgConditionCustom::execGetEditorDisplayString },
			{ "IsConditionMet", &UDlgConditionCustom::execIsConditionMet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::NewProp_OwnerDialogue = { "OwnerDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgConditionCustom_eventGetEditorDisplayString_Parms, OwnerDialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgConditionCustom_eventGetEditorDisplayString_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgConditionCustom_eventGetEditorDisplayString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::NewProp_OwnerDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Display text for editor graph node\n" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "Display text for editor graph node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgConditionCustom, nullptr, "GetEditorDisplayString", nullptr, nullptr, sizeof(DlgConditionCustom_eventGetEditorDisplayString_Parms), Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgConditionCustom_eventIsConditionMet_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgConditionCustom_eventIsConditionMet_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant_MetaData)) };
	void Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgConditionCustom_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgConditionCustom_eventIsConditionMet_Parms), &Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Checks if the condition is met\n" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "Checks if the condition is met" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgConditionCustom, nullptr, "IsConditionMet", nullptr, nullptr, sizeof(DlgConditionCustom_eventIsConditionMet_Parms), Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgConditionCustom);
	UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister()
	{
		return UDlgConditionCustom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgConditionCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgConditionCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgConditionCustom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString, "GetEditorDisplayString" }, // 1185383114
		{ &Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet, "IsConditionMet" }, // 4212656279
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustom_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom condition\n// Extend this class to define additional data you want to store\n//\n// 1. Override IsConditionMet\n// 2. Return true if you want the condition to succeed or false otherwise\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgConditionCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "Abstract base class for a custom condition\nExtend this class to define additional data you want to store\n\n1. Override IsConditionMet\n2. Return true if you want the condition to succeed or false otherwise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgConditionCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgConditionCustom_Statics::ClassParams = {
		&UDlgConditionCustom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgConditionCustom()
	{
		if (!Z_Registration_Info_UClass_UDlgConditionCustom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgConditionCustom.OuterSingleton, Z_Construct_UClass_UDlgConditionCustom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgConditionCustom.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgConditionCustom>()
	{
		return UDlgConditionCustom::StaticClass();
	}
	UDlgConditionCustom::UDlgConditionCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgConditionCustom);
	UDlgConditionCustom::~UDlgConditionCustom() {}
	void UDlgConditionCustomHideCategories::StaticRegisterNativesUDlgConditionCustomHideCategories()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgConditionCustomHideCategories);
	UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories_NoRegister()
	{
		return UDlgConditionCustomHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgConditionCustom,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgConditionCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgConditionCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "This is the same as UDlgConditionCustom but it does NOT show the categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustomHideCategories>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::ClassParams = {
		&UDlgConditionCustomHideCategories::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories()
	{
		if (!Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.OuterSingleton, Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgConditionCustomHideCategories>()
	{
		return UDlgConditionCustomHideCategories::StaticClass();
	}
	UDlgConditionCustomHideCategories::UDlgConditionCustomHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgConditionCustomHideCategories);
	UDlgConditionCustomHideCategories::~UDlgConditionCustomHideCategories() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgConditionCustom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgConditionCustom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgConditionCustom, UDlgConditionCustom::StaticClass, TEXT("UDlgConditionCustom"), &Z_Registration_Info_UClass_UDlgConditionCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgConditionCustom), 3203053541U) },
		{ Z_Construct_UClass_UDlgConditionCustomHideCategories, UDlgConditionCustomHideCategories::StaticClass, TEXT("UDlgConditionCustomHideCategories"), &Z_Registration_Info_UClass_UDlgConditionCustomHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgConditionCustomHideCategories), 3046422633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgConditionCustom_h_3072136525(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgConditionCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgConditionCustom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
