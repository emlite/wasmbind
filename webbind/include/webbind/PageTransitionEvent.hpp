#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class PageTransitionEvent : public Event {
    explicit PageTransitionEvent(Handle h) noexcept;

public:
    explicit PageTransitionEvent(const emlite::Val &val) noexcept;
    static PageTransitionEvent take_ownership(Handle h) noexcept;

    PageTransitionEvent clone() const noexcept;
    PageTransitionEvent(const jsbind::DOMString& type);
    PageTransitionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    bool persisted() const;
};

