// Fill out your copyright notice in the Description page of Project Settings.

#include "Util/BPFL_spdlog.h"
#include "uespdlog.h"

void UBPFL_spdlog::spdLog(EUESpdLogLogLevel MessageSeverity, FString msg)
{
	switch (MessageSeverity)
	{
		case EUESpdLogLogLevel::Info:
			FuespdlogModule::GetUnrealSpeedLog().Get()->info(FuespdlogModule::ConvertFStringToSTDString(msg));
		case EUESpdLogLogLevel::Warn:
			FuespdlogModule::GetUnrealSpeedLog().Get()->warn(FuespdlogModule::ConvertFStringToSTDString(msg));
		case EUESpdLogLogLevel::Debug:
			FuespdlogModule::GetUnrealSpeedLog().Get()->debug(FuespdlogModule::ConvertFStringToSTDString(msg));
		case EUESpdLogLogLevel::Error:
			FuespdlogModule::GetUnrealSpeedLog().Get()->error(FuespdlogModule::ConvertFStringToSTDString(msg));
		case EUESpdLogLogLevel::Critical:
			FuespdlogModule::GetUnrealSpeedLog().Get()->critical(FuespdlogModule::ConvertFStringToSTDString(msg));
		default:
			FuespdlogModule::GetUnrealSpeedLog().Get()->info(FuespdlogModule::ConvertFStringToSTDString(msg));
	}
}