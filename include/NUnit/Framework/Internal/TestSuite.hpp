// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITest because it is already included!
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestSuite
  class TestSuite : public NUnit::Framework::Internal::Test {
    public:
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest> tests
    // Offset: 0x78
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>* tests;
    // private System.Object[] <Arguments>k__BackingField
    // Offset: 0x80
    ::Array<::Il2CppObject*>* Arguments;
    // private System.Boolean <MaintainTestOrder>k__BackingField
    // Offset: 0x88
    bool MaintainTestOrder;
    // public System.Void Sort()
    // Offset: 0x18DDF44
    void Sort();
    // public System.Void Add(NUnit.Framework.Internal.Test test)
    // Offset: 0x18DE250
    void Add(NUnit::Framework::Internal::Test* test);
    // public System.Object[] get_Arguments()
    // Offset: 0x18DE5B0
    ::Array<::Il2CppObject*>* get_Arguments();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x18DE5B8
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // protected System.Boolean get_MaintainTestOrder()
    // Offset: 0x18DE248
    bool get_MaintainTestOrder();
    // protected System.Void set_MaintainTestOrder(System.Boolean value)
    // Offset: 0x18DE5C0
    void set_MaintainTestOrder(bool value);
    // protected System.Void CheckSetUpTearDownMethods(System.Type attrType)
    // Offset: 0x18D9F00
    void CheckSetUpTearDownMethods(System::Type* attrType);
    // public System.Void .ctor(System.String name)
    // Offset: 0x18D8A7C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String name)
    static TestSuite* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String parentSuiteName, System.String name)
    // Offset: 0x18D58A4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String parentSuiteName, System.String name)
    static TestSuite* New_ctor(::Il2CppString* parentSuiteName, ::Il2CppString* name);
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Offset: 0x18D9E34
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    static TestSuite* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType);
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x18DE2CC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.Int32 get_TestCaseCount()
    // Offset: 0x18DE2D4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Int32 Test::get_TestCaseCount()
    int get_TestCaseCount();
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x18DE5CC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x18DE6D8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override System.String get_XmlElementName()
    // Offset: 0x18DE730
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x18DE778
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestSuite
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestSuite*, "NUnit.Framework.Internal", "TestSuite");
#pragma pack(pop)