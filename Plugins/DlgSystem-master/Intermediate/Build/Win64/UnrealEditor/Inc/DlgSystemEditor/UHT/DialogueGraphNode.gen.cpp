// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Nodes/DialogueGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDialogueGraphNode::StaticRegisterNativesUDialogueGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode);
	UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister()
	{
		return UDialogueGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBorderHighlight_MetaData[];
#endif
		static void NewProp_bUseBorderHighlight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBorderHighlight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The Dialogue Node this graph node references.  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Dialogue Node this graph node references." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode = { "DialogueNode", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueGraphNode, DialogueNode), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The Dialogue Node index in the Dialogue (array) this represents. This is not relevant for the StartNode. */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "The Dialogue Node index in the Dialogue (array) this represents. This is not relevant for the StartNode." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueGraphNode, NodeIndex), METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth_MetaData[] = {
		{ "Comment", "/** Indicates the distance from the start node. This is only set after the graph is compiled. */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "Indicates the distance from the start node. This is only set after the graph is compiled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth = { "NodeDepth", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueGraphNode, NodeDepth), METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight_MetaData[] = {
		{ "Comment", "/** Used to highlight the node if the currently selected node is a proxy targeting it */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "Used to highlight the node if the currently selected node is a proxy targeting it" },
	};
#endif
	void Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight_SetBit(void* Obj)
	{
		((UDialogueGraphNode*)Obj)->bUseBorderHighlight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight = { "bUseBorderHighlight", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueGraphNode), &Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_bUseBorderHighlight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Statics::ClassParams = {
		&UDialogueGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraphNode>()
	{
		return UDialogueGraphNode::StaticClass();
	}
	UDialogueGraphNode::UDialogueGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode);
	UDialogueGraphNode::~UDialogueGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode, UDialogueGraphNode::StaticClass, TEXT("UDialogueGraphNode"), &Z_Registration_Info_UClass_UDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode), 3158709341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h_1102635727(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
