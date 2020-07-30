// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ForceMode
  struct ForceMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ForceMode Force
    static constexpr const int Force = 0;
    // Get static field: static public UnityEngine.ForceMode Force
    static UnityEngine::ForceMode _get_Force();
    // Set static field: static public UnityEngine.ForceMode Force
    static void _set_Force(UnityEngine::ForceMode value);
    // static field const value: static public UnityEngine.ForceMode Acceleration
    static constexpr const int Acceleration = 5;
    // Get static field: static public UnityEngine.ForceMode Acceleration
    static UnityEngine::ForceMode _get_Acceleration();
    // Set static field: static public UnityEngine.ForceMode Acceleration
    static void _set_Acceleration(UnityEngine::ForceMode value);
    // static field const value: static public UnityEngine.ForceMode Impulse
    static constexpr const int Impulse = 1;
    // Get static field: static public UnityEngine.ForceMode Impulse
    static UnityEngine::ForceMode _get_Impulse();
    // Set static field: static public UnityEngine.ForceMode Impulse
    static void _set_Impulse(UnityEngine::ForceMode value);
    // static field const value: static public UnityEngine.ForceMode VelocityChange
    static constexpr const int VelocityChange = 2;
    // Get static field: static public UnityEngine.ForceMode VelocityChange
    static UnityEngine::ForceMode _get_VelocityChange();
    // Set static field: static public UnityEngine.ForceMode VelocityChange
    static void _set_VelocityChange(UnityEngine::ForceMode value);
    // Creating value type constructor for type: ForceMode
    ForceMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ForceMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ForceMode, "UnityEngine", "ForceMode");
#pragma pack(pop)