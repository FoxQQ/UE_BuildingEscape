// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"
#include "Math/TransformNonVectorized.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	// ...
	FString ActorName = this->GetOwner()->GetName();
	// UE_LOG(LogTemp, Error, TEXT("Begin"));
	UE_LOG(LogTemp, Warning, TEXT("Hello %s"), *ActorName);

	FTransform ActorTransform = this->GetOwner()->GetTransform();
	
	FVector ActorTranslation = ActorTransform.GetTranslation();
	UE_LOG(LogTemp, Warning, TEXT("Hello, I am %s. My Translation is x: %f, y: %f, z:%f"), *ActorName, ActorTranslation.X, ActorTranslation.Y, ActorTranslation.Z);
	// UE_LOG(LogTemp, Display, TEXT("...just a message"));
	
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	c++;
	// ...
}

