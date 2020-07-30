// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.ETrackedDeviceClass
  struct ETrackedDeviceClass : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.ETrackedDeviceClass Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public Valve.VR.ETrackedDeviceClass Invalid
    static Valve::VR::ETrackedDeviceClass _get_Invalid();
    // Set static field: static public Valve.VR.ETrackedDeviceClass Invalid
    static void _set_Invalid(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass HMD
    static constexpr const int HMD = 1;
    // Get static field: static public Valve.VR.ETrackedDeviceClass HMD
    static Valve::VR::ETrackedDeviceClass _get_HMD();
    // Set static field: static public Valve.VR.ETrackedDeviceClass HMD
    static void _set_HMD(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass Controller
    static constexpr const int Controller = 2;
    // Get static field: static public Valve.VR.ETrackedDeviceClass Controller
    static Valve::VR::ETrackedDeviceClass _get_Controller();
    // Set static field: static public Valve.VR.ETrackedDeviceClass Controller
    static void _set_Controller(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass GenericTracker
    static constexpr const int GenericTracker = 3;
    // Get static field: static public Valve.VR.ETrackedDeviceClass GenericTracker
    static Valve::VR::ETrackedDeviceClass _get_GenericTracker();
    // Set static field: static public Valve.VR.ETrackedDeviceClass GenericTracker
    static void _set_GenericTracker(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass TrackingReference
    static constexpr const int TrackingReference = 4;
    // Get static field: static public Valve.VR.ETrackedDeviceClass TrackingReference
    static Valve::VR::ETrackedDeviceClass _get_TrackingReference();
    // Set static field: static public Valve.VR.ETrackedDeviceClass TrackingReference
    static void _set_TrackingReference(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass DisplayRedirect
    static constexpr const int DisplayRedirect = 5;
    // Get static field: static public Valve.VR.ETrackedDeviceClass DisplayRedirect
    static Valve::VR::ETrackedDeviceClass _get_DisplayRedirect();
    // Set static field: static public Valve.VR.ETrackedDeviceClass DisplayRedirect
    static void _set_DisplayRedirect(Valve::VR::ETrackedDeviceClass value);
    // Creating value type constructor for type: ETrackedDeviceClass
    ETrackedDeviceClass(int value_ = {}) : value{value_} {}
  }; // Valve.VR.ETrackedDeviceClass
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ETrackedDeviceClass, "Valve.VR", "ETrackedDeviceClass");
#pragma pack(pop)