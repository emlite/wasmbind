#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The PopStateEvent class.
/// [`PopStateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent)
class PopStateEvent : public Event {
    explicit PopStateEvent(Handle h) noexcept;

public:
    explicit PopStateEvent(const emlite::Val &val) noexcept;
    static PopStateEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PopStateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PopStateEvent(..)` constructor, creating a new PopStateEvent instance
    PopStateEvent(const jsbind::String& type);
    /// The `new PopStateEvent(..)` constructor, creating a new PopStateEvent instance
    PopStateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `state` attribute.
    /// [`PopStateEvent.state`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent/state)
    [[nodiscard]] jsbind::Any state() const;
    /// Getter of the `hasUAVisualTransition` attribute.
    /// [`PopStateEvent.hasUAVisualTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent/hasUAVisualTransition)
    [[nodiscard]] bool hasUAVisualTransition() const;
};

