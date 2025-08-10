#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "PresentationConnectionCloseEventInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface PresentationConnectionCloseEvent
/// [`PresentationConnectionCloseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent)
class PresentationConnectionCloseEvent : public Event {
    explicit PresentationConnectionCloseEvent(Handle h) noexcept;
public:
    explicit PresentationConnectionCloseEvent(const emlite::Val &val) noexcept;
    static PresentationConnectionCloseEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionCloseEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PresentationConnectionCloseEvent(..)` constructor, creating a new PresentationConnectionCloseEvent instance
    PresentationConnectionCloseEvent(const jsbind::String& type, const PresentationConnectionCloseEventInit& eventInitDict);
    /// Getter of the `reason` attribute.
    /// [`PresentationConnectionCloseEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent/reason)
    [[nodiscard]] PresentationConnectionCloseReason reason() const;
    /// Getter of the `message` attribute.
    /// [`PresentationConnectionCloseEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent/message)
    [[nodiscard]] jsbind::String message() const;
};

} // namespace webbind