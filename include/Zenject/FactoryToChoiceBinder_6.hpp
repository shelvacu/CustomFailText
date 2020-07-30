// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.FactoryFromBinder`6
#include "Zenject/FactoryFromBinder_6.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: FactoryFromBinder`6 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryToChoiceBinder`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryToChoiceBinder_6 : public Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract> {
    public:
    // public Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> ToSelf()
    // Offset: 0x13A812C
    Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* ToSelf() {
      return CRASH_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "ToSelf")));
    }
    // public Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TConcrete> To()
    // Offset: 0x13D71F0
    template<class TConcrete>
    Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TConcrete>*>(this, "To", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()})));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x13A8108
    // Implemented from: Zenject.FactoryFromBinder`6
    // Base method: System.Void FactoryFromBinder`6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo));
    }
  }; // Zenject.FactoryToChoiceBinder`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_6, "Zenject", "FactoryToChoiceBinder`6");
#pragma pack(pop)