// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.CustomConstantAttribute
  class CustomConstantAttribute : public System::Attribute {
    public:
    // public System.Object get_Value()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_Value();
    // protected System.Void .ctor()
    // Offset: 0x114FAD0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static CustomConstantAttribute* New_ctor();
  }; // System.Runtime.CompilerServices.CustomConstantAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CustomConstantAttribute*, "System.Runtime.CompilerServices", "CustomConstantAttribute");
#pragma pack(pop)