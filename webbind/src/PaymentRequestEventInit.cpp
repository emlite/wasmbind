#include <webbind/PaymentRequestEventInit.hpp>
#include <webbind/PaymentMethodData.hpp>
#include <webbind/PaymentCurrencyAmount.hpp>
#include <webbind/PaymentDetailsModifier.hpp>
#include <webbind/PaymentOptions.hpp>
#include <webbind/PaymentShippingOption.hpp>

namespace webbind {

PaymentRequestEventInit::PaymentRequestEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
PaymentRequestEventInit PaymentRequestEventInit::take_ownership(Handle h) noexcept {
    return PaymentRequestEventInit(h);
}

PaymentRequestEventInit::PaymentRequestEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}

PaymentRequestEventInit::PaymentRequestEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}

PaymentRequestEventInit PaymentRequestEventInit::clone() const noexcept { return *this; }

jsbind::String PaymentRequestEventInit::topOrigin() const {
    return emlite::Val::get("topOrigin").as<jsbind::String>();
}

void PaymentRequestEventInit::topOrigin(const jsbind::String& value) {
    emlite::Val::set("topOrigin", value);
}

jsbind::String PaymentRequestEventInit::paymentRequestOrigin() const {
    return emlite::Val::get("paymentRequestOrigin").as<jsbind::String>();
}

void PaymentRequestEventInit::paymentRequestOrigin(const jsbind::String& value) {
    emlite::Val::set("paymentRequestOrigin", value);
}

jsbind::String PaymentRequestEventInit::paymentRequestId() const {
    return emlite::Val::get("paymentRequestId").as<jsbind::String>();
}

void PaymentRequestEventInit::paymentRequestId(const jsbind::String& value) {
    emlite::Val::set("paymentRequestId", value);
}

jsbind::TypedArray<PaymentMethodData> PaymentRequestEventInit::methodData() const {
    return emlite::Val::get("methodData").as<jsbind::TypedArray<PaymentMethodData>>();
}

void PaymentRequestEventInit::methodData(const jsbind::TypedArray<PaymentMethodData>& value) {
    emlite::Val::set("methodData", value);
}

PaymentCurrencyAmount PaymentRequestEventInit::total() const {
    return emlite::Val::get("total").as<PaymentCurrencyAmount>();
}

void PaymentRequestEventInit::total(const PaymentCurrencyAmount& value) {
    emlite::Val::set("total", value);
}

jsbind::TypedArray<PaymentDetailsModifier> PaymentRequestEventInit::modifiers() const {
    return emlite::Val::get("modifiers").as<jsbind::TypedArray<PaymentDetailsModifier>>();
}

void PaymentRequestEventInit::modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value) {
    emlite::Val::set("modifiers", value);
}

PaymentOptions PaymentRequestEventInit::paymentOptions() const {
    return emlite::Val::get("paymentOptions").as<PaymentOptions>();
}

void PaymentRequestEventInit::paymentOptions(const PaymentOptions& value) {
    emlite::Val::set("paymentOptions", value);
}

jsbind::TypedArray<PaymentShippingOption> PaymentRequestEventInit::shippingOptions() const {
    return emlite::Val::get("shippingOptions").as<jsbind::TypedArray<PaymentShippingOption>>();
}

void PaymentRequestEventInit::shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value) {
    emlite::Val::set("shippingOptions", value);
}


} // namespace webbind