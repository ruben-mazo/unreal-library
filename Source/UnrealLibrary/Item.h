// Author: Rubén Mazo

#pragma once

#include "ItemData.h"
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
	/**
	 * @brief A reference to the item in the items database. This will fill the item data when spawned.
	 */
	UPROPERTY(EditAnywhere, Category="Item")
	FDataTableRowHandle ItemReference;

public:
	/**
	 * @brief Default constructor.
	 */
	AItem();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
	/**
	 * @brief Called when the item overlaps a character.
	 * @param Character The overlapped character.
	 */
	virtual void CharacterBeginOverlap(ACharacter* Character);

private:
	UFUNCTION(BlueprintPure, Category="Item")
	FItemData GetItemData();
};
