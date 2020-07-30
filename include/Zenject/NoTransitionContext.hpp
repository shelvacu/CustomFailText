// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: NoTransitionInstaller
  class NoTransitionInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.NoTransitionContext
  class NoTransitionContext : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.NoTransitionInstaller _noScenesTransitionInstaller
    // Offset: 0x18
    Zenject::NoTransitionInstaller* noScenesTransitionInstaller;
    // public System.Action`1<Zenject.DiContainer> get_installMethod()
    // Offset: 0xFAC9B0
    System::Action_1<Zenject::DiContainer*>* get_installMethod();
    // protected System.Void Awake()
    // Offset: 0xFACA30
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xFACAB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoTransitionContext* New_ctor();
  }; // Zenject.NoTransitionContext
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoTransitionContext*, "Zenject", "NoTransitionContext");
#pragma pack(pop)