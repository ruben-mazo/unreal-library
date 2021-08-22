// Author: Rubén Mazo

#pragma once

#include "Engine/DataTable.h"
#include "ItemData.generated.h"

/**
 * @brief A base structure for items data.
 */
USTRUCT(BlueprintType)
struct UNREALLIBRARY_API FItemData : public FTableRowBase
{
	GENERATED_BODY()

	/**
	 * @brief The display name of the item.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FText Name;

	/**
	 * @brief A brief description of the item.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FText Description;
};
