#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"
#include "KeyboardEventInit.hpp"

namespace webbind {

class Window;

/// Interface KeyboardEvent
/// [`KeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent)
class KeyboardEvent : public UIEvent {
    explicit KeyboardEvent(Handle h) noexcept;
public:
    explicit KeyboardEvent(const emlite::Val &val) noexcept;
    static KeyboardEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyboardEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new KeyboardEvent(..)` constructor, creating a new KeyboardEvent instance
    KeyboardEvent(const jsbind::String& type);
    /// The `new KeyboardEvent(..)` constructor, creating a new KeyboardEvent instance
    KeyboardEvent(const jsbind::String& type, const KeyboardEventInit& eventInitDict);
    /// [`KeyboardEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/key)
    /// [`KeyboardEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/key)
    [[nodiscard]] jsbind::String key() const;
    /// [`KeyboardEvent.code`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/code)
    /// [`KeyboardEvent.code`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/code)
    [[nodiscard]] jsbind::String code() const;
    /// [`KeyboardEvent.location`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/location)
    /// [`KeyboardEvent.location`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/location)
    [[nodiscard]] unsigned long location() const;
    /// [`KeyboardEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/ctrlKey)
    /// [`KeyboardEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/ctrlKey)
    [[nodiscard]] bool ctrlKey() const;
    /// [`KeyboardEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/shiftKey)
    /// [`KeyboardEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/shiftKey)
    [[nodiscard]] bool shiftKey() const;
    /// [`KeyboardEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/altKey)
    /// [`KeyboardEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/altKey)
    [[nodiscard]] bool altKey() const;
    /// [`KeyboardEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/metaKey)
    /// [`KeyboardEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/metaKey)
    [[nodiscard]] bool metaKey() const;
    /// [`KeyboardEvent.repeat`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/repeat)
    /// [`KeyboardEvent.repeat`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/repeat)
    [[nodiscard]] bool repeat() const;
    /// [`KeyboardEvent.isComposing`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/isComposing)
    /// [`KeyboardEvent.isComposing`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/isComposing)
    [[nodiscard]] bool isComposing() const;
    /// The getModifierState method.
    /// [`KeyboardEvent.getModifierState`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/getModifierState)
    bool getModifierState(const jsbind::String& keyArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey);
    /// The initKeyboardEvent method.
    /// [`KeyboardEvent.initKeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/initKeyboardEvent)
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey);
    /// [`KeyboardEvent.charCode`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/charCode)
    /// [`KeyboardEvent.charCode`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/charCode)
    [[nodiscard]] unsigned long charCode() const;
    /// [`KeyboardEvent.keyCode`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/keyCode)
    /// [`KeyboardEvent.keyCode`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/keyCode)
    [[nodiscard]] unsigned long keyCode() const;
};

} // namespace webbind