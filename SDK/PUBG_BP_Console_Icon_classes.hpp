#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Console_Icon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_Console_Icon.BP_Console_Icon_C
// 0x0037 (0x0288 - 0x0251)
class UBP_Console_Icon_C : public UBP_Console_Icon_base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_Target;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  XBox_Icon;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PS_Icon;                                                  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Button_XorO;                                           // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UTexture2D*                                  PS_Icon_Switch;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_Console_Icon.BP_Console_Icon_C"));

		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_BP_Console_Icon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
