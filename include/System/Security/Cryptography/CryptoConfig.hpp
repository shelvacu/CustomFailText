// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
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
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.CryptoConfig
  class CryptoConfig : public ::Il2CppObject {
    public:
    // static public System.Byte[] EncodeOID(System.String str)
    // Offset: 0xDD3CE0
    static ::Array<uint8_t>* EncodeOID(::Il2CppString* str);
    // static private System.Byte[] EncodeLongNumber(System.Int64 x)
    // Offset: 0xDD4138
    static ::Array<uint8_t>* EncodeLongNumber(int64_t x);
  }; // System.Security.Cryptography.CryptoConfig
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
#pragma pack(pop)