#include <webbind/PaymentMethodData.hpp>

using emlite::Val;
namespace webbind {

PaymentMethodData::PaymentMethodData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentMethodData PaymentMethodData::take_ownership(Handle h) noexcept {
        return PaymentMethodData(h);
    }
PaymentMethodData::PaymentMethodData(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentMethodData::PaymentMethodData() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentMethodData PaymentMethodData::clone() const noexcept { return *this; }

jsbind::String PaymentMethodData::supportedMethods() const {
    return emlite::Val::get("supportedMethods").as<jsbind::String>();
}

void PaymentMethodData::supportedMethods(const jsbind::String& value) {
    emlite::Val::set("supportedMethods", value);
}

jsbind::Object PaymentMethodData::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void PaymentMethodData::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind