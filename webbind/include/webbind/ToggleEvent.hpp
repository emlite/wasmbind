#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class ToggleEventInit;
class Element;

/// Interface ToggleEvent
/// [`ToggleEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent)
class ToggleEvent : public Event {
    explicit ToggleEvent(Handle h) noexcept;
public:
    explicit ToggleEvent(const emlite::Val &val) noexcept;
    static ToggleEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] ToggleEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ToggleEvent(..)` constructor, creating a new ToggleEvent instance
    ToggleEvent(const jsbind::String& type);
    /// The `new ToggleEvent(..)` constructor, creating a new ToggleEvent instance
    ToggleEvent(const jsbind::String& type, const ToggleEventInit& eventInitDict);
    /// [`ToggleEvent.oldState`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/oldState)
    /// [`ToggleEvent.oldState`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/oldState)
    [[nodiscard]] jsbind::String oldState() const;
    /// [`ToggleEvent.newState`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/newState)
    /// [`ToggleEvent.newState`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/newState)
    [[nodiscard]] jsbind::String newState() const;
    /// [`ToggleEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/source)
    /// [`ToggleEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/source)
    [[nodiscard]] Element source() const;
};

} // namespace webbind