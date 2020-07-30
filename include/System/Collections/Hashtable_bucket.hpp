// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.Hashtable/bucket
  struct Hashtable::bucket : public System::ValueType {
    public:
    // public System.Object key
    // Offset: 0x0
    ::Il2CppObject* key;
    // public System.Object val
    // Offset: 0x8
    ::Il2CppObject* val;
    // public System.Int32 hash_coll
    // Offset: 0x10
    int hash_coll;
    // Creating value type constructor for type: bucket
    bucket(::Il2CppObject* key_ = {}, ::Il2CppObject* val_ = {}, int hash_coll_ = {}) : key{key_}, val{val_}, hash_coll{hash_coll_} {}
  }; // System.Collections.Hashtable/bucket
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::bucket, "System.Collections", "Hashtable/bucket");
#pragma pack(pop)