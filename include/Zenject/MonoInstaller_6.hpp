// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoInstaller`6<TDerived, TParam1, TParam2, TParam3, TParam4, TParam5>
  template<typename TDerived, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class MonoInstaller_6;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoInstaller`6
  template<typename TDerived, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class MonoInstaller_6 : public Zenject::MonoInstallerBase {
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0x15D251C
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_6<TDerived, TParam1, TParam2, TParam3, TParam4, TParam5>*>::get(), "InstallFromResource", container, p1, p2, p3, p4, p5));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0x15D2624
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_6<TDerived, TParam1, TParam2, TParam3, TParam4, TParam5>*>::get(), "InstallFromResource", resourcePath, container, p1, p2, p3, p4, p5));
    }
    // public System.Void .ctor()
    // Offset: 0x15D2758
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoInstaller_6<TDerived, TParam1, TParam2, TParam3, TParam4, TParam5>* New_ctor() {
      return (MonoInstaller_6<TDerived, TParam1, TParam2, TParam3, TParam4, TParam5>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_6<TDerived, TParam1, TParam2, TParam3, TParam4, TParam5>*>::get()));
    }
  }; // Zenject.MonoInstaller`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_6, "Zenject", "MonoInstaller`6");
#pragma pack(pop)