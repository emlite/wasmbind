#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Element;


class ToggleEvent : public Event {
    explicit ToggleEvent(Handle h) noexcept;

public:
    explicit ToggleEvent(const emlite::Val &val) noexcept;
    static ToggleEvent take_ownership(Handle h) noexcept;

    ToggleEvent clone() const noexcept;
    ToggleEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString oldState() const;
    jsbind::DOMString newState() const;
    Element source() const;
};

