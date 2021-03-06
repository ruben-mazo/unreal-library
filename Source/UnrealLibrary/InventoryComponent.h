// Author: Rubén Mazo

#pragma once

#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

/**
 * @brief A basic representation of an inventory that can be added as a component of any actor.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UNREALLIBRARY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/**
	 * @brief Default constructor.
	 */
	UInventoryComponent();

private:
	/**
	 * @brief The list of items stored in the inventory and their quantities > 0.
	 * (If the quantity of an item is 0, it should be removed.)
	 */
	UPROPERTY(EditAnywhere, Category="Inventory")
	TMap<FName, int> Items;

	/**
	 * @brief The capacity of this inventory.
	 */
	UPROPERTY(EditAnywhere, Category="Inventory")
	int Capacity;

public:
	/**
	 * @brief Add an item to the inventory.
	 * @param ItemID The unique ID of the new item.
	 * @return True if the item was successfully added.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	virtual bool AddItem(FName ItemID);

	/**
	 * @brief Remove an item from the inventory.
	 * @param ItemID The unique ID of the item being removed.
	 * @return True if the item was successfully removed.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	virtual bool RemoveItem(FName ItemID);

	/**
	 * @brief Remove all the items from the inventory.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	virtual void Clear();

	/**
	 * @brief Check if the inventory can accept more items according to its capacity.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	virtual bool HasAvailableSpace();
};
