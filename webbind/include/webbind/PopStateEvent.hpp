#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class PopStateEvent : public Event {
    explicit PopStateEvent(Handle h) noexcept;

public:
    explicit PopStateEvent(const emlite::Val &val) noexcept;
    static PopStateEvent take_ownership(Handle h) noexcept;

    PopStateEvent clone() const noexcept;
    PopStateEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Any state() const;
    bool hasUAVisualTransition() const;
};

