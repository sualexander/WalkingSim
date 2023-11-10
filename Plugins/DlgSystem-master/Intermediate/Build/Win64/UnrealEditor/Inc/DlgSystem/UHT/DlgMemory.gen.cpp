// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgMemory() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgMemory();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSavedData();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgNodeSavedData;
class UScriptStruct* FDlgNodeSavedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgNodeSavedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgNodeSavedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSavedData, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgNodeSavedData"));
	}
	return Z_Registration_Info_UScriptStruct_DlgNodeSavedData.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgNodeSavedData>()
{
	return FDlgNodeSavedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GUIDList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GUIDList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GUIDList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct to store any data a node might want to read/write\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Struct to store any data a node might want to read/write" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSavedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_Inner = { "GUIDList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_MetaData[] = {
		{ "Comment", "// used by random selector node to avoid repetition\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "used by random selector node to avoid repetition" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList = { "GUIDList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgNodeSavedData, GUIDList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgNodeSavedData",
		sizeof(FDlgNodeSavedData),
		alignof(FDlgNodeSavedData),
		Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSavedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgNodeSavedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgNodeSavedData.InnerSingleton, Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgNodeSavedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgHistory;
class UScriptStruct* FDlgHistory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgHistory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgHistory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgHistory, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgHistory"));
	}
	return Z_Registration_Info_UScriptStruct_DlgHistory.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgHistory>()
{
	return FDlgHistory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgHistory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_VisitedNodeIndices_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisitedNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VisitedNodeIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisitedNodeGUIDs_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisitedNodeGUIDs_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VisitedNodeGUIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DlgMemory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgHistory>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_ElementProp = { "VisitedNodeIndices", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_MetaData[] = {
		{ "Category", "Dialogue|History" },
		{ "Comment", "// Sed of already visited Node indices\n// NOTE: if you serialize this but then later change the dialogue node positions this will have the wrong indices\n// NOTE: You should use VisitedNodeGUIDs\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Sed of already visited Node indices\nNOTE: if you serialize this but then later change the dialogue node positions this will have the wrong indices\nNOTE: You should use VisitedNodeGUIDs" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices = { "VisitedNodeIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgHistory, VisitedNodeIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_ElementProp = { "VisitedNodeGUIDs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_MetaData[] = {
		{ "Category", "Dialogue|History" },
		{ "Comment", "// Set of already visited node GUIDs\n// This was added to fix Issue 30 (https://gitlab.com/NotYetGames/DlgSystem/-/issues/30)\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Set of already visited node GUIDs\nThis was added to fix Issue 30 (https:gitlab.com/NotYetGames/DlgSystem/-/issues/30)" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs = { "VisitedNodeGUIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgHistory, VisitedNodeGUIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_ValueProp = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgNodeSavedData, METADATA_PARAMS(nullptr, 0) }; // 1881839409
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_Key_KeyProp = { "NodeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_MetaData[] = {
		{ "Comment", "// Key: Dialogue node identifier GUID\n// Value: data used by the node\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Key: Dialogue node identifier GUID\nValue: data used by the node" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgHistory, NodeData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_MetaData)) }; // 1881839409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgHistory",
		sizeof(FDlgHistory),
		alignof(FDlgHistory),
		Z_Construct_UScriptStruct_FDlgHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgHistory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgHistory.InnerSingleton, Z_Construct_UScriptStruct_FDlgHistory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgHistory.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgMemory;
class UScriptStruct* FDlgMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgMemory, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgMemory"));
	}
	return Z_Registration_Info_UScriptStruct_DlgMemory.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgMemory>()
{
	return FDlgMemory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgMemory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HistoryMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgMemory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Singleton to store Dialogue history\n// TODO: investigate if this is multiplayer friendly, it does not seem so as there exists only a single global dialogue memory\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Singleton to store Dialogue history\nTODO: investigate if this is multiplayer friendly, it does not seem so as there exists only a single global dialogue memory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgMemory>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_ValueProp = { "HistoryMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(nullptr, 0) }; // 165595085
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_Key_KeyProp = { "HistoryMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_MetaData[] = {
		{ "Comment", "// Key: Dialogue unique identifier GUID\n// Value: set of already visited nodes\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Key: Dialogue unique identifier GUID\nValue: set of already visited nodes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap = { "HistoryMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgMemory, HistoryMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_MetaData)) }; // 165595085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgMemory",
		sizeof(FDlgMemory),
		alignof(FDlgMemory),
		Z_Construct_UScriptStruct_FDlgMemory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgMemory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgMemory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgMemory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgMemory()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgMemory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgMemory.InnerSingleton, Z_Construct_UScriptStruct_FDlgMemory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgMemory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgMemory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgMemory_h_Statics::ScriptStructInfo[] = {
		{ FDlgNodeSavedData::StaticStruct, Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewStructOps, TEXT("DlgNodeSavedData"), &Z_Registration_Info_UScriptStruct_DlgNodeSavedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeSavedData), 1881839409U) },
		{ FDlgHistory::StaticStruct, Z_Construct_UScriptStruct_FDlgHistory_Statics::NewStructOps, TEXT("DlgHistory"), &Z_Registration_Info_UScriptStruct_DlgHistory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgHistory), 165595085U) },
		{ FDlgMemory::StaticStruct, Z_Construct_UScriptStruct_FDlgMemory_Statics::NewStructOps, TEXT("DlgMemory"), &Z_Registration_Info_UScriptStruct_DlgMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgMemory), 60780415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgMemory_h_282661717(TEXT("/Script/DlgSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgMemory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_DlgMemory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
