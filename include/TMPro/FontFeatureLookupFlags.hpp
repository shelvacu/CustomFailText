// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
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
  // Autogenerated type: TMPro.FontFeatureLookupFlags
  struct FontFeatureLookupFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static constexpr const int IgnoreLigatures = 4;
    // Get static field: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static TMPro::FontFeatureLookupFlags _get_IgnoreLigatures();
    // Set static field: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static void _set_IgnoreLigatures(TMPro::FontFeatureLookupFlags value);
    // static field const value: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static constexpr const int IgnoreSpacingAdjustments = 256;
    // Get static field: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static TMPro::FontFeatureLookupFlags _get_IgnoreSpacingAdjustments();
    // Set static field: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static void _set_IgnoreSpacingAdjustments(TMPro::FontFeatureLookupFlags value);
    // Creating value type constructor for type: FontFeatureLookupFlags
    FontFeatureLookupFlags(int value_ = {}) : value{value_} {}
  }; // TMPro.FontFeatureLookupFlags
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontFeatureLookupFlags, "TMPro", "FontFeatureLookupFlags");
#pragma pack(pop)