// Copyright Serge Novikov


#include "AuraCharacterBaseCharacter.h"

// Sets default values
AAuraCharacterBaseCharacter::AAuraCharacterBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAuraCharacterBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraCharacterBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAuraCharacterBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

