// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:34 PM
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
  // Autogenerated type: UnityEngine.IMECompositionMode
  struct IMECompositionMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.IMECompositionMode Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.IMECompositionMode Auto
    static UnityEngine::IMECompositionMode _get_Auto();
    // Set static field: static public UnityEngine.IMECompositionMode Auto
    static void _set_Auto(UnityEngine::IMECompositionMode value);
    // static field const value: static public UnityEngine.IMECompositionMode On
    static constexpr const int On = 1;
    // Get static field: static public UnityEngine.IMECompositionMode On
    static UnityEngine::IMECompositionMode _get_On();
    // Set static field: static public UnityEngine.IMECompositionMode On
    static void _set_On(UnityEngine::IMECompositionMode value);
    // static field const value: static public UnityEngine.IMECompositionMode Off
    static constexpr const int Off = 2;
    // Get static field: static public UnityEngine.IMECompositionMode Off
    static UnityEngine::IMECompositionMode _get_Off();
    // Set static field: static public UnityEngine.IMECompositionMode Off
    static void _set_Off(UnityEngine::IMECompositionMode value);
    // Creating value type constructor for type: IMECompositionMode
    IMECompositionMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.IMECompositionMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IMECompositionMode, "UnityEngine", "IMECompositionMode");
#pragma pack(pop)