// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVR.OpenVR.VRControllerState_t
#include "OVR/OpenVR/VRControllerState_t.hpp"
// Including type: OVRInput/OpenVRController
#include "GlobalNamespace/OVRInput_OpenVRController.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OpenVRControllerDetails
  struct OVRInput::OpenVRControllerDetails : public System::ValueType {
    public:
    // public OVR.OpenVR.VRControllerState_t state
    // Offset: 0x0
    OVR::OpenVR::VRControllerState_t state;
    // public OVRInput/OpenVRController controllerType
    // Offset: 0x40
    GlobalNamespace::OVRInput::OpenVRController controllerType;
    // public System.UInt32 deviceID
    // Offset: 0x48
    uint deviceID;
    // public UnityEngine.Vector3 localPosition
    // Offset: 0x4C
    UnityEngine::Vector3 localPosition;
    // public UnityEngine.Quaternion localOrientation
    // Offset: 0x58
    UnityEngine::Quaternion localOrientation;
    // Creating value type constructor for type: OpenVRControllerDetails
    OpenVRControllerDetails(OVR::OpenVR::VRControllerState_t state_ = {}, GlobalNamespace::OVRInput::OpenVRController controllerType_ = {}, uint deviceID_ = {}, UnityEngine::Vector3 localPosition_ = {}, UnityEngine::Quaternion localOrientation_ = {}) : state{state_}, controllerType{controllerType_}, deviceID{deviceID_}, localPosition{localPosition_}, localOrientation{localOrientation_} {}
  }; // OVRInput/OpenVRControllerDetails
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OpenVRControllerDetails, "", "OVRInput/OpenVRControllerDetails");
#pragma pack(pop)