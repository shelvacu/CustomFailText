// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Image/Origin90
  struct Image::Origin90 : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.UI.Image/Origin90 BottomLeft
    static constexpr const int BottomLeft = 0;
    // Get static field: static public UnityEngine.UI.Image/Origin90 BottomLeft
    static UnityEngine::UI::Image::Origin90 _get_BottomLeft();
    // Set static field: static public UnityEngine.UI.Image/Origin90 BottomLeft
    static void _set_BottomLeft(UnityEngine::UI::Image::Origin90 value);
    // static field const value: static public UnityEngine.UI.Image/Origin90 TopLeft
    static constexpr const int TopLeft = 1;
    // Get static field: static public UnityEngine.UI.Image/Origin90 TopLeft
    static UnityEngine::UI::Image::Origin90 _get_TopLeft();
    // Set static field: static public UnityEngine.UI.Image/Origin90 TopLeft
    static void _set_TopLeft(UnityEngine::UI::Image::Origin90 value);
    // static field const value: static public UnityEngine.UI.Image/Origin90 TopRight
    static constexpr const int TopRight = 2;
    // Get static field: static public UnityEngine.UI.Image/Origin90 TopRight
    static UnityEngine::UI::Image::Origin90 _get_TopRight();
    // Set static field: static public UnityEngine.UI.Image/Origin90 TopRight
    static void _set_TopRight(UnityEngine::UI::Image::Origin90 value);
    // static field const value: static public UnityEngine.UI.Image/Origin90 BottomRight
    static constexpr const int BottomRight = 3;
    // Get static field: static public UnityEngine.UI.Image/Origin90 BottomRight
    static UnityEngine::UI::Image::Origin90 _get_BottomRight();
    // Set static field: static public UnityEngine.UI.Image/Origin90 BottomRight
    static void _set_BottomRight(UnityEngine::UI::Image::Origin90 value);
    // Creating value type constructor for type: Origin90
    Origin90(int value_ = {}) : value{value_} {}
  }; // UnityEngine.UI.Image/Origin90
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image::Origin90, "UnityEngine.UI", "Image/Origin90");
#pragma pack(pop)