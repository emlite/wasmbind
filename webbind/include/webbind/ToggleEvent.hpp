#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Element;


/// The ToggleEvent class.
/// [`ToggleEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent)
class ToggleEvent : public Event {
    explicit ToggleEvent(Handle h) noexcept;

public:
    explicit ToggleEvent(const emlite::Val &val) noexcept;
    static ToggleEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ToggleEvent clone() const noexcept;
    /// The `new ToggleEvent(..)` constructor, creating a new ToggleEvent instance
    ToggleEvent(const jsbind::String& type);
    /// The `new ToggleEvent(..)` constructor, creating a new ToggleEvent instance
    ToggleEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `oldState` attribute.
    /// [`ToggleEvent.oldState`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/oldState)
    [[nodiscard]] jsbind::String oldState() const;
    /// Getter of the `newState` attribute.
    /// [`ToggleEvent.newState`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/newState)
    [[nodiscard]] jsbind::String newState() const;
    /// Getter of the `source` attribute.
    /// [`ToggleEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent/source)
    [[nodiscard]] Element source() const;
};

