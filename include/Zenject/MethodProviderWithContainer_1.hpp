// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MethodProviderWithContainer`1
  template<typename TValue>
  class MethodProviderWithContainer_1 : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // private readonly System.Func`2<Zenject.DiContainer,TValue> _method
    // Offset: 0x0
    System::Func_2<Zenject::DiContainer*, TValue>* method;
    // public System.Void .ctor(System.Func`2<Zenject.DiContainer,TValue> method)
    // Offset: 0x15CF070
    static MethodProviderWithContainer_1<TValue>* New_ctor(System::Func_2<Zenject::DiContainer*, TValue>* method) {
      return (MethodProviderWithContainer_1<TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MethodProviderWithContainer_1<TValue>*>::get(), method));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x15CF0AC
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x15CF0B4
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x15CF0BC
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x15CF130
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
    }
  }; // Zenject.MethodProviderWithContainer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderWithContainer_1, "Zenject", "MethodProviderWithContainer`1");
#pragma pack(pop)