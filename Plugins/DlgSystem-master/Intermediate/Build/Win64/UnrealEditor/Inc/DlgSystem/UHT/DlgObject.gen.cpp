// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgObject::StaticRegisterNativesUDlgObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgObject);
	UClass* Z_Construct_UClass_UDlgObject_NoRegister()
	{
		return UDlgObject::StaticClass();
	}
	struct Z_Construct_UClass_UDlgObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgObject_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "// Our Dialogue base object\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgObject.h" },
		{ "ModuleRelativePath", "DlgObject.h" },
		{ "ToolTip", "Our Dialogue base object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgObject_Statics::ClassParams = {
		&UDlgObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgObject()
	{
		if (!Z_Registration_Info_UClass_UDlgObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgObject.OuterSingleton, Z_Construct_UClass_UDlgObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgObject.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgObject>()
	{
		return UDlgObject::StaticClass();
	}
	UDlgObject::UDlgObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgObject);
	UDlgObject::~UDlgObject() {}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgObject, UDlgObject::StaticClass, TEXT("UDlgObject"), &Z_Registration_Info_UClass_UDlgObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgObject), 2094660014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgObject_h_1126697474(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
