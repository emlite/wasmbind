#include <webbind/CredentialRequestOptions.hpp>
#include <webbind/PublicKeyCredentialRequestOptions.hpp>

namespace webbind {

CredentialRequestOptions::CredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialRequestOptions CredentialRequestOptions::take_ownership(Handle h) noexcept {
    return CredentialRequestOptions(h);
}

CredentialRequestOptions::CredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CredentialRequestOptions::CredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CredentialRequestOptions CredentialRequestOptions::clone() const noexcept { return *this; }

PublicKeyCredentialRequestOptions CredentialRequestOptions::publicKey() const {
    return emlite::Val::get("publicKey").as<PublicKeyCredentialRequestOptions>();
}

void CredentialRequestOptions::publicKey(const PublicKeyCredentialRequestOptions& value) {
    emlite::Val::set("publicKey", value);
}


} // namespace webbind