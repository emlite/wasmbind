#include <webbind/PaymentResponse.hpp>
#include <webbind/ContactAddress.hpp>
#include <webbind/PaymentCompleteDetails.hpp>
#include <webbind/PaymentValidationErrors.hpp>

namespace webbind {

PaymentResponse PaymentResponse::take_ownership(Handle h) noexcept {
        return PaymentResponse(h);
    }
PaymentResponse PaymentResponse::clone() const noexcept { return *this; }
emlite::Val PaymentResponse::instance() noexcept { return emlite::Val::global("PaymentResponse"); }
PaymentResponse::PaymentResponse(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PaymentResponse::PaymentResponse(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Object PaymentResponse::toJSON() {
    return EventTarget::call("toJSON").as<jsbind::Object>();
}

jsbind::String PaymentResponse::requestId() const {
    return EventTarget::get("requestId").as<jsbind::String>();
}

jsbind::String PaymentResponse::methodName() const {
    return EventTarget::get("methodName").as<jsbind::String>();
}

jsbind::Object PaymentResponse::details() const {
    return EventTarget::get("details").as<jsbind::Object>();
}

ContactAddress PaymentResponse::shippingAddress() const {
    return EventTarget::get("shippingAddress").as<ContactAddress>();
}

jsbind::String PaymentResponse::shippingOption() const {
    return EventTarget::get("shippingOption").as<jsbind::String>();
}

jsbind::String PaymentResponse::payerName() const {
    return EventTarget::get("payerName").as<jsbind::String>();
}

jsbind::String PaymentResponse::payerEmail() const {
    return EventTarget::get("payerEmail").as<jsbind::String>();
}

jsbind::String PaymentResponse::payerPhone() const {
    return EventTarget::get("payerPhone").as<jsbind::String>();
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


} // namespace webbind