// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Commandlets/DlgHumanReadableTextCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgHumanReadableTextCommandlet() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet_NoRegister();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable;
class UScriptStruct* FDlgNodeContext_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgNodeContext_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgNodeContext_FormatHumanReadable>()
{
	return FDlgNodeContext_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentNodeIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildNodeIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeContext_FormatHumanReadable>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_Inner = { "ParentNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices = { "ParentNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeContext_FormatHumanReadable, ParentNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_Inner = { "ChildNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices = { "ChildNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeContext_FormatHumanReadable, ChildNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgNodeContext_FormatHumanReadable",
		sizeof(FDlgNodeContext_FormatHumanReadable),
		alignof(FDlgNodeContext_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable;
class UScriptStruct* FDlgEdgeOrphan_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgEdgeOrphan_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgEdgeOrphan_FormatHumanReadable>()
{
	return FDlgEdgeOrphan_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the FDlgEdge that also tells us from what node to what node\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgEdge that also tells us from what node to what node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdgeOrphan_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex = { "SourceNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, SourceNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, TargetNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgEdgeOrphan_FormatHumanReadable",
		sizeof(FDlgEdgeOrphan_FormatHumanReadable),
		alignof(FDlgEdgeOrphan_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable;
class UScriptStruct* FDlgEdge_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgEdge_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgEdge_FormatHumanReadable>()
{
	return FDlgEdge_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the FDlgEdge that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgEdge that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdge_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge_FormatHumanReadable, TargetNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgEdge_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgEdge_FormatHumanReadable",
		sizeof(FDlgEdge_FormatHumanReadable),
		alignof(FDlgEdge_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable;
class UScriptStruct* FDlgSpeechSequenceEntry_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgSpeechSequenceEntry_FormatHumanReadable>()
{
	return FDlgSpeechSequenceEntry_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EdgeText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the FDlgSpeechSequenceEntry that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgSpeechSequenceEntry that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgSpeechSequenceEntry_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker_MetaData[] = {
		{ "Comment", "// ParticipantName\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "ParticipantName" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText = { "EdgeText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, EdgeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgSpeechSequenceEntry_FormatHumanReadable",
		sizeof(FDlgSpeechSequenceEntry_FormatHumanReadable),
		alignof(FDlgSpeechSequenceEntry_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable;
class UScriptStruct* FDlgNodeSpeechSequence_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgNodeSpeechSequence_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgNodeSpeechSequence_FormatHumanReadable>()
{
	return FDlgNodeSpeechSequence_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the UDlgNode_SpeechSequence that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgNode_SpeechSequence that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSpeechSequence_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, NodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) }; // 1451431493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_MetaData)) }; // 1451431493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) }; // 2027867761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_MetaData)) }; // 2027867761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgNodeSpeechSequence_FormatHumanReadable",
		sizeof(FDlgNodeSpeechSequence_FormatHumanReadable),
		alignof(FDlgNodeSpeechSequence_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable;
class UScriptStruct* FDlgNodeSpeech_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgNodeSpeech_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgNodeSpeech_FormatHumanReadable>()
{
	return FDlgNodeSpeech_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the UDlgNode_Speech that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgNode_Speech that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSpeech_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "// Metadata, NodeIndex\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata, NodeIndex" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, NodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) }; // 2027867761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_MetaData)) }; // 2027867761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgNodeSpeech_FormatHumanReadable",
		sizeof(FDlgNodeSpeech_FormatHumanReadable),
		alignof(FDlgNodeSpeech_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable;
class UScriptStruct* FDlgDialogue_FormatHumanReadable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgDialogue_FormatHumanReadable"));
	}
	return Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable.OuterSingleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgDialogue_FormatHumanReadable>()
{
	return FDlgDialogue_FormatHumanReadable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueGUID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechSequenceNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechSequenceNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechSequenceNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the UDlgDialogue that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgDialogue that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgDialogue_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName = { "DialogueName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, DialogueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID = { "DialogueGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, DialogueGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_Inner = { "SpeechNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) }; // 4196132804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes = { "SpeechNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, SpeechNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_MetaData)) }; // 4196132804
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_Inner = { "SpeechSequenceNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) }; // 2243109260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes = { "SpeechSequenceNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, SpeechSequenceNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_MetaData)) }; // 2243109260
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgDialogue_FormatHumanReadable",
		sizeof(FDlgDialogue_FormatHumanReadable),
		alignof(FDlgDialogue_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable.InnerSingleton, Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable.InnerSingleton;
	}
	void UDlgHumanReadableTextCommandlet::StaticRegisterNativesUDlgHumanReadableTextCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgHumanReadableTextCommandlet);
	UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet_NoRegister()
	{
		return UDlgHumanReadableTextCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgHumanReadableTextCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::ClassParams = {
		&UDlgHumanReadableTextCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.OuterSingleton, Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.OuterSingleton;
	}
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgHumanReadableTextCommandlet>()
	{
		return UDlgHumanReadableTextCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgHumanReadableTextCommandlet);
	UDlgHumanReadableTextCommandlet::~UDlgHumanReadableTextCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics::ScriptStructInfo[] = {
		{ FDlgNodeContext_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgNodeContext_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgNodeContext_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeContext_FormatHumanReadable), 1005486719U) },
		{ FDlgEdgeOrphan_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgEdgeOrphan_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgEdgeOrphan_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdgeOrphan_FormatHumanReadable), 3713995452U) },
		{ FDlgEdge_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgEdge_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgEdge_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdge_FormatHumanReadable), 2027867761U) },
		{ FDlgSpeechSequenceEntry_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgSpeechSequenceEntry_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgSpeechSequenceEntry_FormatHumanReadable), 1451431493U) },
		{ FDlgNodeSpeechSequence_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgNodeSpeechSequence_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgNodeSpeechSequence_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeSpeechSequence_FormatHumanReadable), 2243109260U) },
		{ FDlgNodeSpeech_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgNodeSpeech_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgNodeSpeech_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeSpeech_FormatHumanReadable), 4196132804U) },
		{ FDlgDialogue_FormatHumanReadable::StaticStruct, Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgDialogue_FormatHumanReadable"), &Z_Registration_Info_UScriptStruct_DlgDialogue_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgDialogue_FormatHumanReadable), 1560665256U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgHumanReadableTextCommandlet, UDlgHumanReadableTextCommandlet::StaticClass, TEXT("UDlgHumanReadableTextCommandlet"), &Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgHumanReadableTextCommandlet), 3850587216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_3546114960(TEXT("/Script/DlgSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stumpy_Desktop_DialogueExperiments_DialogueExperiment_Plugins_DlgSystem_master_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
