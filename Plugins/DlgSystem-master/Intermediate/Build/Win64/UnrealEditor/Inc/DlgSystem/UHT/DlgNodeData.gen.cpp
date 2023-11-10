// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgNodeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNodeData() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeDataHideCategories();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeDataHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNodeData::StaticRegisterNativesUDlgNodeData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNodeData);
	UClass* Z_Construct_UClass_UDlgNodeData_NoRegister()
	{
		return UDlgNodeData::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNodeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNodeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for node data\n// Defining class via inheriting from UDlgNodeData outside of the plugin is possible both in Blueprint and C++\n// Extend this class to define additional data you want to store on your nodes\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgNodeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgNodeData.h" },
		{ "ToolTip", "Abstract base class for node data\nDefining class via inheriting from UDlgNodeData outside of the plugin is possible both in Blueprint and C++\nExtend this class to define additional data you want to store on your nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNodeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNodeData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNodeData_Statics::ClassParams = {
		&UDlgNodeData::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNodeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNodeData()
	{
		if (!Z_Registration_Info_UClass_UDlgNodeData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNodeData.OuterSingleton, Z_Construct_UClass_UDlgNodeData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNodeData.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNodeData>()
	{
		return UDlgNodeData::StaticClass();
	}
	UDlgNodeData::UDlgNodeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNodeData);
	UDlgNodeData::~UDlgNodeData() {}
	void UDlgNodeDataHideCategories::StaticRegisterNativesUDlgNodeDataHideCategories()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgNodeDataHideCategories);
	UClass* Z_Construct_UClass_UDlgNodeDataHideCategories_NoRegister()
	{
		return UDlgNodeDataHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNodeDataHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNodeData,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgNodeData but it does NOT show any categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgNodeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgNodeData.h" },
		{ "ToolTip", "This is the same as UDlgNodeData but it does NOT show any categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNodeDataHideCategories>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::ClassParams = {
		&UDlgNodeDataHideCategories::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNodeDataHideCategories()
	{
		if (!Z_Registration_Info_UClass_UDlgNodeDataHideCategories.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNodeDataHideCategories.OuterSingleton, Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgNodeDataHideCategories.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNodeDataHideCategories>()
	{
		return UDlgNodeDataHideCategories::StaticClass();
	}
	UDlgNodeDataHideCategories::UDlgNodeDataHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNodeDataHideCategories);
	UDlgNodeDataHideCategories::~UDlgNodeDataHideCategories() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgNodeData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgNodeData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNodeData, UDlgNodeData::StaticClass, TEXT("UDlgNodeData"), &Z_Registration_Info_UClass_UDlgNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNodeData), 2057645053U) },
		{ Z_Construct_UClass_UDlgNodeDataHideCategories, UDlgNodeDataHideCategories::StaticClass, TEXT("UDlgNodeDataHideCategories"), &Z_Registration_Info_UClass_UDlgNodeDataHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNodeDataHideCategories), 2135066030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgNodeData_h_3291364446(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgNodeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgNodeData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
