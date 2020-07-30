// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:09 PM
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
  // Autogenerated type: Valve.VR.IVRDriverManager
  struct IVRDriverManager : public System::ValueType {
    public:
    // Nested type: Valve::VR::IVRDriverManager::_GetDriverCount
    class _GetDriverCount;
    // Nested type: Valve::VR::IVRDriverManager::_GetDriverName
    class _GetDriverName;
    // Valve.VR.IVRDriverManager/_GetDriverCount GetDriverCount
    // Offset: 0x0
    Valve::VR::IVRDriverManager::_GetDriverCount* GetDriverCount;
    // Valve.VR.IVRDriverManager/_GetDriverName GetDriverName
    // Offset: 0x8
    Valve::VR::IVRDriverManager::_GetDriverName* GetDriverName;
    // Creating value type constructor for type: IVRDriverManager
    IVRDriverManager(Valve::VR::IVRDriverManager::_GetDriverCount* GetDriverCount_ = {}, Valve::VR::IVRDriverManager::_GetDriverName* GetDriverName_ = {}) : GetDriverCount{GetDriverCount_}, GetDriverName{GetDriverName_} {}
  }; // Valve.VR.IVRDriverManager
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRDriverManager, "Valve.VR", "IVRDriverManager");
#pragma pack(pop)