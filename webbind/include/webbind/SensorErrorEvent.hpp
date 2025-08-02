#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class DOMException;


/// The SensorErrorEvent class.
/// [`SensorErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SensorErrorEvent)
class SensorErrorEvent : public Event {
    explicit SensorErrorEvent(Handle h) noexcept;

public:
    explicit SensorErrorEvent(const emlite::Val &val) noexcept;
    static SensorErrorEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SensorErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SensorErrorEvent(..)` constructor, creating a new SensorErrorEvent instance
    SensorErrorEvent(const jsbind::String& type, const jsbind::Any& errorEventInitDict);
    /// Getter of the `error` attribute.
    /// [`SensorErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SensorErrorEvent/error)
    [[nodiscard]] DOMException error() const;
};

