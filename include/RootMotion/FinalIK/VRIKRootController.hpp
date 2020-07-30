// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.VRIKRootController
  class VRIKRootController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 <pelvisTargetRight>k__BackingField
    // Offset: 0x18
    UnityEngine::Vector3 pelvisTargetRight;
    // private UnityEngine.Transform pelvisTarget
    // Offset: 0x28
    UnityEngine::Transform* pelvisTarget;
    // private UnityEngine.Transform leftFootTarget
    // Offset: 0x30
    UnityEngine::Transform* leftFootTarget;
    // private UnityEngine.Transform rightFootTarget
    // Offset: 0x38
    UnityEngine::Transform* rightFootTarget;
    // private RootMotion.FinalIK.VRIK ik
    // Offset: 0x40
    RootMotion::FinalIK::VRIK* ik;
    // public UnityEngine.Vector3 get_pelvisTargetRight()
    // Offset: 0x12284D0
    UnityEngine::Vector3 get_pelvisTargetRight();
    // private System.Void set_pelvisTargetRight(UnityEngine.Vector3 value)
    // Offset: 0x12284DC
    void set_pelvisTargetRight(UnityEngine::Vector3 value);
    // private System.Void Awake()
    // Offset: 0x12284E8
    void Awake();
    // public System.Void Calibrate()
    // Offset: 0x1226F74
    void Calibrate();
    // public System.Void Calibrate(RootMotion.FinalIK.VRIKCalibrator/CalibrationData data)
    // Offset: 0x1227FFC
    void Calibrate(RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data);
    // private System.Void OnPreUpdate()
    // Offset: 0x12285E4
    void OnPreUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1228A88
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1228BA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRIKRootController* New_ctor();
  }; // RootMotion.FinalIK.VRIKRootController
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKRootController*, "RootMotion.FinalIK", "VRIKRootController");
#pragma pack(pop)