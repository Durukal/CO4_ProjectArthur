// Copyright Epic Games, Inc. All Rights Reserved.

#include "CO4_ProjectArthurGameMode.h"
#include "CO4_ProjectArthurCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACO4_ProjectArthurGameMode::ACO4_ProjectArthurGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
