#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Window;
class InputDeviceCapabilities;


class UIEvent : public Event {
    explicit UIEvent(Handle h) noexcept;

public:
    explicit UIEvent(const emlite::Val &val) noexcept;
    static UIEvent take_ownership(Handle h) noexcept;

    UIEvent clone() const noexcept;
    UIEvent(const jsbind::DOMString& type);
    UIEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Window view() const;
    long detail() const;
    InputDeviceCapabilities sourceCapabilities() const;
    jsbind::Undefined initUIEvent(const jsbind::DOMString& typeArg);
    jsbind::Undefined initUIEvent(const jsbind::DOMString& typeArg, bool bubblesArg);
    jsbind::Undefined initUIEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg);
    jsbind::Undefined initUIEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg);
    jsbind::Undefined initUIEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg);
    unsigned long which() const;
};

