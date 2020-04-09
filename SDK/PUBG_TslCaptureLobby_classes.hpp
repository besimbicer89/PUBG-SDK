#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslCaptureLobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// 0x0086 (0x0476 - 0x03F0)
class ATslCaptureLobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class ALobbyViewMode_C*                            ViewModeStudio;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon*                                  TslWeapon;                                                // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FTransform                                  UiCameraTM;                                               // 0x0410(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ViewModeTM;                                               // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeft;                                                    // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRight;                                                   // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUp;                                                      // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDown;                                                    // 0x0473(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddView;                                                  // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MinusView;                                                // 0x0475(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C"));

		return ptr;
	}


	void InpActEvt_Backslash_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Left_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Right_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Up_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Down_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent(struct FKey* Key);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TslCaptureLobby(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
