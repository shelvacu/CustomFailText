// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder
  class IdScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder WithId(System.Object identifier)
    // Offset: 0xF24F0C
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithId(::Il2CppObject* identifier);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xF24F04
    // Implemented from: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void ScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void InstantiateCallbackConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    static IdScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo);
  }; // Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "IdScopeConcreteIdArgConditionCopyNonLazyBinder");
#pragma pack(pop)