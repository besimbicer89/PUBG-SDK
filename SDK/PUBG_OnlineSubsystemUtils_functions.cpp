// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OnlineSubsystemUtils_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AchievementID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FECC0              		 offset:482ecc0                       

void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementProgress(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FName* AchievementID, bool* bFoundID, float* Progress)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress"));

	UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AchievementID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm, OutParm)
// struct FText                   LockedDescription              (Parm, OutParm)
// struct FText                   UnlockedDescription            (Parm, OutParm)
// bool                           bHidden                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE960              		 offset:482e960                       

void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementDescription(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FName* AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription"));

	UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FD860              		 offset:482d860                       

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::STATIC_CacheAchievements(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements"));

	UAchievementQueryCallbackProxy_CacheAchievements_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FD7A0              		 offset:482d7a0                       

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::STATIC_CacheAchievementDescriptions(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions"));

	UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AchievementName                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UserTag                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAchievementWriteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C600150              		 offset:4830150                       

class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::STATIC_WriteAchievementProgress(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FName* AchievementName, float* Progress, int* UserTag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress"));

	UAchievementWriteCallbackProxy_WriteAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.Progress = Progress;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UConnectionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDAF0              		 offset:482daf0                       

class UConnectionCallbackProxy* UConnectionCallbackProxy::STATIC_ConnectToService(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService"));

	UConnectionCallbackProxy_ConnectToService_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// class UCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE060              		 offset:482e060                       

class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::STATIC_CreateSession(class UObject** WorldContextObject, class APlayerController** PlayerController, int* PublicConnections, bool* bUseLAN)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession"));

	UCreateSessionCallbackProxy_CreateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UDestroySessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE190              		 offset:482e190                       

class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::STATIC_DestroySession(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession"));

	UDestroySessionCallbackProxy_DestroySession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTurnBasedMatchInterface>* MatchActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MatchId                        (Parm, ZeroConstructor)
// TEnumAsByte<EMPMatchOutcome>*  LocalPlayerOutcome             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMPMatchOutcome>*  OtherPlayersOutcome            (Parm, ZeroConstructor, IsPlainOldData)
// class UEndMatchCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE250              		 offset:482e250                       

class UEndMatchCallbackProxy* UEndMatchCallbackProxy::STATIC_EndMatch(class UObject** WorldContextObject, class APlayerController** PlayerController, TScriptInterface<class UTurnBasedMatchInterface>* MatchActor, struct FString* MatchId, TEnumAsByte<EMPMatchOutcome>* LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome>* OtherPlayersOutcome)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch"));

	UEndMatchCallbackProxy_EndMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MatchId = MatchId;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MatchId                        (Parm, ZeroConstructor)
// TScriptInterface<class UTurnBasedMatchInterface>* TurnBasedMatchInterface        (Parm, ZeroConstructor, IsPlainOldData)
// class UEndTurnCallbackProxy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE480              		 offset:482e480                       

class UEndTurnCallbackProxy* UEndTurnCallbackProxy::STATIC_EndTurn(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* MatchId, TScriptInterface<class UTurnBasedMatchInterface>* TurnBasedMatchInterface)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn"));

	UEndTurnCallbackProxy_EndTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchId = MatchId;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C5FF660              		 offset:482f660                       

struct FString UFindSessionsCallbackProxy::STATIC_GetServerName(struct FBlueprintSessionResult* Result)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName"));

	UFindSessionsCallbackProxy_GetServerName_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FF380              		 offset:482f380                       

int UFindSessionsCallbackProxy::STATIC_GetPingInMs(struct FBlueprintSessionResult* Result)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs"));

	UFindSessionsCallbackProxy_GetPingInMs_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FF0F0              		 offset:482f0f0                       

int UFindSessionsCallbackProxy::STATIC_GetMaxPlayers(struct FBlueprintSessionResult* Result)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers"));

	UFindSessionsCallbackProxy_GetMaxPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FEE60              		 offset:482ee60                       

int UFindSessionsCallbackProxy::STATIC_GetCurrentPlayers(struct FBlueprintSessionResult* Result)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers"));

	UFindSessionsCallbackProxy_GetCurrentPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// class UFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE620              		 offset:482e620                       

class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::STATIC_FindSessions(class UObject** WorldContextObject, class APlayerController** PlayerController, int* MaxResults, bool* bUseLAN)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions"));

	UFindSessionsCallbackProxy_FindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTurnBasedMatchInterface>* MatchActor                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowExistingMatches            (Parm, ZeroConstructor, IsPlainOldData)
// class UFindTurnBasedMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FE750              		 offset:482e750                       

class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::STATIC_FindTurnBasedMatch(class UObject** WorldContextObject, class APlayerController** PlayerController, TScriptInterface<class UTurnBasedMatchInterface>* MatchActor, int* MinPlayers, int* MaxPlayers, int* PlayerGroup, bool* ShowExistingMatches)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch"));

	UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FInAppPurchaseProductRequest* ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UInAppPurchaseCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDC70              		 offset:482dc70                       

class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::STATIC_CreateProxyObjectForInAppPurchase(class APlayerController** PlayerController, struct FInAppPurchaseProductRequest* ProductRequest)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase"));

	UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params params;
	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>*        ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UInAppPurchaseQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDD60              		 offset:482dd60                       

class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController** PlayerController, TArray<struct FString>* ProductIdentifiers)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery"));

	UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest>* ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UInAppPurchaseRestoreCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDE80              		 offset:482de80                       

class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest>* ConsumableProductFlags, class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore"));

	UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlueprintSessionResult* SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UJoinSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FF780              		 offset:482f780                       

class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::STATIC_JoinSession(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FBlueprintSessionResult* SearchResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession"));

	UJoinSessionCallbackProxy_JoinSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StatValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C6002D0              		 offset:48302d0                       

bool ULeaderboardBlueprintLibrary::STATIC_WriteLeaderboardInteger(class APlayerController** PlayerController, struct FName* StatName, int* StatValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger"));

	ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SessionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class ULeaderboardFlushCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDBB0              		 offset:482dbb0                       

class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::STATIC_CreateProxyObjectForFlush(class APlayerController** PlayerController, struct FName* SessionName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush"));

	ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params params;
	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// class ULeaderboardQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDFA0              		 offset:482dfa0                       

class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(class APlayerController** PlayerController, struct FName* StatName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery"));

	ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ULogoutCallbackProxy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FF8E0              		 offset:482f8e0                       

class ULogoutCallbackProxy* ULogoutCallbackProxy::STATIC_Logout(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout"));

	ULogoutCallbackProxy_Logout_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// FunctionAddress:0x00007FF71C5FD9A0              		 offset:482d9a0                       

void AOnlineBeaconClient::ClientOnConnected()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected"));

	AOnlineBeaconClient_ClientOnConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString*                SessionId                      (Parm, ZeroConstructor)
// struct FPartyReservation*      ReservationUpdate              (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF71C5FFF20              		 offset:482ff20                       

void APartyBeaconClient::ServerUpdateReservationRequest(struct FString* SessionId, struct FPartyReservation* ReservationUpdate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest"));

	APartyBeaconClient_ServerUpdateReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString*                SessionId                      (Parm, ZeroConstructor)
// struct FPartyReservation*      Reservation                    (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF71C5FFDB0              		 offset:482fdb0                       

void APartyBeaconClient::ServerReservationRequest(struct FString* SessionId, struct FPartyReservation* Reservation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest"));

	APartyBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl*       PartyLeader                    (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF71C5FFC60              		 offset:482fc60                       

void APartyBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl* PartyLeader)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest"));

	APartyBeaconClient_ServerCancelReservationRequest_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int*                           NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FDA60              		 offset:482da60                       

void APartyBeaconClient::ClientSendReservationUpdates(int* NumRemainingReservations)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates"));

	APartyBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF71C5FDA40              		 offset:482da40                       

void APartyBeaconClient::ClientSendReservationFull()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull"));

	APartyBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<EPartyReservationResult>* ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FD9C0              		 offset:482d9c0                       

void APartyBeaconClient::ClientReservationResponse(TEnumAsByte<EPartyReservationResult>* ReservationResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse"));

	APartyBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<EPartyReservationResult>* ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FD920              		 offset:482d920                       

void APartyBeaconClient::ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult>* ReservationResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse"));

	APartyBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF71C5FFD60              		 offset:482fd60                       

void ATestBeaconClient::ServerPong()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong"));

	ATestBeaconClient_ServerPong_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF719F555E0              		 offset:21855e0                       

void ATestBeaconClient::ClientPing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing"));

	ATestBeaconClient_ClientPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MatchId                        (Parm, ZeroConstructor)
// TEnumAsByte<EMPMatchOutcome>*  Outcome                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TurnTimeoutInSeconds           (Parm, ZeroConstructor, IsPlainOldData)
// class UQuitMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FF9A0              		 offset:482f9a0                       

class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::STATIC_QuitMatch(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* MatchId, TEnumAsByte<EMPMatchOutcome>* Outcome, int* TurnTimeoutInSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch"));

	UQuitMatchCallbackProxy_QuitMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchId = MatchId;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)
// class UShowLoginUICallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C600090              		 offset:4830090                       

class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::STATIC_ShowExternalLoginUI(class UObject** WorldContextObject, class APlayerController** InPlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI"));

	UShowLoginUICallbackProxy_ShowExternalLoginUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FFB70              		 offset:482fb70                       

void UTurnBasedBlueprintLibrary::STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject** WorldContextObject, class APlayerController** PlayerController, class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject"));

	UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MatchId                        (Parm, ZeroConstructor)
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerDisplayName              (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF71C5FF460              		 offset:482f460                       

void UTurnBasedBlueprintLibrary::STATIC_GetPlayerDisplayName(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* MatchId, int* PlayerIndex, struct FString* PlayerDisplayName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName"));

	UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchId = MatchId;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MatchId                        (Parm, ZeroConstructor)
// int                            PlayerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FF1D0              		 offset:482f1d0                       

void UTurnBasedBlueprintLibrary::STATIC_GetMyPlayerIndex(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* MatchId, int* PlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex"));

	UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MatchId                        (Parm, ZeroConstructor)
// bool                           bIsMyTurn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C5FEF40              		 offset:482ef40                       

void UTurnBasedBlueprintLibrary::STATIC_GetIsMyTurn(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* MatchId, bool* bIsMyTurn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn"));

	UTurnBasedBlueprintLibrary_GetIsMyTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
