// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenTypeInfoGetter
  class ZenTypeInfoGetter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1928A80
    static ZenTypeInfoGetter* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Zenject.InjectTypeInfo Invoke()
    // Offset: 0x1927E6C
    Zenject::InjectTypeInfo* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1928A94
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Zenject.InjectTypeInfo EndInvoke(System.IAsyncResult result)
    // Offset: 0x1928AC0
    Zenject::InjectTypeInfo* EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenTypeInfoGetter
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenTypeInfoGetter*, "Zenject", "ZenTypeInfoGetter");
#pragma pack(pop)