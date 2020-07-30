// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleLevelStarter
  class SimpleLevelStarter : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerDataModel _playerDataModel
    // Offset: 0x18
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private BeatmapLevelSO _level
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelSO* level;
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapDifficulty _beatmapDifficulty
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // private System.Boolean useTestNoteCutSoundEffects
    // Offset: 0x34
    bool useTestNoteCutSoundEffects;
    // private UnityEngine.TextAsset _recordingTextAsset
    // Offset: 0x38
    UnityEngine::TextAsset* recordingTextAsset;
    // private UnityEngine.Component[] _prefabBindings
    // Offset: 0x40
    ::Array<UnityEngine::Component*>* prefabBindings;
    // private UnityEngine.UI.Button _button
    // Offset: 0x48
    UnityEngine::UI::Button* button;
    // private MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0x50
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x58
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // protected System.Void Awake()
    // Offset: 0xB83290
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xB83354
    void OnDestroy();
    // private System.Void StartLevel()
    // Offset: 0xB83370
    void StartLevel();
    // private System.Void InstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0xB83554
    void InstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void ButtonPressed()
    // Offset: 0xB836A0
    void ButtonPressed();
    // private System.Void HandleLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xB836A4
    void HandleLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void <StartLevel>b__13_0()
    // Offset: 0xB836D0
    void $StartLevel$b__13_0();
    // public System.Void .ctor()
    // Offset: 0xB836C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleLevelStarter* New_ctor();
  }; // SimpleLevelStarter
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
#pragma pack(pop)