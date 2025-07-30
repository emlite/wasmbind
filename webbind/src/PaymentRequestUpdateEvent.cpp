#include <webbind/PaymentRequestUpdateEvent.hpp>
#include <webbind/PaymentRequest.hpp>


PaymentRequestUpdateEvent PaymentRequestUpdateEvent::take_ownership(Handle h) noexcept {
        return PaymentRequestUpdateEvent(h);
    }
PaymentRequestUpdateEvent PaymentRequestUpdateEvent::clone() const noexcept { return *this; }
PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}


PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(const jsbind::String& type) : Event(emlite::Val::global("PaymentRequestUpdateEvent").new_(type)) {}

PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PaymentRequestUpdateEvent").new_(type, eventInitDict)) {}

jsbind::Undefined PaymentRequestUpdateEvent::updateWith(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise) {
    return Event::call("updateWith", detailsPromise).as<jsbind::Undefined>();
}

