// Copyright Epic Games, Inc. All Rights Reserved.

#include "Git_uploadGameMode.h"
#include "Git_uploadPlayerController.h"
#include "Git_uploadCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGit_uploadGameMode::AGit_uploadGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGit_uploadPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}