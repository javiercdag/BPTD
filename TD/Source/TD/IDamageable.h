#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IDamageable.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UDamageable : public UInterface
{
	GENERATED_BODY()
};

class IDamageable
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Damage")
	void SetHitPoints(float hitPoints);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Damage")
	float GetHitPoints();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Damage")
	void ApplyHitDamage(float damageAmount);
};