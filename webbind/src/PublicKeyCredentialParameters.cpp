#include <webbind/PublicKeyCredentialParameters.hpp>

namespace webbind {

PublicKeyCredentialParameters::PublicKeyCredentialParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialParameters PublicKeyCredentialParameters::take_ownership(Handle h) noexcept {
    return PublicKeyCredentialParameters(h);
}

PublicKeyCredentialParameters::PublicKeyCredentialParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

PublicKeyCredentialParameters::PublicKeyCredentialParameters() noexcept: emlite::Val(emlite::Val::object()) {}

PublicKeyCredentialParameters PublicKeyCredentialParameters::clone() const noexcept { return *this; }

jsbind::String PublicKeyCredentialParameters::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void PublicKeyCredentialParameters::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::Any PublicKeyCredentialParameters::alg() const {
    return emlite::Val::get("alg").as<jsbind::Any>();
}

void PublicKeyCredentialParameters::alg(const jsbind::Any& value) {
    emlite::Val::set("alg", value);
}


} // namespace webbind