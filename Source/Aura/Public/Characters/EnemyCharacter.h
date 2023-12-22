

#pragma once

#include "CoreMinimal.h"
#include "Characters/CharacterBase.h"
#include "Interaction/HighlightInterface.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemyCharacter : public ACharacterBase, public IHighlightInterface
{
	GENERATED_BODY()

public:
	AEnemyCharacter();

	/* Interface implementation */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* Interface implementation ends */
	
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
	float CustomDepthStencilValue = 250.f;
};
