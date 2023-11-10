// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Tests/DlgIOTesterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgIOTesterTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTestEnum();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgIOTesterOptions();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayComplex();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayPrimitive();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapComplex();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapPrimitive();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetComplex();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetPrimitive();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructComplex();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructPrimitives();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgIOTesterOptions;
class UScriptStruct* FDlgIOTesterOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgIOTesterOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgIOTesterOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgIOTesterOptions, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgIOTesterOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DlgIOTesterOptions.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgIOTesterOptions>()
{
	return FDlgIOTesterOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsPureEnumContainer_MetaData[];
#endif
		static void NewProp_bSupportsPureEnumContainer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsPureEnumContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsNonPrimitiveInSet_MetaData[];
#endif
		static void NewProp_bSupportsNonPrimitiveInSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsNonPrimitiveInSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsColorPrimitives_MetaData[];
#endif
		static void NewProp_bSupportsColorPrimitives_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsColorPrimitives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDatePrimitive_MetaData[];
#endif
		static void NewProp_bSupportsDatePrimitive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDatePrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsUObjectValueInMap_MetaData[];
#endif
		static void NewProp_bSupportsUObjectValueInMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsUObjectValueInMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgIOTesterOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer_MetaData[] = {
		{ "Comment", "// can Have TArray<Enum>, TSet<Enum>\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "can Have TArray<Enum>, TSet<Enum>" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsPureEnumContainer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer = { "bSupportsPureEnumContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgIOTesterOptions), &Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet_MetaData[] = {
		{ "Comment", "// Can have TSet<FStructType>\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can have TSet<FStructType>" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsNonPrimitiveInSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet = { "bSupportsNonPrimitiveInSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgIOTesterOptions), &Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives_MetaData[] = {
		{ "Comment", "// Can we write FLinearColor and FColor\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can we write FLinearColor and FColor" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsColorPrimitives = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives = { "bSupportsColorPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgIOTesterOptions), &Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive_MetaData[] = {
		{ "Comment", "// Can we write FDateTime\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can we write FDateTime" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsDatePrimitive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive = { "bSupportsDatePrimitive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgIOTesterOptions), &Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap_MetaData[] = {
		{ "Comment", "// Can we Have TMap<Key, UObject*> ?\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can we Have TMap<Key, UObject*> ?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsUObjectValueInMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap = { "bSupportsUObjectValueInMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgIOTesterOptions), &Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsPureEnumContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsNonPrimitiveInSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsColorPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsDatePrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewProp_bSupportsUObjectValueInMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgIOTesterOptions",
		sizeof(FDlgIOTesterOptions),
		alignof(FDlgIOTesterOptions),
		Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgIOTesterOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgIOTesterOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgIOTesterOptions.InnerSingleton, Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgIOTesterOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDlgTestEnum;
	static UEnum* EDlgTestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgTestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDlgTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTestEnum, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgTestEnum"));
		}
		return Z_Registration_Info_UEnum_EDlgTestEnum.OuterSingleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTestEnum>()
	{
		return EDlgTestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::Enumerators[] = {
		{ "EDlgTestEnum::First", (int64)EDlgTestEnum::First },
		{ "EDlgTestEnum::Second", (int64)EDlgTestEnum::Second },
		{ "EDlgTestEnum::Third", (int64)EDlgTestEnum::Third },
		{ "EDlgTestEnum::NumOf", (int64)EDlgTestEnum::NumOf },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::Enum_MetaDataParams[] = {
		{ "First.Name", "EDlgTestEnum::First" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "NumOf.Name", "EDlgTestEnum::NumOf" },
		{ "Second.Name", "EDlgTestEnum::Second" },
		{ "Third.Name", "EDlgTestEnum::Third" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		"EDlgTestEnum",
		"EDlgTestEnum",
		Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgTestEnum()
	{
		if (!Z_Registration_Info_UEnum_EDlgTestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDlgTestEnum.InnerSingleton, Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDlgTestEnum.InnerSingleton;
	}
	void UDlgTestObjectPrimitivesBase::StaticRegisterNativesUDlgTestObjectPrimitivesBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTestObjectPrimitivesBase);
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister()
	{
		return UDlgTestObjectPrimitivesBase::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTestObjectPrimitivesBase, Integer), METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_Integer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTestObjectPrimitivesBase, String), METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::NewProp_String,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitivesBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::ClassParams = {
		&UDlgTestObjectPrimitivesBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase()
	{
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.OuterSingleton, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTestObjectPrimitivesBase>()
	{
		return UDlgTestObjectPrimitivesBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTestObjectPrimitivesBase);
	UDlgTestObjectPrimitivesBase::~UDlgTestObjectPrimitivesBase() {}
	void UDlgTestObjectPrimitives_DefaultToInstanced::StaticRegisterNativesUDlgTestObjectPrimitives_DefaultToInstanced()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTestObjectPrimitives_DefaultToInstanced);
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_NoRegister()
	{
		return UDlgTestObjectPrimitives_DefaultToInstanced::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedChild_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstancedChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::NewProp_InstancedChild_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::NewProp_InstancedChild = { "InstancedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTestObjectPrimitives_DefaultToInstanced, InstancedChild), METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::NewProp_InstancedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::NewProp_InstancedChild_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::NewProp_InstancedChild,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_DefaultToInstanced>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::ClassParams = {
		&UDlgTestObjectPrimitives_DefaultToInstanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced()
	{
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.OuterSingleton, Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTestObjectPrimitives_DefaultToInstanced>()
	{
		return UDlgTestObjectPrimitives_DefaultToInstanced::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTestObjectPrimitives_DefaultToInstanced);
	UDlgTestObjectPrimitives_DefaultToInstanced::~UDlgTestObjectPrimitives_DefaultToInstanced() {}
	void UDlgTestObjectPrimitives_ChildA::StaticRegisterNativesUDlgTestObjectPrimitives_ChildA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTestObjectPrimitives_ChildA);
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_NoRegister()
	{
		return UDlgTestObjectPrimitives_ChildA::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerChildA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerChildA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::NewProp_IntegerChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::NewProp_IntegerChildA = { "IntegerChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTestObjectPrimitives_ChildA, IntegerChildA), METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::NewProp_IntegerChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::NewProp_IntegerChildA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::NewProp_IntegerChildA,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_ChildA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::ClassParams = {
		&UDlgTestObjectPrimitives_ChildA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA()
	{
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.OuterSingleton, Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTestObjectPrimitives_ChildA>()
	{
		return UDlgTestObjectPrimitives_ChildA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTestObjectPrimitives_ChildA);
	UDlgTestObjectPrimitives_ChildA::~UDlgTestObjectPrimitives_ChildA() {}
	void UDlgTestObjectPrimitives_ChildB::StaticRegisterNativesUDlgTestObjectPrimitives_ChildB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTestObjectPrimitives_ChildB);
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_NoRegister()
	{
		return UDlgTestObjectPrimitives_ChildB::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringChildB_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringChildB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::NewProp_StringChildB_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::NewProp_StringChildB = { "StringChildB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTestObjectPrimitives_ChildB, StringChildB), METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::NewProp_StringChildB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::NewProp_StringChildB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::NewProp_StringChildB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_ChildB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::ClassParams = {
		&UDlgTestObjectPrimitives_ChildB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB()
	{
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.OuterSingleton, Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTestObjectPrimitives_ChildB>()
	{
		return UDlgTestObjectPrimitives_ChildB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTestObjectPrimitives_ChildB);
	UDlgTestObjectPrimitives_ChildB::~UDlgTestObjectPrimitives_ChildB() {}
	void UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::StaticRegisterNativesUDlgTestObjectPrimitives_GrandChildA_Of_ChildA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDlgTestObjectPrimitives_GrandChildA_Of_ChildA);
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_NoRegister()
	{
		return UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerGrandChildA_Of_ChildA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerGrandChildA_Of_ChildA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::NewProp_IntegerGrandChildA_Of_ChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::NewProp_IntegerGrandChildA_Of_ChildA = { "IntegerGrandChildA_Of_ChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, IntegerGrandChildA_Of_ChildA), METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::NewProp_IntegerGrandChildA_Of_ChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::NewProp_IntegerGrandChildA_Of_ChildA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::NewProp_IntegerGrandChildA_Of_ChildA,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_GrandChildA_Of_ChildA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::ClassParams = {
		&UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA()
	{
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.OuterSingleton, Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.OuterSingleton;
	}
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTestObjectPrimitives_GrandChildA_Of_ChildA>()
	{
		return UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTestObjectPrimitives_GrandChildA_Of_ChildA);
	UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::~UDlgTestObjectPrimitives_GrandChildA_Of_ChildA() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives;
class UScriptStruct* FDlgTestStructPrimitives::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestStructPrimitives, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestStructPrimitives"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestStructPrimitives>()
{
	return FDlgTestStructPrimitives::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Integer64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolean_MetaData[];
#endif
		static void NewProp_bBoolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolean;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Enum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EmptyString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyObjectInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyObjectInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyObjectInitializedReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyObjectInitializedReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstTexture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstTexture2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture2DReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2DReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDefaultToInstanced_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectDefaultToInstanced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesChildA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesChildA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSwitch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectSwitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismChildA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismChildA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismChildB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismChildB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesGrandChildA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesGrandChildA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismChildGrandChildA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Struct of primitives\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Struct of primitives" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestStructPrimitives>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer32_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer32 = { "Integer32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Integer32), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer64_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer64 = { "Integer64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Integer64), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean_SetBit(void* Obj)
	{
		((FDlgTestStructPrimitives*)Obj)->bBoolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean = { "bBoolean", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDlgTestStructPrimitives), &Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Enum), Z_Construct_UEnum_DlgSystem_EDlgTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum_MetaData)) }; // 1003835994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyString_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyString = { "EmptyString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, EmptyString), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_LinearColor_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_LinearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_LinearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_DateTime_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_DateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_IntPoint_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_IntPoint = { "IntPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, IntPoint), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_IntPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_IntPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector3_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector3 = { "Vector3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Vector3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector2_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Vector2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector4_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Vector4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Matrix_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Matrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Matrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_GUID_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_GUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_GUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitialized = { "EmptyObjectInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, EmptyObjectInitialized), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitializedReference_MetaData[] = {
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitializedReference = { "EmptyObjectInitializedReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, EmptyObjectInitializedReference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitializedReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitializedReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ConstTexture2D_MetaData[] = {
		{ "Comment", "// Check if anything crashes\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Check if anything crashes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ConstTexture2D = { "ConstTexture2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ConstTexture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ConstTexture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ConstTexture2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Texture2DReference_MetaData[] = {
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Texture2DReference = { "Texture2DReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, Texture2DReference), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Texture2DReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Texture2DReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesBase_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesBase = { "ObjectPrimitivesBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesBase), Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectDefaultToInstanced_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectDefaultToInstanced = { "ObjectDefaultToInstanced", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectDefaultToInstanced), Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectDefaultToInstanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectDefaultToInstanced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesChildA = { "ObjectPrimitivesChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesChildA), Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesChildA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectSwitch_MetaData[] = {
		{ "Comment", "// Can be nullptr or not\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can be nullptr or not" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectSwitch = { "ObjectSwitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectSwitch), Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectSwitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildA_MetaData[] = {
		{ "Comment", "// Object is defined as base but actually assigned to Child A\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Object is defined as base but actually assigned to Child A" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildA = { "ObjectPrimitivesPolymorphismChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismChildA), Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildB_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildB = { "ObjectPrimitivesPolymorphismChildB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismChildB), Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesGrandChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesGrandChildA = { "ObjectPrimitivesGrandChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesGrandChildA), Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesGrandChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesGrandChildA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA = { "ObjectPrimitivesPolymorphismBaseGrandChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismBaseGrandChildA), Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA = { "ObjectPrimitivesPolymorphismChildGrandChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismChildGrandChildA), Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Integer64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_bBoolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_LinearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_IntPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Vector4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_GUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_EmptyObjectInitializedReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ConstTexture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_Texture2DReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectDefaultToInstanced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesChildA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectSwitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesGrandChildA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestStructPrimitives",
		sizeof(FDlgTestStructPrimitives),
		alignof(FDlgTestStructPrimitives),
		Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructPrimitives()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestStructComplex;
class UScriptStruct* FDlgTestStructComplex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestStructComplex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestStructComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestStructComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestStructComplex"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestStructComplex.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestStructComplex>()
{
	return FDlgTestStructComplex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructArrayPrimitives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayPrimitives;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayOfObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayOfObjectsAsReference_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfObjectsAsReference_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfObjectsAsReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Struct of Complex types\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Struct of Complex types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestStructComplex>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives_Inner = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(nullptr, 0) }; // 3260685578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructComplex, StructArrayPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives_MetaData)) }; // 3260685578
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects_Inner = { "ArrayOfObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects = { "ArrayOfObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructComplex, ArrayOfObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference_Inner = { "ArrayOfObjectsAsReference", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference_MetaData[] = {
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference = { "ArrayOfObjectsAsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestStructComplex, ArrayOfObjectsAsReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_StructArrayPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewProp_ArrayOfObjectsAsReference,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestStructComplex",
		sizeof(FDlgTestStructComplex),
		alignof(FDlgTestStructComplex),
		Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructComplex()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestStructComplex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestStructComplex.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestStructComplex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive;
class UScriptStruct* FDlgTestArrayPrimitive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestArrayPrimitive"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestArrayPrimitive>()
{
	return FDlgTestArrayPrimitive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmptyArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num1_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num1_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Num1_Array;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int64Array;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumArray_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumArray;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NameArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayConstantNulls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayConstantNulls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayConstantNulls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Arrays simple\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Arrays simple" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestArrayPrimitive>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray_Inner = { "EmptyArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray = { "EmptyArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, EmptyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array_Inner = { "Num1_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array = { "Num1_Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, Num1_Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, Int32Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array_Inner = { "Int64Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array = { "Int64Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, Int64Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_Inner = { "EnumArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_DlgSystem_EDlgTestEnum, METADATA_PARAMS(nullptr, 0) }; // 1003835994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray = { "EnumArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, EnumArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_MetaData)) }; // 1003835994
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls_Inner = { "ObjectArrayConstantNulls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls_MetaData[] = {
		{ "Comment", "// Filled with only nulls, check if the writers support it\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Filled with only nulls, check if the writers support it" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls = { "ObjectArrayConstantNulls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayPrimitive, ObjectArrayConstantNulls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EmptyArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Num1_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int32Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_Int64Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_BoolArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_EnumArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_NameArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewProp_ObjectArrayConstantNulls,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestArrayPrimitive",
		sizeof(FDlgTestArrayPrimitive),
		alignof(FDlgTestArrayPrimitive),
		Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayPrimitive()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestArrayComplex;
class UScriptStruct* FDlgTestArrayComplex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestArrayComplex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestArrayComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestArrayComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestArrayComplex"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestArrayComplex.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestArrayComplex>()
{
	return FDlgTestArrayComplex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructArrayPrimitives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayPrimitives;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructArrayOfArrayPrimitives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayOfArrayPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayOfArrayPrimitives;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayFrequentsNulls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayFrequentsNulls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayFrequentsNulls;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayPrimitivesBase_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayPrimitivesBase_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayPrimitivesBase;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayPrimitivesAll_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayPrimitivesAll_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayPrimitivesAll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Array complex\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Array complex" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestArrayComplex>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives_Inner = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(nullptr, 0) }; // 3260685578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayComplex, StructArrayPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives_MetaData)) }; // 3260685578
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives_Inner = { "StructArrayOfArrayPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, METADATA_PARAMS(nullptr, 0) }; // 3687528330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives = { "StructArrayOfArrayPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayComplex, StructArrayOfArrayPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives_MetaData)) }; // 3687528330
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls_Inner = { "ObjectArrayFrequentsNulls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls = { "ObjectArrayFrequentsNulls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayComplex, ObjectArrayFrequentsNulls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase_Inner = { "ObjectArrayPrimitivesBase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase = { "ObjectArrayPrimitivesBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayComplex, ObjectArrayPrimitivesBase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll_Inner = { "ObjectArrayPrimitivesAll", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll = { "ObjectArrayPrimitivesAll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestArrayComplex, ObjectArrayPrimitivesAll), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_StructArrayOfArrayPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayFrequentsNulls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewProp_ObjectArrayPrimitivesAll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestArrayComplex",
		sizeof(FDlgTestArrayComplex),
		alignof(FDlgTestArrayComplex),
		Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayComplex()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestArrayComplex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestArrayComplex.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestArrayComplex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive;
class UScriptStruct* FDlgTestSetPrimitive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestSetPrimitive, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestSetPrimitive"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestSetPrimitive>()
{
	return FDlgTestSetPrimitive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmptySet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptySet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_EmptySet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num1_Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num1_Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Num1_Set;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Int32Set;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Int64Set;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumSet_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_EnumSet;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_NameSet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StringSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Set primitive\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Set primitive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestSetPrimitive>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet_ElementProp = { "EmptySet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet = { "EmptySet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, EmptySet), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set_ElementProp = { "Num1_Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set = { "Num1_Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, Num1_Set), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set_ElementProp = { "Int32Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set = { "Int32Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, Int32Set), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set_ElementProp = { "Int64Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set = { "Int64Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, Int64Set), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_ElementProp = { "EnumSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_DlgSystem_EDlgTestEnum, METADATA_PARAMS(nullptr, 0) }; // 1003835994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet = { "EnumSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, EnumSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_MetaData)) }; // 1003835994
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet_ElementProp = { "NameSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet = { "NameSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, NameSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet_ElementProp = { "StringSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet = { "StringSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetPrimitive, StringSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EmptySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Num1_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int32Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_Int64Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_EnumSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_NameSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewProp_StringSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestSetPrimitive",
		sizeof(FDlgTestSetPrimitive),
		alignof(FDlgTestSetPrimitive),
		Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetPrimitive()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestSetComplex;
class UScriptStruct* FDlgTestSetComplex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestSetComplex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestSetComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestSetComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestSetComplex"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestSetComplex.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestSetComplex>()
{
	return FDlgTestSetComplex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructSetPrimitives_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructSetPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StructSetPrimitives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Set complex\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Set complex" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestSetComplex>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives_ElementProp = { "StructSetPrimitives", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(nullptr, 0) }; // 3260685578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FDlgTestStructPrimitives>::Value, "The structure 'FDlgTestStructPrimitives' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives = { "StructSetPrimitives", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestSetComplex, StructSetPrimitives), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives_MetaData)) }; // 3260685578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewProp_StructSetPrimitives,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestSetComplex",
		sizeof(FDlgTestSetComplex),
		alignof(FDlgTestSetComplex),
		Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetComplex()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestSetComplex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestSetComplex.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestSetComplex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive;
class UScriptStruct* FDlgTestMapPrimitive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestMapPrimitive, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestMapPrimitive"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestMapPrimitive>()
{
	return FDlgTestMapPrimitive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EmptyMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToInt32Map_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToInt32Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToInt32Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToInt32Map;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64ToInt64Map_ValueProp;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64ToInt64Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64ToInt64Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Int64ToInt64Map;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Int32ToStringMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToStringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToStringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToStringMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Int32ToNameMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToNameMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StringToInt32Map_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToInt32Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringToInt32Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringToInt32Map;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToStringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToStringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringToStringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringToStringMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NameToInt32Map_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToInt32Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToInt32Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToInt32Map;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToNameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToNameMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StringToFloatMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToFloatMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringToFloatMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringToFloatMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Int32ToFloatMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToFloatMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToFloatMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToFloatMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToColorMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToColorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToColorMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectFrequentsNullsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectFrequentsNullsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectFrequentsNullsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectFrequentsNullsMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectConstantNullMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectConstantNullMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectConstantNullMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectConstantNullMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesAllMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPrimitivesAllMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesAllMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectPrimitivesAllMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Map primitive\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Map primitive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestMapPrimitive>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_ValueProp = { "EmptyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_Key_KeyProp = { "EmptyMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap = { "EmptyMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, EmptyMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_ValueProp = { "Int32ToInt32Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_Key_KeyProp = { "Int32ToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map = { "Int32ToInt32Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToInt32Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_ValueProp = { "Int64ToInt64Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_Key_KeyProp = { "Int64ToInt64Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map = { "Int64ToInt64Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, Int64ToInt64Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_ValueProp = { "Int32ToStringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_Key_KeyProp = { "Int32ToStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap = { "Int32ToStringMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToStringMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_ValueProp = { "Int32ToNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_Key_KeyProp = { "Int32ToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap = { "Int32ToNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_ValueProp = { "StringToInt32Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_Key_KeyProp = { "StringToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map = { "StringToInt32Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, StringToInt32Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_ValueProp = { "StringToStringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_Key_KeyProp = { "StringToStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap = { "StringToStringMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, StringToStringMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_ValueProp = { "NameToInt32Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_Key_KeyProp = { "NameToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map = { "NameToInt32Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, NameToInt32Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_ValueProp = { "NameToNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_Key_KeyProp = { "NameToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap = { "NameToNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, NameToNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_ValueProp = { "StringToFloatMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_Key_KeyProp = { "StringToFloatMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap = { "StringToFloatMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, StringToFloatMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_ValueProp = { "Int32ToFloatMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_Key_KeyProp = { "Int32ToFloatMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap = { "Int32ToFloatMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToFloatMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_ValueProp = { "NameToColorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_Key_KeyProp = { "NameToColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap = { "NameToColorMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, NameToColorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_ValueProp = { "ObjectFrequentsNullsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_Key_KeyProp = { "ObjectFrequentsNullsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap = { "ObjectFrequentsNullsMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, ObjectFrequentsNullsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_ValueProp = { "ObjectConstantNullMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_Key_KeyProp = { "ObjectConstantNullMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_MetaData[] = {
		{ "Comment", "// Filled with only nulls, check if the writers support it\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Filled with only nulls, check if the writers support it" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap = { "ObjectConstantNullMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, ObjectConstantNullMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_ValueProp = { "ObjectPrimitivesAllMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDlgTestObjectPrimitivesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_Key_KeyProp = { "ObjectPrimitivesAllMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap = { "ObjectPrimitivesAllMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapPrimitive, ObjectPrimitivesAllMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_EmptyMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToInt32Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int64ToInt64Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToStringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToNameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToInt32Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToStringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToInt32Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToNameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_StringToFloatMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_Int32ToFloatMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_NameToColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectFrequentsNullsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectConstantNullMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewProp_ObjectPrimitivesAllMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestMapPrimitive",
		sizeof(FDlgTestMapPrimitive),
		alignof(FDlgTestMapPrimitive),
		Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapPrimitive()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DlgTestMapComplex;
class UScriptStruct* FDlgTestMapComplex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DlgTestMapComplex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DlgTestMapComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestMapComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTestMapComplex"));
	}
	return Z_Registration_Info_UScriptStruct_DlgTestMapComplex.OuterSingleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTestMapComplex>()
{
	return FDlgTestMapComplex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Int32ToStructPrimitiveMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToStructPrimitiveMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToStructPrimitiveMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToStructPrimitiveMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructPrimitiveMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructPrimitiveMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructPrimitiveMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructPrimitiveMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StructPrimitiveToIntMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructPrimitiveToIntMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructPrimitiveToIntMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StructPrimitiveToIntMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfMapPrimitives_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfMapPrimitives_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfMapPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfMapPrimitives;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfArrayPrimitives_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfArrayPrimitives_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfArrayPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfArrayPrimitives;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfSetPrimitives_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfSetPrimitives_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfSetPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfSetPrimitives;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfArrayComplex_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfArrayComplex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfArrayComplex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfArrayComplex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfSetComplex_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfSetComplex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfSetComplex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfSetComplex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Map complex\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Map complex" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestMapComplex>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_ValueProp = { "Int32ToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(nullptr, 0) }; // 3260685578
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_Key_KeyProp = { "Int32ToStructPrimitiveMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap = { "Int32ToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, Int32ToStructPrimitiveMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_MetaData)) }; // 3260685578
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_ValueProp = { "NameToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(nullptr, 0) }; // 3260685578
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_Key_KeyProp = { "NameToStructPrimitiveMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap = { "NameToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructPrimitiveMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_MetaData)) }; // 3260685578
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_ValueProp = { "StructPrimitiveToIntMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_Key_KeyProp = { "StructPrimitiveToIntMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(nullptr, 0) }; // 3260685578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap = { "StructPrimitiveToIntMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, StructPrimitiveToIntMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_MetaData)) }; // 3260685578
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_ValueProp = { "NameToStructOfMapPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestMapPrimitive, METADATA_PARAMS(nullptr, 0) }; // 4198542502
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_Key_KeyProp = { "NameToStructOfMapPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives = { "NameToStructOfMapPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfMapPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_MetaData)) }; // 4198542502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_ValueProp = { "NameToStructOfArrayPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, METADATA_PARAMS(nullptr, 0) }; // 3687528330
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_Key_KeyProp = { "NameToStructOfArrayPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives = { "NameToStructOfArrayPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfArrayPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_MetaData)) }; // 3687528330
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_ValueProp = { "NameToStructOfSetPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestSetPrimitive, METADATA_PARAMS(nullptr, 0) }; // 3248522152
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_Key_KeyProp = { "NameToStructOfSetPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives = { "NameToStructOfSetPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfSetPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_MetaData)) }; // 3248522152
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_ValueProp = { "NameToStructOfArrayComplex", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestArrayComplex, METADATA_PARAMS(nullptr, 0) }; // 3555612440
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_Key_KeyProp = { "NameToStructOfArrayComplex_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex = { "NameToStructOfArrayComplex", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfArrayComplex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_MetaData)) }; // 3555612440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_ValueProp = { "NameToStructOfSetComplex", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDlgTestSetComplex, METADATA_PARAMS(nullptr, 0) }; // 1591988330
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_Key_KeyProp = { "NameToStructOfSetComplex_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex = { "NameToStructOfSetComplex", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfSetComplex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_MetaData)) }; // 1591988330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_Int32ToStructPrimitiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructPrimitiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_StructPrimitiveToIntMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfMapPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetPrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfArrayComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewProp_NameToStructOfSetComplex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTestMapComplex",
		sizeof(FDlgTestMapComplex),
		alignof(FDlgTestMapComplex),
		Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapComplex()
	{
		if (!Z_Registration_Info_UScriptStruct_DlgTestMapComplex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DlgTestMapComplex.InnerSingleton, Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DlgTestMapComplex.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::EnumInfo[] = {
		{ EDlgTestEnum_StaticEnum, TEXT("EDlgTestEnum"), &Z_Registration_Info_UEnum_EDlgTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1003835994U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::ScriptStructInfo[] = {
		{ FDlgIOTesterOptions::StaticStruct, Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewStructOps, TEXT("DlgIOTesterOptions"), &Z_Registration_Info_UScriptStruct_DlgIOTesterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgIOTesterOptions), 19357947U) },
		{ FDlgTestStructPrimitives::StaticStruct, Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewStructOps, TEXT("DlgTestStructPrimitives"), &Z_Registration_Info_UScriptStruct_DlgTestStructPrimitives, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestStructPrimitives), 3260685578U) },
		{ FDlgTestStructComplex::StaticStruct, Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewStructOps, TEXT("DlgTestStructComplex"), &Z_Registration_Info_UScriptStruct_DlgTestStructComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestStructComplex), 3267250251U) },
		{ FDlgTestArrayPrimitive::StaticStruct, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewStructOps, TEXT("DlgTestArrayPrimitive"), &Z_Registration_Info_UScriptStruct_DlgTestArrayPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestArrayPrimitive), 3687528330U) },
		{ FDlgTestArrayComplex::StaticStruct, Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewStructOps, TEXT("DlgTestArrayComplex"), &Z_Registration_Info_UScriptStruct_DlgTestArrayComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestArrayComplex), 3555612440U) },
		{ FDlgTestSetPrimitive::StaticStruct, Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewStructOps, TEXT("DlgTestSetPrimitive"), &Z_Registration_Info_UScriptStruct_DlgTestSetPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestSetPrimitive), 3248522152U) },
		{ FDlgTestSetComplex::StaticStruct, Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewStructOps, TEXT("DlgTestSetComplex"), &Z_Registration_Info_UScriptStruct_DlgTestSetComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestSetComplex), 1591988330U) },
		{ FDlgTestMapPrimitive::StaticStruct, Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewStructOps, TEXT("DlgTestMapPrimitive"), &Z_Registration_Info_UScriptStruct_DlgTestMapPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestMapPrimitive), 4198542502U) },
		{ FDlgTestMapComplex::StaticStruct, Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewStructOps, TEXT("DlgTestMapComplex"), &Z_Registration_Info_UScriptStruct_DlgTestMapComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestMapComplex), 1621624300U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDlgTestObjectPrimitivesBase, UDlgTestObjectPrimitivesBase::StaticClass, TEXT("UDlgTestObjectPrimitivesBase"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitivesBase), 108216289U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced, UDlgTestObjectPrimitives_DefaultToInstanced::StaticClass, TEXT("UDlgTestObjectPrimitives_DefaultToInstanced"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_DefaultToInstanced), 2525374682U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA, UDlgTestObjectPrimitives_ChildA::StaticClass, TEXT("UDlgTestObjectPrimitives_ChildA"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_ChildA), 2331832742U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB, UDlgTestObjectPrimitives_ChildB::StaticClass, TEXT("UDlgTestObjectPrimitives_ChildB"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_ChildB), 3865577131U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::StaticClass, TEXT("UDlgTestObjectPrimitives_GrandChildA_Of_ChildA"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_GrandChildA_Of_ChildA), 2584788803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_1305785463(TEXT("/Script/DlgSystem"),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kebul_OneDrive_Documents_GitHub_WalkingSim_Plugins_DlgSystem_master_Source_DlgSystem_Tests_DlgIOTesterTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
