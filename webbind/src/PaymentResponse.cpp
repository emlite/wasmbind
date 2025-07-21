#include <webbind/PaymentResponse.hpp>
#include <webbind/ContactAddress.hpp>


PaymentCompleteDetails::PaymentCompleteDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentCompleteDetails PaymentCompleteDetails::take_ownership(Handle h) noexcept {
        return PaymentCompleteDetails(h);
    }
PaymentCompleteDetails::PaymentCompleteDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentCompleteDetails::PaymentCompleteDetails() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentCompleteDetails PaymentCompleteDetails::clone() const noexcept { return *this; }

jsbind::Object PaymentCompleteDetails::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void PaymentCompleteDetails::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}

PaymentValidationErrors::PaymentValidationErrors(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentValidationErrors PaymentValidationErrors::take_ownership(Handle h) noexcept {
        return PaymentValidationErrors(h);
    }
PaymentValidationErrors::PaymentValidationErrors(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentValidationErrors::PaymentValidationErrors() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentValidationErrors PaymentValidationErrors::clone() const noexcept { return *this; }

jsbind::Any PaymentValidationErrors::payer() const {
    return emlite::Val::get("payer").as<jsbind::Any>();
}

void PaymentValidationErrors::payer(const jsbind::Any& value) {
    emlite::Val::set("payer", value);
}

jsbind::Any PaymentValidationErrors::shippingAddress() const {
    return emlite::Val::get("shippingAddress").as<jsbind::Any>();
}

void PaymentValidationErrors::shippingAddress(const jsbind::Any& value) {
    emlite::Val::set("shippingAddress", value);
}

jsbind::DOMString PaymentValidationErrors::error() const {
    return emlite::Val::get("error").as<jsbind::DOMString>();
}

void PaymentValidationErrors::error(const jsbind::DOMString& value) {
    emlite::Val::set("error", value);
}

jsbind::Object PaymentValidationErrors::paymentMethod() const {
    return emlite::Val::get("paymentMethod").as<jsbind::Object>();
}

void PaymentValidationErrors::paymentMethod(const jsbind::Object& value) {
    emlite::Val::set("paymentMethod", value);
}

PaymentResponse PaymentResponse::take_ownership(Handle h) noexcept {
        return PaymentResponse(h);
    }
PaymentResponse PaymentResponse::clone() const noexcept { return *this; }
PaymentResponse::PaymentResponse(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PaymentResponse::PaymentResponse(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Object PaymentResponse::toJSON() {
    return EventTarget::call("toJSON").as<jsbind::Object>();
}

jsbind::DOMString PaymentResponse::requestId() const {
    return EventTarget::get("requestId").as<jsbind::DOMString>();
}

jsbind::DOMString PaymentResponse::methodName() const {
    return EventTarget::get("methodName").as<jsbind::DOMString>();
}

jsbind::Object PaymentResponse::details() const {
    return EventTarget::get("details").as<jsbind::Object>();
}

ContactAddress PaymentResponse::shippingAddress() const {
    return EventTarget::get("shippingAddress").as<ContactAddress>();
}

jsbind::DOMString PaymentResponse::shippingOption() const {
    return EventTarget::get("shippingOption").as<jsbind::DOMString>();
}

jsbind::DOMString PaymentResponse::payerName() const {
    return EventTarget::get("payerName").as<jsbind::DOMString>();
}

jsbind::DOMString PaymentResponse::payerEmail() const {
    return EventTarget::get("payerEmail").as<jsbind::DOMString>();
}

jsbind::DOMString PaymentResponse::payerPhone() const {
    return EventTarget::get("payerPhone").as<jsbind::DOMString>();
}

jsbind::Promise<jsbind::Undefined> PaymentResponse::complete() {
    return EventTarget::call("complete").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PaymentResponse::complete(const PaymentComplete& result) {
    return EventTarget::call("complete", result).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PaymentResponse::complete(const PaymentComplete& result, const PaymentCompleteDetails& details) {
    return EventTarget::call("complete", result, details).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PaymentResponse::retry() {
    return EventTarget::call("retry").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PaymentResponse::retry(const PaymentValidationErrors& errorFields) {
    return EventTarget::call("retry", errorFields).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any PaymentResponse::onpayerdetailchange() const {
    return EventTarget::get("onpayerdetailchange").as<jsbind::Any>();
}

void PaymentResponse::onpayerdetailchange(const jsbind::Any& value) {
    EventTarget::set("onpayerdetailchange", value);
}

