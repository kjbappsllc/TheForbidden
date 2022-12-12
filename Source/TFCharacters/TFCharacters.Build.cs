using UnrealBuildTool;

public class TFCharacters : ModuleRules
{
    public TFCharacters(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "InputCore", "TFCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Core" });
    }
}