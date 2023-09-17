// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_Select.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_Select() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectName();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectName_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_NoRegister();
	DLGSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgVariableType;
	static UEnum* EDlgVariableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgVariableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgVariableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("EDlgVariableType"));
		}
		return Z_Registration_Info_UEnum_EDlgVariableType.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UEnum* StaticEnum<EDlgVariableType>()
	{
		return EDlgVariableType_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::Enumerators[] = {
		{ "EDlgVariableType::Float", (int64)EDlgVariableType::Float },
		{ "EDlgVariableType::Int", (int64)EDlgVariableType::Int },
		{ "EDlgVariableType::Name", (int64)EDlgVariableType::Name },
		{ "EDlgVariableType::SpeakerState", (int64)EDlgVariableType::SpeakerState },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::Enum_MetaDataParams[] = {
		{ "Float.DisplayName", "Dialogue Float Variable" },
		{ "Float.Name", "EDlgVariableType::Float" },
		{ "Int.DisplayName", "Dialogue Int Variable" },
		{ "Int.Name", "EDlgVariableType::Int" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Name.DisplayName", "Dialogue Name Variable" },
		{ "Name.Name", "EDlgVariableType::Name" },
		{ "SpeakerState.DisplayName", "Dialogue Speaker State" },
		{ "SpeakerState.Name", "EDlgVariableType::SpeakerState" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		"EDlgVariableType",
		"EDlgVariableType",
		Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType()
	{
		if (!Z_Registration_Info_UEnum_EDlgVariableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgVariableType.InnerSingleton, Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgVariableType.InnerSingleton;
	}
	void UDialogueK2Node_Select::StaticRegisterNativesUDialogueK2Node_Select()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueK2Node_Select);
	UClass* Z_Construct_UClass_UDialogueK2Node_Select_NoRegister()
	{
		return UDialogueK2Node_Select::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_Select_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VariableType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VariableType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariablePinType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariablePinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReconstructNode_MetaData[];
#endif
		static void NewProp_bReconstructNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReconstructNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_Select_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Select BlueprintNode Based on UK2Node_Select\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Select BlueprintNode Based on UK2Node_Select" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_MetaData[] = {
		{ "Comment", "/** List of the current entries (Pin Names) based on owner dialogue name and on all dialogues */" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "List of the current entries (Pin Names) based on owner dialogue name and on all dialogues" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueK2Node_Select, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueK2Node_Select, VariableType), Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_MetaData)) }; // 118004059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType_MetaData[] = {
		{ "Comment", "// The pin type of this select\n" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "The pin type of this select" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType = { "VariablePinType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueK2Node_Select, VariablePinType), METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_MetaData[] = {
		{ "Comment", "/** Whether we need to reconstruct the node after the pins have changed */" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "Whether we need to reconstruct the node after the pins have changed" },
	};
#endif
	void Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_SetBit(void* Obj)
	{
		((UDialogueK2Node_Select*)Obj)->bReconstructNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode = { "bReconstructNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueK2Node_Select), &Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueK2Node_Select_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_Select_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_Select>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::ClassParams = {
		&UDialogueK2Node_Select::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueK2Node_Select_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_Select()
	{
		if (!Z_Registration_Info_UClass_UDialogueK2Node_Select.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_Select.OuterSingleton, Z_Construct_UClass_UDialogueK2Node_Select_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueK2Node_Select.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_Select>()
	{
		return UDialogueK2Node_Select::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_Select);
	UDialogueK2Node_Select::~UDialogueK2Node_Select() {}
	void UDialogueK2Node_SelectFloat::StaticRegisterNativesUDialogueK2Node_SelectFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueK2Node_SelectFloat);
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat_NoRegister()
	{
		return UDialogueK2Node_SelectFloat::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Float variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Float variant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::ClassParams = {
		&UDialogueK2Node_SelectFloat::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat()
	{
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.OuterSingleton, Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SelectFloat>()
	{
		return UDialogueK2Node_SelectFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SelectFloat);
	UDialogueK2Node_SelectFloat::~UDialogueK2Node_SelectFloat() {}
	void UDialogueK2Node_SelectName::StaticRegisterNativesUDialogueK2Node_SelectName()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueK2Node_SelectName);
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectName_NoRegister()
	{
		return UDialogueK2Node_SelectName::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SelectName_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Name variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Name variant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::ClassParams = {
		&UDialogueK2Node_SelectName::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectName()
	{
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SelectName.OuterSingleton, Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueK2Node_SelectName.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SelectName>()
	{
		return UDialogueK2Node_SelectName::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SelectName);
	UDialogueK2Node_SelectName::~UDialogueK2Node_SelectName() {}
	void UDialogueK2Node_SelectOnSpeakerState::StaticRegisterNativesUDialogueK2Node_SelectOnSpeakerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueK2Node_SelectOnSpeakerState);
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_NoRegister()
	{
		return UDialogueK2Node_SelectOnSpeakerState::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  SpeakerState variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SpeakerState variant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectOnSpeakerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::ClassParams = {
		&UDialogueK2Node_SelectOnSpeakerState::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState()
	{
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.OuterSingleton, Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SelectOnSpeakerState>()
	{
		return UDialogueK2Node_SelectOnSpeakerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SelectOnSpeakerState);
	UDialogueK2Node_SelectOnSpeakerState::~UDialogueK2Node_SelectOnSpeakerState() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics::EnumInfo[] = {
		{ EDlgVariableType_StaticEnum, TEXT("EDlgVariableType"), &Z_Registration_Info_UEnum_EDlgVariableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 118004059U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueK2Node_Select, UDialogueK2Node_Select::StaticClass, TEXT("UDialogueK2Node_Select"), &Z_Registration_Info_UClass_UDialogueK2Node_Select, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_Select), 1779999805U) },
		{ Z_Construct_UClass_UDialogueK2Node_SelectFloat, UDialogueK2Node_SelectFloat::StaticClass, TEXT("UDialogueK2Node_SelectFloat"), &Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SelectFloat), 1478639285U) },
		{ Z_Construct_UClass_UDialogueK2Node_SelectName, UDialogueK2Node_SelectName::StaticClass, TEXT("UDialogueK2Node_SelectName"), &Z_Registration_Info_UClass_UDialogueK2Node_SelectName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SelectName), 1550733244U) },
		{ Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState, UDialogueK2Node_SelectOnSpeakerState::StaticClass, TEXT("UDialogueK2Node_SelectOnSpeakerState"), &Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SelectOnSpeakerState), 2464025108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_948067702(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
