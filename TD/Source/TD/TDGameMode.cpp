// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDGameMode.h"
#include "TDCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATDGameMode::ATDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/BP_Player"));

	if (PlayerPawnBPClass.Class)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
