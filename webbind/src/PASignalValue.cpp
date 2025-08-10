#include "webbind/PASignalValue.hpp"

using emlite::Val;
namespace webbind {

PASignalValue::PASignalValue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PASignalValue PASignalValue::take_ownership(Handle h) noexcept {
        return PASignalValue(h);
    }
PASignalValue::PASignalValue(const emlite::Val &val) noexcept: emlite::Val(val) {}
PASignalValue::PASignalValue() noexcept: emlite::Val(emlite::Val::object()) {}
PASignalValue PASignalValue::clone() const noexcept { return *this; }

jsbind::String PASignalValue::baseValue() const {
    return emlite::Val::get("baseValue").as<jsbind::String>();
}

void PASignalValue::baseValue(const jsbind::String& value) {
    emlite::Val::set("baseValue", value);
}

double PASignalValue::scale() const {
    return emlite::Val::get("scale").as<double>();
}

void PASignalValue::scale(double value) {
    emlite::Val::set("scale", value);
}

jsbind::Any PASignalValue::offset() const {
    return emlite::Val::get("offset").as<jsbind::Any>();
}

void PASignalValue::offset(const jsbind::Any& value) {
    emlite::Val::set("offset", value);
}


} // namespace webbind