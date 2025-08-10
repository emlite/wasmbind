#include "webbind/AuthenticationExtensionsClientInputsJSON.hpp"
#include "webbind/AuthenticationExtensionsLargeBlobInputsJSON.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsClientInputsJSON::AuthenticationExtensionsClientInputsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsClientInputsJSON AuthenticationExtensionsClientInputsJSON::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsClientInputsJSON(h);
    }
AuthenticationExtensionsClientInputsJSON::AuthenticationExtensionsClientInputsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsClientInputsJSON::AuthenticationExtensionsClientInputsJSON() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsClientInputsJSON AuthenticationExtensionsClientInputsJSON::clone() const noexcept { return *this; }

AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsClientInputsJSON::largeBlob() const {
    return emlite::Val::get("largeBlob").as<AuthenticationExtensionsLargeBlobInputsJSON>();
}

void AuthenticationExtensionsClientInputsJSON::largeBlob(const AuthenticationExtensionsLargeBlobInputsJSON& value) {
    emlite::Val::set("largeBlob", value);
}


} // namespace webbind