#include <webbind/ConstrainDOMStringParameters.hpp>

using emlite::Val;
namespace webbind {

ConstrainDOMStringParameters::ConstrainDOMStringParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConstrainDOMStringParameters ConstrainDOMStringParameters::take_ownership(Handle h) noexcept {
        return ConstrainDOMStringParameters(h);
    }
ConstrainDOMStringParameters::ConstrainDOMStringParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
ConstrainDOMStringParameters::ConstrainDOMStringParameters() noexcept: emlite::Val(emlite::Val::object()) {}
ConstrainDOMStringParameters ConstrainDOMStringParameters::clone() const noexcept { return *this; }

jsbind::Any ConstrainDOMStringParameters::exact() const {
    return emlite::Val::get("exact").as<jsbind::Any>();
}

void ConstrainDOMStringParameters::exact(const jsbind::Any& value) {
    emlite::Val::set("exact", value);
}

jsbind::Any ConstrainDOMStringParameters::ideal() const {
    return emlite::Val::get("ideal").as<jsbind::Any>();
}

void ConstrainDOMStringParameters::ideal(const jsbind::Any& value) {
    emlite::Val::set("ideal", value);
}


} // namespace webbind