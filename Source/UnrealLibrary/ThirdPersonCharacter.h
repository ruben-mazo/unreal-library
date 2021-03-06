// Author: Rubén Mazo

#pragma once

#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "ThirdPersonCharacter.generated.h"

/**
 * @brief A base class for a third person character, providing a camera attached to a spring arm.
 */
UCLASS()
class UNREALLIBRARY_API AThirdPersonCharacter : public APlayerCharacter
{
	GENERATED_BODY()

public:
	/**
	 * @brief Default constructor.
	 */
	AThirdPersonCharacter();

private:
	/**
	 * @brief The spring arm that manages the movement of the camera.
	 */
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComponent;

	/**
	 * @brief A camera that follow the character.
	 */
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComponent;
};
