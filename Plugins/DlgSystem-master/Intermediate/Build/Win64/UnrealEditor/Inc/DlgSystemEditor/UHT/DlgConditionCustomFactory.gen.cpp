// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Factories/DlgConditionCustomFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgConditionCustomFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgConditionCustomFactory();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgConditionCustomFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgConditionCustomFactory::StaticRegisterNativesUDlgConditionCustomFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgConditionCustomFactory);
	UClass* Z_Construct_UClass_UDlgConditionCustomFactory_NoRegister()
	{
		return UDlgConditionCustomFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgConditionCustomFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgConditionCustomFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustomFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DlgConditionCustomFactory.h" },
		{ "ModuleRelativePath", "Factories/DlgConditionCustomFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// Holds the template of the class we are building\n" },
		{ "ModuleRelativePath", "Factories/DlgConditionCustomFactory.h" },
		{ "ToolTip", "Holds the template of the class we are building" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgConditionCustomFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDlgConditionCustom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgConditionCustomFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgConditionCustomFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustomFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgConditionCustomFactory_Statics::ClassParams = {
		&UDlgConditionCustomFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgConditionCustomFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgConditionCustomFactory()
	{
		if (!Z_Registration_Info_UClass_UDlgConditionCustomFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgConditionCustomFactory.OuterSingleton, Z_Construct_UClass_UDlgConditionCustomFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgConditionCustomFactory.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgConditionCustomFactory>()
	{
		return UDlgConditionCustomFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgConditionCustomFactory);
	UDlgConditionCustomFactory::~UDlgConditionCustomFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgConditionCustomFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgConditionCustomFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgConditionCustomFactory, UDlgConditionCustomFactory::StaticClass, TEXT("UDlgConditionCustomFactory"), &Z_Registration_Info_UClass_UDlgConditionCustomFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgConditionCustomFactory), 2848908368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgConditionCustomFactory_h_277632308(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgConditionCustomFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgConditionCustomFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
