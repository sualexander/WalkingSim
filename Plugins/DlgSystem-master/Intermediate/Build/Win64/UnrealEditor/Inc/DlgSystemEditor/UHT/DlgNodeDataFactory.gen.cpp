// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Factories/DlgNodeDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNodeDataFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgNodeDataFactory();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgNodeDataFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgNodeDataFactory::StaticRegisterNativesUDlgNodeDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNodeDataFactory);
	UClass* Z_Construct_UClass_UDlgNodeDataFactory_NoRegister()
	{
		return UDlgNodeDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNodeDataFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UDlgNodeDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DlgNodeDataFactory.h" },
		{ "ModuleRelativePath", "Factories/DlgNodeDataFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// Holds the template of the class we are building\n" },
		{ "ModuleRelativePath", "Factories/DlgNodeDataFactory.h" },
		{ "ToolTip", "Holds the template of the class we are building" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgNodeDataFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNodeDataFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNodeDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNodeDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNodeDataFactory_Statics::ClassParams = {
		&UDlgNodeDataFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgNodeDataFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNodeDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNodeDataFactory()
	{
		if (!Z_Registration_Info_UClass_UDlgNodeDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNodeDataFactory.OuterSingleton, Z_Construct_UClass_UDlgNodeDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNodeDataFactory.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgNodeDataFactory>()
	{
		return UDlgNodeDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNodeDataFactory);
	UDlgNodeDataFactory::~UDlgNodeDataFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgNodeDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgNodeDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNodeDataFactory, UDlgNodeDataFactory::StaticClass, TEXT("UDlgNodeDataFactory"), &Z_Registration_Info_UClass_UDlgNodeDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNodeDataFactory), 4045603267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgNodeDataFactory_h_2714324068(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgNodeDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystemEditor_Factories_DlgNodeDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
