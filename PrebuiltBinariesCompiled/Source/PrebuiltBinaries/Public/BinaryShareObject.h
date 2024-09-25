// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BinaryShareObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PREBUILTBINARIES_API UBinaryShareObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BinaryShareObject")
	FString Test;

	UFUNCTION(BlueprintCallable, Category = "BinaryShareObject")
	FString GetTestValue();
	
};
