// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HeadMountedDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99C70              		 offset:40c9c70                       

bool UMotionControllerComponent::IsTracked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionControllerComponent.IsTracked"));

	UMotionControllerComponent_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99C90              		 offset:40c9c90                       

void UMotionTrackedDeviceFunctionLibrary::STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool* Enable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault"));

	UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99BB0              		 offset:40c9bb0                       

bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForDevice(int* PlayerIndex, EControllerHand* Hand)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice"));

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent** MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99B30              		 offset:40c9b30                       

bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent** MotionControllerComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent"));

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99B00              		 offset:40c9b00                       

bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackedDeviceCountManagementNecessary()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary"));

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99AD0              		 offset:40c9ad0                       

int UMotionTrackedDeviceFunctionLibrary::STATIC_GetMotionTrackingEnabledControllerCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount"));

	UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99AA0              		 offset:40c9aa0                       

int UMotionTrackedDeviceFunctionLibrary::STATIC_GetMaximumMotionTrackedControllerCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount"));

	UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE999E0              		 offset:40c99e0                       

bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfDevice(int* PlayerIndex, EControllerHand* Hand)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice"));

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent** MotionControllerComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99960              		 offset:40c9960                       

bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent"));

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BE998B0              		 offset:40c98b0                       

void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfDevice(int* PlayerIndex, EControllerHand* Hand)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice"));

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BE99840              		 offset:40c9840                       

void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfControllersForPlayer(int* PlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer"));

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71BE99820              		 offset:40c9820                       

void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfAllControllers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers"));

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent** MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BE997B0              		 offset:40c97b0                       

void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent"));

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction HeadMountedDisplay.VRNotificationsComponent.VRNotificationsDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UVRNotificationsComponent::VRNotificationsDelegate__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction HeadMountedDisplay.VRNotificationsComponent.VRNotificationsDelegate__DelegateSignature"));

	UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
