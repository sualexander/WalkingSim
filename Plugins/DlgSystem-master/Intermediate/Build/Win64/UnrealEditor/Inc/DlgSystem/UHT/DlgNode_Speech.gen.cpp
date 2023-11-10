// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Speech.h"
#include "DlgSystem/DlgTextArgument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Speech() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Speech();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Speech_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDlgNode_Speech::execIsVirtualParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualParent();
		P_NATIVE_END;
	}
	void UDlgNode_Speech::StaticRegisterNativesUDlgNode_Speech()
	{
		UClass* Class = UDlgNode_Speech::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsVirtualParent", &UDlgNode_Speech::execIsVirtualParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics
	{
		struct DlgNode_Speech_eventIsVirtualParent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_Speech_eventIsVirtualParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DlgNode_Speech_eventIsVirtualParent_Parms), &Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Is this node a virtual parent?\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Is this node a virtual parent?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode_Speech, nullptr, "IsVirtualParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::DlgNode_Speech_eventIsVirtualParent_Parms), Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_Speech);
	UClass* Z_Construct_UClass_UDlgNode_Speech_NoRegister()
	{
		return UDlgNode_Speech::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Speech_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVirtualParent_MetaData[];
#endif
		static void NewProp_bIsVirtualParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVirtualParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData[];
#endif
		static void NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualParentFireDirectChildEnterEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextArguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextArguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextArguments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceDialogueWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceDialogueWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GenericData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Speech_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_Speech_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent, "IsVirtualParent" }, // 2703427486
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Normal dialogue node - someone says something.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Speech.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Normal dialogue node - someone says something." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Make this Node act like a fake parent (proxy) to other child nodes (makes it get the granchildren).\n// On reevaluate children, it does not get the direct children but the children of the first satisfied direct child node (grandchildren).\n//\n// NOTE: It should have at least one satisfied child otherwise the Dialogue is terminated.\n// NOTE: The first satisfied direct child will be added to the visited history when this node is entered.\n// NOTE: Most Common usage for this is to make loops.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Make this Node act like a fake parent (proxy) to other child nodes (makes it get the granchildren).\nOn reevaluate children, it does not get the direct children but the children of the first satisfied direct child node (grandchildren).\n\nNOTE: It should have at least one satisfied child otherwise the Dialogue is terminated.\nNOTE: The first satisfied direct child will be added to the visited history when this node is entered.\nNOTE: Most Common usage for this is to make loops." },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_SetBit(void* Obj)
	{
		((UDlgNode_Speech*)Obj)->bIsVirtualParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent = { "bIsVirtualParent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDlgNode_Speech), &Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// If true the first satisfied Direct Child of this Virtual Parent Node will fire its Enter Events after this node is entered (and fires its enter events).\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "If true the first satisfied Direct Child of this Virtual Parent Node will fire its Enter Events after this node is entered (and fires its enter events)." },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit(void* Obj)
	{
		((UDlgNode_Speech*)Obj)->bVirtualParentFireDirectChildEnterEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents = { "bVirtualParentFireDirectChildEnterEvents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDlgNode_Speech), &Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when this node participant name speaks to someone else.\n// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when this node participant name speaks to someone else.\nIf you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, Text), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_Inner = { "TextArguments", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(nullptr, 0) }; // 865560136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments = { "TextArguments", nullptr, (EPropertyFlags)0x0020088000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, TextArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_MetaData)) }; // 865560136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// State of the speaker attached to this node. Passed to the GetParticipantIcon function.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "State of the speaker attached to this node. Passed to the GetParticipantIcon function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, SpeakerState), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// User Defined Custom Node data you can customize yourself with your own data types\n//\n// Create a new Blueprint derived from DlgNodeData (or DlgNodeDataHideCategories)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "User Defined Custom Node data you can customize yourself with your own data types\n\nCreate a new Blueprint derived from DlgNodeData (or DlgNodeDataHideCategories)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, NodeData), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Sound Wave variant.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Voice attached to this node. The Sound Wave variant.\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave = { "VoiceSoundWave", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, VoiceSoundWave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave = { "VoiceDialogueWave", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, VoiceDialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Any generic object you would like\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Any generic object you would like\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData = { "GenericData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Speech, GenericData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Speech_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Speech_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Speech>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Speech_Statics::ClassParams = {
		&UDlgNode_Speech::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_Speech_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Speech()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_Speech.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Speech.OuterSingleton, Z_Construct_UClass_UDlgNode_Speech_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_Speech.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Speech>()
	{
		return UDlgNode_Speech::StaticClass();
	}
	UDlgNode_Speech::UDlgNode_Speech(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Speech);
	UDlgNode_Speech::~UDlgNode_Speech() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Speech_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Speech_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Speech, UDlgNode_Speech::StaticClass, TEXT("UDlgNode_Speech"), &Z_Registration_Info_UClass_UDlgNode_Speech, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Speech), 853976267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Speech_h_3184904221(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Speech_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Speech_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
