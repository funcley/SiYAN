// Copyright Epic Games, Inc. All Rights Reserved.

#include "SiYANGameMode.h"
#include "SiYANCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASiYANGameMode::ASiYANGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
