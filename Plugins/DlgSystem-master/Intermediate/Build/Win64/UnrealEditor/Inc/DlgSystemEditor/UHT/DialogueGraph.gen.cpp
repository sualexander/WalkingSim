// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Graph/DialogueGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraph() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraph();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDialogueGraph::StaticRegisterNativesUDialogueGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraph);
	UClass* Z_Construct_UClass_UDialogueGraph_NoRegister()
	{
		return UDialogueGraph::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/Graph/DialogueGraph.h" },
		{ "ModuleRelativePath", "Editor/Graph/DialogueGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraph_Statics::ClassParams = {
		&UDialogueGraph::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraph()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraph.OuterSingleton, Z_Construct_UClass_UDialogueGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraph.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraph>()
	{
		return UDialogueGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraph);
	UDialogueGraph::~UDialogueGraph() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_DialogueGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_DialogueGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraph, UDialogueGraph::StaticClass, TEXT("UDialogueGraph"), &Z_Registration_Info_UClass_UDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraph), 999606873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_DialogueGraph_h_2752004068(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_DialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Graph_DialogueGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
