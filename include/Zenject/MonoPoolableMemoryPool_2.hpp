// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`2
#include "Zenject/MemoryPool_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoPoolableMemoryPool`2
  template<typename TParam1, typename TValue>
  class MonoPoolableMemoryPool_2 : public Zenject::MemoryPool_2<TParam1, TValue> {
    public:
    // private UnityEngine.Transform _originalParent
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // protected System.Void OnCreated(TValue item)
    // Offset: 0x15D3804
    void OnCreated(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0x15D386C
    void OnDestroyed(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0x15D38F0
    void OnDespawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // public System.Void .ctor()
    // Offset: 0x15D37E0
    // Implemented from: Zenject.MemoryPool`2
    // Base method: System.Void MemoryPool`2::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoPoolableMemoryPool_2<TParam1, TValue>* New_ctor() {
      return (MonoPoolableMemoryPool_2<TParam1, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoPoolableMemoryPool_2<TParam1, TValue>*>::get()));
    }
    // protected System.Void Reinitialize(TParam1 p1, TValue item)
    // Offset: 0x15D3A64
    // Implemented from: Zenject.MemoryPool`2
    // Base method: System.Void MemoryPool`2::Reinitialize(TParam1 p1, TValue item)
    void Reinitialize(TParam1 p1, TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, item));
    }
  }; // Zenject.MonoPoolableMemoryPool`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoPoolableMemoryPool_2, "Zenject", "MonoPoolableMemoryPool`2");
#pragma pack(pop)