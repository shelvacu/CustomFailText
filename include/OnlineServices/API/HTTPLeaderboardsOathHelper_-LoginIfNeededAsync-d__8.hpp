// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: TokenDTO
  class TokenDTO;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<LoginIfNeededAsync>d__8
  struct HTTPLeaderboardsOathHelper::$LoginIfNeededAsync$d__8 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<LeaderboardsDTO.TokenDTO> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<LeaderboardsDTO::TokenDTO*> $$u__1;
    // Creating value type constructor for type: $LoginIfNeededAsync$d__8
    $LoginIfNeededAsync$d__8(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<LeaderboardsDTO::TokenDTO*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA27DFC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA27E04
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<LoginIfNeededAsync>d__8
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$LoginIfNeededAsync$d__8, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<LoginIfNeededAsync>d__8");
#pragma pack(pop)