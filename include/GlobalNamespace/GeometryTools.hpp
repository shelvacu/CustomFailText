// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GeometryTools
  class GeometryTools : public ::Il2CppObject {
    public:
    // static public System.Boolean ThreePointsToBox(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, UnityEngine.Vector3 center, UnityEngine.Vector3 halfSize, UnityEngine.Quaternion orientation)
    // Offset: 0xC9FF3C
    static bool ThreePointsToBox(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Vector3& center, UnityEngine::Vector3& halfSize, UnityEngine::Quaternion& orientation);
    // public System.Void .ctor()
    // Offset: 0xCA0320
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GeometryTools* New_ctor();
  }; // GeometryTools
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GeometryTools*, "", "GeometryTools");
#pragma pack(pop)