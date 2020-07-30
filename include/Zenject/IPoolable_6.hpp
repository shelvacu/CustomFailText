// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IPoolable`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class IPoolable_6 {
    public:
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned"));
    }
    // public System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", p1, p2, p3, p4, p5, p6));
    }
  }; // Zenject.IPoolable`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_6, "Zenject", "IPoolable`6");
#pragma pack(pop)