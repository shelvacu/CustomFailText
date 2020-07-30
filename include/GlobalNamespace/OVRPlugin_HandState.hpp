// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/HandStatus
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/Posef
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/HandFingerPinch
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/TrackingConfidence
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/HandState
  struct OVRPlugin::HandState : public System::ValueType {
    public:
    // public OVRPlugin/HandStatus Status
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::HandStatus Status;
    // public OVRPlugin/Posef RootPose
    // Offset: 0x4
    GlobalNamespace::OVRPlugin::Posef RootPose;
    // public OVRPlugin/Quatf[] BoneRotations
    // Offset: 0x20
    ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations;
    // public OVRPlugin/HandFingerPinch Pinches
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::HandFingerPinch Pinches;
    // public System.Single[] PinchStrength
    // Offset: 0x30
    ::Array<float>* PinchStrength;
    // public OVRPlugin/Posef PointerPose
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::Posef PointerPose;
    // public System.Single HandScale
    // Offset: 0x54
    float HandScale;
    // public OVRPlugin/TrackingConfidence HandConfidence
    // Offset: 0x58
    GlobalNamespace::OVRPlugin::TrackingConfidence HandConfidence;
    // public OVRPlugin/TrackingConfidence[] FingerConfidences
    // Offset: 0x60
    ::Array<GlobalNamespace::OVRPlugin::TrackingConfidence>* FingerConfidences;
    // public System.Double RequestedTimeStamp
    // Offset: 0x68
    double RequestedTimeStamp;
    // public System.Double SampleTimeStamp
    // Offset: 0x70
    double SampleTimeStamp;
    // Creating value type constructor for type: HandState
    HandState(GlobalNamespace::OVRPlugin::HandStatus Status_ = {}, GlobalNamespace::OVRPlugin::Posef RootPose_ = {}, ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations_ = {}, GlobalNamespace::OVRPlugin::HandFingerPinch Pinches_ = {}, ::Array<float>* PinchStrength_ = {}, GlobalNamespace::OVRPlugin::Posef PointerPose_ = {}, float HandScale_ = {}, GlobalNamespace::OVRPlugin::TrackingConfidence HandConfidence_ = {}, ::Array<GlobalNamespace::OVRPlugin::TrackingConfidence>* FingerConfidences_ = {}, double RequestedTimeStamp_ = {}, double SampleTimeStamp_ = {}) : Status{Status_}, RootPose{RootPose_}, BoneRotations{BoneRotations_}, Pinches{Pinches_}, PinchStrength{PinchStrength_}, PointerPose{PointerPose_}, HandScale{HandScale_}, HandConfidence{HandConfidence_}, FingerConfidences{FingerConfidences_}, RequestedTimeStamp{RequestedTimeStamp_}, SampleTimeStamp{SampleTimeStamp_} {}
  }; // OVRPlugin/HandState
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::HandState, "", "OVRPlugin/HandState");
#pragma pack(pop)