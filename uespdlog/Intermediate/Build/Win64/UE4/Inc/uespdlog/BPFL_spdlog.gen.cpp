// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "uespdlog/Public/Util/BPFL_spdlog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFL_spdlog() {}
// Cross Module References
	UESPDLOG_API UEnum* Z_Construct_UEnum_uespdlog_EUESpdLogLogLevel();
	UPackage* Z_Construct_UPackage__Script_uespdlog();
	UESPDLOG_API UClass* Z_Construct_UClass_UBPFL_spdlog_NoRegister();
	UESPDLOG_API UClass* Z_Construct_UClass_UBPFL_spdlog();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UESPDLOG_API UFunction* Z_Construct_UFunction_UBPFL_spdlog_spdLog();
// End Cross Module References
	static UEnum* EUESpdLogLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_uespdlog_EUESpdLogLogLevel, Z_Construct_UPackage__Script_uespdlog(), TEXT("EUESpdLogLogLevel"));
		}
		return Singleton;
	}
	template<> UESPDLOG_API UEnum* StaticEnum<EUESpdLogLogLevel>()
	{
		return EUESpdLogLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUESpdLogLogLevel(EUESpdLogLogLevel_StaticEnum, TEXT("/Script/uespdlog"), TEXT("EUESpdLogLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_uespdlog_EUESpdLogLogLevel_Hash() { return 1542392426U; }
	UEnum* Z_Construct_UEnum_uespdlog_EUESpdLogLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_uespdlog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUESpdLogLogLevel"), 0, Get_Z_Construct_UEnum_uespdlog_EUESpdLogLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUESpdLogLogLevel::Info", (int64)EUESpdLogLogLevel::Info },
				{ "EUESpdLogLogLevel::Error", (int64)EUESpdLogLogLevel::Error },
				{ "EUESpdLogLogLevel::Critical", (int64)EUESpdLogLogLevel::Critical },
				{ "EUESpdLogLogLevel::Debug", (int64)EUESpdLogLogLevel::Debug },
				{ "EUESpdLogLogLevel::Warn", (int64)EUESpdLogLogLevel::Warn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Critical.DisplayName", "Critical" },
				{ "Debug.DisplayName", "Debug" },
				{ "Error.DisplayName", "Error" },
				{ "Info.DisplayName", "Info" },
				{ "ModuleRelativePath", "Public/Util/BPFL_spdlog.h" },
				{ "Warn.DisplayName", "Warn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_uespdlog,
				nullptr,
				"EUESpdLogLogLevel",
				"EUESpdLogLogLevel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBPFL_spdlog::StaticRegisterNativesUBPFL_spdlog()
	{
		UClass* Class = UBPFL_spdlog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "spdLog", &UBPFL_spdlog::execspdLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics
	{
		struct BPFL_spdlog_eventspdLog_Parms
		{
			EUESpdLogLogLevel MessageSeverity;
			FString msg;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MessageSeverity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageSeverity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_spdlog_eventspdLog_Parms, msg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::NewProp_MessageSeverity = { "MessageSeverity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_spdlog_eventspdLog_Parms, MessageSeverity), Z_Construct_UEnum_uespdlog_EUESpdLogLogLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::NewProp_MessageSeverity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::NewProp_msg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::NewProp_MessageSeverity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::NewProp_MessageSeverity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Util/BPFL_spdlog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL_spdlog, nullptr, "spdLog", sizeof(BPFL_spdlog_eventspdLog_Parms), Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_spdlog_spdLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFL_spdlog_spdLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPFL_spdlog_NoRegister()
	{
		return UBPFL_spdlog::StaticClass();
	}
	struct Z_Construct_UClass_UBPFL_spdlog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFL_spdlog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_uespdlog,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFL_spdlog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFL_spdlog_spdLog, "spdLog" }, // 816375712
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFL_spdlog_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/BPFL_spdlog.h" },
		{ "ModuleRelativePath", "Public/Util/BPFL_spdlog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFL_spdlog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFL_spdlog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPFL_spdlog_Statics::ClassParams = {
		&UBPFL_spdlog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPFL_spdlog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBPFL_spdlog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFL_spdlog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPFL_spdlog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPFL_spdlog, 2319493981);
	template<> UESPDLOG_API UClass* StaticClass<UBPFL_spdlog>()
	{
		return UBPFL_spdlog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPFL_spdlog(Z_Construct_UClass_UBPFL_spdlog, &UBPFL_spdlog::StaticClass, TEXT("/Script/uespdlog"), TEXT("UBPFL_spdlog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFL_spdlog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
