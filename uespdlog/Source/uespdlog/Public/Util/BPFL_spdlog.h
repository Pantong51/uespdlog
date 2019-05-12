// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_spdlog.generated.h"

UENUM(BlueprintType)
enum class EUESpdLogLogLevel : uint8
{
	Info UMETA(DisplayName = "Info"),
	Error UMETA(DisplayName = "Error"),
	Critical UMETA(DisplayName = "Critical"),
	Debug UMETA(DisplayName = "Debug"),
	Warn UMETA(DisplayName = "Warn"),
};

UCLASS()
class UESPDLOG_API UBPFL_spdlog : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void spdLog(EUESpdLogLogLevel MessageSeverity, FString msg);
};
