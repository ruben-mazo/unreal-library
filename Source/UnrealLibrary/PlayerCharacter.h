// Author: Rubén Mazo

#pragma once

#include "CharacterBase.h"
#include "PlayerCharacter.generated.h"

/**
 * @brief A base class for a player character. It contains bindings for the basic movement and camera.
 */
UCLASS()
class UNREALLIBRARY_API APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()

public:
	/**
	 * @brief Called to bind functionality to input.
	 */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
