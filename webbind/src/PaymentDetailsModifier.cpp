#include "webbind/PaymentDetailsModifier.hpp"
#include "webbind/PaymentItem.hpp"

using emlite::Val;
namespace webbind {

PaymentDetailsModifier::PaymentDetailsModifier(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentDetailsModifier PaymentDetailsModifier::take_ownership(Handle h) noexcept {
        return PaymentDetailsModifier(h);
    }
PaymentDetailsModifier::PaymentDetailsModifier(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentDetailsModifier::PaymentDetailsModifier() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentDetailsModifier PaymentDetailsModifier::clone() const noexcept { return *this; }

jsbind::String PaymentDetailsModifier::supportedMethods() const {
    return emlite::Val::get("supportedMethods").as<jsbind::String>();
}

void PaymentDetailsModifier::supportedMethods(const jsbind::String& value) {
    emlite::Val::set("supportedMethods", value);
}

PaymentItem PaymentDetailsModifier::total() const {
    return emlite::Val::get("total").as<PaymentItem>();
}

void PaymentDetailsModifier::total(const PaymentItem& value) {
    emlite::Val::set("total", value);
}

jsbind::TypedArray<PaymentItem> PaymentDetailsModifier::additionalDisplayItems() const {
    return emlite::Val::get("additionalDisplayItems").as<jsbind::TypedArray<PaymentItem>>();
}

void PaymentDetailsModifier::additionalDisplayItems(const jsbind::TypedArray<PaymentItem>& value) {
    emlite::Val::set("additionalDisplayItems", value);
}

jsbind::Object PaymentDetailsModifier::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void PaymentDetailsModifier::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind