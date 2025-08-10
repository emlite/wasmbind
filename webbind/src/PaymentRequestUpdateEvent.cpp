#include "webbind/PaymentRequestUpdateEvent.hpp"
#include "webbind/PaymentRequestUpdateEventInit.hpp"
#include "webbind/PaymentDetailsUpdate.hpp"

namespace webbind {

PaymentRequestUpdateEvent PaymentRequestUpdateEvent::take_ownership(Handle h) noexcept {
        return PaymentRequestUpdateEvent(h);
    }
PaymentRequestUpdateEvent PaymentRequestUpdateEvent::clone() const noexcept { return *this; }
emlite::Val PaymentRequestUpdateEvent::instance() noexcept { return emlite::Val::global("PaymentRequestUpdateEvent"); }
PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}

PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(const jsbind::String& type) : Event(emlite::Val::global("PaymentRequestUpdateEvent").new_(type)) {}

PaymentRequestUpdateEvent::PaymentRequestUpdateEvent(const jsbind::String& type, const PaymentRequestUpdateEventInit& eventInitDict) : Event(emlite::Val::global("PaymentRequestUpdateEvent").new_(type, eventInitDict)) {}

jsbind::Undefined PaymentRequestUpdateEvent::updateWith(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise) {
    return Event::call("updateWith", detailsPromise).as<jsbind::Undefined>();
}


} // namespace webbind