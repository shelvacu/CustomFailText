// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.BRECORD
  struct BRECORD : public System::ValueType {
    public:
    // private System.IntPtr pvRecord
    // Offset: 0x0
    System::IntPtr pvRecord;
    // private System.IntPtr pRecInfo
    // Offset: 0x8
    System::IntPtr pRecInfo;
    // Creating value type constructor for type: BRECORD
    BRECORD(System::IntPtr pvRecord_ = {}, System::IntPtr pRecInfo_ = {}) : pvRecord{pvRecord_}, pRecInfo{pRecInfo_} {}
  }; // System.BRECORD
}
DEFINE_IL2CPP_ARG_TYPE(System::BRECORD, "System", "BRECORD");
#pragma pack(pop)