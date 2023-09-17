// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Selector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Selector() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Selector();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Selector_NoRegister();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgNodeSelectorType;
	static UEnum* EDlgNodeSelectorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgNodeSelectorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgNodeSelectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgNodeSelectorType"));
		}
		return Z_Registration_Info_UEnum_EDlgNodeSelectorType.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgNodeSelectorType>()
	{
		return EDlgNodeSelectorType_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::Enumerators[] = {
		{ "EDlgNodeSelectorType::First", (int64)EDlgNodeSelectorType::First },
		{ "EDlgNodeSelectorType::Random", (int64)EDlgNodeSelectorType::Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "First.Comment", "// As soon as it is entered it selects its first satisfied child.\n" },
		{ "First.DisplayName", "First" },
		{ "First.Name", "EDlgNodeSelectorType::First" },
		{ "First.ToolTip", "As soon as it is entered it selects its first satisfied child." },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "Random.Comment", "// As soon as it is entered it selects a satisfied child randomly.\n" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EDlgNodeSelectorType::Random" },
		{ "Random.ToolTip", "As soon as it is entered it selects a satisfied child randomly." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgNodeSelectorType",
		"EDlgNodeSelectorType",
		Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType()
	{
		if (!Z_Registration_Info_UEnum_EDlgNodeSelectorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgNodeSelectorType.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgNodeSelectorType.InnerSingleton;
	}
	DEFINE_FUNCTION(UDlgNode_Selector::execGetSelectorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDlgNodeSelectorType*)Z_Param__Result=P_THIS->GetSelectorType();
		P_NATIVE_END;
	}
	void UDlgNode_Selector::StaticRegisterNativesUDlgNode_Selector()
	{
		UClass* Class = UDlgNode_Selector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectorType", &UDlgNode_Selector::execGetSelectorType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics
	{
		struct DlgNode_Selector_eventGetSelectorType_Parms
		{
			EDlgNodeSelectorType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DlgNode_Selector_eventGetSelectorType_Parms, ReturnValue), Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, METADATA_PARAMS(nullptr, 0) }; // 3194136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the Selector Type\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Gets the Selector Type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode_Selector, nullptr, "GetSelectorType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::DlgNode_Selector_eventGetSelectorType_Parms), Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_Selector);
	UClass* Z_Construct_UClass_UDlgNode_Selector_NoRegister()
	{
		return UDlgNode_Selector::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Selector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData[];
#endif
		static void NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidPickingSameOptionTwiceInARow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData[];
#endif
		static void NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDisplayText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DynamicDisplayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Selector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_Selector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType, "GetSelectorType" }, // 1873229595
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node without text. Selector of child depends on the type.\n * It should have at least one (satisfied child), HandleNodeEnter returns false and the Dialogue is terminated otherwise.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Selector.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Node without text. Selector of child depends on the type.\nIt should have at least one (satisfied child), HandleNodeEnter returns false and the Dialogue is terminated otherwise." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Defines the type of selector this node represents\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Defines the type of selector this node represents" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType = { "SelectorType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Selector, SelectorType), Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_MetaData)) }; // 3194136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Modifies the way EDlgNodeSelectorType::Random works.\n// Ensures that an option is not picked twice before any other option is,\n// unless it is not possible because of the node setup/conditions\n" },
		{ "EditCondition", "SelectorType == EDlgNodeSelectorType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Modifies the way EDlgNodeSelectorType::Random works.\nEnsures that an option is not picked twice before any other option is,\nunless it is not possible because of the node setup/conditions" },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit(void* Obj)
	{
		((UDlgNode_Selector*)Obj)->bAvoidPickingSameOptionTwiceInARow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow = { "bAvoidPickingSameOptionTwiceInARow", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDlgNode_Selector), &Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Only after each satisfied option is picked once can an option be picked again\n// Still allows repetition if bAvoidPickingSameOptionTwiceInARow is not set to true,\n// e.g. for options {A, B, C} A-B-C-C-A-B-B... is a valid series of choices\n" },
		{ "EditCondition", "SelectorType == EDlgNodeSelectorType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Only after each satisfied option is picked once can an option be picked again\nStill allows repetition if bAvoidPickingSameOptionTwiceInARow is not set to true,\ne.g. for options {A, B, C} A-B-C-C-A-B-B... is a valid series of choices" },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit(void* Obj)
	{
		((UDlgNode_Selector*)Obj)->bCycleThroughSatisfiedOptionsWithoutRepetition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition = { "bCycleThroughSatisfiedOptionsWithoutRepetition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDlgNode_Selector), &Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText_MetaData[] = {
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText = { "DynamicDisplayText", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Selector, DynamicDisplayText), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Selector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Selector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Selector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Selector_Statics::ClassParams = {
		&UDlgNode_Selector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_Selector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Selector()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_Selector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Selector.OuterSingleton, Z_Construct_UClass_UDlgNode_Selector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_Selector.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Selector>()
	{
		return UDlgNode_Selector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Selector);
	UDlgNode_Selector::~UDlgNode_Selector() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics::EnumInfo[] = {
		{ EDlgNodeSelectorType_StaticEnum, TEXT("EDlgNodeSelectorType"), &Z_Registration_Info_UEnum_EDlgNodeSelectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3194136U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Selector, UDlgNode_Selector::StaticClass, TEXT("UDlgNode_Selector"), &Z_Registration_Info_UClass_UDlgNode_Selector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Selector), 912556344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_3859642992(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Selector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
