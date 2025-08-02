#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


/// The CanMakePaymentEvent class.
/// [`CanMakePaymentEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CanMakePaymentEvent)
class CanMakePaymentEvent : public ExtendableEvent {
    explicit CanMakePaymentEvent(Handle h) noexcept;

public:
    explicit CanMakePaymentEvent(const emlite::Val &val) noexcept;
    static CanMakePaymentEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] CanMakePaymentEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CanMakePaymentEvent(..)` constructor, creating a new CanMakePaymentEvent instance
    CanMakePaymentEvent(const jsbind::String& type);
    /// The respondWith method.
    /// [`CanMakePaymentEvent.respondWith`](https://developer.mozilla.org/en-US/docs/Web/API/CanMakePaymentEvent/respondWith)
    jsbind::Undefined respondWith(jsbind::Promise<bool> canMakePaymentResponse);
};

