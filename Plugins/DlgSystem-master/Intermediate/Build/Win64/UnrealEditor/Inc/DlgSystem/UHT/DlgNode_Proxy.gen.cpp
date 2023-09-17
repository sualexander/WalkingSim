// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Proxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Proxy() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Proxy();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Proxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_Proxy::StaticRegisterNativesUDlgNode_Proxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_Proxy);
	UClass* Z_Construct_UClass_UDlgNode_Proxy_NoRegister()
	{
		return UDlgNode_Proxy::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Proxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Proxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Proxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node without text. Execution auto-steps through it to the referenced node.\n * Can be used to reduce dialogue graph spaghetti.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Proxy.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Proxy.h" },
		{ "ToolTip", "Node without text. Execution auto-steps through it to the referenced node.\nCan be used to reduce dialogue graph spaghetti." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Index of the node the Proxy represents (in UDlgDialogue::Nodes)\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Proxy.h" },
		{ "ToolTip", "Index of the node the Proxy represents (in UDlgDialogue::Nodes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNode_Proxy, NodeIndex), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Proxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Proxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Proxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Proxy_Statics::ClassParams = {
		&UDlgNode_Proxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgNode_Proxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Proxy_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Proxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Proxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Proxy()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_Proxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Proxy.OuterSingleton, Z_Construct_UClass_UDlgNode_Proxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_Proxy.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Proxy>()
	{
		return UDlgNode_Proxy::StaticClass();
	}
	UDlgNode_Proxy::UDlgNode_Proxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Proxy);
	UDlgNode_Proxy::~UDlgNode_Proxy() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Proxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Proxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Proxy, UDlgNode_Proxy::StaticClass, TEXT("UDlgNode_Proxy"), &Z_Registration_Info_UClass_UDlgNode_Proxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Proxy), 4271257899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Proxy_h_4275226675(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Proxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Proxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
