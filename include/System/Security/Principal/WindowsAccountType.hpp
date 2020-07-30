// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Autogenerated type: System.Security.Principal.WindowsAccountType
  struct WindowsAccountType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Security.Principal.WindowsAccountType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public System.Security.Principal.WindowsAccountType Normal
    static System::Security::Principal::WindowsAccountType _get_Normal();
    // Set static field: static public System.Security.Principal.WindowsAccountType Normal
    static void _set_Normal(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType Guest
    static constexpr const int Guest = 1;
    // Get static field: static public System.Security.Principal.WindowsAccountType Guest
    static System::Security::Principal::WindowsAccountType _get_Guest();
    // Set static field: static public System.Security.Principal.WindowsAccountType Guest
    static void _set_Guest(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType System
    static constexpr const int System = 2;
    // Get static field: static public System.Security.Principal.WindowsAccountType System
    static System::Security::Principal::WindowsAccountType _get_System();
    // Set static field: static public System.Security.Principal.WindowsAccountType System
    static void _set_System(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType Anonymous
    static constexpr const int Anonymous = 3;
    // Get static field: static public System.Security.Principal.WindowsAccountType Anonymous
    static System::Security::Principal::WindowsAccountType _get_Anonymous();
    // Set static field: static public System.Security.Principal.WindowsAccountType Anonymous
    static void _set_Anonymous(System::Security::Principal::WindowsAccountType value);
    // Creating value type constructor for type: WindowsAccountType
    WindowsAccountType(int value_ = {}) : value{value_} {}
  }; // System.Security.Principal.WindowsAccountType
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsAccountType, "System.Security.Principal", "WindowsAccountType");
#pragma pack(pop)