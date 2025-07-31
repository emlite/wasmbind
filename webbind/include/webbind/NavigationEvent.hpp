#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class EventTarget;


/// The NavigationEvent class.
/// [`NavigationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationEvent)
class NavigationEvent : public UIEvent {
    explicit NavigationEvent(Handle h) noexcept;

public:
    explicit NavigationEvent(const emlite::Val &val) noexcept;
    static NavigationEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigationEvent clone() const noexcept;
    /// The `new NavigationEvent(..)` constructor, creating a new NavigationEvent instance
    NavigationEvent(const jsbind::String& type);
    /// The `new NavigationEvent(..)` constructor, creating a new NavigationEvent instance
    NavigationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `dir` attribute.
    /// [`NavigationEvent.dir`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationEvent/dir)
    [[nodiscard]] SpatialNavigationDirection dir() const;
    /// Getter of the `relatedTarget` attribute.
    /// [`NavigationEvent.relatedTarget`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationEvent/relatedTarget)
    [[nodiscard]] EventTarget relatedTarget() const;
};

