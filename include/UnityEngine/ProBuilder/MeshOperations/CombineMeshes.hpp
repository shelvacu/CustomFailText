// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:18 PM
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
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.CombineMeshes
  class CombineMeshes : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c
    class $$c;
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> Combine(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes)
    // Offset: 0xEF1828
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* Combine(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> Combine(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes, UnityEngine.ProBuilder.ProBuilderMesh meshTarget)
    // Offset: 0xEF1BD8
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* Combine(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, UnityEngine::ProBuilder::ProBuilderMesh* meshTarget);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> CombineToNewMeshes(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes)
    // Offset: 0xEF182C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* CombineToNewMeshes(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes);
    // static private System.Void AccumulateMeshesInfo(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes, System.Int32 offset, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> autoUvFaces, System.Collections.Generic.List`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.SharedVertex> sharedTextures, System.Collections.Generic.List`1<UnityEngine.Material> materialMap, UnityEngine.Transform targetTransform)
    // Offset: 0xEF2444
    static void AccumulateMeshesInfo(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, int offset, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*& vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*& faces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*& autoUvFaces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SharedVertex*>*& sharedVertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SharedVertex*>*& sharedTextures, System::Collections::Generic::List_1<UnityEngine::Material*>*& materialMap, UnityEngine::Transform* targetTransform);
    // static private UnityEngine.ProBuilder.ProBuilderMesh CreateMeshFromSplit(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedVertexLookup, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedTextureLookup, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> remap, UnityEngine.Material[] materials)
    // Offset: 0xEF3E54
    static UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshFromSplit(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::Dictionary_2<int, int>* sharedVertexLookup, System::Collections::Generic::Dictionary_2<int, int>* sharedTextureLookup, System::Collections::Generic::Dictionary_2<int, int>* remap, ::Array<UnityEngine::Material*>* materials);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> SplitByMaxVertexCount(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedTextures, System.UInt32 maxVertexCount)
    // Offset: 0xEF2F28
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* SplitByMaxVertexCount(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, uint maxVertexCount);
  }; // UnityEngine.ProBuilder.MeshOperations.CombineMeshes
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::CombineMeshes*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes");
#pragma pack(pop)