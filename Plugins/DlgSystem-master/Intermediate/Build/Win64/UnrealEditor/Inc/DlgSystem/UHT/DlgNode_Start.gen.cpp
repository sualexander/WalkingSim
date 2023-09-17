// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Start.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Start() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Start();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Start_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_Start::StaticRegisterNativesUDlgNode_Start()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_Start);
	UClass* Z_Construct_UClass_UDlgNode_Start_NoRegister()
	{
		return UDlgNode_Start::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Start_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Start_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Start_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Possible entry point of the Dialogue.\n * Does not have text, the first satisfied child is picked if there is any.\n * Start nodes are evaluated from left to right.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Start.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Start.h" },
		{ "ToolTip", "Possible entry point of the Dialogue.\nDoes not have text, the first satisfied child is picked if there is any.\nStart nodes are evaluated from left to right." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Start_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Start>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Start_Statics::ClassParams = {
		&UDlgNode_Start::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Start_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Start_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Start()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_Start.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Start.OuterSingleton, Z_Construct_UClass_UDlgNode_Start_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_Start.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Start>()
	{
		return UDlgNode_Start::StaticClass();
	}
	UDlgNode_Start::UDlgNode_Start(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Start);
	UDlgNode_Start::~UDlgNode_Start() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Start_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Start_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Start, UDlgNode_Start::StaticClass, TEXT("UDlgNode_Start"), &Z_Registration_Info_UClass_UDlgNode_Start, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Start), 1673285018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Start_h_945870997(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Start_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Start_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
