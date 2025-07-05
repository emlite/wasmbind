#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class EventTarget;


class NavigationEvent : public UIEvent {
    explicit NavigationEvent(Handle h) noexcept;

public:
    explicit NavigationEvent(const emlite::Val &val) noexcept;
    static NavigationEvent take_ownership(Handle h) noexcept;

    NavigationEvent clone() const noexcept;
    NavigationEvent(const jsbind::DOMString& type);
    NavigationEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    SpatialNavigationDirection dir() const;
    EventTarget relatedTarget() const;
};

