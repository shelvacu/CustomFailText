// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
// Including type: UnityEngine.XR.MeshGenerationResult
#include "UnityEngine/XR/MeshGenerationResult.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystemDescriptor
  class XRMeshSubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.XRMeshSubsystem
  class XRMeshSubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRMeshSubsystemDescriptor*> {
    public:
    // private System.Void InvokeMeshReadyDelegate(UnityEngine.XR.MeshGenerationResult result, System.Action`1<UnityEngine.XR.MeshGenerationResult> onMeshGenerationComplete)
    // Offset: 0x194C42C
    void InvokeMeshReadyDelegate(UnityEngine::XR::MeshGenerationResult result, System::Action_1<UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete);
    // public System.Void .ctor()
    // Offset: 0x194C4B8
    // Implemented from: UnityEngine.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem`1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    static XRMeshSubsystem* New_ctor();
  }; // UnityEngine.XR.XRMeshSubsystem
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
#pragma pack(pop)