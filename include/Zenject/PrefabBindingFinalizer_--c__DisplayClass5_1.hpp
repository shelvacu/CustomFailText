// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.PrefabBindingFinalizer
#include "Zenject/PrefabBindingFinalizer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabInstantiatorCached
  class PrefabInstantiatorCached;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_1
  class PrefabBindingFinalizer::$$c__DisplayClass5_1 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiatorCached prefabCreator
    // Offset: 0x10
    Zenject::PrefabInstantiatorCached* prefabCreator;
    // public Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_0 CS$<>8__locals1
    // Offset: 0x18
    Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_0* CS$$$8__locals1;
    // Zenject.IProvider <FinalizeBindingConcrete>b__1(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0xFAED20
    Zenject::IProvider* $FinalizeBindingConcrete$b__1(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0xFAE88C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabBindingFinalizer::$$c__DisplayClass5_1* New_ctor();
  }; // Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_1
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_1");
#pragma pack(pop)