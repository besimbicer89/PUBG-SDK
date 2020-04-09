// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sniper_Kar98_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslParticle.SetParticleParameter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bEnableRTPC                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638655D70              		 offset:1365d70                       

void AP_Sniper_Kar98_BP_C::STATIC_SetParticleParameter(const struct FName& Name, const struct FVector& Value, bool bEnableRTPC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.SetParticleParameter"));

	AP_Sniper_Kar98_BP_C_SetParticleParameter_Params params;
	params.Name = Name;
	params.Value = Value;
	params.bEnableRTPC = bEnableRTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleFinish
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF63864E4E0              		 offset:135e4e0                       

void AP_Sniper_Kar98_BP_C::STATIC_OnParticleFinish(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.OnParticleFinish"));

	AP_Sniper_Kar98_BP_C_OnParticleFinish_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleCollide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF63864E230              		 offset:135e230                       

void AP_Sniper_Kar98_BP_C::STATIC_OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.OnParticleCollide"));

	AP_Sniper_Kar98_BP_C_OnParticleCollide_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParameterUpdated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AP_Sniper_Kar98_BP_C::STATIC_OnParameterUpdated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.OnParameterUpdated"));

	AP_Sniper_Kar98_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.GetWaterVolumeHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           OutbIsInWater                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutWaterHeight                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638647B20              		 offset:1357b20                       

void AP_Sniper_Kar98_BP_C::STATIC_GetWaterVolumeHeight(bool* OutbIsInWater, float* OutWaterHeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetWaterVolumeHeight"));

	AP_Sniper_Kar98_BP_C_GetWaterVolumeHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutbIsInWater != nullptr)
		*OutbIsInWater = params.OutbIsInWater;
	if (OutWaterHeight != nullptr)
		*OutWaterHeight = params.OutWaterHeight;
}


// Function TslGame.TslParticle.GetPhysicalSurfaceFromRay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate)
// Parameters:
// struct FVector                 StartActorOffset               (ConstParm, Parm, IsPlainOldData)
// struct FVector                 TraceRay                       (ConstParm, Parm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF638645550              		 offset:1355550                       

TEnumAsByte<EPhysicalSurface> AP_Sniper_Kar98_BP_C::STATIC_GetPhysicalSurfaceFromRay(const struct FVector& StartActorOffset, const struct FVector& TraceRay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetPhysicalSurfaceFromRay"));

	AP_Sniper_Kar98_BP_C_GetPhysicalSurfaceFromRay_Params params;
	params.StartActorOffset = StartActorOffset;
	params.TraceRay = TraceRay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleVectorParamter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DefaultValue                   (ConstParm, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF638645460              		 offset:1355460                       

struct FVector AP_Sniper_Kar98_BP_C::STATIC_GetParticleVectorParamter(const struct FName& Name, const struct FVector& DefaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetParticleVectorParamter"));

	AP_Sniper_Kar98_BP_C_GetParticleVectorParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleParamterByName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF638645390              		 offset:1355390                       

float AP_Sniper_Kar98_BP_C::STATIC_GetParticleParamterByName(const struct FName& Name, float DefaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetParticleParamterByName"));

	AP_Sniper_Kar98_BP_C_GetParticleParamterByName_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleParamter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF638645240              		 offset:1355240                       

float AP_Sniper_Kar98_BP_C::STATIC_GetParticleParamter(const struct FString& Name, float DefaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetParticleParamter"));

	AP_Sniper_Kar98_BP_C_GetParticleParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF638643B90              		 offset:1353b90                       

float AP_Sniper_Kar98_BP_C::STATIC_GetEmitterGlobalSpawnRateScale()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale"));

	AP_Sniper_Kar98_BP_C_GetEmitterGlobalSpawnRateScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.ForceSpawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            emitterIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InLocation                     (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6386414A0              		 offset:13514a0                       

void AP_Sniper_Kar98_BP_C::STATIC_ForceSpawn(int emitterIndex, const struct FVector& InLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.ForceSpawn"));

	AP_Sniper_Kar98_BP_C_ForceSpawn_Params params;
	params.emitterIndex = emitterIndex;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.AttachToParent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF63863D9B0              		 offset:134d9b0                       

void AP_Sniper_Kar98_BP_C::STATIC_AttachToParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.AttachToParent"));

	AP_Sniper_Kar98_BP_C_AttachToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif