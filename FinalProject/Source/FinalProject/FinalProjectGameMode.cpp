// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FinalProject.h"
#include "FinalProjectGameMode.h"
#include "FinalProjectCharacter.h"

AFinalProjectGameMode::AFinalProjectGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AFinalProjectCharacter::StaticClass();	
}
