#include <webbind/PaymentRequest.hpp>
#include <webbind/PaymentResponse.hpp>
#include <webbind/ContactAddress.hpp>
#include <webbind/PaymentRequestEvent.hpp>


PaymentDetailsUpdate::PaymentDetailsUpdate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentDetailsUpdate PaymentDetailsUpdate::take_ownership(Handle h) noexcept {
        return PaymentDetailsUpdate(h);
    }
PaymentDetailsUpdate::PaymentDetailsUpdate(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentDetailsUpdate::PaymentDetailsUpdate() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentDetailsUpdate PaymentDetailsUpdate::clone() const noexcept { return *this; }

jsbind::DOMString PaymentDetailsUpdate::error() const {
    return emlite::Val::get("error").as<jsbind::DOMString>();
}

void PaymentDetailsUpdate::error(const jsbind::DOMString& value) {
    emlite::Val::set("error", value);
}

jsbind::Any PaymentDetailsUpdate::total() const {
    return emlite::Val::get("total").as<jsbind::Any>();
}

void PaymentDetailsUpdate::total(const jsbind::Any& value) {
    emlite::Val::set("total", value);
}

jsbind::Any PaymentDetailsUpdate::shippingAddressErrors() const {
    return emlite::Val::get("shippingAddressErrors").as<jsbind::Any>();
}

void PaymentDetailsUpdate::shippingAddressErrors(const jsbind::Any& value) {
    emlite::Val::set("shippingAddressErrors", value);
}

jsbind::Any PaymentDetailsUpdate::payerErrors() const {
    return emlite::Val::get("payerErrors").as<jsbind::Any>();
}

void PaymentDetailsUpdate::payerErrors(const jsbind::Any& value) {
    emlite::Val::set("payerErrors", value);
}

jsbind::Object PaymentDetailsUpdate::paymentMethodErrors() const {
    return emlite::Val::get("paymentMethodErrors").as<jsbind::Object>();
}

void PaymentDetailsUpdate::paymentMethodErrors(const jsbind::Object& value) {
    emlite::Val::set("paymentMethodErrors", value);
}

PaymentRequest PaymentRequest::take_ownership(Handle h) noexcept {
        return PaymentRequest(h);
    }
PaymentRequest PaymentRequest::clone() const noexcept { return *this; }
PaymentRequest::PaymentRequest(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PaymentRequest::PaymentRequest(const emlite::Val &val) noexcept: EventTarget(val) {}


PaymentRequest::PaymentRequest(const jsbind::Sequence<PaymentMethodData>& methodData, const jsbind::Any& details, const jsbind::Any& options): EventTarget(emlite::Val::global("PaymentRequest").new_(methodData, details, options)) {}

jsbind::Promise PaymentRequest::show(const jsbind::Promise& detailsPromise) {
    return EventTarget::call("show", detailsPromise).as<jsbind::Promise>();
}

jsbind::Promise PaymentRequest::abort() {
    return EventTarget::call("abort").as<jsbind::Promise>();
}

jsbind::Promise PaymentRequest::canMakePayment() {
    return EventTarget::call("canMakePayment").as<jsbind::Promise>();
}

jsbind::DOMString PaymentRequest::id() const {
    return EventTarget::get("id").as<jsbind::DOMString>();
}

ContactAddress PaymentRequest::shippingAddress() const {
    return EventTarget::get("shippingAddress").as<ContactAddress>();
}

jsbind::DOMString PaymentRequest::shippingOption() const {
    return EventTarget::get("shippingOption").as<jsbind::DOMString>();
}

PaymentShippingType PaymentRequest::shippingType() const {
    return EventTarget::get("shippingType").as<PaymentShippingType>();
}

jsbind::Any PaymentRequest::onshippingaddresschange() const {
    return EventTarget::get("onshippingaddresschange").as<jsbind::Any>();
}

void PaymentRequest::onshippingaddresschange(const jsbind::Any& value) {
    EventTarget::set("onshippingaddresschange", value);
}

jsbind::Any PaymentRequest::onshippingoptionchange() const {
    return EventTarget::get("onshippingoptionchange").as<jsbind::Any>();
}

void PaymentRequest::onshippingoptionchange(const jsbind::Any& value) {
    EventTarget::set("onshippingoptionchange", value);
}

jsbind::Any PaymentRequest::onpaymentmethodchange() const {
    return EventTarget::get("onpaymentmethodchange").as<jsbind::Any>();
}

void PaymentRequest::onpaymentmethodchange(const jsbind::Any& value) {
    EventTarget::set("onpaymentmethodchange", value);
}

jsbind::Promise PaymentRequest::securePaymentConfirmationAvailability() {
    return emlite::Val::global("paymentrequest").call("securePaymentConfirmationAvailability").as<jsbind::Promise>();
}

