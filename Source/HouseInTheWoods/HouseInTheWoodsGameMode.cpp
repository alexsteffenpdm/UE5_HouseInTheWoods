// Copyright Epic Games, Inc. All Rights Reserved.

#include "HouseInTheWoodsGameMode.h"
#include "HouseInTheWoodsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHouseInTheWoodsGameMode::AHouseInTheWoodsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
