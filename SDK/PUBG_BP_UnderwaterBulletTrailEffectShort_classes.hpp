#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_UnderwaterBulletTrailEffectShort_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnderwaterBulletTrailEffectShort.BP_UnderwaterBulletTrailEffectShort_C
// 0x0000 (0x04B8 - 0x04B8)
class ABP_UnderwaterBulletTrailEffectShort_C : public ATslParticleBulletTrail
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_UnderwaterBulletTrailEffectShort.BP_UnderwaterBulletTrailEffectShort_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
