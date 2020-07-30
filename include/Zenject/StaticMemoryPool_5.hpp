// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`5
#include "Zenject/IMemoryPool_5.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.StaticMemoryPool`5
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class StaticMemoryPool_5 : public Zenject::StaticMemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool {
    public:
    // private System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> _onSpawnMethod
    // Offset: 0x0
    System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod;
    // public System.Void .ctor(System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0x15DF058
    static StaticMemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>* New_ctor(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      return (StaticMemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StaticMemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>*>::get(), onSpawnMethod, onDespawnedMethod));
    }
    // public System.Void set_OnSpawnMethod(System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> value)
    // Offset: 0x15DF0B4
    void set_OnSpawnMethod(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_OnSpawnMethod", value));
    }
    // public TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0x15DF0BC
    TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", p1, p2, p3, p4));
    }
  }; // Zenject.StaticMemoryPool`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_5, "Zenject", "StaticMemoryPool`5");
#pragma pack(pop)