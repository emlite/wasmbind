#include <webbind/IdentityAssertionResponse.hpp>
#include <webbind/IdentityCredentialErrorInit.hpp>

namespace webbind {

IdentityAssertionResponse::IdentityAssertionResponse(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityAssertionResponse IdentityAssertionResponse::take_ownership(Handle h) noexcept {
    return IdentityAssertionResponse(h);
}

IdentityAssertionResponse::IdentityAssertionResponse(const emlite::Val &val) noexcept: emlite::Val(val) {}

IdentityAssertionResponse::IdentityAssertionResponse() noexcept: emlite::Val(emlite::Val::object()) {}

IdentityAssertionResponse IdentityAssertionResponse::clone() const noexcept { return *this; }

jsbind::String IdentityAssertionResponse::token() const {
    return emlite::Val::get("token").as<jsbind::String>();
}

void IdentityAssertionResponse::token(const jsbind::String& value) {
    emlite::Val::set("token", value);
}

jsbind::String IdentityAssertionResponse::continue_on() const {
    return emlite::Val::get("continue_on").as<jsbind::String>();
}

void IdentityAssertionResponse::continue_on(const jsbind::String& value) {
    emlite::Val::set("continue_on", value);
}

IdentityCredentialErrorInit IdentityAssertionResponse::error() const {
    return emlite::Val::get("error").as<IdentityCredentialErrorInit>();
}

void IdentityAssertionResponse::error(const IdentityCredentialErrorInit& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind