// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Version/ParseFailureKind
#include "System/Version_ParseFailureKind.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Version/VersionResult
  struct Version::VersionResult : public System::ValueType {
    public:
    // System.Version m_parsedVersion
    // Offset: 0x0
    System::Version* m_parsedVersion;
    // System.Version/ParseFailureKind m_failure
    // Offset: 0x8
    System::Version::ParseFailureKind m_failure;
    // System.String m_exceptionArgument
    // Offset: 0x10
    ::Il2CppString* m_exceptionArgument;
    // System.String m_argumentName
    // Offset: 0x18
    ::Il2CppString* m_argumentName;
    // System.Boolean m_canThrow
    // Offset: 0x20
    bool m_canThrow;
    // Creating value type constructor for type: VersionResult
    VersionResult(System::Version* m_parsedVersion_ = {}, System::Version::ParseFailureKind m_failure_ = {}, ::Il2CppString* m_exceptionArgument_ = {}, ::Il2CppString* m_argumentName_ = {}, bool m_canThrow_ = {}) : m_parsedVersion{m_parsedVersion_}, m_failure{m_failure_}, m_exceptionArgument{m_exceptionArgument_}, m_argumentName{m_argumentName_}, m_canThrow{m_canThrow_} {}
    // System.Void Init(System.String argumentName, System.Boolean canThrow)
    // Offset: 0xA53B20
    void Init(::Il2CppString* argumentName, bool canThrow);
    // System.Void SetFailure(System.Version/ParseFailureKind failure)
    // Offset: 0xA53B30
    void SetFailure(System::Version::ParseFailureKind failure);
    // System.Void SetFailure(System.Version/ParseFailureKind failure, System.String argument)
    // Offset: 0xA53B38
    void SetFailure(System::Version::ParseFailureKind failure, ::Il2CppString* argument);
    // System.Exception GetVersionParseException()
    // Offset: 0xA53B40
    System::Exception* GetVersionParseException();
  }; // System.Version/VersionResult
}
DEFINE_IL2CPP_ARG_TYPE(System::Version::VersionResult, "System", "Version/VersionResult");
#pragma pack(pop)