#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapStatAnalyzer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// 0x040C (0x07EC - 0x03E0)
class AMapStatAnalyzer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldMin;                                                 // 0x03F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldMax;                                                 // 0x03FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SamplingInterval;                                         // 0x0408(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<struct FVector>                             WorldAvgSamples;                                          // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             BeginConsoleCommands;                                     // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                IY;                                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IX;                                                       // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraRelativeOffset;                                     // 0x0440(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SkippingMinimumHeight;                                    // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CameraCut;                                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeInterval;                                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveFileName;                                             // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SubdivisionCount;                                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PresetLoc;                                                // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UsePresetLoc;                                             // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                SubdivisionIndex;                                         // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0488(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                SampleIndex;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	TArray<struct FString>                             StableFrameStats;                                         // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      StableFrameStatsThreshold;                                // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMapStatPositionData>                MapStatPositionDataArray;                                 // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SkipOceanSurface;                                         // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        LinearColorArray;                                         // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             StatNames;                                                // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             StatGroups;                                               // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaxValueAllInclusiveAvg;                                  // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PrintToScreen;                                            // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NoCheckPawnCollision;                                     // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0592(0x0002) MISSED OFFSET
	float                                              DelayTimeAfterTeleport;                                   // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SaveToStatMap;                                            // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	struct FDateTime                                   BeginPlayNow;                                             // 0x05A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      AvgValueAllInclusiveAvg;                                  // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AvgArray;                                                 // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             HitchFrameStats;                                          // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      HitchFrameStatsThreshold_PC;                              // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      HitchFrameStatsThreshold_Console;                         // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bNormalFinished;                                          // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	struct FLinearColor                                EmptyColor;                                               // 0x05FC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ZeroColor;                                                // 0x060C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MaxColor;                                                 // 0x061C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AvgColor;                                                 // 0x062C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitchedEmptyColor;                                        // 0x063C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitchedZeroColor;                                         // 0x064C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitchedMaxColor;                                          // 0x065C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitchedAvgColor;                                          // 0x066C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              StableFrameStatsThresholdScale;                           // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     HtmlTemplate;                                             // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MinimapSpotTemplate;                                      // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             SpotTextArray;                                            // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MinimapSpotInstance;                                      // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             MinimapSpotInstanceArray;                                 // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bNeedHItchScreenshot;                                     // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	TArray<int>                                        HitchSampleIndexArray;                                    // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             HitchAdminMovePlayerArray;                                // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LastAdminMovePlayerCommand;                               // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CellPadddingPercent;                                      // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastSpotIndex;                                            // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     MinimapSpotDropdownTemplate;                              // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MinimapSpotDropdownInstance;                              // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             MinimapSpotDropdownInstanceArray;                         // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bNeedBugItNoScreenshot;                                   // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	TArray<struct FString>                             StatNameIndex;                                            // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AdditionalHitchThreshold;                                 // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	TArray<float>                                      HitchFrameStatsThreshold_Instance;                        // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MapPixelSize;                                             // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LinearColorWidth;                                         // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LinearColorHeight;                                        // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MapAreaWidth;                                             // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AddCenterX;                                               // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AddCenterY;                                               // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldMapSize;                                             // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitchMaxScale;                                            // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	TArray<struct FString>                             HitchFrameStatsThreshold_Instance_To_String;              // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      FindingStableFrame;                                       // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartTimeToFindStableFrame;                               // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	TArray<float>                                      TempInclusiveAvg;                                         // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxDiffThreshold;                                         // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvgDiffThreshold;                                         // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultMaxDiffThreshold;                                  // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAvgDiffThreshold;                                  // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StableFrameStatsMultiplier;                               // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C"));

		return ptr;
	}


	void EqualsFloatArray(float* NewParam2, TArray<float>* NewParam, TArray<float>* NewParam1, bool* NewParam3);
	int DelayTimeToDelayFrames();
	struct FString GetAltSharedPresetDir();
	void GetCurrentLevelSize(float* NewParam);
	void GetExpectedMapSize(float* MapStride, float* NewParam);
	struct FString GetSharedPresetDir();
	struct FString GetSavedDir();
	void LoadStringFromFile(struct FString* FullFilePath, bool* bSuccess, struct FString* NewVar);
	void GetCurrentLevelMinimapURL(struct FString* PresetDir, struct FString* NewParam);
	void FloatArrayToNewlinedString(struct FString* NewLinedString, TArray<float>* Array, struct FString* NewVar);
	void StingArrayToNewlinedString(struct FString* NewLinedString, TArray<struct FString>* Array, struct FString* NewVar);
	TArray<float> HitchFrameStatsThreshold();
	void GetAvgOnArray(TArray<float>* NewParam, float* OutAvg, float* OutMin, float* OutMax);
	void DateTimeToString(struct FDateTime* NewParam, struct FString* NewParam1);
	void ComputeWorldSize(struct FVector* Min, struct FVector* Max);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_MapStatAnalyzer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif