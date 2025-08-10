#include <webbind/AuthenticationExtensionsLargeBlobInputsJSON.hpp>

namespace webbind {

AuthenticationExtensionsLargeBlobInputsJSON::AuthenticationExtensionsLargeBlobInputsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsLargeBlobInputsJSON::take_ownership(Handle h) noexcept {
    return AuthenticationExtensionsLargeBlobInputsJSON(h);
}

AuthenticationExtensionsLargeBlobInputsJSON::AuthenticationExtensionsLargeBlobInputsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuthenticationExtensionsLargeBlobInputsJSON::AuthenticationExtensionsLargeBlobInputsJSON() noexcept: emlite::Val(emlite::Val::object()) {}

AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsLargeBlobInputsJSON::clone() const noexcept { return *this; }

jsbind::String AuthenticationExtensionsLargeBlobInputsJSON::support() const {
    return emlite::Val::get("support").as<jsbind::String>();
}

void AuthenticationExtensionsLargeBlobInputsJSON::support(const jsbind::String& value) {
    emlite::Val::set("support", value);
}

bool AuthenticationExtensionsLargeBlobInputsJSON::read() const {
    return emlite::Val::get("read").as<bool>();
}

void AuthenticationExtensionsLargeBlobInputsJSON::read(bool value) {
    emlite::Val::set("read", value);
}

jsbind::Any AuthenticationExtensionsLargeBlobInputsJSON::write() const {
    return emlite::Val::get("write").as<jsbind::Any>();
}

void AuthenticationExtensionsLargeBlobInputsJSON::write(const jsbind::Any& value) {
    emlite::Val::set("write", value);
}


} // namespace webbind