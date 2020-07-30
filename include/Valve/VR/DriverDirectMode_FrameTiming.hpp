// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.DriverDirectMode_FrameTiming
  struct DriverDirectMode_FrameTiming : public System::ValueType {
    public:
    // public System.UInt32 m_nSize
    // Offset: 0x0
    uint m_nSize;
    // public System.UInt32 m_nNumFramePresents
    // Offset: 0x4
    uint m_nNumFramePresents;
    // public System.UInt32 m_nNumMisPresented
    // Offset: 0x8
    uint m_nNumMisPresented;
    // public System.UInt32 m_nNumDroppedFrames
    // Offset: 0xC
    uint m_nNumDroppedFrames;
    // public System.UInt32 m_nReprojectionFlags
    // Offset: 0x10
    uint m_nReprojectionFlags;
    // Creating value type constructor for type: DriverDirectMode_FrameTiming
    DriverDirectMode_FrameTiming(uint m_nSize_ = {}, uint m_nNumFramePresents_ = {}, uint m_nNumMisPresented_ = {}, uint m_nNumDroppedFrames_ = {}, uint m_nReprojectionFlags_ = {}) : m_nSize{m_nSize_}, m_nNumFramePresents{m_nNumFramePresents_}, m_nNumMisPresented{m_nNumMisPresented_}, m_nNumDroppedFrames{m_nNumDroppedFrames_}, m_nReprojectionFlags{m_nReprojectionFlags_} {}
  }; // Valve.VR.DriverDirectMode_FrameTiming
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::DriverDirectMode_FrameTiming, "Valve.VR", "DriverDirectMode_FrameTiming");
#pragma pack(pop)