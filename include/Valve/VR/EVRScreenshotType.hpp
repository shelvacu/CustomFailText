// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRScreenshotType
  struct EVRScreenshotType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRScreenshotType None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRScreenshotType None
    static Valve::VR::EVRScreenshotType _get_None();
    // Set static field: static public Valve.VR.EVRScreenshotType None
    static void _set_None(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType Mono
    static constexpr const int Mono = 1;
    // Get static field: static public Valve.VR.EVRScreenshotType Mono
    static Valve::VR::EVRScreenshotType _get_Mono();
    // Set static field: static public Valve.VR.EVRScreenshotType Mono
    static void _set_Mono(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public Valve.VR.EVRScreenshotType Stereo
    static Valve::VR::EVRScreenshotType _get_Stereo();
    // Set static field: static public Valve.VR.EVRScreenshotType Stereo
    static void _set_Stereo(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType Cubemap
    static constexpr const int Cubemap = 3;
    // Get static field: static public Valve.VR.EVRScreenshotType Cubemap
    static Valve::VR::EVRScreenshotType _get_Cubemap();
    // Set static field: static public Valve.VR.EVRScreenshotType Cubemap
    static void _set_Cubemap(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType MonoPanorama
    static constexpr const int MonoPanorama = 4;
    // Get static field: static public Valve.VR.EVRScreenshotType MonoPanorama
    static Valve::VR::EVRScreenshotType _get_MonoPanorama();
    // Set static field: static public Valve.VR.EVRScreenshotType MonoPanorama
    static void _set_MonoPanorama(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType StereoPanorama
    static constexpr const int StereoPanorama = 5;
    // Get static field: static public Valve.VR.EVRScreenshotType StereoPanorama
    static Valve::VR::EVRScreenshotType _get_StereoPanorama();
    // Set static field: static public Valve.VR.EVRScreenshotType StereoPanorama
    static void _set_StereoPanorama(Valve::VR::EVRScreenshotType value);
    // Creating value type constructor for type: EVRScreenshotType
    EVRScreenshotType(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRScreenshotType
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRScreenshotType, "Valve.VR", "EVRScreenshotType");
#pragma pack(pop)