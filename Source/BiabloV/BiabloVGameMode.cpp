// Copyright Epic Games, Inc. All Rights Reserved.

#include "BiabloVGameMode.h"
#include "BiabloVPlayerController.h"
#include "BiabloVCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABiabloVGameMode::ABiabloVGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABiabloVPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}