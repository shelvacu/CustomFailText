// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:17 PM
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
  // Autogenerated type: UnityEngine.ProBuilder.ProjectionAxis
  struct ProjectionAxis : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.ProjectionAxis X
    static constexpr const int X = 0;
    // Get static field: static public UnityEngine.ProBuilder.ProjectionAxis X
    static UnityEngine::ProBuilder::ProjectionAxis _get_X();
    // Set static field: static public UnityEngine.ProBuilder.ProjectionAxis X
    static void _set_X(UnityEngine::ProBuilder::ProjectionAxis value);
    // static field const value: static public UnityEngine.ProBuilder.ProjectionAxis Y
    static constexpr const int Y = 1;
    // Get static field: static public UnityEngine.ProBuilder.ProjectionAxis Y
    static UnityEngine::ProBuilder::ProjectionAxis _get_Y();
    // Set static field: static public UnityEngine.ProBuilder.ProjectionAxis Y
    static void _set_Y(UnityEngine::ProBuilder::ProjectionAxis value);
    // static field const value: static public UnityEngine.ProBuilder.ProjectionAxis Z
    static constexpr const int Z = 2;
    // Get static field: static public UnityEngine.ProBuilder.ProjectionAxis Z
    static UnityEngine::ProBuilder::ProjectionAxis _get_Z();
    // Set static field: static public UnityEngine.ProBuilder.ProjectionAxis Z
    static void _set_Z(UnityEngine::ProBuilder::ProjectionAxis value);
    // static field const value: static public UnityEngine.ProBuilder.ProjectionAxis XNegative
    static constexpr const int XNegative = 3;
    // Get static field: static public UnityEngine.ProBuilder.ProjectionAxis XNegative
    static UnityEngine::ProBuilder::ProjectionAxis _get_XNegative();
    // Set static field: static public UnityEngine.ProBuilder.ProjectionAxis XNegative
    static void _set_XNegative(UnityEngine::ProBuilder::ProjectionAxis value);
    // static field const value: static public UnityEngine.ProBuilder.ProjectionAxis YNegative
    static constexpr const int YNegative = 4;
    // Get static field: static public UnityEngine.ProBuilder.ProjectionAxis YNegative
    static UnityEngine::ProBuilder::ProjectionAxis _get_YNegative();
    // Set static field: static public UnityEngine.ProBuilder.ProjectionAxis YNegative
    static void _set_YNegative(UnityEngine::ProBuilder::ProjectionAxis value);
    // static field const value: static public UnityEngine.ProBuilder.ProjectionAxis ZNegative
    static constexpr const int ZNegative = 5;
    // Get static field: static public UnityEngine.ProBuilder.ProjectionAxis ZNegative
    static UnityEngine::ProBuilder::ProjectionAxis _get_ZNegative();
    // Set static field: static public UnityEngine.ProBuilder.ProjectionAxis ZNegative
    static void _set_ZNegative(UnityEngine::ProBuilder::ProjectionAxis value);
    // Creating value type constructor for type: ProjectionAxis
    ProjectionAxis(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.ProjectionAxis
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProjectionAxis, "UnityEngine.ProBuilder", "ProjectionAxis");
#pragma pack(pop)