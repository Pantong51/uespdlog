// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/AllowWindowsPlatformTypes.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_sinks.h"
#include <memory>
#include "spdlog/logger.h"

#include "Windows/HideWindowsPlatformTypes.h"
#include "Windows/HideWindowsPlatformAtomics.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSpdLog, All, All);

class FuespdlogModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


	/**
	* By:           Daniel "Pan" Lott
	* Method:       CreateLogger
	* FullName:     FuespdlogModule::CreateLogger
	* Access:       public static 
	* @return       TSharedPtr<spdlog::logger, ESPMode::ThreadSafe>
	* How it works: 
	*/
	static TSharedPtr<spdlog::logger, ESPMode::ThreadSafe> CreateLogger();
	/**
	* By:           Daniel "Pan" Lott
	* Method:       Getspdlog
	* FullName:     FuespdlogModule::Getspdlog
	* Access:       public 
	* @return       spdlog::logger*
	* How it works: 
	* Returns the spdlog for other classes to directly call if needed
	*/
	static TSharedPtr<spdlog::logger, ESPMode::ThreadSafe> GetUnrealSpeedLog();

	/**
	* By:           Daniel "Pan" Lott
	* Method:       ConvertFStringToSTDString
	* FullName:     FuespdlogModule::ConvertFStringToSTDString
	* Access:       public static 
	* @Param        const FString & FStringToConvert
	* @return       std::string
	* How it works: 
	* Just a handy way of converting Fstring to std::string
	* wraps TCHAR_TO_UTF8
	*/
	static std::string ConvertFStringToSTDString(const FString& FStringToConvert);

private:
	static TSharedPtr<spdlog::logger, ESPMode::ThreadSafe> UnrealSpeedLog;
};