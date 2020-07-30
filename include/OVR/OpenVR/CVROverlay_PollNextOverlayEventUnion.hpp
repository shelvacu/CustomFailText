// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.CVROverlay
#include "OVR/OpenVR/CVROverlay.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVROverlay/PollNextOverlayEventUnion
  struct CVROverlay::PollNextOverlayEventUnion : public System::ValueType {
    public:
    // public OVR.OpenVR.IVROverlay/_PollNextOverlayEvent pPollNextOverlayEvent
    // Offset: 0x0
    OVR::OpenVR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent;
    // public OVR.OpenVR.CVROverlay/_PollNextOverlayEventPacked pPollNextOverlayEventPacked
    // Offset: 0x0
    OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
    // Creating value type constructor for type: PollNextOverlayEventUnion
    PollNextOverlayEventUnion(OVR::OpenVR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent_ = {}, OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked_ = {}) : pPollNextOverlayEvent{pPollNextOverlayEvent_}, pPollNextOverlayEventPacked{pPollNextOverlayEventPacked_} {}
  }; // OVR.OpenVR.CVROverlay/PollNextOverlayEventUnion
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVROverlay::PollNextOverlayEventUnion, "OVR.OpenVR", "CVROverlay/PollNextOverlayEventUnion");
#pragma pack(pop)