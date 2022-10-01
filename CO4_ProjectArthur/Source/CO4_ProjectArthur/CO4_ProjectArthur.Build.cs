// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CO4_ProjectArthur : ModuleRules
{
	public CO4_ProjectArthur(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
