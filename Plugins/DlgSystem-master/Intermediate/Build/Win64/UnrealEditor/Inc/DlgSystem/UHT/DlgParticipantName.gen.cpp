// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgParticipantName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgParticipantName() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantName();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgParticipantName;
class UScriptStruct* FDlgParticipantName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgParticipantName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgParticipantName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantName, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgParticipantName"));
	}
	return Z_Registration_Info_UScriptStruct_DlgParticipantName.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgParticipantName>()
{
	return FDlgParticipantName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgParticipantName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Helper struct to provide a way to reference \"Participants\" in custom events and conditions\n// Custom UI picker is supported to set it, and the DlgContext has a helper function to get the participant from the name\n" },
		{ "ModuleRelativePath", "DlgParticipantName.h" },
		{ "ToolTip", "Helper struct to provide a way to reference \"Participants\" in custom events and conditions\nCustom UI picker is supported to set it, and the DlgContext has a helper function to get the participant from the name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgParticipantName.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgParticipantName, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgParticipantName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgParticipantName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgParticipantName",
		sizeof(FDlgParticipantName),
		alignof(FDlgParticipantName),
		Z_Construct_UScriptStruct_FDlgParticipantName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantName()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgParticipantName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgParticipantName.InnerSingleton, Z_Construct_UScriptStruct_FDlgParticipantName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgParticipantName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgParticipantName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgParticipantName_h_Statics::ScriptStructInfo[] = {
		{ FDlgParticipantName::StaticStruct, Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewStructOps, TEXT("DlgParticipantName"), &Z_Registration_Info_UScriptStruct_DlgParticipantName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgParticipantName), 1851908335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgParticipantName_h_422627376(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgParticipantName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgParticipantName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
