// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NSU_ModulePlugin : ModuleRules
{
	public NSU_ModulePlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
