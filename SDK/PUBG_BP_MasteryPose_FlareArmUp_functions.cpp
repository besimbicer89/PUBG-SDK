// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_FlareArmUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.UserConstructionScript
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ABP_MasteryPose_FlareArmUp_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.UserConstructionScript"));

	ABP_MasteryPose_FlareArmUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.AttachObjects
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class ACharacter**             LobbyCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ABP_MasteryPose_FlareArmUp_C::AttachObjects(class ACharacter** LobbyCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.AttachObjects"));

	ABP_MasteryPose_FlareArmUp_C_AttachObjects_Params params;
	params.LobbyCharacter = LobbyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.ExecuteUbergraph_BP_MasteryPose_FlareArmUp
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ABP_MasteryPose_FlareArmUp_C::ExecuteUbergraph_BP_MasteryPose_FlareArmUp(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.ExecuteUbergraph_BP_MasteryPose_FlareArmUp"));

	ABP_MasteryPose_FlareArmUp_C_ExecuteUbergraph_BP_MasteryPose_FlareArmUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
