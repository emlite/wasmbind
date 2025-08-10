#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class PresentationConnectionAvailableEventInit;
class PresentationConnection;

/// Interface PresentationConnectionAvailableEvent
/// [`PresentationConnectionAvailableEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionAvailableEvent)
class PresentationConnectionAvailableEvent : public Event {
    explicit PresentationConnectionAvailableEvent(Handle h) noexcept;
public:
    explicit PresentationConnectionAvailableEvent(const emlite::Val &val) noexcept;
    static PresentationConnectionAvailableEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionAvailableEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PresentationConnectionAvailableEvent(..)` constructor, creating a new PresentationConnectionAvailableEvent instance
    PresentationConnectionAvailableEvent(const jsbind::String& type, const PresentationConnectionAvailableEventInit& eventInitDict);
    /// [`PresentationConnectionAvailableEvent.connection`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionAvailableEvent/connection)
    /// [`PresentationConnectionAvailableEvent.connection`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionAvailableEvent/connection)
    [[nodiscard]] PresentationConnection connection() const;
};

} // namespace webbind