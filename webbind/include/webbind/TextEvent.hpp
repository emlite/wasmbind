#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class Window;


class TextEvent : public UIEvent {
    explicit TextEvent(Handle h) noexcept;

public:
    explicit TextEvent(const emlite::Val &val) noexcept;
    static TextEvent take_ownership(Handle h) noexcept;

    TextEvent clone() const noexcept;
    jsbind::DOMString data() const;
    jsbind::Undefined initTextEvent(const jsbind::DOMString& type);
    jsbind::Undefined initTextEvent(const jsbind::DOMString& type, bool bubbles);
    jsbind::Undefined initTextEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable);
    jsbind::Undefined initTextEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const Window& view);
    jsbind::Undefined initTextEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const Window& view, const jsbind::DOMString& data);
};

