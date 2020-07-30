// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/<RepeatIterator>d__117`1
  template<typename TResult>
  class Enumerable::$RepeatIterator$d__117_1 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<TResult>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<TResult>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // private TResult <>2__current
    // Offset: 0x0
    TResult $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x0
    int $$l__initialThreadId;
    // private TResult element
    // Offset: 0x0
    TResult element;
    // public TResult <>3__element
    // Offset: 0x0
    TResult $$3__element;
    // private System.Int32 <i>5__1
    // Offset: 0x0
    int $i$5__1;
    // private System.Int32 count
    // Offset: 0x0
    int count;
    // public System.Int32 <>3__count
    // Offset: 0x0
    int $$3__count;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x127973C
    static Enumerable::$RepeatIterator$d__117_1<TResult>* New_ctor(int $$1__state) {
      return (Enumerable::$RepeatIterator$d__117_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Enumerable::$RepeatIterator$d__117_1<TResult>*>::get(), $$1__state));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x127977C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
    }
    // private System.Boolean MoveNext()
    // Offset: 0x1279780
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
    // private TResult System.Collections.Generic.IEnumerator<TResult>.get_Current()
    // Offset: 0x12797E0
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    TResult System_Collections_Generic_IEnumerator_1_get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "System.Collections.Generic.IEnumerator<TResult>.get_Current"));
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12797E8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1279848
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
    }
    // private System.Collections.Generic.IEnumerator`1<TResult> System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
    // Offset: 0x1279890
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TResult>*>(this, "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator"));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1279940
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Linq.Enumerable/<RepeatIterator>d__117`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$RepeatIterator$d__117_1, "System.Linq", "Enumerable/<RepeatIterator>d__117`1");
#pragma pack(pop)