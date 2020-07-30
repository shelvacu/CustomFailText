// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:06 PM
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRExtendedDisplay
  struct IVRExtendedDisplay : public System::ValueType {
    public:
    // Nested type: Valve::VR::IVRExtendedDisplay::_GetWindowBounds
    class _GetWindowBounds;
    // Nested type: Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport
    class _GetEyeOutputViewport;
    // Nested type: Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // Valve.VR.IVRExtendedDisplay/_GetWindowBounds GetWindowBounds
    // Offset: 0x0
    Valve::VR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds;
    // Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport GetEyeOutputViewport
    // Offset: 0x8
    Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport;
    // Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo GetDXGIOutputInfo
    // Offset: 0x10
    Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Creating value type constructor for type: IVRExtendedDisplay
    IVRExtendedDisplay(Valve::VR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds_ = {}, Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport_ = {}, Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}) : GetWindowBounds{GetWindowBounds_}, GetEyeOutputViewport{GetEyeOutputViewport_}, GetDXGIOutputInfo{GetDXGIOutputInfo_} {}
  }; // Valve.VR.IVRExtendedDisplay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay, "Valve.VR", "IVRExtendedDisplay");
#pragma pack(pop)