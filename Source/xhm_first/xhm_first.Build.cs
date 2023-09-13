// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class xhm_first : ModuleRules
{
	public xhm_first(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
