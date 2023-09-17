// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgTextArgumentCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgTextArgumentCustom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDlgTextArgumentCustom::execGetText)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayStringParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText_Implementation(Z_Param_Context,Z_Param_Participant,Z_Param_DisplayStringParam);
		P_NATIVE_END;
	}
	struct DlgTextArgumentCustom_eventGetText_Parms
	{
		const UDlgContext* Context;
		const UObject* Participant;
		FString DisplayStringParam;
		FText ReturnValue;
	};
	static FName NAME_UDlgTextArgumentCustom_GetText = FName(TEXT("GetText"));
	FText UDlgTextArgumentCustom::GetText(const UDlgContext* Context, const UObject* Participant, const FString& DisplayStringParam)
	{
		DlgTextArgumentCustom_eventGetText_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		Parms.DisplayStringParam=DisplayStringParam;
		ProcessEvent(FindFunctionChecked(NAME_UDlgTextArgumentCustom_GetText),&Parms);
		return Parms.ReturnValue;
	}
	void UDlgTextArgumentCustom::StaticRegisterNativesUDlgTextArgumentCustom()
	{
		UClass* Class = UDlgTextArgumentCustom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UDlgTextArgumentCustom::execGetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayStringParam_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayStringParam;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam = { "DisplayStringParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, DisplayStringParam), METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgTextArgumentCustom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgTextArgumentCustom, nullptr, "GetText", nullptr, nullptr, sizeof(DlgTextArgumentCustom_eventGetText_Parms), Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgTextArgumentCustom_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTextArgumentCustom);
	UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister()
	{
		return UDlgTextArgumentCustom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTextArgumentCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTextArgumentCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgTextArgumentCustom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgTextArgumentCustom_GetText, "GetText" }, // 3535485659
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTextArgumentCustom_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom text argument\n// Extend this class to define additional data you want to store\n//\n// 1. Override GetText\n// 2. Return the new Text for the specified text argument\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgTextArgumentCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgTextArgumentCustom.h" },
		{ "ToolTip", "Abstract base class for a custom text argument\nExtend this class to define additional data you want to store\n\n1. Override GetText\n2. Return the new Text for the specified text argument" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTextArgumentCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTextArgumentCustom_Statics::ClassParams = {
		&UDlgTextArgumentCustom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgTextArgumentCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTextArgumentCustom()
	{
		if (!Z_Registration_Info_UClass_UDlgTextArgumentCustom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTextArgumentCustom.OuterSingleton, Z_Construct_UClass_UDlgTextArgumentCustom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTextArgumentCustom.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTextArgumentCustom>()
	{
		return UDlgTextArgumentCustom::StaticClass();
	}
	UDlgTextArgumentCustom::UDlgTextArgumentCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTextArgumentCustom);
	UDlgTextArgumentCustom::~UDlgTextArgumentCustom() {}
	void UDlgTextArgumentCustomHideCategories::StaticRegisterNativesUDlgTextArgumentCustomHideCategories()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTextArgumentCustomHideCategories);
	UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_NoRegister()
	{
		return UDlgTextArgumentCustomHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgTextArgumentCustom,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgTextArgumentCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgTextArgumentCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgTextArgumentCustom.h" },
		{ "ToolTip", "This is the same as UDlgTextArgumentCustom but it does NOT show the categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustomHideCategories>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::ClassParams = {
		&UDlgTextArgumentCustomHideCategories::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories()
	{
		if (!Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.OuterSingleton, Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTextArgumentCustomHideCategories>()
	{
		return UDlgTextArgumentCustomHideCategories::StaticClass();
	}
	UDlgTextArgumentCustomHideCategories::UDlgTextArgumentCustomHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTextArgumentCustomHideCategories);
	UDlgTextArgumentCustomHideCategories::~UDlgTextArgumentCustomHideCategories() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgumentCustom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgumentCustom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgTextArgumentCustom, UDlgTextArgumentCustom::StaticClass, TEXT("UDlgTextArgumentCustom"), &Z_Registration_Info_UClass_UDlgTextArgumentCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTextArgumentCustom), 3775769216U) },
		{ Z_Construct_UClass_UDlgTextArgumentCustomHideCategories, UDlgTextArgumentCustomHideCategories::StaticClass, TEXT("UDlgTextArgumentCustomHideCategories"), &Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTextArgumentCustomHideCategories), 375158782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgumentCustom_h_3150229455(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgumentCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_DlgTextArgumentCustom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
