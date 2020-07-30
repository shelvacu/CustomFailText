// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ProBuilder.EntityType
#include "UnityEngine/ProBuilder/EntityType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Entity
  class Entity : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ProBuilder.EntityType m_EntityType
    // Offset: 0x18
    UnityEngine::ProBuilder::EntityType m_EntityType;
    // public UnityEngine.ProBuilder.EntityType get_entityType()
    // Offset: 0xF7C27C
    UnityEngine::ProBuilder::EntityType get_entityType();
    // public System.Void Awake()
    // Offset: 0xF7C284
    void Awake();
    // public System.Void SetEntity(UnityEngine.ProBuilder.EntityType t)
    // Offset: 0xF7C344
    void SetEntity(UnityEngine::ProBuilder::EntityType t);
    // public System.Void .ctor()
    // Offset: 0xF7C34C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Entity* New_ctor();
  }; // UnityEngine.ProBuilder.Entity
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Entity*, "UnityEngine.ProBuilder", "Entity");
#pragma pack(pop)