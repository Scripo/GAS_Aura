// Copyright Serge Novikov

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBaseCharacter.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBaseCharacter();

protected:
	virtual void BeginPlay() override;
};
