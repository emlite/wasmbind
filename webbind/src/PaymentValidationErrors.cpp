#include <webbind/PaymentValidationErrors.hpp>
#include <webbind/PayerErrors.hpp>
#include <webbind/AddressErrors.hpp>

namespace webbind {

PaymentValidationErrors::PaymentValidationErrors(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentValidationErrors PaymentValidationErrors::take_ownership(Handle h) noexcept {
    return PaymentValidationErrors(h);
}

PaymentValidationErrors::PaymentValidationErrors(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentValidationErrors::PaymentValidationErrors() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentValidationErrors PaymentValidationErrors::clone() const noexcept { return *this; }

PayerErrors PaymentValidationErrors::payer() const {
    return emlite::Val::get("payer").as<PayerErrors>();
}

void PaymentValidationErrors::payer(const PayerErrors& value) {
    emlite::Val::set("payer", value);
}

AddressErrors PaymentValidationErrors::shippingAddress() const {
    return emlite::Val::get("shippingAddress").as<AddressErrors>();
}

void PaymentValidationErrors::shippingAddress(const AddressErrors& value) {
    emlite::Val::set("shippingAddress", value);
}

jsbind::String PaymentValidationErrors::error() const {
    return emlite::Val::get("error").as<jsbind::String>();
}

void PaymentValidationErrors::error(const jsbind::String& value) {
    emlite::Val::set("error", value);
}

jsbind::Object PaymentValidationErrors::paymentMethod() const {
    return emlite::Val::get("paymentMethod").as<jsbind::Object>();
}

void PaymentValidationErrors::paymentMethod(const jsbind::Object& value) {
    emlite::Val::set("paymentMethod", value);
}


} // namespace webbind