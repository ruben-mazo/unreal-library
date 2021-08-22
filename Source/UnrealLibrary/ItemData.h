// Author: Rubén Mazo

#pragma once

#include "ItemData.generated.h"

/**
 * @brief A base structure for items data.
 */
USTRUCT()
struct UNREALLIBRARY_API FItemData
{
	GENERATED_BODY()
	
	/**
	 * @brief The unique ID of the item. Only this item should have this ID.
	 */
	UPROPERTY(VisibleAnywhere)
	FName ID;

	/**
	 * @brief The display name of the item. It does not need to be unique.
	 */
	UPROPERTY(EditAnywhere, Category="Item")
	FText Name;

	/**
	 * @brief A brief description of the item.
	 */
	UPROPERTY(EditAnywhere)
	FText Description;
};
