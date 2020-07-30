// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.InputPoseActionData_t
  struct InputPoseActionData_t : public System::ValueType {
    public:
    // public System.Boolean bActive
    // Offset: 0x0
    bool bActive;
    // public System.UInt64 activeOrigin
    // Offset: 0x8
    uint64_t activeOrigin;
    // public OVR.OpenVR.TrackedDevicePose_t pose
    // Offset: 0x10
    OVR::OpenVR::TrackedDevicePose_t pose;
    // Creating value type constructor for type: InputPoseActionData_t
    InputPoseActionData_t(bool bActive_ = {}, uint64_t activeOrigin_ = {}, OVR::OpenVR::TrackedDevicePose_t pose_ = {}) : bActive{bActive_}, activeOrigin{activeOrigin_}, pose{pose_} {}
  }; // OVR.OpenVR.InputPoseActionData_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputPoseActionData_t, "OVR.OpenVR", "InputPoseActionData_t");
#pragma pack(pop)