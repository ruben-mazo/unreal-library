// Author: Rubén Mazo

#pragma once

#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

/**
 * @brief A base class for any actor that represents an item.
 */
UCLASS()
class UNREALLIBRARY_API AItem : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FDataTableRowHandle ItemReference;

public:
	/**
	 * @brief Default constructor.
	 */
	AItem();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
	virtual void CharacterBeginOverlap(ACharacter* Character);
};
