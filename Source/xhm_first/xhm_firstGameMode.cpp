// Copyright Epic Games, Inc. All Rights Reserved.

#include "xhm_firstGameMode.h"
#include "xhm_firstHUD.h"
#include "xhm_firstCharacter.h"
#include "UObject/ConstructorHelpers.h"

Axhm_firstGameMode::Axhm_firstGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Axhm_firstHUD::StaticClass();
}
