#include "webbind/ConstrainBooleanOrDOMStringParameters.hpp"

using emlite::Val;
namespace webbind {

ConstrainBooleanOrDOMStringParameters::ConstrainBooleanOrDOMStringParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConstrainBooleanOrDOMStringParameters ConstrainBooleanOrDOMStringParameters::take_ownership(Handle h) noexcept {
        return ConstrainBooleanOrDOMStringParameters(h);
    }
ConstrainBooleanOrDOMStringParameters::ConstrainBooleanOrDOMStringParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
ConstrainBooleanOrDOMStringParameters::ConstrainBooleanOrDOMStringParameters() noexcept: emlite::Val(emlite::Val::object()) {}
ConstrainBooleanOrDOMStringParameters ConstrainBooleanOrDOMStringParameters::clone() const noexcept { return *this; }

jsbind::Any ConstrainBooleanOrDOMStringParameters::exact() const {
    return emlite::Val::get("exact").as<jsbind::Any>();
}

void ConstrainBooleanOrDOMStringParameters::exact(const jsbind::Any& value) {
    emlite::Val::set("exact", value);
}

jsbind::Any ConstrainBooleanOrDOMStringParameters::ideal() const {
    return emlite::Val::get("ideal").as<jsbind::Any>();
}

void ConstrainBooleanOrDOMStringParameters::ideal(const jsbind::Any& value) {
    emlite::Val::set("ideal", value);
}


} // namespace webbind