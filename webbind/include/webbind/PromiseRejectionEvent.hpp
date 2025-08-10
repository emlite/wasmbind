#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "PromiseRejectionEventInit.hpp"

namespace webbind {

/// Interface PromiseRejectionEvent
/// [`PromiseRejectionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEvent)
class PromiseRejectionEvent : public Event {
    explicit PromiseRejectionEvent(Handle h) noexcept;
public:
    explicit PromiseRejectionEvent(const emlite::Val &val) noexcept;
    static PromiseRejectionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PromiseRejectionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PromiseRejectionEvent(..)` constructor, creating a new PromiseRejectionEvent instance
    PromiseRejectionEvent(const jsbind::String& type, const PromiseRejectionEventInit& eventInitDict);
    /// [`PromiseRejectionEvent.promise`](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEvent/promise)
    /// [`PromiseRejectionEvent.promise`](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEvent/promise)
    [[nodiscard]] jsbind::Object promise() const;
    /// [`PromiseRejectionEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEvent/reason)
    /// [`PromiseRejectionEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEvent/reason)
    [[nodiscard]] jsbind::Any reason() const;
};

} // namespace webbind