#include "webbind/AuthenticationExtensionsLargeBlobOutputs.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsLargeBlobOutputs::AuthenticationExtensionsLargeBlobOutputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsLargeBlobOutputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsLargeBlobOutputs(h);
    }
AuthenticationExtensionsLargeBlobOutputs::AuthenticationExtensionsLargeBlobOutputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsLargeBlobOutputs::AuthenticationExtensionsLargeBlobOutputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsLargeBlobOutputs::clone() const noexcept { return *this; }

bool AuthenticationExtensionsLargeBlobOutputs::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void AuthenticationExtensionsLargeBlobOutputs::supported(bool value) {
    emlite::Val::set("supported", value);
}

jsbind::ArrayBuffer AuthenticationExtensionsLargeBlobOutputs::blob() const {
    return emlite::Val::get("blob").as<jsbind::ArrayBuffer>();
}

void AuthenticationExtensionsLargeBlobOutputs::blob(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("blob", value);
}

bool AuthenticationExtensionsLargeBlobOutputs::written() const {
    return emlite::Val::get("written").as<bool>();
}

void AuthenticationExtensionsLargeBlobOutputs::written(bool value) {
    emlite::Val::set("written", value);
}


} // namespace webbind