// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PrefabAsset_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrefabAsset.PrefabActor.SetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset**           NewPrefab                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceRevertEvenDisconnected   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C62BA60              		 offset:485ba60                       

void APrefabActor::SetPrefab(class UPrefabAsset** NewPrefab, bool* bForceRevertEvenDisconnected)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.SetPrefab"));

	APrefabActor_SetPrefab_Params params;
	params.NewPrefab = NewPrefab;
	params.bForceRevertEvenDisconnected = bForceRevertEvenDisconnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.SetMobility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EComponentMobility>* InMobility                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C62B9E0              		 offset:485b9e0                       

void APrefabActor::SetMobility(TEnumAsByte<EComponentMobility>* InMobility)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.SetMobility"));

	APrefabActor_SetMobility_Params params;
	params.InMobility = InMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.GetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C62B9B0              		 offset:485b9b0                       

class UPrefabAsset* APrefabActor::GetPrefab()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.GetPrefab"));

	APrefabActor_GetPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabAsset.PrefabActor.DestroyPrefabActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bDestroyAttachedChildren       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719A9FE00              		 offset:1ccfe00                       

void APrefabActor::DestroyPrefabActor(bool* bDestroyAttachedChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.DestroyPrefabActor"));

	APrefabActor_DestroyPrefabActor_Params params;
	params.bDestroyAttachedChildren = bDestroyAttachedChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
