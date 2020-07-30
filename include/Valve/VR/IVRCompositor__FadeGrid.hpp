// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_FadeGrid
  class IVRCompositor::_FadeGrid : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15E8540
    static IVRCompositor::_FadeGrid* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0x15E8554
    void Invoke(float fSeconds, bool bFadeIn);
    // public System.IAsyncResult BeginInvoke(System.Single fSeconds, System.Boolean bFadeIn, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15E87E0
    System::IAsyncResult* BeginInvoke(float fSeconds, bool bFadeIn, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15E8890
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_FadeGrid
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_FadeGrid*, "Valve.VR", "IVRCompositor/_FadeGrid");
#pragma pack(pop)