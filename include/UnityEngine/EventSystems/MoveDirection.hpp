// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:41 PM
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
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.MoveDirection
  struct MoveDirection : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.EventSystems.MoveDirection Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.EventSystems.MoveDirection Left
    static UnityEngine::EventSystems::MoveDirection _get_Left();
    // Set static field: static public UnityEngine.EventSystems.MoveDirection Left
    static void _set_Left(UnityEngine::EventSystems::MoveDirection value);
    // static field const value: static public UnityEngine.EventSystems.MoveDirection Up
    static constexpr const int Up = 1;
    // Get static field: static public UnityEngine.EventSystems.MoveDirection Up
    static UnityEngine::EventSystems::MoveDirection _get_Up();
    // Set static field: static public UnityEngine.EventSystems.MoveDirection Up
    static void _set_Up(UnityEngine::EventSystems::MoveDirection value);
    // static field const value: static public UnityEngine.EventSystems.MoveDirection Right
    static constexpr const int Right = 2;
    // Get static field: static public UnityEngine.EventSystems.MoveDirection Right
    static UnityEngine::EventSystems::MoveDirection _get_Right();
    // Set static field: static public UnityEngine.EventSystems.MoveDirection Right
    static void _set_Right(UnityEngine::EventSystems::MoveDirection value);
    // static field const value: static public UnityEngine.EventSystems.MoveDirection Down
    static constexpr const int Down = 3;
    // Get static field: static public UnityEngine.EventSystems.MoveDirection Down
    static UnityEngine::EventSystems::MoveDirection _get_Down();
    // Set static field: static public UnityEngine.EventSystems.MoveDirection Down
    static void _set_Down(UnityEngine::EventSystems::MoveDirection value);
    // static field const value: static public UnityEngine.EventSystems.MoveDirection None
    static constexpr const int None = 4;
    // Get static field: static public UnityEngine.EventSystems.MoveDirection None
    static UnityEngine::EventSystems::MoveDirection _get_None();
    // Set static field: static public UnityEngine.EventSystems.MoveDirection None
    static void _set_None(UnityEngine::EventSystems::MoveDirection value);
    // Creating value type constructor for type: MoveDirection
    MoveDirection(int value_ = {}) : value{value_} {}
  }; // UnityEngine.EventSystems.MoveDirection
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::MoveDirection, "UnityEngine.EventSystems", "MoveDirection");
#pragma pack(pop)