// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class P_TP_GASTest : ModuleRules
{
	public P_TP_GASTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "GameplayAbilities", "GameplayTasks", "GameplayTags" });
    }
}
