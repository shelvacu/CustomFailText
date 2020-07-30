// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PointLight
  class PointLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PointLightWithIds
  class PointLightWithIds : public GlobalNamespace::LightWithIds {
    public:
    // private PointLight _pointLight
    // Offset: 0x50
    GlobalNamespace::PointLight* pointLight;
    // protected System.Void LateUpdate()
    // Offset: 0x1816574
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x18165A4
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PointLightWithIds* New_ctor();
  }; // PointLightWithIds
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLightWithIds*, "", "PointLightWithIds");
#pragma pack(pop)