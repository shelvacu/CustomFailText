// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ValidationUtil
#include "Zenject/ValidationUtil.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ValidationUtil/<>c
  class ValidationUtil::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.ValidationUtil/<>c <>9
    static Zenject::ValidationUtil::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.ValidationUtil/<>c <>9
    static void _set_$$9(Zenject::ValidationUtil::$$c* value);
    // Get static field: static public System.Func`2<System.Type,Zenject.TypeValuePair> <>9__0_0
    static System::Func_2<System::Type*, Zenject::TypeValuePair>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<System.Type,Zenject.TypeValuePair> <>9__0_0
    static void _set_$$9__0_0(System::Func_2<System::Type*, Zenject::TypeValuePair>* value);
    // static private System.Void .cctor()
    // Offset: 0x1928620
    static void _cctor();
    // Zenject.TypeValuePair <CreateDefaultArgs>b__0_0(System.Type x)
    // Offset: 0x1928690
    Zenject::TypeValuePair $CreateDefaultArgs$b__0_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x1928688
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ValidationUtil::$$c* New_ctor();
  }; // Zenject.ValidationUtil/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationUtil::$$c*, "Zenject", "ValidationUtil/<>c");
#pragma pack(pop)