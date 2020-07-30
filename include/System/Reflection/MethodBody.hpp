// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:31 PM
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ExceptionHandlingClause
  class ExceptionHandlingClause;
  // Forward declaring type: LocalVariableInfo
  class LocalVariableInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MethodBody
  class MethodBody : public ::Il2CppObject {
    public:
    // private System.Reflection.ExceptionHandlingClause[] clauses
    // Offset: 0x10
    ::Array<System::Reflection::ExceptionHandlingClause*>* clauses;
    // private System.Reflection.LocalVariableInfo[] locals
    // Offset: 0x18
    ::Array<System::Reflection::LocalVariableInfo*>* locals;
    // private System.Byte[] il
    // Offset: 0x20
    ::Array<uint8_t>* il;
    // private System.Boolean init_locals
    // Offset: 0x28
    bool init_locals;
    // private System.Int32 sig_token
    // Offset: 0x2C
    int sig_token;
    // private System.Int32 max_stack
    // Offset: 0x30
    int max_stack;
    // public System.Byte[] GetILAsByteArray()
    // Offset: 0x1355F18
    ::Array<uint8_t>* GetILAsByteArray();
    // protected System.Void .ctor()
    // Offset: 0x1355F14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MethodBody* New_ctor();
  }; // System.Reflection.MethodBody
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodBody*, "System.Reflection", "MethodBody");
#pragma pack(pop)