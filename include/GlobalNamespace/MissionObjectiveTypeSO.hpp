// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObjectiveValueFormatterSO
  class ObjectiveValueFormatterSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectiveTypeSO
  class MissionObjectiveTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _objectiveName
    // Offset: 0x18
    ::Il2CppString* objectiveName;
    // private System.Boolean _noConditionValue
    // Offset: 0x20
    bool noConditionValue;
    // private ObjectiveValueFormatterSO _objectiveValueFormater
    // Offset: 0x28
    GlobalNamespace::ObjectiveValueFormatterSO* objectiveValueFormater;
    // public System.String get_objectiveName()
    // Offset: 0xBF73A4
    ::Il2CppString* get_objectiveName();
    // public System.String get_objectiveNameLocalized()
    // Offset: 0xBF71DC
    ::Il2CppString* get_objectiveNameLocalized();
    // public System.Boolean get_noConditionValue()
    // Offset: 0xBF73AC
    bool get_noConditionValue();
    // public ObjectiveValueFormatterSO get_objectiveValueFormater()
    // Offset: 0xBF73B4
    GlobalNamespace::ObjectiveValueFormatterSO* get_objectiveValueFormater();
    // public System.Void .ctor()
    // Offset: 0xBF73BC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionObjectiveTypeSO* New_ctor();
  }; // MissionObjectiveTypeSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveTypeSO*, "", "MissionObjectiveTypeSO");
#pragma pack(pop)