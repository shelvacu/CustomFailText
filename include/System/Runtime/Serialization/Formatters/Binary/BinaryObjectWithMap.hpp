// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
  class BinaryObjectWithMap : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // System.Int32 objectId
    // Offset: 0x14
    int objectId;
    // System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // System.Int32 numMembers
    // Offset: 0x20
    int numMembers;
    // System.String[] memberNames
    // Offset: 0x28
    ::Array<::Il2CppString*>* memberNames;
    // System.Int32 assemId
    // Offset: 0x30
    int assemId;
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0xE10400
    static BinaryObjectWithMap* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // System.Void Set(System.Int32 objectId, System.String name, System.Int32 numMembers, System.String[] memberNames, System.Int32 assemId)
    // Offset: 0xE1042C
    void Set(int objectId, ::Il2CppString* name, int numMembers, ::Array<::Il2CppString*>* memberNames, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE10494
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE1057C
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xE106EC
    void Dump();
    // System.Void .ctor()
    // Offset: 0xE103F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryObjectWithMap* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
#pragma pack(pop)