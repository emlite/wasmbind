#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class PopStateEventInit;

/// Interface PopStateEvent
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
    PopStateEvent(const jsbind::String& type, const PopStateEventInit& eventInitDict);
    /// [`PopStateEvent.state`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent/state)
    /// [`PopStateEvent.state`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent/state)
    [[nodiscard]] jsbind::Any state() const;
    /// [`PopStateEvent.hasUAVisualTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent/hasUAVisualTransition)
    /// [`PopStateEvent.hasUAVisualTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent/hasUAVisualTransition)
    [[nodiscard]] bool hasUAVisualTransition() const;
};

} // namespace webbind