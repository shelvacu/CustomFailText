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
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphPackingMode
  struct GlyphPackingMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestShortSideFit
    static constexpr const int BestShortSideFit = 0;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestShortSideFit
    static UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BestShortSideFit();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestShortSideFit
    static void _set_BestShortSideFit(UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestLongSideFit
    static constexpr const int BestLongSideFit = 1;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestLongSideFit
    static UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BestLongSideFit();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestLongSideFit
    static void _set_BestLongSideFit(UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestAreaFit
    static constexpr const int BestAreaFit = 2;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestAreaFit
    static UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BestAreaFit();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestAreaFit
    static void _set_BestAreaFit(UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BottomLeftRule
    static constexpr const int BottomLeftRule = 3;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BottomLeftRule
    static UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BottomLeftRule();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BottomLeftRule
    static void _set_BottomLeftRule(UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode ContactPointRule
    static constexpr const int ContactPointRule = 4;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode ContactPointRule
    static UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_ContactPointRule();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode ContactPointRule
    static void _set_ContactPointRule(UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // Creating value type constructor for type: GlyphPackingMode
    GlyphPackingMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.TextCore.LowLevel.GlyphPackingMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphPackingMode, "UnityEngine.TextCore.LowLevel", "GlyphPackingMode");
#pragma pack(pop)