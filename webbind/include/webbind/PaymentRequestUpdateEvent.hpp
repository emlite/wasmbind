#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "PaymentRequest.hpp"
#include "enums.hpp"


/// The PaymentRequestUpdateEvent class.
/// [`PaymentRequestUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestUpdateEvent)
class PaymentRequestUpdateEvent : public Event {
    explicit PaymentRequestUpdateEvent(Handle h) noexcept;

public:
    explicit PaymentRequestUpdateEvent(const emlite::Val &val) noexcept;
    static PaymentRequestUpdateEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PaymentRequestUpdateEvent clone() const noexcept;
    /// The `new PaymentRequestUpdateEvent(..)` constructor, creating a new PaymentRequestUpdateEvent instance
    PaymentRequestUpdateEvent(const jsbind::String& type);
    /// The `new PaymentRequestUpdateEvent(..)` constructor, creating a new PaymentRequestUpdateEvent instance
    PaymentRequestUpdateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// The updateWith method.
    /// [`PaymentRequestUpdateEvent.updateWith`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestUpdateEvent/updateWith)
    jsbind::Undefined updateWith(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise);
};

