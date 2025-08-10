#include "webbind/AuthenticatorAssertionResponse.hpp"

namespace webbind {

AuthenticatorAssertionResponse AuthenticatorAssertionResponse::take_ownership(Handle h) noexcept {
        return AuthenticatorAssertionResponse(h);
    }
AuthenticatorAssertionResponse AuthenticatorAssertionResponse::clone() const noexcept { return *this; }
emlite::Val AuthenticatorAssertionResponse::instance() noexcept { return emlite::Val::global("AuthenticatorAssertionResponse"); }
AuthenticatorAssertionResponse::AuthenticatorAssertionResponse(Handle h) noexcept : AuthenticatorResponse(emlite::Val::take_ownership(h)) {}
AuthenticatorAssertionResponse::AuthenticatorAssertionResponse(const emlite::Val &val) noexcept: AuthenticatorResponse(val) {}

jsbind::ArrayBuffer AuthenticatorAssertionResponse::authenticatorData() const {
    return AuthenticatorResponse::get("authenticatorData").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer AuthenticatorAssertionResponse::signature() const {
    return AuthenticatorResponse::get("signature").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer AuthenticatorAssertionResponse::userHandle() const {
    return AuthenticatorResponse::get("userHandle").as<jsbind::ArrayBuffer>();
}


} // namespace webbind