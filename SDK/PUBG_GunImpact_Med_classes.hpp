#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Med_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GunImpact_Med.GunImpact_Med_C
// 0x00C8 (0x0E90 - 0x0DC8)
class AGunImpact_Med_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DC8(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_1_NewTrack_0_FA65073B4543F47FFCF554A6319E0575;   // 0x0DD0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_FA65073B4543F47FFCF554A6319E0575;   // 0x0DD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DD5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_1_1528062346B47FBA28E66EA9365666DA;   // 0x0DE0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_1528062346B47FBA28E66EA9365666DA;   // 0x0DE4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DE5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline02;                                               // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMaterial;                                            // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHeadshot;                                              // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0DF9(0x0007) MISSED OFFSET
	struct FHitResult                                  SplatHit;                                                 // 0x0E00(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass GunImpact_Med.GunImpact_Med_C"));

		return ptr;
	}


	struct FDecalEffectDataSet GetAdjustedDecalEffectDataSet_BP();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void PreWakeUp_BP(struct FTransform* InitialTransform);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void AdjustDecalEffectDataSet_BP();
	void OnSplatterDecalCreated();
	void ExecuteUbergraph_GunImpact_Med(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
