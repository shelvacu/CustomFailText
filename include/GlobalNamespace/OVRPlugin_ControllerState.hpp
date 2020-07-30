// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/ControllerState
  struct OVRPlugin::ControllerState : public System::ValueType {
    public:
    // public System.UInt32 ConnectedControllers
    // Offset: 0x0
    uint ConnectedControllers;
    // public System.UInt32 Buttons
    // Offset: 0x4
    uint Buttons;
    // public System.UInt32 Touches
    // Offset: 0x8
    uint Touches;
    // public System.UInt32 NearTouches
    // Offset: 0xC
    uint NearTouches;
    // public System.Single LIndexTrigger
    // Offset: 0x10
    float LIndexTrigger;
    // public System.Single RIndexTrigger
    // Offset: 0x14
    float RIndexTrigger;
    // public System.Single LHandTrigger
    // Offset: 0x18
    float LHandTrigger;
    // public System.Single RHandTrigger
    // Offset: 0x1C
    float RHandTrigger;
    // public OVRPlugin/Vector2f LThumbstick
    // Offset: 0x20
    GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // public OVRPlugin/Vector2f RThumbstick
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // Creating value type constructor for type: ControllerState
    ControllerState(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}) : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_} {}
  }; // OVRPlugin/ControllerState
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::ControllerState, "", "OVRPlugin/ControllerState");
#pragma pack(pop)