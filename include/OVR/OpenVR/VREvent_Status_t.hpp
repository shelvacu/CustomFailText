// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_Status_t
  struct VREvent_Status_t : public System::ValueType {
    public:
    // public System.UInt32 statusState
    // Offset: 0x0
    uint statusState;
    // Creating value type constructor for type: VREvent_Status_t
    VREvent_Status_t(uint statusState_ = {}) : statusState{statusState_} {}
  }; // OVR.OpenVR.VREvent_Status_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Status_t, "OVR.OpenVR", "VREvent_Status_t");
#pragma pack(pop)