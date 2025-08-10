#include <webbind/PaymentRequestEvent.hpp>
#include <webbind/PaymentRequestEventInit.hpp>
#include <webbind/PaymentMethodData.hpp>
#include <webbind/PaymentDetailsModifier.hpp>
#include <webbind/PaymentShippingOption.hpp>
#include <webbind/WindowClient.hpp>
#include <webbind/PaymentRequestDetailsUpdate.hpp>
#include <webbind/AddressInit.hpp>
#include <webbind/PaymentHandlerResponse.hpp>

namespace webbind {

PaymentRequestEvent PaymentRequestEvent::take_ownership(Handle h) noexcept {
    return PaymentRequestEvent(h);
}

PaymentRequestEvent PaymentRequestEvent::clone() const noexcept { return *this; }

emlite::Val PaymentRequestEvent::instance() noexcept { return emlite::Val::global("PaymentRequestEvent"); }

PaymentRequestEvent::PaymentRequestEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}

PaymentRequestEvent::PaymentRequestEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

PaymentRequestEvent::PaymentRequestEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("PaymentRequestEvent").new_(type)) {}

PaymentRequestEvent::PaymentRequestEvent(const jsbind::String& type, const PaymentRequestEventInit& eventInitDict) : ExtendableEvent(emlite::Val::global("PaymentRequestEvent").new_(type, eventInitDict)) {}

jsbind::String PaymentRequestEvent::topOrigin() const {
    return ExtendableEvent::get("topOrigin").as<jsbind::String>();
}

jsbind::String PaymentRequestEvent::paymentRequestOrigin() const {
    return ExtendableEvent::get("paymentRequestOrigin").as<jsbind::String>();
}

jsbind::String PaymentRequestEvent::paymentRequestId() const {
    return ExtendableEvent::get("paymentRequestId").as<jsbind::String>();
}

jsbind::TypedArray<PaymentMethodData> PaymentRequestEvent::methodData() const {
    return ExtendableEvent::get("methodData").as<jsbind::TypedArray<PaymentMethodData>>();
}

jsbind::Object PaymentRequestEvent::total() const {
    return ExtendableEvent::get("total").as<jsbind::Object>();
}

jsbind::TypedArray<PaymentDetailsModifier> PaymentRequestEvent::modifiers() const {
    return ExtendableEvent::get("modifiers").as<jsbind::TypedArray<PaymentDetailsModifier>>();
}

jsbind::Object PaymentRequestEvent::paymentOptions() const {
    return ExtendableEvent::get("paymentOptions").as<jsbind::Object>();
}

jsbind::TypedArray<PaymentShippingOption> PaymentRequestEvent::shippingOptions() const {
    return ExtendableEvent::get("shippingOptions").as<jsbind::TypedArray<PaymentShippingOption>>();
}

jsbind::Promise<WindowClient> PaymentRequestEvent::openWindow(const jsbind::String& url) {
    return ExtendableEvent::call("openWindow", url).as<jsbind::Promise<WindowClient>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changePaymentMethod(const jsbind::String& methodName) {
    return ExtendableEvent::call("changePaymentMethod", methodName).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changePaymentMethod(const jsbind::String& methodName, const jsbind::Object& methodDetails) {
    return ExtendableEvent::call("changePaymentMethod", methodName, methodDetails).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changeShippingAddress() {
    return ExtendableEvent::call("changeShippingAddress").as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changeShippingAddress(const AddressInit& shippingAddress) {
    return ExtendableEvent::call("changeShippingAddress", shippingAddress).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changeShippingOption(const jsbind::String& shippingOption) {
    return ExtendableEvent::call("changeShippingOption", shippingOption).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Undefined PaymentRequestEvent::respondWith(const jsbind::Promise<PaymentHandlerResponse>& handlerResponsePromise) {
    return ExtendableEvent::call("respondWith", handlerResponsePromise).as<jsbind::Undefined>();
}


} // namespace webbind