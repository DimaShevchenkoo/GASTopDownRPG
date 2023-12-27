


#include "UI/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetConrollerParams(const FWidgetConrollerParams& WidgetConrollerParams)
{
	PlayerController = WidgetConrollerParams.PlayerController;
	PlayerState = WidgetConrollerParams.PlayerState;
	AbilitySystemComponent = WidgetConrollerParams.AbilitySystemComponent;
	AttributeSet = WidgetConrollerParams.AttributeSet;
}

void UAuraWidgetController::BindCallbacksToDependencies()
{
}

void UAuraWidgetController::BroadcastInitialValues()
{
	
}
