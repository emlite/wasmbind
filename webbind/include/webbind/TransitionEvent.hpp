#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class TransitionEvent : public Event {
    explicit TransitionEvent(Handle h) noexcept;

public:
    explicit TransitionEvent(const emlite::Val &val) noexcept;
    static TransitionEvent take_ownership(Handle h) noexcept;

    TransitionEvent clone() const noexcept;
    TransitionEvent(const jsbind::CSSOMString& type);
    TransitionEvent(const jsbind::CSSOMString& type, const jsbind::Any& transitionEventInitDict);
    jsbind::CSSOMString propertyName() const;
    double elapsedTime() const;
    jsbind::CSSOMString pseudoElement() const;
};

