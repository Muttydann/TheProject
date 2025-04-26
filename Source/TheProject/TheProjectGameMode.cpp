// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheProjectGameMode.h"
#include "TheProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheProjectGameMode::ATheProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_TheProjectCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
