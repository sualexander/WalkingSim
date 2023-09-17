// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Factories/DlgAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgAssetFactory() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgAssetFactory();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgAssetFactory::StaticRegisterNativesUDlgAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgAssetFactory);
	UClass* Z_Construct_UClass_UDlgAssetFactory_NoRegister()
	{
		return UDlgAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for dialogues. Editor does the magic here, without this class,\n * you won't have the right click \"Dialog System\" -> \"Dialogue\"\n */" },
		{ "IncludePath", "Factories/DlgAssetFactory.h" },
		{ "ModuleRelativePath", "Factories/DlgAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Factory for dialogues. Editor does the magic here, without this class,\nyou won't have the right click \"Dialog System\" -> \"Dialogue\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgAssetFactory_Statics::ClassParams = {
		&UDlgAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UDlgAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgAssetFactory.OuterSingleton, Z_Construct_UClass_UDlgAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgAssetFactory.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgAssetFactory>()
	{
		return UDlgAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgAssetFactory);
	UDlgAssetFactory::~UDlgAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgAssetFactory, UDlgAssetFactory::StaticClass, TEXT("UDlgAssetFactory"), &Z_Registration_Info_UClass_UDlgAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgAssetFactory), 775462720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgAssetFactory_h_3341845699(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
