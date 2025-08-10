#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "enums.hpp"

namespace webbind {

class PresentationConnectionCloseEventInit;

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
    /// [`PresentationConnectionCloseEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent/reason)
    /// [`PresentationConnectionCloseEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent/reason)
    [[nodiscard]] PresentationConnectionCloseReason reason() const;
    /// [`PresentationConnectionCloseEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent/message)
    /// [`PresentationConnectionCloseEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent/message)
    [[nodiscard]] jsbind::String message() const;
};

} // namespace webbind