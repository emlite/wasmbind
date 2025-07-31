#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class Window;


/// The KeyboardEvent class.
/// [`KeyboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent)
class KeyboardEvent : public UIEvent {
    explicit KeyboardEvent(Handle h) noexcept;

public:
    explicit KeyboardEvent(const emlite::Val &val) noexcept;
    static KeyboardEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] KeyboardEvent clone() const noexcept;
    /// The `new KeyboardEvent(..)` constructor, creating a new KeyboardEvent instance
    KeyboardEvent(const jsbind::String& type);
    /// The `new KeyboardEvent(..)` constructor, creating a new KeyboardEvent instance
    KeyboardEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `key` attribute.
    /// [`KeyboardEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/key)
    [[nodiscard]] jsbind::String key() const;
    /// Getter of the `code` attribute.
    /// [`KeyboardEvent.code`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/code)
    [[nodiscard]] jsbind::String code() const;
    /// Getter of the `location` attribute.
    /// [`KeyboardEvent.location`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/location)
    [[nodiscard]] unsigned long location() const;
    /// Getter of the `ctrlKey` attribute.
    /// [`KeyboardEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/ctrlKey)
    [[nodiscard]] bool ctrlKey() const;
    /// Getter of the `shiftKey` attribute.
    /// [`KeyboardEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/shiftKey)
    [[nodiscard]] bool shiftKey() const;
    /// Getter of the `altKey` attribute.
    /// [`KeyboardEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/altKey)
    [[nodiscard]] bool altKey() const;
    /// Getter of the `metaKey` attribute.
    /// [`KeyboardEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/metaKey)
    [[nodiscard]] bool metaKey() const;
    /// Getter of the `repeat` attribute.
    /// [`KeyboardEvent.repeat`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/repeat)
    [[nodiscard]] bool repeat() const;
    /// Getter of the `isComposing` attribute.
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
    /// Getter of the `charCode` attribute.
    /// [`KeyboardEvent.charCode`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/charCode)
    [[nodiscard]] unsigned long charCode() const;
    /// Getter of the `keyCode` attribute.
    /// [`KeyboardEvent.keyCode`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/keyCode)
    [[nodiscard]] unsigned long keyCode() const;
};

