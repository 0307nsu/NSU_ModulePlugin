#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyUtilityLibrary.generated.h"

UCLASS()
class TEMPORARY_API UMyUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Utility")
	static void AdvancedPrintString(FString Message, FLinearColor TextColor);
};
