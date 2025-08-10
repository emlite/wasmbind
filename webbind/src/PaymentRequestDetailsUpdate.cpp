#include <webbind/PaymentRequestDetailsUpdate.hpp>
#include <webbind/PaymentCurrencyAmount.hpp>
#include <webbind/PaymentDetailsModifier.hpp>
#include <webbind/PaymentShippingOption.hpp>
#include <webbind/AddressErrors.hpp>

namespace webbind {

PaymentRequestDetailsUpdate::PaymentRequestDetailsUpdate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate::take_ownership(Handle h) noexcept {
    return PaymentRequestDetailsUpdate(h);
}

PaymentRequestDetailsUpdate::PaymentRequestDetailsUpdate(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentRequestDetailsUpdate::PaymentRequestDetailsUpdate() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate::clone() const noexcept { return *this; }

jsbind::String PaymentRequestDetailsUpdate::error() const {
    return emlite::Val::get("error").as<jsbind::String>();
}

void PaymentRequestDetailsUpdate::error(const jsbind::String& value) {
    emlite::Val::set("error", value);
}

PaymentCurrencyAmount PaymentRequestDetailsUpdate::total() const {
    return emlite::Val::get("total").as<PaymentCurrencyAmount>();
}

void PaymentRequestDetailsUpdate::total(const PaymentCurrencyAmount& value) {
    emlite::Val::set("total", value);
}

jsbind::TypedArray<PaymentDetailsModifier> PaymentRequestDetailsUpdate::modifiers() const {
    return emlite::Val::get("modifiers").as<jsbind::TypedArray<PaymentDetailsModifier>>();
}

void PaymentRequestDetailsUpdate::modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value) {
    emlite::Val::set("modifiers", value);
}

jsbind::TypedArray<PaymentShippingOption> PaymentRequestDetailsUpdate::shippingOptions() const {
    return emlite::Val::get("shippingOptions").as<jsbind::TypedArray<PaymentShippingOption>>();
}

void PaymentRequestDetailsUpdate::shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value) {
    emlite::Val::set("shippingOptions", value);
}

jsbind::Object PaymentRequestDetailsUpdate::paymentMethodErrors() const {
    return emlite::Val::get("paymentMethodErrors").as<jsbind::Object>();
}

void PaymentRequestDetailsUpdate::paymentMethodErrors(const jsbind::Object& value) {
    emlite::Val::set("paymentMethodErrors", value);
}

AddressErrors PaymentRequestDetailsUpdate::shippingAddressErrors() const {
    return emlite::Val::get("shippingAddressErrors").as<AddressErrors>();
}

void PaymentRequestDetailsUpdate::shippingAddressErrors(const AddressErrors& value) {
    emlite::Val::set("shippingAddressErrors", value);
}


} // namespace webbind