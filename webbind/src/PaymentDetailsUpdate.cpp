#include <webbind/PaymentDetailsUpdate.hpp>
#include <webbind/PaymentItem.hpp>
#include <webbind/AddressErrors.hpp>
#include <webbind/PayerErrors.hpp>

namespace webbind {

PaymentDetailsUpdate::PaymentDetailsUpdate(Handle h) noexcept : PaymentDetailsBase(emlite::Val::take_ownership(h)) {}
PaymentDetailsUpdate PaymentDetailsUpdate::take_ownership(Handle h) noexcept {
    return PaymentDetailsUpdate(h);
}

PaymentDetailsUpdate::PaymentDetailsUpdate(const emlite::Val &val) noexcept: PaymentDetailsBase(val) {}

PaymentDetailsUpdate::PaymentDetailsUpdate() noexcept: PaymentDetailsBase(emlite::Val::object()) {}

PaymentDetailsUpdate PaymentDetailsUpdate::clone() const noexcept { return *this; }

jsbind::String PaymentDetailsUpdate::error() const {
    return emlite::Val::get("error").as<jsbind::String>();
}

void PaymentDetailsUpdate::error(const jsbind::String& value) {
    emlite::Val::set("error", value);
}

PaymentItem PaymentDetailsUpdate::total() const {
    return emlite::Val::get("total").as<PaymentItem>();
}

void PaymentDetailsUpdate::total(const PaymentItem& value) {
    emlite::Val::set("total", value);
}

AddressErrors PaymentDetailsUpdate::shippingAddressErrors() const {
    return emlite::Val::get("shippingAddressErrors").as<AddressErrors>();
}

void PaymentDetailsUpdate::shippingAddressErrors(const AddressErrors& value) {
    emlite::Val::set("shippingAddressErrors", value);
}

PayerErrors PaymentDetailsUpdate::payerErrors() const {
    return emlite::Val::get("payerErrors").as<PayerErrors>();
}

void PaymentDetailsUpdate::payerErrors(const PayerErrors& value) {
    emlite::Val::set("payerErrors", value);
}

jsbind::Object PaymentDetailsUpdate::paymentMethodErrors() const {
    return emlite::Val::get("paymentMethodErrors").as<jsbind::Object>();
}

void PaymentDetailsUpdate::paymentMethodErrors(const jsbind::Object& value) {
    emlite::Val::set("paymentMethodErrors", value);
}


} // namespace webbind