// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class spdlog : ModuleRules
{
    public spdlog(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;
        Loadspdlog(Target);
    }

    public bool Loadspdlog(ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = true;
        if (Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Win32)
        {
            isLibrarySupported = true;
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "spdlog"));
        }
        return isLibrarySupported;
    }
}