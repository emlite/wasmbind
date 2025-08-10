#include <webbind/AuthenticationExtensionsLargeBlobOutputsJSON.hpp>

namespace webbind {

AuthenticationExtensionsLargeBlobOutputsJSON::AuthenticationExtensionsLargeBlobOutputsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsLargeBlobOutputsJSON::take_ownership(Handle h) noexcept {
    return AuthenticationExtensionsLargeBlobOutputsJSON(h);
}

AuthenticationExtensionsLargeBlobOutputsJSON::AuthenticationExtensionsLargeBlobOutputsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuthenticationExtensionsLargeBlobOutputsJSON::AuthenticationExtensionsLargeBlobOutputsJSON() noexcept: emlite::Val(emlite::Val::object()) {}

AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsLargeBlobOutputsJSON::clone() const noexcept { return *this; }

bool AuthenticationExtensionsLargeBlobOutputsJSON::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void AuthenticationExtensionsLargeBlobOutputsJSON::supported(bool value) {
    emlite::Val::set("supported", value);
}

jsbind::Any AuthenticationExtensionsLargeBlobOutputsJSON::blob() const {
    return emlite::Val::get("blob").as<jsbind::Any>();
}

void AuthenticationExtensionsLargeBlobOutputsJSON::blob(const jsbind::Any& value) {
    emlite::Val::set("blob", value);
}

bool AuthenticationExtensionsLargeBlobOutputsJSON::written() const {
    return emlite::Val::get("written").as<bool>();
}

void AuthenticationExtensionsLargeBlobOutputsJSON::written(bool value) {
    emlite::Val::set("written", value);
}


} // namespace webbind