// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.FactoryToChoiceBinder`1
#include "Zenject/FactoryToChoiceBinder_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
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
  // Autogenerated type: Zenject.FactoryArgumentsToChoiceBinder`1
  template<typename TContract>
  class FactoryArgumentsToChoiceBinder_1 : public Zenject::FactoryToChoiceBinder_1<TContract> {
    public:
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(T param)
    // Offset: 0x13D7898
    template<class T>
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(T param) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, param));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2)
    // Offset: 0x13D783C
    template<class TParam1, class TParam2>
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, param1, param2));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0x13D77DC
    template<class TParam1, class TParam2, class TParam3>
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, param1, param2, param3));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0x13D7778
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, param1, param2, param3, param4));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0x13D7710
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, param1, param2, param3, param4, param5));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6)
    // Offset: 0x13D76A4
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, param1, param2, param3, param4, param5, param6));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArguments(System.Object[] args)
    // Offset: 0x117CED8
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(::Array<::Il2CppObject*>* args) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArguments", args));
    }
    // public Zenject.FactoryToChoiceBinder`1<TContract> WithFactoryArgumentsExplicit(System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0x117CF24
    Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArgs) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::FactoryToChoiceBinder_1<TContract>*>(this, "WithFactoryArgumentsExplicit", extraArgs));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x117CEB4
    // Implemented from: Zenject.FactoryToChoiceBinder`1
    // Base method: System.Void FactoryToChoiceBinder`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryFromBinder`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryArgumentsToChoiceBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryArgumentsToChoiceBinder_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo));
    }
  }; // Zenject.FactoryArgumentsToChoiceBinder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryArgumentsToChoiceBinder_1, "Zenject", "FactoryArgumentsToChoiceBinder`1");
#pragma pack(pop)