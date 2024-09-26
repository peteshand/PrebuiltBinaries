// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrebuiltBinaries/Public/BinaryShareObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinaryShareObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PREBUILTBINARIES_API UClass* Z_Construct_UClass_UBinaryShareObject();
	PREBUILTBINARIES_API UClass* Z_Construct_UClass_UBinaryShareObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PrebuiltBinaries();
// End Cross Module References
	DEFINE_FUNCTION(UBinaryShareObject::execGetTestValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTestValue();
		P_NATIVE_END;
	}
	void UBinaryShareObject::StaticRegisterNativesUBinaryShareObject()
	{
		UClass* Class = UBinaryShareObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTestValue", &UBinaryShareObject::execGetTestValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics
	{
		struct BinaryShareObject_eventGetTestValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinaryShareObject_eventGetTestValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "BinaryShareObject" },
		{ "ModuleRelativePath", "Public/BinaryShareObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinaryShareObject, nullptr, "GetTestValue", nullptr, nullptr, Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::BinaryShareObject_eventGetTestValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::BinaryShareObject_eventGetTestValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBinaryShareObject_GetTestValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinaryShareObject_GetTestValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinaryShareObject);
	UClass* Z_Construct_UClass_UBinaryShareObject_NoRegister()
	{
		return UBinaryShareObject::StaticClass();
	}
	struct Z_Construct_UClass_UBinaryShareObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Test;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBinaryShareObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PrebuiltBinaries,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinaryShareObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBinaryShareObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinaryShareObject_GetTestValue, "GetTestValue" }, // 228290571
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinaryShareObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinaryShareObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BinaryShareObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BinaryShareObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinaryShareObject_Statics::NewProp_Test_MetaData[] = {
		{ "Category", "BinaryShareObject" },
		{ "ModuleRelativePath", "Public/BinaryShareObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBinaryShareObject_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinaryShareObject, Test), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinaryShareObject_Statics::NewProp_Test_MetaData), Z_Construct_UClass_UBinaryShareObject_Statics::NewProp_Test_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinaryShareObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinaryShareObject_Statics::NewProp_Test,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBinaryShareObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinaryShareObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinaryShareObject_Statics::ClassParams = {
		&UBinaryShareObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBinaryShareObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBinaryShareObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinaryShareObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinaryShareObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinaryShareObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBinaryShareObject()
	{
		if (!Z_Registration_Info_UClass_UBinaryShareObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinaryShareObject.OuterSingleton, Z_Construct_UClass_UBinaryShareObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBinaryShareObject.OuterSingleton;
	}
	template<> PREBUILTBINARIES_API UClass* StaticClass<UBinaryShareObject>()
	{
		return UBinaryShareObject::StaticClass();
	}
	UBinaryShareObject::UBinaryShareObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBinaryShareObject);
	UBinaryShareObject::~UBinaryShareObject() {}
	struct Z_CompiledInDeferFile_FID_i_p4_0000_PrebuiltBinaries_BinaryTest_Plugins_PrebuiltBinaries_Source_PrebuiltBinaries_Public_BinaryShareObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_i_p4_0000_PrebuiltBinaries_BinaryTest_Plugins_PrebuiltBinaries_Source_PrebuiltBinaries_Public_BinaryShareObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBinaryShareObject, UBinaryShareObject::StaticClass, TEXT("UBinaryShareObject"), &Z_Registration_Info_UClass_UBinaryShareObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinaryShareObject), 3826862648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_i_p4_0000_PrebuiltBinaries_BinaryTest_Plugins_PrebuiltBinaries_Source_PrebuiltBinaries_Public_BinaryShareObject_h_2984347656(TEXT("/Script/PrebuiltBinaries"),
		Z_CompiledInDeferFile_FID_i_p4_0000_PrebuiltBinaries_BinaryTest_Plugins_PrebuiltBinaries_Source_PrebuiltBinaries_Public_BinaryShareObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_i_p4_0000_PrebuiltBinaries_BinaryTest_Plugins_PrebuiltBinaries_Source_PrebuiltBinaries_Public_BinaryShareObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
