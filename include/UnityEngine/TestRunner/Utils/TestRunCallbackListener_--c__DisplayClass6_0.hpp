// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c__DisplayClass6_0
  class TestRunCallbackListener::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public NUnit.Framework.Interfaces.ITestResult result
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITestResult* result;
    // System.Void <TestFinished>b__0(UnityEngine.TestRunner.ITestRunCallback callback)
    // Offset: 0xE274F0
    void $TestFinished$b__0(UnityEngine::TestRunner::ITestRunCallback* callback);
    // public System.Void .ctor()
    // Offset: 0xE26FF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestRunCallbackListener::$$c__DisplayClass6_0* New_ctor();
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c__DisplayClass6_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass6_0*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c__DisplayClass6_0");
#pragma pack(pop)