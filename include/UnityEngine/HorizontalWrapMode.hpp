// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
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
  // Autogenerated type: UnityEngine.HorizontalWrapMode
  struct HorizontalWrapMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.HorizontalWrapMode Wrap
    static constexpr const int Wrap = 0;
    // Get static field: static public UnityEngine.HorizontalWrapMode Wrap
    static UnityEngine::HorizontalWrapMode _get_Wrap();
    // Set static field: static public UnityEngine.HorizontalWrapMode Wrap
    static void _set_Wrap(UnityEngine::HorizontalWrapMode value);
    // static field const value: static public UnityEngine.HorizontalWrapMode Overflow
    static constexpr const int Overflow = 1;
    // Get static field: static public UnityEngine.HorizontalWrapMode Overflow
    static UnityEngine::HorizontalWrapMode _get_Overflow();
    // Set static field: static public UnityEngine.HorizontalWrapMode Overflow
    static void _set_Overflow(UnityEngine::HorizontalWrapMode value);
    // Creating value type constructor for type: HorizontalWrapMode
    HorizontalWrapMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.HorizontalWrapMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HorizontalWrapMode, "UnityEngine", "HorizontalWrapMode");
#pragma pack(pop)