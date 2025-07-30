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
    ToggleEvent(const jsbind::String& type);
    ToggleEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String oldState() const;
    jsbind::String newState() const;
    Element source() const;
};

