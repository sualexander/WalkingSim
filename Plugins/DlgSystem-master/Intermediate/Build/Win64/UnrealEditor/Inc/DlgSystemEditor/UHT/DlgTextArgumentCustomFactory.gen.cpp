// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Factories/DlgTextArgumentCustomFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgTextArgumentCustomFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomFactory();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgTextArgumentCustomFactory::StaticRegisterNativesUDlgTextArgumentCustomFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTextArgumentCustomFactory);
	UClass* Z_Construct_UClass_UDlgTextArgumentCustomFactory_NoRegister()
	{
		return UDlgTextArgumentCustomFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DlgTextArgumentCustomFactory.h" },
		{ "ModuleRelativePath", "Factories/DlgTextArgumentCustomFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// Holds the template of the class we are building\n" },
		{ "ModuleRelativePath", "Factories/DlgTextArgumentCustomFactory.h" },
		{ "ToolTip", "Holds the template of the class we are building" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTextArgumentCustomFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustomFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::ClassParams = {
		&UDlgTextArgumentCustomFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTextArgumentCustomFactory()
	{
		if (!Z_Registration_Info_UClass_UDlgTextArgumentCustomFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTextArgumentCustomFactory.OuterSingleton, Z_Construct_UClass_UDlgTextArgumentCustomFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTextArgumentCustomFactory.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgTextArgumentCustomFactory>()
	{
		return UDlgTextArgumentCustomFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTextArgumentCustomFactory);
	UDlgTextArgumentCustomFactory::~UDlgTextArgumentCustomFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgTextArgumentCustomFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgTextArgumentCustomFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgTextArgumentCustomFactory, UDlgTextArgumentCustomFactory::StaticClass, TEXT("UDlgTextArgumentCustomFactory"), &Z_Registration_Info_UClass_UDlgTextArgumentCustomFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTextArgumentCustomFactory), 3440373669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgTextArgumentCustomFactory_h_550652626(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgTextArgumentCustomFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgTextArgumentCustomFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
