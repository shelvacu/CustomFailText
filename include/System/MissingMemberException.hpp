// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MemberAccessException
#include "System/MemberAccessException.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.MissingMemberException
  class MissingMemberException : public System::MemberAccessException, public System::Runtime::Serialization::ISerializable {
    public:
    // protected System.String ClassName
    // Offset: 0x88
    ::Il2CppString* ClassName;
    // protected System.String MemberName
    // Offset: 0x90
    ::Il2CppString* MemberName;
    // protected System.Byte[] Signature
    // Offset: 0x98
    ::Array<uint8_t>* Signature;
    // static System.String FormatSignature(System.Byte[] signature)
    // Offset: 0x1000A08
    static ::Il2CppString* FormatSignature(::Array<uint8_t>* signature);
    // public System.Void .ctor()
    // Offset: 0x1000A58
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissingMemberException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x1000598
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static MissingMemberException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1000618
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static MissingMemberException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String get_Message()
    // Offset: 0x10008AC
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1000AE4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.MissingMemberException
}
DEFINE_IL2CPP_ARG_TYPE(System::MissingMemberException*, "System", "MissingMemberException");
#pragma pack(pop)