#include <webbind/PaymentOptions.hpp>

using emlite::Val;
namespace webbind {

PaymentOptions::PaymentOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentOptions PaymentOptions::take_ownership(Handle h) noexcept {
        return PaymentOptions(h);
    }
PaymentOptions::PaymentOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentOptions::PaymentOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentOptions PaymentOptions::clone() const noexcept { return *this; }

bool PaymentOptions::requestPayerName() const {
    return emlite::Val::get("requestPayerName").as<bool>();
}

void PaymentOptions::requestPayerName(bool value) {
    emlite::Val::set("requestPayerName", value);
}

bool PaymentOptions::requestBillingAddress() const {
    return emlite::Val::get("requestBillingAddress").as<bool>();
}

void PaymentOptions::requestBillingAddress(bool value) {
    emlite::Val::set("requestBillingAddress", value);
}

bool PaymentOptions::requestPayerEmail() const {
    return emlite::Val::get("requestPayerEmail").as<bool>();
}

void PaymentOptions::requestPayerEmail(bool value) {
    emlite::Val::set("requestPayerEmail", value);
}

bool PaymentOptions::requestPayerPhone() const {
    return emlite::Val::get("requestPayerPhone").as<bool>();
}

void PaymentOptions::requestPayerPhone(bool value) {
    emlite::Val::set("requestPayerPhone", value);
}

bool PaymentOptions::requestShipping() const {
    return emlite::Val::get("requestShipping").as<bool>();
}

void PaymentOptions::requestShipping(bool value) {
    emlite::Val::set("requestShipping", value);
}

PaymentShippingType PaymentOptions::shippingType() const {
    return emlite::Val::get("shippingType").as<PaymentShippingType>();
}

void PaymentOptions::shippingType(const PaymentShippingType& value) {
    emlite::Val::set("shippingType", value);
}


} // namespace webbind