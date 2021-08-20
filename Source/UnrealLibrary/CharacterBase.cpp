// Author: Rubén Mazo


#include "CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACharacterBase::MoveForward(const float Value)
{
	const FRotator Rotator(0, GetControlRotation().Yaw, 0);
	const FVector Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);
	this->AddMovementInput(Direction, Value);
}

void ACharacterBase::MoveRight(const float Value)
{
	const FRotator Rotator(0, GetControlRotation().Yaw, 0);
	const FVector Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::Y);
	this->AddMovementInput(Direction, Value);
}

void ACharacterBase::LookRight(const float Value)
{
	AddControllerYawInput(Value);
}

void ACharacterBase::LookUp(const float Value)
{
	AddControllerPitchInput(Value);
}
