#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class Window;


class KeyboardEvent : public UIEvent {
    explicit KeyboardEvent(Handle h) noexcept;

public:
    explicit KeyboardEvent(const emlite::Val &val) noexcept;
    static KeyboardEvent take_ownership(Handle h) noexcept;

    KeyboardEvent clone() const noexcept;
    KeyboardEvent(const jsbind::String& type);
    KeyboardEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String key() const;
    jsbind::String code() const;
    unsigned long location() const;
    bool ctrlKey() const;
    bool shiftKey() const;
    bool altKey() const;
    bool metaKey() const;
    bool repeat() const;
    bool isComposing() const;
    bool getModifierState(const jsbind::String& keyArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey);
    jsbind::Undefined initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey);
    unsigned long charCode() const;
    unsigned long keyCode() const;
};

