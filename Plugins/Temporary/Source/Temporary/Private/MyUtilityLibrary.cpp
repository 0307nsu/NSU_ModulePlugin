#include "MyUtilityLibrary.h"

void UMyUtilityLibrary::AdvancedPrintString(FString Message, FLinearColor TextColor)
{
	if (GEngine)
	{
		FString FinalMessage = FString::Printf(TEXT("[공지사항] %s"), *Message);
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, TextColor.ToFColor(true), FinalMessage);
	}
}
