#include <webbind/PaymentDetailsBase.hpp>
#include <webbind/PaymentItem.hpp>
#include <webbind/PaymentShippingOption.hpp>
#include <webbind/PaymentDetailsModifier.hpp>

namespace webbind {

PaymentDetailsBase::PaymentDetailsBase(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentDetailsBase PaymentDetailsBase::take_ownership(Handle h) noexcept {
    return PaymentDetailsBase(h);
}

PaymentDetailsBase::PaymentDetailsBase(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentDetailsBase::PaymentDetailsBase() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentDetailsBase PaymentDetailsBase::clone() const noexcept { return *this; }

jsbind::TypedArray<PaymentItem> PaymentDetailsBase::displayItems() const {
    return emlite::Val::get("displayItems").as<jsbind::TypedArray<PaymentItem>>();
}

void PaymentDetailsBase::displayItems(const jsbind::TypedArray<PaymentItem>& value) {
    emlite::Val::set("displayItems", value);
}

jsbind::TypedArray<PaymentShippingOption> PaymentDetailsBase::shippingOptions() const {
    return emlite::Val::get("shippingOptions").as<jsbind::TypedArray<PaymentShippingOption>>();
}

void PaymentDetailsBase::shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value) {
    emlite::Val::set("shippingOptions", value);
}

jsbind::TypedArray<PaymentDetailsModifier> PaymentDetailsBase::modifiers() const {
    return emlite::Val::get("modifiers").as<jsbind::TypedArray<PaymentDetailsModifier>>();
}

void PaymentDetailsBase::modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value) {
    emlite::Val::set("modifiers", value);
}


} // namespace webbind