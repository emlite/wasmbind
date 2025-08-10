#include <webbind/AuthenticationExtensionsLargeBlobInputs.hpp>

using emlite::Val;
namespace webbind {

AuthenticationExtensionsLargeBlobInputs::AuthenticationExtensionsLargeBlobInputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsLargeBlobInputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsLargeBlobInputs(h);
    }
AuthenticationExtensionsLargeBlobInputs::AuthenticationExtensionsLargeBlobInputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsLargeBlobInputs::AuthenticationExtensionsLargeBlobInputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsLargeBlobInputs::clone() const noexcept { return *this; }

jsbind::String AuthenticationExtensionsLargeBlobInputs::support() const {
    return emlite::Val::get("support").as<jsbind::String>();
}

void AuthenticationExtensionsLargeBlobInputs::support(const jsbind::String& value) {
    emlite::Val::set("support", value);
}

bool AuthenticationExtensionsLargeBlobInputs::read() const {
    return emlite::Val::get("read").as<bool>();
}

void AuthenticationExtensionsLargeBlobInputs::read(bool value) {
    emlite::Val::set("read", value);
}

jsbind::Any AuthenticationExtensionsLargeBlobInputs::write() const {
    return emlite::Val::get("write").as<jsbind::Any>();
}

void AuthenticationExtensionsLargeBlobInputs::write(const jsbind::Any& value) {
    emlite::Val::set("write", value);
}


} // namespace webbind