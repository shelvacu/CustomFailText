// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.IOAsyncResult
#include "System/IOAsyncResult.hpp"
// Including type: System.Net.Sockets.SocketOperation
#include "System/Net/Sockets/SocketOperation.hpp"
// Including type: System.Net.Sockets.SocketFlags
#include "System/Net/Sockets/SocketFlags.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IList`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketAsyncResult
  class SocketAsyncResult : public System::IOAsyncResult {
    public:
    // Nested type: System::Net::Sockets::SocketAsyncResult::$$c
    class $$c;
    // public System.Net.Sockets.Socket socket
    // Offset: 0x30
    System::Net::Sockets::Socket* socket;
    // public System.Net.Sockets.SocketOperation operation
    // Offset: 0x38
    System::Net::Sockets::SocketOperation operation;
    // private System.Exception DelayedException
    // Offset: 0x40
    System::Exception* DelayedException;
    // public System.Net.EndPoint EndPoint
    // Offset: 0x48
    System::Net::EndPoint* EndPoint;
    // public System.Byte[] Buffer
    // Offset: 0x50
    ::Array<uint8_t>* Buffer;
    // public System.Int32 Offset
    // Offset: 0x58
    int Offset;
    // public System.Int32 Size
    // Offset: 0x5C
    int Size;
    // public System.Net.Sockets.SocketFlags SockFlags
    // Offset: 0x60
    System::Net::Sockets::SocketFlags SockFlags;
    // public System.Net.Sockets.Socket AcceptSocket
    // Offset: 0x68
    System::Net::Sockets::Socket* AcceptSocket;
    // public System.Net.IPAddress[] Addresses
    // Offset: 0x70
    ::Array<System::Net::IPAddress*>* Addresses;
    // public System.Int32 Port
    // Offset: 0x78
    int Port;
    // public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> Buffers
    // Offset: 0x80
    System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* Buffers;
    // public System.Boolean ReuseSocket
    // Offset: 0x88
    bool ReuseSocket;
    // public System.Int32 CurrentAddress
    // Offset: 0x8C
    int CurrentAddress;
    // public System.Net.Sockets.Socket AcceptedSocket
    // Offset: 0x90
    System::Net::Sockets::Socket* AcceptedSocket;
    // public System.Int32 Total
    // Offset: 0x98
    int Total;
    // System.Int32 error
    // Offset: 0x9C
    int error;
    // public System.Int32 EndCalled
    // Offset: 0xA0
    int EndCalled;
    // public System.IntPtr get_Handle()
    // Offset: 0x11FFE74
    System::IntPtr get_Handle();
    // public System.Void .ctor(System.Net.Sockets.Socket socket, System.AsyncCallback callback, System.Object state, System.Net.Sockets.SocketOperation operation)
    // Offset: 0x11FFECC
    static SocketAsyncResult* New_ctor(System::Net::Sockets::Socket* socket, System::AsyncCallback* callback, ::Il2CppObject* state, System::Net::Sockets::SocketOperation operation);
    // public System.Net.Sockets.SocketError get_ErrorCode()
    // Offset: 0x11FFF1C
    System::Net::Sockets::SocketError get_ErrorCode();
    // public System.Void CheckIfThrowDelayedException()
    // Offset: 0x11FFFA4
    void CheckIfThrowDelayedException();
    // public System.Void Complete()
    // Offset: 0x11FE678
    void Complete();
    // public System.Void Complete(System.Boolean synch)
    // Offset: 0x1200060
    void Complete(bool synch);
    // public System.Void Complete(System.Int32 total)
    // Offset: 0x11FF09C
    void Complete(int total);
    // public System.Void Complete(System.Exception e, System.Boolean synch)
    // Offset: 0x120006C
    void Complete(System::Exception* e, bool synch);
    // public System.Void Complete(System.Exception e)
    // Offset: 0x11FDDB0
    void Complete(System::Exception* e);
    // public System.Void Complete(System.Net.Sockets.Socket s)
    // Offset: 0x11FDDD8
    void Complete(System::Net::Sockets::Socket* s);
    // public System.Void Complete(System.Net.Sockets.Socket s, System.Int32 total)
    // Offset: 0x11FE0D8
    void Complete(System::Net::Sockets::Socket* s, int total);
    // override System.Void CompleteDisposed()
    // Offset: 0x120005C
    // Implemented from: System.IOAsyncResult
    // Base method: System.Void IOAsyncResult::CompleteDisposed()
    void CompleteDisposed();
  }; // System.Net.Sockets.SocketAsyncResult
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncResult*, "System.Net.Sockets", "SocketAsyncResult");
#pragma pack(pop)