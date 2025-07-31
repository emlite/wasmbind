#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The ExtendableEvent class.
/// [`ExtendableEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableEvent)
class ExtendableEvent : public Event {
    explicit ExtendableEvent(Handle h) noexcept;

public:
    explicit ExtendableEvent(const emlite::Val &val) noexcept;
    static ExtendableEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ExtendableEvent clone() const noexcept;
    /// The `new ExtendableEvent(..)` constructor, creating a new ExtendableEvent instance
    ExtendableEvent(const jsbind::String& type);
    /// The `new ExtendableEvent(..)` constructor, creating a new ExtendableEvent instance
    ExtendableEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// The waitUntil method.
    /// [`ExtendableEvent.waitUntil`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableEvent/waitUntil)
    jsbind::Undefined waitUntil(const jsbind::Promise<jsbind::Any>& f);
};

