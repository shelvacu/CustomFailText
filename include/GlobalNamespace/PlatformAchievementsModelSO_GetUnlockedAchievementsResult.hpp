// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformAchievementsModelSO/GetUnlockedAchievementsResult
  struct PlatformAchievementsModelSO::GetUnlockedAchievementsResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult OK
    static constexpr const int OK = 0;
    // Get static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult OK
    static GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult _get_OK();
    // Set static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult OK
    static void _set_OK(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult value);
    // static field const value: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult Failed
    static GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult _get_Failed();
    // Set static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult Failed
    static void _set_Failed(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult value);
    // Creating value type constructor for type: GetUnlockedAchievementsResult
    GetUnlockedAchievementsResult(int value_ = {}) : value{value_} {}
  }; // PlatformAchievementsModelSO/GetUnlockedAchievementsResult
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult, "", "PlatformAchievementsModelSO/GetUnlockedAchievementsResult");
#pragma pack(pop)