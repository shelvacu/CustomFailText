// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset/MediaType
#include "UnityEngine/Timeline/TimelineAsset_MediaType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TrackMediaType
  class TrackMediaType : public System::Attribute {
    public:
    // public readonly UnityEngine.Timeline.TimelineAsset/MediaType m_MediaType
    // Offset: 0x10
    UnityEngine::Timeline::TimelineAsset::MediaType m_MediaType;
    // public System.Void .ctor(UnityEngine.Timeline.TimelineAsset/MediaType mt)
    // Offset: 0x18F4770
    static TrackMediaType* New_ctor(UnityEngine::Timeline::TimelineAsset::MediaType mt);
  }; // UnityEngine.Timeline.TrackMediaType
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackMediaType*, "UnityEngine.Timeline", "TrackMediaType");
#pragma pack(pop)