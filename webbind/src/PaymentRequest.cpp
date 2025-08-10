#include <webbind/PaymentRequest.hpp>
#include <webbind/PaymentMethodData.hpp>
#include <webbind/PaymentDetailsInit.hpp>
#include <webbind/PaymentOptions.hpp>
#include <webbind/PaymentResponse.hpp>
#include <webbind/PaymentDetailsUpdate.hpp>
#include <webbind/ContactAddress.hpp>

namespace webbind {

PaymentRequest PaymentRequest::take_ownership(Handle h) noexcept {
    return PaymentRequest(h);
}

PaymentRequest PaymentRequest::clone() const noexcept { return *this; }

emlite::Val PaymentRequest::instance() noexcept { return emlite::Val::global("PaymentRequest"); }

PaymentRequest::PaymentRequest(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

PaymentRequest::PaymentRequest(const emlite::Val &val) noexcept: EventTarget(val) {}

PaymentRequest::PaymentRequest(const jsbind::TypedArray<PaymentMethodData>& methodData, const PaymentDetailsInit& details) : EventTarget(emlite::Val::global("PaymentRequest").new_(methodData, details)) {}

PaymentRequest::PaymentRequest(const jsbind::TypedArray<PaymentMethodData>& methodData, const PaymentDetailsInit& details, const PaymentOptions& options) : EventTarget(emlite::Val::global("PaymentRequest").new_(methodData, details, options)) {}

jsbind::Promise<PaymentResponse> PaymentRequest::show() {
    return EventTarget::call("show").as<jsbind::Promise<PaymentResponse>>();
}

jsbind::Promise<PaymentResponse> PaymentRequest::show(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise) {
    return EventTarget::call("show", detailsPromise).as<jsbind::Promise<PaymentResponse>>();
}

jsbind::Promise<jsbind::Undefined> PaymentRequest::abort() {
    return EventTarget::call("abort").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<bool> PaymentRequest::canMakePayment() {
    return EventTarget::call("canMakePayment").as<jsbind::Promise<bool>>();
}

jsbind::String PaymentRequest::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

ContactAddress PaymentRequest::shippingAddress() const {
    return EventTarget::get("shippingAddress").as<ContactAddress>();
}

jsbind::String PaymentRequest::shippingOption() const {
    return EventTarget::get("shippingOption").as<jsbind::String>();
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

jsbind::Promise<SecurePaymentConfirmationAvailability> PaymentRequest::securePaymentConfirmationAvailability() {
    return emlite::Val::global("paymentrequest").call("securePaymentConfirmationAvailability").as<jsbind::Promise<SecurePaymentConfirmationAvailability>>();
}


} // namespace webbind