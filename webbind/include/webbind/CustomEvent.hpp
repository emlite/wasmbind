#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class CustomEvent : public Event {
    explicit CustomEvent(Handle h) noexcept;

public:
    explicit CustomEvent(const emlite::Val &val) noexcept;
    static CustomEvent take_ownership(Handle h) noexcept;

    CustomEvent clone() const noexcept;
    CustomEvent(const jsbind::DOMString& type);
    CustomEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Any detail() const;
    jsbind::Undefined initCustomEvent(const jsbind::DOMString& type);
    jsbind::Undefined initCustomEvent(const jsbind::DOMString& type, bool bubbles);
    jsbind::Undefined initCustomEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable);
    jsbind::Undefined initCustomEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::Any& detail);
};

