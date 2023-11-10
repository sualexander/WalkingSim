// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Custom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Custom() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Custom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Custom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_Custom::StaticRegisterNativesUDlgNode_Custom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNode_Custom);
	UClass* Z_Construct_UClass_UDlgNode_Custom_NoRegister()
	{
		return UDlgNode_Custom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Custom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Custom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Custom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Abstract dialogue node, can be extended outside of the plugin to add custom data and implement custom behavior\n */" },
		{ "IncludePath", "Nodes/DlgNode_Custom.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Custom.h" },
		{ "ToolTip", "Abstract dialogue node, can be extended outside of the plugin to add custom data and implement custom behavior" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Custom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Custom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Custom_Statics::ClassParams = {
		&UDlgNode_Custom::StaticClass,
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
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Custom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Custom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Custom()
	{
		if (!Z_Registration_Info_UClass_UDlgNode_Custom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Custom.OuterSingleton, Z_Construct_UClass_UDlgNode_Custom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNode_Custom.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Custom>()
	{
		return UDlgNode_Custom::StaticClass();
	}
	UDlgNode_Custom::UDlgNode_Custom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Custom);
	UDlgNode_Custom::~UDlgNode_Custom() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Custom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Custom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Custom, UDlgNode_Custom::StaticClass, TEXT("UDlgNode_Custom"), &Z_Registration_Info_UClass_UDlgNode_Custom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Custom), 1742062564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Custom_h_3397496216(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Custom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Nodes_DlgNode_Custom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
