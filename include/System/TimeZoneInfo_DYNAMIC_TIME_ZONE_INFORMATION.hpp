// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.TimeZoneInfo/TIME_ZONE_INFORMATION
#include "System/TimeZoneInfo_TIME_ZONE_INFORMATION.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
  struct TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION : public System::ValueType {
    public:
    // System.TimeZoneInfo/TIME_ZONE_INFORMATION TZI
    // Offset: 0x0
    System::TimeZoneInfo::TIME_ZONE_INFORMATION TZI;
    // System.String TimeZoneKeyName
    // Offset: 0x48
    ::Il2CppString* TimeZoneKeyName;
    // System.Byte DynamicDaylightTimeDisabled
    // Offset: 0x50
    uint8_t DynamicDaylightTimeDisabled;
    // Creating value type constructor for type: DYNAMIC_TIME_ZONE_INFORMATION
    DYNAMIC_TIME_ZONE_INFORMATION(System::TimeZoneInfo::TIME_ZONE_INFORMATION TZI_ = {}, ::Il2CppString* TimeZoneKeyName_ = {}, uint8_t DynamicDaylightTimeDisabled_ = {}) : TZI{TZI_}, TimeZoneKeyName{TimeZoneKeyName_}, DynamicDaylightTimeDisabled{DynamicDaylightTimeDisabled_} {}
  }; // System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION, "System", "TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION");
#pragma pack(pop)