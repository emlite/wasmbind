#include "webbind/AuthenticationExtensionsClientOutputsJSON.hpp"
#include "webbind/AuthenticationExtensionsLargeBlobOutputsJSON.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsClientOutputsJSON::AuthenticationExtensionsClientOutputsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsClientOutputsJSON AuthenticationExtensionsClientOutputsJSON::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsClientOutputsJSON(h);
    }
AuthenticationExtensionsClientOutputsJSON::AuthenticationExtensionsClientOutputsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsClientOutputsJSON::AuthenticationExtensionsClientOutputsJSON() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsClientOutputsJSON AuthenticationExtensionsClientOutputsJSON::clone() const noexcept { return *this; }

AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsClientOutputsJSON::largeBlob() const {
    return emlite::Val::get("largeBlob").as<AuthenticationExtensionsLargeBlobOutputsJSON>();
}

void AuthenticationExtensionsClientOutputsJSON::largeBlob(const AuthenticationExtensionsLargeBlobOutputsJSON& value) {
    emlite::Val::set("largeBlob", value);
}


} // namespace webbind