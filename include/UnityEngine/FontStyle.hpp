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
  // Autogenerated type: UnityEngine.FontStyle
  struct FontStyle : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.FontStyle Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.FontStyle Normal
    static UnityEngine::FontStyle _get_Normal();
    // Set static field: static public UnityEngine.FontStyle Normal
    static void _set_Normal(UnityEngine::FontStyle value);
    // static field const value: static public UnityEngine.FontStyle Bold
    static constexpr const int Bold = 1;
    // Get static field: static public UnityEngine.FontStyle Bold
    static UnityEngine::FontStyle _get_Bold();
    // Set static field: static public UnityEngine.FontStyle Bold
    static void _set_Bold(UnityEngine::FontStyle value);
    // static field const value: static public UnityEngine.FontStyle Italic
    static constexpr const int Italic = 2;
    // Get static field: static public UnityEngine.FontStyle Italic
    static UnityEngine::FontStyle _get_Italic();
    // Set static field: static public UnityEngine.FontStyle Italic
    static void _set_Italic(UnityEngine::FontStyle value);
    // static field const value: static public UnityEngine.FontStyle BoldAndItalic
    static constexpr const int BoldAndItalic = 3;
    // Get static field: static public UnityEngine.FontStyle BoldAndItalic
    static UnityEngine::FontStyle _get_BoldAndItalic();
    // Set static field: static public UnityEngine.FontStyle BoldAndItalic
    static void _set_BoldAndItalic(UnityEngine::FontStyle value);
    // Creating value type constructor for type: FontStyle
    FontStyle(int value_ = {}) : value{value_} {}
  }; // UnityEngine.FontStyle
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FontStyle, "UnityEngine", "FontStyle");
#pragma pack(pop)