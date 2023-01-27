// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypingGameMode.h"
#include "PrototypingPawn.h"

APrototypingGameMode::APrototypingGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = APrototypingPawn::StaticClass();
}
