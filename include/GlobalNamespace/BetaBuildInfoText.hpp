// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BetaBuildInfoText
  class BetaBuildInfoText : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // protected System.Void Start()
    // Offset: 0xB5C96C
    void Start();
    // public System.Void .ctor()
    // Offset: 0xB5C994
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BetaBuildInfoText* New_ctor();
  }; // BetaBuildInfoText
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BetaBuildInfoText*, "", "BetaBuildInfoText");
#pragma pack(pop)