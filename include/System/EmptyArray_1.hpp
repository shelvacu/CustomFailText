// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.EmptyArray`1
  template<typename T>
  class EmptyArray_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly T[] Value
    static ::Array<T>* _get_Value() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<::Array<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyArray_1<T>*>::get(), "Value")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly T[] Value
    static void _set_Value(::Array<T>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyArray_1<T>*>::get(), "Value", value));
    }
    // static private System.Void .cctor()
    // Offset: 0x17EC8D8
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyArray_1<T>*>::get(), ".cctor"));
    }
  }; // System.EmptyArray`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::EmptyArray_1, "System", "EmptyArray`1");
#pragma pack(pop)