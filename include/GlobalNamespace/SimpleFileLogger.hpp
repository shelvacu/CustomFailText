// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleFileLogger
  class SimpleFileLogger : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SimpleFileLogger::MonoLogger
    class MonoLogger;
    // static field const value: static private System.String kFilename
    static constexpr const char* kFilename = "SimpleLog.txt";
    // Get static field: static private System.String kFilename
    static ::Il2CppString* _get_kFilename();
    // Set static field: static private System.String kFilename
    static void _set_kFilename(::Il2CppString* value);
    // Get static field: static private SimpleFileLogger/MonoLogger _monoLogger
    static GlobalNamespace::SimpleFileLogger::MonoLogger* _get__monoLogger();
    // Set static field: static private SimpleFileLogger/MonoLogger _monoLogger
    static void _set__monoLogger(GlobalNamespace::SimpleFileLogger::MonoLogger* value);
    // static protected System.Void NoDomainReloadInit()
    // Offset: 0xCA7324
    static void NoDomainReloadInit();
    // static private SimpleFileLogger/MonoLogger get_monoLogger()
    // Offset: 0xCA7378
    static GlobalNamespace::SimpleFileLogger::MonoLogger* get_monoLogger();
    // static public System.Void Log(System.String text)
    // Offset: 0xCA7464
    static void Log(::Il2CppString* text);
    // static public System.Void LogVector(System.String description, UnityEngine.Vector3 vec)
    // Offset: 0xCA74F8
    static void LogVector(::Il2CppString* description, UnityEngine::Vector3 vec);
    // static public System.Void Clear()
    // Offset: 0xCA76CC
    static void Clear();
    // public System.Void .ctor()
    // Offset: 0xCA7754
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SimpleFileLogger* New_ctor();
  }; // SimpleFileLogger
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleFileLogger*, "", "SimpleFileLogger");
#pragma pack(pop)