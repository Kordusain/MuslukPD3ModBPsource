#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SBZOnlineShowLoginUIResultDelegate.h"
#include "SBZShowLoginUICallbackProxy.generated.h"

class APlayerController;
class UObject;
class USBZShowLoginUICallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineShowLoginUIResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineShowLoginUIResult OnFailure;
    
    USBZShowLoginUICallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZShowLoginUICallbackProxy* SBZShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

