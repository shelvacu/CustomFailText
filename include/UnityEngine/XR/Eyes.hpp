// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.Eyes
  struct Eyes : public System::ValueType, public System::IEquatable_1<UnityEngine::XR::Eyes> {
    public:
    // private System.UInt64 m_DeviceId
    // Offset: 0x0
    uint64_t m_DeviceId;
    // private System.UInt32 m_FeatureIndex
    // Offset: 0x8
    uint m_FeatureIndex;
    // Creating value type constructor for type: Eyes
    Eyes(uint64_t m_DeviceId_ = {}, uint m_FeatureIndex_ = {}) : m_DeviceId{m_DeviceId_}, m_FeatureIndex{m_FeatureIndex_} {}
    // System.UInt64 get_deviceId()
    // Offset: 0xA5B1B8
    uint64_t get_deviceId();
    // System.UInt32 get_featureIndex()
    // Offset: 0xA5B1C0
    uint get_featureIndex();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA5B1C8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.Eyes other)
    // Offset: 0xA5B1D0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.XR.Eyes other)
    bool Equals(UnityEngine::XR::Eyes other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA5B1F4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.Eyes
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Eyes, "UnityEngine.XR", "Eyes");
#pragma pack(pop)