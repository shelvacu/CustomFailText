// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:16 PM
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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ComponentMode
  struct ComponentMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.ComponentMode Vertex
    static constexpr const int Vertex = 0;
    // Get static field: static public UnityEngine.ProBuilder.ComponentMode Vertex
    static UnityEngine::ProBuilder::ComponentMode _get_Vertex();
    // Set static field: static public UnityEngine.ProBuilder.ComponentMode Vertex
    static void _set_Vertex(UnityEngine::ProBuilder::ComponentMode value);
    // static field const value: static public UnityEngine.ProBuilder.ComponentMode Edge
    static constexpr const int Edge = 1;
    // Get static field: static public UnityEngine.ProBuilder.ComponentMode Edge
    static UnityEngine::ProBuilder::ComponentMode _get_Edge();
    // Set static field: static public UnityEngine.ProBuilder.ComponentMode Edge
    static void _set_Edge(UnityEngine::ProBuilder::ComponentMode value);
    // static field const value: static public UnityEngine.ProBuilder.ComponentMode Face
    static constexpr const int Face = 2;
    // Get static field: static public UnityEngine.ProBuilder.ComponentMode Face
    static UnityEngine::ProBuilder::ComponentMode _get_Face();
    // Set static field: static public UnityEngine.ProBuilder.ComponentMode Face
    static void _set_Face(UnityEngine::ProBuilder::ComponentMode value);
    // Creating value type constructor for type: ComponentMode
    ComponentMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.ComponentMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ComponentMode, "UnityEngine.ProBuilder", "ComponentMode");
#pragma pack(pop)