// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "uespdlog.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "Interfaces/IPluginManager.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/common.h"
#include "spdlog/sinks/rotating_file_sink.h"

#define LOCTEXT_NAMESPACE "FuespdlogModule"

DEFINE_LOG_CATEGORY(LogSpdLog);

void FuespdlogModule::StartupModule()
{
	//InitLog();
	spdlog::flush_every(std::chrono::seconds(5));
	UnrealSpeedLog.Get()->info("Created Logger");
}

void FuespdlogModule::ShutdownModule()
{
	spdlog::drop_all();
	UnrealSpeedLog.Reset();
	UnrealSpeedLog = nullptr;
}

TSharedPtr<spdlog::logger, ESPMode::ThreadSafe> FuespdlogModule::GetUnrealSpeedLog()
{
	return UnrealSpeedLog;
}

std::string FuespdlogModule::ConvertFStringToSTDString(const FString& FStringToConvert)
{
 	return std::string(TCHAR_TO_UTF8(*FStringToConvert));
}

TSharedPtr<spdlog::logger, ESPMode::ThreadSafe> FuespdlogModule::CreateLogger()
{
	UE_LOG(LogSpdLog, Log, TEXT("Begin Creating of UEspdlog"));
	FString IniPath = IPluginManager::Get().FindPlugin("uespdlog")->GetBaseDir() / TEXT("Config") / TEXT("Defaultuespdlog.ini");

	FString FilePath;
	FString FileName;
	FString LoggerName;

	GConfig->GetString(TEXT("FilePath"), TEXT("Path"), FilePath, IniPath);
	GConfig->GetString(TEXT("LoggerName"), TEXT("FileName"), FileName, IniPath);
	GConfig->GetString(TEXT("LoggerName"), TEXT("LoggerName"), LoggerName, IniPath);

	//If the supplied path is not valid, set to projectLogDir
	if (FilePath == TEXT(""))
	{
		FilePath = FPaths::ProjectLogDir();
	}
	if (LoggerName == TEXT(""))
	{
		LoggerName = TEXT("Default Logger");
	}
	if (FileName == TEXT(""))
	{
		FileName = TEXT("uespdlog.txt");
	}

	UE_LOG(LogSpdLog, Log, TEXT("Log file can be found at %s"), *FilePath);
	return MakeShareable(spdlog::create<spdlog::sinks::rotating_file_sink_mt>(ConvertFStringToSTDString(LoggerName), ConvertFStringToSTDString(FilePath) + ConvertFStringToSTDString(FileName), 1024*1024, 5, true).get());
}

TSharedPtr<spdlog::logger, ESPMode::ThreadSafe> FuespdlogModule::UnrealSpeedLog = FuespdlogModule::CreateLogger();

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FuespdlogModule, uespdlog)