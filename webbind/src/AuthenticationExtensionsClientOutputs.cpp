#include <webbind/AuthenticationExtensionsClientOutputs.hpp>
#include <webbind/AuthenticationExtensionsLargeBlobOutputs.hpp>

namespace webbind {

AuthenticationExtensionsClientOutputs::AuthenticationExtensionsClientOutputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs::take_ownership(Handle h) noexcept {
    return AuthenticationExtensionsClientOutputs(h);
}

AuthenticationExtensionsClientOutputs::AuthenticationExtensionsClientOutputs(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuthenticationExtensionsClientOutputs::AuthenticationExtensionsClientOutputs() noexcept: emlite::Val(emlite::Val::object()) {}

AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs::clone() const noexcept { return *this; }

AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsClientOutputs::largeBlob() const {
    return emlite::Val::get("largeBlob").as<AuthenticationExtensionsLargeBlobOutputs>();
}

void AuthenticationExtensionsClientOutputs::largeBlob(const AuthenticationExtensionsLargeBlobOutputs& value) {
    emlite::Val::set("largeBlob", value);
}


} // namespace webbind