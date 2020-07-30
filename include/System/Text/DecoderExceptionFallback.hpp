// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.DecoderFallback
#include "System/Text/DecoderFallback.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.DecoderExceptionFallback
  class DecoderExceptionFallback : public System::Text::DecoderFallback {
    public:
    // public System.Void .ctor()
    // Offset: 0x12D5A08
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Void DecoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    static DecoderExceptionFallback* New_ctor();
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x12D5A18
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x12D5A7C
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x12D5A84
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12D5AE8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.DecoderExceptionFallback
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderExceptionFallback*, "System.Text", "DecoderExceptionFallback");
#pragma pack(pop)