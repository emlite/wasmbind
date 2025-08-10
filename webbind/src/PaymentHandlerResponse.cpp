#include <webbind/PaymentHandlerResponse.hpp>
#include <webbind/AddressInit.hpp>

namespace webbind {

PaymentHandlerResponse::PaymentHandlerResponse(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentHandlerResponse PaymentHandlerResponse::take_ownership(Handle h) noexcept {
    return PaymentHandlerResponse(h);
}

PaymentHandlerResponse::PaymentHandlerResponse(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentHandlerResponse::PaymentHandlerResponse() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentHandlerResponse PaymentHandlerResponse::clone() const noexcept { return *this; }

jsbind::String PaymentHandlerResponse::methodName() const {
    return emlite::Val::get("methodName").as<jsbind::String>();
}

void PaymentHandlerResponse::methodName(const jsbind::String& value) {
    emlite::Val::set("methodName", value);
}

jsbind::Object PaymentHandlerResponse::details() const {
    return emlite::Val::get("details").as<jsbind::Object>();
}

void PaymentHandlerResponse::details(const jsbind::Object& value) {
    emlite::Val::set("details", value);
}

jsbind::String PaymentHandlerResponse::payerName() const {
    return emlite::Val::get("payerName").as<jsbind::String>();
}

void PaymentHandlerResponse::payerName(const jsbind::String& value) {
    emlite::Val::set("payerName", value);
}

jsbind::String PaymentHandlerResponse::payerEmail() const {
    return emlite::Val::get("payerEmail").as<jsbind::String>();
}

void PaymentHandlerResponse::payerEmail(const jsbind::String& value) {
    emlite::Val::set("payerEmail", value);
}

jsbind::String PaymentHandlerResponse::payerPhone() const {
    return emlite::Val::get("payerPhone").as<jsbind::String>();
}

void PaymentHandlerResponse::payerPhone(const jsbind::String& value) {
    emlite::Val::set("payerPhone", value);
}

AddressInit PaymentHandlerResponse::shippingAddress() const {
    return emlite::Val::get("shippingAddress").as<AddressInit>();
}

void PaymentHandlerResponse::shippingAddress(const AddressInit& value) {
    emlite::Val::set("shippingAddress", value);
}

jsbind::String PaymentHandlerResponse::shippingOption() const {
    return emlite::Val::get("shippingOption").as<jsbind::String>();
}

void PaymentHandlerResponse::shippingOption(const jsbind::String& value) {
    emlite::Val::set("shippingOption", value);
}


} // namespace webbind