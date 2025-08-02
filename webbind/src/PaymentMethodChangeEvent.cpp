#include <webbind/PaymentMethodChangeEvent.hpp>


PaymentMethodChangeEvent PaymentMethodChangeEvent::take_ownership(Handle h) noexcept {
        return PaymentMethodChangeEvent(h);
    }
PaymentMethodChangeEvent PaymentMethodChangeEvent::clone() const noexcept { return *this; }
emlite::Val PaymentMethodChangeEvent::instance() noexcept { return emlite::Val::global("PaymentMethodChangeEvent"); }
PaymentMethodChangeEvent::PaymentMethodChangeEvent(Handle h) noexcept : PaymentRequestUpdateEvent(emlite::Val::take_ownership(h)) {}
PaymentMethodChangeEvent::PaymentMethodChangeEvent(const emlite::Val &val) noexcept: PaymentRequestUpdateEvent(val) {}


PaymentMethodChangeEvent::PaymentMethodChangeEvent(const jsbind::String& type) : PaymentRequestUpdateEvent(emlite::Val::global("PaymentMethodChangeEvent").new_(type)) {}

PaymentMethodChangeEvent::PaymentMethodChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : PaymentRequestUpdateEvent(emlite::Val::global("PaymentMethodChangeEvent").new_(type, eventInitDict)) {}

jsbind::String PaymentMethodChangeEvent::methodName() const {
    return PaymentRequestUpdateEvent::get("methodName").as<jsbind::String>();
}

jsbind::Object PaymentMethodChangeEvent::methodDetails() const {
    return PaymentRequestUpdateEvent::get("methodDetails").as<jsbind::Object>();
}

