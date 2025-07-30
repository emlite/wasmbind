#include <webbind/IdentityCredentialError.hpp>


IdentityCredentialError IdentityCredentialError::take_ownership(Handle h) noexcept {
        return IdentityCredentialError(h);
    }
IdentityCredentialError IdentityCredentialError::clone() const noexcept { return *this; }
IdentityCredentialError::IdentityCredentialError(Handle h) noexcept : DOMException(emlite::Val::take_ownership(h)) {}
IdentityCredentialError::IdentityCredentialError(const emlite::Val &val) noexcept: DOMException(val) {}


IdentityCredentialError::IdentityCredentialError() : DOMException(emlite::Val::global("IdentityCredentialError").new_()) {}

IdentityCredentialError::IdentityCredentialError(const jsbind::String& message) : DOMException(emlite::Val::global("IdentityCredentialError").new_(message)) {}

IdentityCredentialError::IdentityCredentialError(const jsbind::String& message, const jsbind::Any& options) : DOMException(emlite::Val::global("IdentityCredentialError").new_(message, options)) {}

jsbind::String IdentityCredentialError::error() const {
    return DOMException::get("error").as<jsbind::String>();
}

jsbind::String IdentityCredentialError::url() const {
    return DOMException::get("url").as<jsbind::String>();
}

