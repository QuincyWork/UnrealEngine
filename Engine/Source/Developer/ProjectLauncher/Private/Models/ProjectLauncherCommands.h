// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#define LOCTEXT_NAMESPACE ""

/**
 * The project launcher UI commands
 */
class FProjectLauncherCommands : public TCommands<FProjectLauncherCommands>
{
public:

	/**
	 * Default constructor.
	 */
	FProjectLauncherCommands( )
		: TCommands<FProjectLauncherCommands>(
			"LauncherCommand",
			NSLOCTEXT("Contexts", "LauncherCommand", "Project Launcher Command"),
			NAME_None,
			FEditorStyle::GetStyleSetName()
	)
	{ }
	
public:

	// TCommands interface

	PRAGMA_DISABLE_OPTIMIZATION
	virtual void RegisterCommands( ) override
	{
		UI_COMMAND(QuickLaunch, "Quick Launch", "Builds, cooks, and launches a build.", EUserInterfaceActionType::ToggleButton, FInputGesture(EModifierKey::Control, EKeys::L));
		UI_COMMAND(CreateBuild, "Build", "Creates a build.", EUserInterfaceActionType::ToggleButton, FInputGesture(EModifierKey::Control, EKeys::B));
		UI_COMMAND(DeployBuild, "Deploy Build", "Deploys a pre-made build.", EUserInterfaceActionType::ToggleButton, FInputGesture(EModifierKey::Control, EKeys::D));
		UI_COMMAND(AdvancedBuild, "Advanced...", "Advanced launcher.", EUserInterfaceActionType::ToggleButton, FInputGesture(EModifierKey::Control, EKeys::A));
		UI_COMMAND(CloseSettings, "Back", "Close the launch profile settings editor and go back to the launcher.", EUserInterfaceActionType::Button, FInputGesture(EModifierKey::None, EKeys::Escape));
		UI_COMMAND(RenameProfile, "Rename", "Rename the launch profile.", EUserInterfaceActionType::Button, FInputGesture());// , FInputGesture(EModifierKey::None, EKeys::F2));
		UI_COMMAND(DuplicateProfile, "Duplicate", "Duplicate the launch profile.", EUserInterfaceActionType::Button, FInputGesture());//, FInputGesture(EModifierKey::Control, EKeys::W));
		UI_COMMAND(DeleteProfile, "Delete", "Delete the launch profile.", EUserInterfaceActionType::Button, FInputGesture());//, FInputGesture(EModifierKey::Control, EKeys::Delete));
	}
	PRAGMA_ENABLE_OPTIMIZATION

public:

	TSharedPtr<FUICommandInfo> CreateBuild;

	TSharedPtr<FUICommandInfo> DeployBuild;

	TSharedPtr<FUICommandInfo> QuickLaunch;

	TSharedPtr<FUICommandInfo> AdvancedBuild;

	TSharedPtr<FUICommandInfo> CloseSettings;

	TSharedPtr<FUICommandInfo> RenameProfile;

	TSharedPtr<FUICommandInfo> DuplicateProfile;

	TSharedPtr<FUICommandInfo> DeleteProfile;
};

#undef LOCTEXT_NAMESPACE