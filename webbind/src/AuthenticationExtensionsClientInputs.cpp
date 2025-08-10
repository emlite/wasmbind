#include <webbind/AuthenticationExtensionsClientInputs.hpp>
#include <webbind/AuthenticationExtensionsLargeBlobInputs.hpp>

namespace webbind {

AuthenticationExtensionsClientInputs::AuthenticationExtensionsClientInputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsClientInputs AuthenticationExtensionsClientInputs::take_ownership(Handle h) noexcept {
    return AuthenticationExtensionsClientInputs(h);
}

AuthenticationExtensionsClientInputs::AuthenticationExtensionsClientInputs(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuthenticationExtensionsClientInputs::AuthenticationExtensionsClientInputs() noexcept: emlite::Val(emlite::Val::object()) {}

AuthenticationExtensionsClientInputs AuthenticationExtensionsClientInputs::clone() const noexcept { return *this; }

AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsClientInputs::largeBlob() const {
    return emlite::Val::get("largeBlob").as<AuthenticationExtensionsLargeBlobInputs>();
}

void AuthenticationExtensionsClientInputs::largeBlob(const AuthenticationExtensionsLargeBlobInputs& value) {
    emlite::Val::set("largeBlob", value);
}


} // namespace webbind