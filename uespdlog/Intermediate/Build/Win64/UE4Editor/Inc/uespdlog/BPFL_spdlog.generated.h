// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUESpdLogLogLevel : uint8;
#ifdef UESPDLOG_BPFL_spdlog_generated_h
#error "BPFL_spdlog.generated.h already included, missing '#pragma once' in BPFL_spdlog.h"
#endif
#define UESPDLOG_BPFL_spdlog_generated_h

#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execspdLog) \
	{ \
		P_GET_ENUM(EUESpdLogLogLevel,Z_Param_MessageSeverity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPFL_spdlog::spdLog(EUESpdLogLogLevel(Z_Param_MessageSeverity),Z_Param_msg); \
		P_NATIVE_END; \
	}


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execspdLog) \
	{ \
		P_GET_ENUM(EUESpdLogLogLevel,Z_Param_MessageSeverity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPFL_spdlog::spdLog(EUESpdLogLogLevel(Z_Param_MessageSeverity),Z_Param_msg); \
		P_NATIVE_END; \
	}


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPFL_spdlog(); \
	friend struct Z_Construct_UClass_UBPFL_spdlog_Statics; \
public: \
	DECLARE_CLASS(UBPFL_spdlog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/uespdlog"), NO_API) \
	DECLARE_SERIALIZER(UBPFL_spdlog)


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBPFL_spdlog(); \
	friend struct Z_Construct_UClass_UBPFL_spdlog_Statics; \
public: \
	DECLARE_CLASS(UBPFL_spdlog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/uespdlog"), NO_API) \
	DECLARE_SERIALIZER(UBPFL_spdlog)


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL_spdlog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL_spdlog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL_spdlog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL_spdlog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFL_spdlog(UBPFL_spdlog&&); \
	NO_API UBPFL_spdlog(const UBPFL_spdlog&); \
public:


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL_spdlog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFL_spdlog(UBPFL_spdlog&&); \
	NO_API UBPFL_spdlog(const UBPFL_spdlog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL_spdlog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL_spdlog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL_spdlog)


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_PRIVATE_PROPERTY_OFFSET
#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_19_PROLOG
#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_PRIVATE_PROPERTY_OFFSET \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_RPC_WRAPPERS \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_INCLASS \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_PRIVATE_PROPERTY_OFFSET \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_INCLASS_NO_PURE_DECLS \
	HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UESPDLOG_API UClass* StaticClass<class UBPFL_spdlog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeSource_Heresy_uespdlog_HostProject_Plugins_uespdlog_Source_uespdlog_Public_Util_BPFL_spdlog_h


#define FOREACH_ENUM_EUESPDLOGLOGLEVEL(op) \
	op(EUESpdLogLogLevel::Info) \
	op(EUESpdLogLogLevel::Error) \
	op(EUESpdLogLogLevel::Critical) \
	op(EUESpdLogLogLevel::Debug) \
	op(EUESpdLogLogLevel::Warn) 

enum class EUESpdLogLogLevel : uint8;
template<> UESPDLOG_API UEnum* StaticEnum<EUESpdLogLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
