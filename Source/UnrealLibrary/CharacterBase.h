// Author: Rubén Mazo

#pragma once

#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

/**
 * @brief A base class for characters that contains functions for basic movement, but does not contain input bindings. 
 */
UCLASS()
class UNREALLIBRARY_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	/**
	 * @brief Default constructor.
	 */
	ACharacterBase();

protected:
	/**
	 * @brief Move the character along the X axis (forward/backward).
	 */
	UFUNCTION()
	void MoveForward(float Value);
	
	/**
	 * @brief Move the character along the Y axis (right/left).
	 */
	UFUNCTION()
	void MoveRight(float Value);
	
	/**
	 * @brief Turn the character around the Z axis (yaw rotation, right/left).
	 */
	UFUNCTION()
	void LookRight(float Value);
	
	/**
	 * @brief Turn the character's VIEW (not the character itself) around the Y axis (pitch rotation, up/down).
	 */
	UFUNCTION()
	void LookUp(float Value);
};
