// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IBeatmapLevel
  class IBeatmapLevel : public GlobalNamespace::IPreviewBeatmapLevel {
    public:
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
  }; // IBeatmapLevel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapLevel*, "", "IBeatmapLevel");
#pragma pack(pop)