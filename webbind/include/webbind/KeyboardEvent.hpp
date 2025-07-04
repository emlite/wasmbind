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
    KeyboardEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString key() const;
    jsbind::DOMString code() const;
    unsigned long location() const;
    bool ctrlKey() const;
    bool shiftKey() const;
    bool altKey() const;
    bool metaKey() const;
    bool repeat() const;
    bool isComposing() const;
    bool getModifierState(const jsbind::DOMString& keyArg);
    jsbind::Undefined initKeyboardEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::DOMString& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey);
    unsigned long charCode() const;
    unsigned long keyCode() const;
};

