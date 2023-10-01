// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Nodes/DialogueGraphNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Base() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDialogueGraphNode_Base::StaticRegisterNativesUDialogueGraphNode_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode_Base);
	UClass* Z_Construct_UClass_UDialogueGraphNode_Base_NoRegister()
	{
		return UDialogueGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the base class representation of the dialogue graph nodes.\n * Each dialogue graph node has only one input/output pin. And each pin can be linked to multiple nodes.\n */" },
		{ "IncludePath", "Editor/Nodes/DialogueGraphNode_Base.h" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Base.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents the base class representation of the dialogue graph nodes.\nEach dialogue graph node has only one input/output pin. And each pin can be linked to multiple nodes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Base_Statics::ClassParams = {
		&UDialogueGraphNode_Base::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode_Base()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraphNode_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_Base.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraphNode_Base.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraphNode_Base>()
	{
		return UDialogueGraphNode_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_Base);
	UDialogueGraphNode_Base::~UDialogueGraphNode_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_Base, UDialogueGraphNode_Base::StaticClass, TEXT("UDialogueGraphNode_Base"), &Z_Registration_Info_UClass_UDialogueGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_Base), 2008211549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h_786076909(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
