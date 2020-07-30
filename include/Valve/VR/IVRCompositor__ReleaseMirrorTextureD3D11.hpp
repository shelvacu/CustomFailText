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
  // Autogenerated type: Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11
  class IVRCompositor::_ReleaseMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15ED0B4
    static IVRCompositor::_ReleaseMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0x15ED0C8
    void Invoke(System::IntPtr pD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15ED328
    System::IAsyncResult* BeginInvoke(System::IntPtr pD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15ED3B4
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11*, "Valve.VR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
#pragma pack(pop)