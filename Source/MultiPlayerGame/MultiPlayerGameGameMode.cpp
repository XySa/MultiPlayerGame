// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiPlayerGameGameMode.h"
#include "MultiPlayerGameHUD.h"
#include "MultiPlayerGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiPlayerGameGameMode::AMultiPlayerGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMultiPlayerGameHUD::StaticClass();
}
