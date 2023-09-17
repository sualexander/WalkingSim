// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/DlgThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgThumbnailRenderer() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgThumbnailRenderer();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgThumbnailRenderer::StaticRegisterNativesUDlgThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgThumbnailRenderer);
	UClass* Z_Construct_UClass_UDlgThumbnailRenderer_NoRegister()
	{
		return UDlgThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDlgThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Useful if you want to have fancy thumbnail previews.\n" },
		{ "IncludePath", "DlgThumbnailRenderer.h" },
		{ "ModuleRelativePath", "DlgThumbnailRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Useful if you want to have fancy thumbnail previews." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgThumbnailRenderer_Statics::ClassParams = {
		&UDlgThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UDlgThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UDlgThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgThumbnailRenderer.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgThumbnailRenderer>()
	{
		return UDlgThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgThumbnailRenderer);
	UDlgThumbnailRenderer::~UDlgThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_DlgThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_DlgThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgThumbnailRenderer, UDlgThumbnailRenderer::StaticClass, TEXT("UDlgThumbnailRenderer"), &Z_Registration_Info_UClass_UDlgThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgThumbnailRenderer), 998551943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_DlgThumbnailRenderer_h_2550462700(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_DlgThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_DlgThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
