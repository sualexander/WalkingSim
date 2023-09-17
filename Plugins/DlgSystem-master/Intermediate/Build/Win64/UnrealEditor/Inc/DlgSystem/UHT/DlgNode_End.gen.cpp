// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_End.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_End() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_End();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_End_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_End::StaticRegisterNativesUDlgNode_End()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_End);
	UClass* Z_Construct_UClass_UDlgNode_End_NoRegister()
	{
		return UDlgNode_End::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_End_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_End_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_End_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node ending the Dialogue.\n * Does not have text, if it is entered the Dialogue is over.\n * Events and enter conditions are taken into account.\n */" },
		{ "IncludePath", "Nodes/DlgNode_End.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_End.h" },
		{ "ToolTip", "Node ending the Dialogue.\nDoes not have text, if it is entered the Dialogue is over.\nEvents and enter conditions are taken into account." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_End_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_End>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_End_Statics::ClassParams = {
		&UDlgNode_End::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_End_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_End_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_End()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_End.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_End.OuterSingleton, Z_Construct_UClass_UDlgNode_End_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_End.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_End>()
	{
		return UDlgNode_End::StaticClass();
	}
	UDlgNode_End::UDlgNode_End(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_End);
	UDlgNode_End::~UDlgNode_End() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_End_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_End_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_End, UDlgNode_End::StaticClass, TEXT("UDlgNode_End"), &Z_Registration_Info_UClass_UDlgNode_End, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_End), 932237657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_End_h_2439739452(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_End_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_End_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
