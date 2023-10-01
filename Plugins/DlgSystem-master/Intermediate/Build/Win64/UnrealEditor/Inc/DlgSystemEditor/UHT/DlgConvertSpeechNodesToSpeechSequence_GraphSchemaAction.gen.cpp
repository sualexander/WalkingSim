// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Graph/SchemaActions/DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction;
class UScriptStruct* FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction>()
{
	return FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Action to convert Speech nodes to a Speech Sequence Node.\n * This is the opposite of the FDlgConvertSpeechSequenceNodeToSpeechNodes_GraphSchemaAction.\n */" },
		{ "ModuleRelativePath", "Editor/Graph/SchemaActions/DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.h" },
		{ "ToolTip", "Action to convert Speech nodes to a Speech Sequence Node.\nThis is the opposite of the FDlgConvertSpeechSequenceNodeToSpeechNodes_GraphSchemaAction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction",
		sizeof(FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction),
		alignof(FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_h_Statics::ScriptStructInfo[] = {
		{ FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_Statics::NewStructOps, TEXT("DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction"), &Z_Registration_Info_UScriptStruct_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction), 322963954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_h_3511817754(TEXT("/Script/DlgSystemEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgConvertSpeechNodesToSpeechSequence_GraphSchemaAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
