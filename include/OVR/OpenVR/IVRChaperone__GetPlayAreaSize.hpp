// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
  class IVRChaperone::_GetPlayAreaSize : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBDE8C
    static IVRChaperone::_GetPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.Single pSizeX, System.Single pSizeZ)
    // Offset: 0xEB2EAC
    bool Invoke(float& pSizeX, float& pSizeZ);
    // public System.IAsyncResult BeginInvoke(System.Single pSizeX, System.Single pSizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBDEA0
    System::IAsyncResult* BeginInvoke(float& pSizeX, float& pSizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.Single pSizeX, System.Single pSizeZ, System.IAsyncResult result)
    // Offset: 0xEBDF4C
    bool EndInvoke(float& pSizeX, float& pSizeZ, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaSize");
#pragma pack(pop)