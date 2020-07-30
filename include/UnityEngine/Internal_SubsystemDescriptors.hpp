// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptorImpl
  class ISubsystemDescriptorImpl;
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
  // Forward declaring type: SubsystemDescriptor
  class SubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Internal_SubsystemDescriptors
  class Internal_SubsystemDescriptors : public ::Il2CppObject {
    public:
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
    static System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>* _get_s_IntegratedSubsystemDescriptors();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
    static void _set_s_IntegratedSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>* value);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
    static System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>* _get_s_StandaloneSubsystemDescriptors();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
    static void _set_s_StandaloneSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>* value);
    // static System.Boolean Internal_AddDescriptor(UnityEngine.SubsystemDescriptor descriptor)
    // Offset: 0x19611CC
    static bool Internal_AddDescriptor(UnityEngine::SubsystemDescriptor* descriptor);
    // static System.Void Internal_InitializeManagedDescriptor(System.IntPtr ptr, UnityEngine.ISubsystemDescriptorImpl desc)
    // Offset: 0x19613CC
    static void Internal_InitializeManagedDescriptor(System::IntPtr ptr, UnityEngine::ISubsystemDescriptorImpl* desc);
    // static System.Void Internal_ClearManagedDescriptors()
    // Offset: 0x19614CC
    static void Internal_ClearManagedDescriptors();
    // static private System.Void .cctor()
    // Offset: 0x196168C
    static void _cctor();
  }; // UnityEngine.Internal_SubsystemDescriptors
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Internal_SubsystemDescriptors*, "UnityEngine", "Internal_SubsystemDescriptors");
#pragma pack(pop)