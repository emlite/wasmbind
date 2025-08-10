#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class PaymentRequestUpdateEventInit;
class PaymentDetailsUpdate;

/// Interface PaymentRequestUpdateEvent
/// [`PaymentRequestUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestUpdateEvent)
class PaymentRequestUpdateEvent : public Event {
    explicit PaymentRequestUpdateEvent(Handle h) noexcept;
public:
    explicit PaymentRequestUpdateEvent(const emlite::Val &val) noexcept;
    static PaymentRequestUpdateEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentRequestUpdateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PaymentRequestUpdateEvent(..)` constructor, creating a new PaymentRequestUpdateEvent instance
    PaymentRequestUpdateEvent(const jsbind::String& type);
    /// The `new PaymentRequestUpdateEvent(..)` constructor, creating a new PaymentRequestUpdateEvent instance
    PaymentRequestUpdateEvent(const jsbind::String& type, const PaymentRequestUpdateEventInit& eventInitDict);
    /// The updateWith method.
    /// [`PaymentRequestUpdateEvent.updateWith`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestUpdateEvent/updateWith)
    jsbind::Undefined updateWith(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise);
};

} // namespace webbind