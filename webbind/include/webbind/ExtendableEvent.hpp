#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class ExtendableEventInit;

/// Interface ExtendableEvent
/// [`ExtendableEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableEvent)
class ExtendableEvent : public Event {
    explicit ExtendableEvent(Handle h) noexcept;
public:
    explicit ExtendableEvent(const emlite::Val &val) noexcept;
    static ExtendableEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] ExtendableEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ExtendableEvent(..)` constructor, creating a new ExtendableEvent instance
    ExtendableEvent(const jsbind::String& type);
    /// The `new ExtendableEvent(..)` constructor, creating a new ExtendableEvent instance
    ExtendableEvent(const jsbind::String& type, const ExtendableEventInit& eventInitDict);
    /// The waitUntil method.
    /// [`ExtendableEvent.waitUntil`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableEvent/waitUntil)
    jsbind::Undefined waitUntil(const jsbind::Promise<jsbind::Any>& f);
};

} // namespace webbind