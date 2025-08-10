#include <webbind/FunctionParameter.hpp>

namespace webbind {

FunctionParameter::FunctionParameter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FunctionParameter FunctionParameter::take_ownership(Handle h) noexcept {
    return FunctionParameter(h);
}

FunctionParameter::FunctionParameter(const emlite::Val &val) noexcept: emlite::Val(val) {}

FunctionParameter::FunctionParameter() noexcept: emlite::Val(emlite::Val::object()) {}

FunctionParameter FunctionParameter::clone() const noexcept { return *this; }

jsbind::String FunctionParameter::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void FunctionParameter::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String FunctionParameter::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void FunctionParameter::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::String FunctionParameter::defaultValue() const {
    return emlite::Val::get("defaultValue").as<jsbind::String>();
}

void FunctionParameter::defaultValue(const jsbind::String& value) {
    emlite::Val::set("defaultValue", value);
}


} // namespace webbind