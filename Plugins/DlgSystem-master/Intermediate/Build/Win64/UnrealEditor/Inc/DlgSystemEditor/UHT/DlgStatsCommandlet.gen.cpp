// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Commandlets/DlgStatsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgStatsCommandlet() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgStatsCommandlet();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgStatsCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgStatsCommandlet::StaticRegisterNativesUDlgStatsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgStatsCommandlet);
	UClass* Z_Construct_UClass_UDlgStatsCommandlet_NoRegister()
	{
		return UDlgStatsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDlgStatsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgStatsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgStatsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DlgStatsCommandlet.h" },
		{ "ModuleRelativePath", "Commandlets/DlgStatsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgStatsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgStatsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgStatsCommandlet_Statics::ClassParams = {
		&UDlgStatsCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgStatsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgStatsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgStatsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDlgStatsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgStatsCommandlet.OuterSingleton, Z_Construct_UClass_UDlgStatsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgStatsCommandlet.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgStatsCommandlet>()
	{
		return UDlgStatsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgStatsCommandlet);
	UDlgStatsCommandlet::~UDlgStatsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgStatsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgStatsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgStatsCommandlet, UDlgStatsCommandlet::StaticClass, TEXT("UDlgStatsCommandlet"), &Z_Registration_Info_UClass_UDlgStatsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgStatsCommandlet), 2384544921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgStatsCommandlet_h_2169129119(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgStatsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgStatsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
