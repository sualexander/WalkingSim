// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Nodes/DialogueGraphNode_Edge.h"
#include "DlgSystem/DlgEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Edge() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Edge();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Edge_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDialogueGraphNode_Edge::StaticRegisterNativesUDialogueGraphNode_Edge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode_Edge);
	UClass* Z_Construct_UClass_UDialogueGraphNode_Edge_NoRegister()
	{
		return UDialogueGraphNode_Edge::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_Edge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEdge_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryEdge_MetaData[];
#endif
		static void NewProp_bIsPrimaryEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryEdge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the graph node for edges, corresponds to the runtime FDlgEdge.\n * Allows us to have selectable edges.\n * This class has an additional constraint over the base class UDialogueGraphNode_Base such that the input and output pin\n * have only one connection (aka Pin.LinkedTo.Num() == 1 at all times) otherwise this does not make sense to simulate an Edge.\n */" },
		{ "IncludePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ToolTip", "Represents the graph node for edges, corresponds to the runtime FDlgEdge.\nAllows us to have selectable edges.\nThis class has an additional constraint over the base class UDialogueGraphNode_Base such that the input and output pin\nhave only one connection (aka Pin.LinkedTo.Num() == 1 at all times) otherwise this does not make sense to simulate an Edge." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The copy Dialogue Edge corresponding to this graph node. This belongs to the the Node of the Input Pin (GetParentNode) */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The copy Dialogue Edge corresponding to this graph node. This belongs to the the Node of the Input Pin (GetParentNode)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge = { "DialogueEdge", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueGraphNode_Edge, DialogueEdge), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge_MetaData)) }; // 273406106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_MetaData[] = {
		{ "Comment", "/**\n\x09 * Is this a primary edge? Aka does this edge lead to a unique path to the ChildNode.\n\x09 * This is only set after the graph is compiled.\n\x09 */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ToolTip", "Is this a primary edge? Aka does this edge lead to a unique path to the ChildNode.\nThis is only set after the graph is compiled." },
	};
#endif
	void Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_SetBit(void* Obj)
	{
		((UDialogueGraphNode_Edge*)Obj)->bIsPrimaryEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge = { "bIsPrimaryEdge", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueGraphNode_Edge), &Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Edge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::ClassParams = {
		&UDialogueGraphNode_Edge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode_Edge()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraphNode_Edge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_Edge.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraphNode_Edge.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraphNode_Edge>()
	{
		return UDialogueGraphNode_Edge::StaticClass();
	}
	UDialogueGraphNode_Edge::UDialogueGraphNode_Edge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_Edge);
	UDialogueGraphNode_Edge::~UDialogueGraphNode_Edge() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_Edge, UDialogueGraphNode_Edge::StaticClass, TEXT("UDialogueGraphNode_Edge"), &Z_Registration_Info_UClass_UDialogueGraphNode_Edge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_Edge), 3227916282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h_1052959566(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
