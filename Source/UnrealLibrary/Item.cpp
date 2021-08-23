// Author: Rubén Mazo


#include "Item.h"
#include "GameFramework/Character.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character != nullptr)
	{
		CharacterBeginOverlap(Character);
	}
}

void AItem::CharacterBeginOverlap(ACharacter* Character)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::White, "Overlap!");
}

FItemData AItem::GetItemData()
{
	FItemData ItemData = FItemData();
	if (ItemReference.DataTable != nullptr && !ItemReference.RowName.IsNone())
	{
		ItemData = *ItemReference.GetRow<FItemData>("");
	}
	return ItemData;
}
