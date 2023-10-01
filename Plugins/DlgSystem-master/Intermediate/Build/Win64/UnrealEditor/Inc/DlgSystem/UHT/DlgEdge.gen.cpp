// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgEdge.h"
#include "DlgSystem/DlgCondition.h"
#include "DlgSystem/DlgTextArgument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgEdge() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgEdge;
class UScriptStruct* FDlgEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdge, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgEdge"));
	}
	return Z_Registration_Info_UScriptStruct_DlgEdge.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgEdge>()
{
	return FDlgEdge::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgEdge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData[];
#endif
		static void NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInAllOptionListIfUnsatisfied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextArguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextArguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextArguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The representation of a child in a node. Defined by a TargetIndex which points to the index array in the Dialogue.Nodes\n */" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "The representation of a child in a node. Defined by a TargetIndex which points to the index array in the Dialogue.Nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdge>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Index of the node in the Nodes TArray of the dialogue this edge is leading to\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Index of the node in the Nodes TArray of the dialogue this edge is leading to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge, TargetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) }; // 3914112931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Required but not sufficient conditions - target node's enter conditions are checked too\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Required but not sufficient conditions - target node's enter conditions are checked too" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_MetaData)) }; // 3914112931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Player emotion/state attached to this player choice\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Player emotion/state attached to this player choice" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge, SpeakerState), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Set this to false in order to skip this edge in the AllChildren array (which lists both satisfied and not satisfied player choices\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Set this to false in order to skip this edge in the AllChildren array (which lists both satisfied and not satisfied player choices" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit(void* Obj)
	{
		((FDlgEdge*)Obj)->bIncludeInAllOptionListIfUnsatisfied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied = { "bIncludeInAllOptionListIfUnsatisfied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgEdge), &Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_EdgeData_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_EdgeData = { "EdgeData", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge, EdgeData), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_EdgeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_EdgeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Text associated with the child, can be used for user choices\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text associated with the child, can be used for user choices" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_Inner = { "TextArguments", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(nullptr, 0) }; // 865560136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments = { "TextArguments", nullptr, (EPropertyFlags)0x0020088000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge, TextArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_MetaData)) }; // 865560136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_EdgeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgEdge",
		sizeof(FDlgEdge),
		alignof(FDlgEdge),
		Z_Construct_UScriptStruct_FDlgEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgEdge.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgEdge.InnerSingleton, Z_Construct_UScriptStruct_FDlgEdge_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgEdge.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEdge_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEdge_h_Statics::ScriptStructInfo[] = {
		{ FDlgEdge::StaticStruct, Z_Construct_UScriptStruct_FDlgEdge_Statics::NewStructOps, TEXT("DlgEdge"), &Z_Registration_Info_UScriptStruct_DlgEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdge), 273406106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEdge_h_496488577(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEdge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgEdge_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
