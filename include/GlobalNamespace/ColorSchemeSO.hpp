// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorSchemeSO
  class ColorSchemeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private ColorScheme _colorScheme
    // Offset: 0x18
    GlobalNamespace::ColorScheme* colorScheme;
    // public ColorScheme get_colorScheme()
    // Offset: 0x1964164
    GlobalNamespace::ColorScheme* get_colorScheme();
    // public System.Void .ctor()
    // Offset: 0x196416C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorSchemeSO* New_ctor();
  }; // ColorSchemeSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeSO*, "", "ColorSchemeSO");
#pragma pack(pop)