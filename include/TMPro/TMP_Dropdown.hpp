// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.ICancelHandler
#include "UnityEngine/EventSystems/ICancelHandler.hpp"
// Including type: TMPro.FloatTween
#include "TMPro/FloatTween.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: TweenRunner`1<T>
  template<typename T>
  class TweenRunner_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
  // Skipping declaration: Component because it is already included!
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
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
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Dropdown
  class TMP_Dropdown : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::IEventSystemHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::ICancelHandler {
    public:
    // Nested type: TMPro::TMP_Dropdown::DropdownItem
    class DropdownItem;
    // Nested type: TMPro::TMP_Dropdown::OptionData
    class OptionData;
    // Nested type: TMPro::TMP_Dropdown::OptionDataList
    class OptionDataList;
    // Nested type: TMPro::TMP_Dropdown::DropdownEvent
    class DropdownEvent;
    // Nested type: TMPro::TMP_Dropdown::$$c__DisplayClass60_0
    class $$c__DisplayClass60_0;
    // Nested type: TMPro::TMP_Dropdown::$DelayedDestroyDropdownList$d__72
    class $DelayedDestroyDropdownList$d__72;
    // private UnityEngine.RectTransform m_Template
    // Offset: 0xF0
    UnityEngine::RectTransform* m_Template;
    // private TMPro.TMP_Text m_CaptionText
    // Offset: 0xF8
    TMPro::TMP_Text* m_CaptionText;
    // private UnityEngine.UI.Image m_CaptionImage
    // Offset: 0x100
    UnityEngine::UI::Image* m_CaptionImage;
    // private TMPro.TMP_Text m_ItemText
    // Offset: 0x108
    TMPro::TMP_Text* m_ItemText;
    // private UnityEngine.UI.Image m_ItemImage
    // Offset: 0x110
    UnityEngine::UI::Image* m_ItemImage;
    // private System.Int32 m_Value
    // Offset: 0x118
    int m_Value;
    // private TMPro.TMP_Dropdown/OptionDataList m_Options
    // Offset: 0x120
    TMPro::TMP_Dropdown::OptionDataList* m_Options;
    // private TMPro.TMP_Dropdown/DropdownEvent m_OnValueChanged
    // Offset: 0x128
    TMPro::TMP_Dropdown::DropdownEvent* m_OnValueChanged;
    // private UnityEngine.GameObject m_Dropdown
    // Offset: 0x130
    UnityEngine::GameObject* m_Dropdown;
    // private UnityEngine.GameObject m_Blocker
    // Offset: 0x138
    UnityEngine::GameObject* m_Blocker;
    // private System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> m_Items
    // Offset: 0x140
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>* m_Items;
    // private TMPro.TweenRunner`1<TMPro.FloatTween> m_AlphaTweenRunner
    // Offset: 0x148
    TMPro::TweenRunner_1<TMPro::FloatTween>* m_AlphaTweenRunner;
    // private System.Boolean validTemplate
    // Offset: 0x150
    bool validTemplate;
    // Get static field: static private TMPro.TMP_Dropdown/OptionData s_NoOptionData
    static TMPro::TMP_Dropdown::OptionData* _get_s_NoOptionData();
    // Set static field: static private TMPro.TMP_Dropdown/OptionData s_NoOptionData
    static void _set_s_NoOptionData(TMPro::TMP_Dropdown::OptionData* value);
    // public UnityEngine.RectTransform get_template()
    // Offset: 0xB6BB98
    UnityEngine::RectTransform* get_template();
    // public System.Void set_template(UnityEngine.RectTransform value)
    // Offset: 0xB6B7E8
    void set_template(UnityEngine::RectTransform* value);
    // public TMPro.TMP_Text get_captionText()
    // Offset: 0xB6BBA0
    TMPro::TMP_Text* get_captionText();
    // public System.Void set_captionText(TMPro.TMP_Text value)
    // Offset: 0xB6B810
    void set_captionText(TMPro::TMP_Text* value);
    // public UnityEngine.UI.Image get_captionImage()
    // Offset: 0xB6BBA8
    UnityEngine::UI::Image* get_captionImage();
    // public System.Void set_captionImage(UnityEngine.UI.Image value)
    // Offset: 0xB6BBB0
    void set_captionImage(UnityEngine::UI::Image* value);
    // public TMPro.TMP_Text get_itemText()
    // Offset: 0xB6BBDC
    TMPro::TMP_Text* get_itemText();
    // public System.Void set_itemText(TMPro.TMP_Text value)
    // Offset: 0xB6B838
    void set_itemText(TMPro::TMP_Text* value);
    // public UnityEngine.UI.Image get_itemImage()
    // Offset: 0xB6BBE4
    UnityEngine::UI::Image* get_itemImage();
    // public System.Void set_itemImage(UnityEngine.UI.Image value)
    // Offset: 0xB6BBEC
    void set_itemImage(UnityEngine::UI::Image* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> get_options()
    // Offset: 0xB6B864
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* get_options();
    // public System.Void set_options(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> value)
    // Offset: 0xB6BC18
    void set_options(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* value);
    // public TMPro.TMP_Dropdown/DropdownEvent get_onValueChanged()
    // Offset: 0xB6BC4C
    TMPro::TMP_Dropdown::DropdownEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(TMPro.TMP_Dropdown/DropdownEvent value)
    // Offset: 0xB6BC54
    void set_onValueChanged(TMPro::TMP_Dropdown::DropdownEvent* value);
    // public System.Int32 get_value()
    // Offset: 0xB6BC64
    int get_value();
    // public System.Void set_value(System.Int32 value)
    // Offset: 0xB6BC6C
    void set_value(int value);
    // public System.Void SetValueWithoutNotify(System.Int32 input)
    // Offset: 0xB6BD94
    void SetValueWithoutNotify(int input);
    // private System.Void SetValue(System.Int32 value, System.Boolean sendCallback)
    // Offset: 0xB6BC74
    void SetValue(int value, bool sendCallback);
    // public System.Boolean get_IsExpanded()
    // Offset: 0xB6BD9C
    bool get_IsExpanded();
    // public System.Void RefreshShownValue()
    // Offset: 0xB6B888
    void RefreshShownValue();
    // public System.Void AddOptions(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> options)
    // Offset: 0xB6C370
    void AddOptions(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* options);
    // public System.Void AddOptions(System.Collections.Generic.List`1<System.String> options)
    // Offset: 0xB6C3E8
    void AddOptions(System::Collections::Generic::List_1<::Il2CppString*>* options);
    // public System.Void AddOptions(System.Collections.Generic.List`1<UnityEngine.Sprite> options)
    // Offset: 0xB6C514
    void AddOptions(System::Collections::Generic::List_1<UnityEngine::Sprite*>* options);
    // public System.Void ClearOptions()
    // Offset: 0xB6C640
    void ClearOptions();
    // private System.Void SetupTemplate()
    // Offset: 0xB6C6AC
    void SetupTemplate();
    // static private T GetOrAddComponent(UnityEngine.GameObject go)
    // Offset: 0xD392F8
    template<class T>
    static T GetOrAddComponent(UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>("TMPro", "TMP_Dropdown", "GetOrAddComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, go));
    }
    // public System.Void Show()
    // Offset: 0xB6CB7C
    void Show();
    // protected UnityEngine.GameObject CreateBlocker(UnityEngine.Canvas rootCanvas)
    // Offset: 0xB6DDD4
    UnityEngine::GameObject* CreateBlocker(UnityEngine::Canvas* rootCanvas);
    // protected System.Void DestroyBlocker(UnityEngine.GameObject blocker)
    // Offset: 0xB6E06C
    void DestroyBlocker(UnityEngine::GameObject* blocker);
    // protected UnityEngine.GameObject CreateDropdownList(UnityEngine.GameObject template)
    // Offset: 0xB6E0D4
    UnityEngine::GameObject* CreateDropdownList(UnityEngine::GameObject* _template);
    // protected System.Void DestroyDropdownList(UnityEngine.GameObject dropdownList)
    // Offset: 0xB6E144
    void DestroyDropdownList(UnityEngine::GameObject* dropdownList);
    // protected TMPro.TMP_Dropdown/DropdownItem CreateItem(TMPro.TMP_Dropdown/DropdownItem itemTemplate)
    // Offset: 0xB6E1AC
    TMPro::TMP_Dropdown::DropdownItem* CreateItem(TMPro::TMP_Dropdown::DropdownItem* itemTemplate);
    // protected System.Void DestroyItem(TMPro.TMP_Dropdown/DropdownItem item)
    // Offset: 0xB6E21C
    void DestroyItem(TMPro::TMP_Dropdown::DropdownItem* item);
    // private TMPro.TMP_Dropdown/DropdownItem AddItem(TMPro.TMP_Dropdown/OptionData data, System.Boolean selected, TMPro.TMP_Dropdown/DropdownItem itemTemplate, System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> items)
    // Offset: 0xB6DA24
    TMPro::TMP_Dropdown::DropdownItem* AddItem(TMPro::TMP_Dropdown::OptionData* data, bool selected, TMPro::TMP_Dropdown::DropdownItem* itemTemplate, System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>* items);
    // private System.Void AlphaFadeList(System.Single duration, System.Single alpha)
    // Offset: 0xB6E220
    void AlphaFadeList(float duration, float alpha);
    // private System.Void AlphaFadeList(System.Single duration, System.Single start, System.Single end)
    // Offset: 0xB6DCBC
    void AlphaFadeList(float duration, float start, float end);
    // private System.Void SetAlpha(System.Single alpha)
    // Offset: 0xB6E2A8
    void SetAlpha(float alpha);
    // public System.Void Hide()
    // Offset: 0xB6D8E0
    void Hide();
    // private System.Collections.IEnumerator DelayedDestroyDropdownList(System.Single delay)
    // Offset: 0xB6E360
    System::Collections::IEnumerator* DelayedDestroyDropdownList(float delay);
    // private System.Void ImmediateDestroyDropdownList()
    // Offset: 0xB6C200
    void ImmediateDestroyDropdownList();
    // private System.Void OnSelectItem(UnityEngine.UI.Toggle toggle)
    // Offset: 0xB6E418
    void OnSelectItem(UnityEngine::UI::Toggle* toggle);
    // protected System.Void .ctor()
    // Offset: 0xB6BE0C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_Dropdown* New_ctor();
    // protected override System.Void Awake()
    // Offset: 0xB6BFC4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void Start()
    // Offset: 0xB6C128
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnDisable()
    // Offset: 0xB6C150
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xB6CB78
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xB6D8D8
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xB6D8DC
    // Implemented from: UnityEngine.EventSystems.ICancelHandler
    // Base method: System.Void ICancelHandler::OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void .cctor()
    // Offset: 0xB6E55C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // TMPro.TMP_Dropdown
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown*, "TMPro", "TMP_Dropdown");
#pragma pack(pop)