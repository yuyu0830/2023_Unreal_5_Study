// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Fruit.h"
#include "F_Banana.generated.h"

/**
 * 
 */
UCLASS()
class BANANAFANATIC_API AF_Banana : public AFruit
{
	GENERATED_BODY()


private:
	//UFUNCTION()
	//void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleAnywhere)
	class USphereComponent* colliderComponent;
};
