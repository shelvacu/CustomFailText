// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
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
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.FontStyles
  struct FontStyles : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.FontStyles Normal
    static constexpr const int Normal = 0;
    // Get static field: static public TMPro.FontStyles Normal
    static TMPro::FontStyles _get_Normal();
    // Set static field: static public TMPro.FontStyles Normal
    static void _set_Normal(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Bold
    static constexpr const int Bold = 1;
    // Get static field: static public TMPro.FontStyles Bold
    static TMPro::FontStyles _get_Bold();
    // Set static field: static public TMPro.FontStyles Bold
    static void _set_Bold(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Italic
    static constexpr const int Italic = 2;
    // Get static field: static public TMPro.FontStyles Italic
    static TMPro::FontStyles _get_Italic();
    // Set static field: static public TMPro.FontStyles Italic
    static void _set_Italic(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Underline
    static constexpr const int Underline = 4;
    // Get static field: static public TMPro.FontStyles Underline
    static TMPro::FontStyles _get_Underline();
    // Set static field: static public TMPro.FontStyles Underline
    static void _set_Underline(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles LowerCase
    static constexpr const int LowerCase = 8;
    // Get static field: static public TMPro.FontStyles LowerCase
    static TMPro::FontStyles _get_LowerCase();
    // Set static field: static public TMPro.FontStyles LowerCase
    static void _set_LowerCase(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles UpperCase
    static constexpr const int UpperCase = 16;
    // Get static field: static public TMPro.FontStyles UpperCase
    static TMPro::FontStyles _get_UpperCase();
    // Set static field: static public TMPro.FontStyles UpperCase
    static void _set_UpperCase(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles SmallCaps
    static constexpr const int SmallCaps = 32;
    // Get static field: static public TMPro.FontStyles SmallCaps
    static TMPro::FontStyles _get_SmallCaps();
    // Set static field: static public TMPro.FontStyles SmallCaps
    static void _set_SmallCaps(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Strikethrough
    static constexpr const int Strikethrough = 64;
    // Get static field: static public TMPro.FontStyles Strikethrough
    static TMPro::FontStyles _get_Strikethrough();
    // Set static field: static public TMPro.FontStyles Strikethrough
    static void _set_Strikethrough(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Superscript
    static constexpr const int Superscript = 128;
    // Get static field: static public TMPro.FontStyles Superscript
    static TMPro::FontStyles _get_Superscript();
    // Set static field: static public TMPro.FontStyles Superscript
    static void _set_Superscript(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Subscript
    static constexpr const int Subscript = 256;
    // Get static field: static public TMPro.FontStyles Subscript
    static TMPro::FontStyles _get_Subscript();
    // Set static field: static public TMPro.FontStyles Subscript
    static void _set_Subscript(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Highlight
    static constexpr const int Highlight = 512;
    // Get static field: static public TMPro.FontStyles Highlight
    static TMPro::FontStyles _get_Highlight();
    // Set static field: static public TMPro.FontStyles Highlight
    static void _set_Highlight(TMPro::FontStyles value);
    // Creating value type constructor for type: FontStyles
    FontStyles(int value_ = {}) : value{value_} {}
  }; // TMPro.FontStyles
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontStyles, "TMPro", "FontStyles");
#pragma pack(pop)