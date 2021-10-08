// Copyright Epic Games, Inc. All Rights Reserved.


#include "SandboxGameModeBase.h"

#include "SandBoxPawn.h"

ASandboxGameModeBase::ASandboxGameModeBase()
{
	DefaultPawnClass = ASandBoxPawn::StaticClass();
}
