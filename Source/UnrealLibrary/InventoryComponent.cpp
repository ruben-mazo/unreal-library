// Author: Rubén Mazo


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

bool UInventoryComponent::AddItem(FName ItemID)
{
	// Make sure there is enough space
	if (!HasAvailableSpace()) return false;

	if (Items.Contains(ItemID)) Items[ItemID]++; // If the item exists, increase quantity by 1
	else Items.Add(ItemID, 1); // Else add a new entry

	return true;
}

bool UInventoryComponent::RemoveItem(FName ItemID)
{
	// Make sure the item exists
	if (!Items.Contains(ItemID)) return false;

	if (Items[ItemID] > 1) Items[ItemID]--; // If there are 2 or more items, reduce quantity by 1
	else if (Items[ItemID] == 1) Items.Remove(ItemID); // If there is only one item, just remove it

	return true;
}

void UInventoryComponent::Clear()
{
	Items.Empty();
}

bool UInventoryComponent::HasAvailableSpace()
{
	return true;
}
