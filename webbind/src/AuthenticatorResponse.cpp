#include <webbind/AuthenticatorResponse.hpp>

namespace webbind {

AuthenticatorResponse AuthenticatorResponse::take_ownership(Handle h) noexcept {
    return AuthenticatorResponse(h);
}

AuthenticatorResponse AuthenticatorResponse::clone() const noexcept { return *this; }

emlite::Val AuthenticatorResponse::instance() noexcept { return emlite::Val::global("AuthenticatorResponse"); }

AuthenticatorResponse::AuthenticatorResponse(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

AuthenticatorResponse::AuthenticatorResponse(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::ArrayBuffer AuthenticatorResponse::clientDataJSON() const {
    return emlite::Val::get("clientDataJSON").as<jsbind::ArrayBuffer>();
}


} // namespace webbind