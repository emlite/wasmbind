#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class PresentationConnection;


/// The PresentationConnectionAvailableEvent class.
/// [`PresentationConnectionAvailableEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionAvailableEvent)
class PresentationConnectionAvailableEvent : public Event {
    explicit PresentationConnectionAvailableEvent(Handle h) noexcept;

public:
    explicit PresentationConnectionAvailableEvent(const emlite::Val &val) noexcept;
    static PresentationConnectionAvailableEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PresentationConnectionAvailableEvent clone() const noexcept;
    /// The `new PresentationConnectionAvailableEvent(..)` constructor, creating a new PresentationConnectionAvailableEvent instance
    PresentationConnectionAvailableEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `connection` attribute.
    /// [`PresentationConnectionAvailableEvent.connection`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionAvailableEvent/connection)
    [[nodiscard]] PresentationConnection connection() const;
};

