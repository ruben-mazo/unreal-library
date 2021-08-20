// Author: Rubén Mazo


#include "FirstPersonCharacter.h"

void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AFirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AFirstPersonCharacter::MoveRight);

	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &AFirstPersonCharacter::LookRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AFirstPersonCharacter::LookUp);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AFirstPersonCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &AFirstPersonCharacter::StopJumping);
}
