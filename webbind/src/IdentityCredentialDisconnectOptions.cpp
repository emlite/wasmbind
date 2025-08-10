#include <webbind/IdentityCredentialDisconnectOptions.hpp>

using emlite::Val;
namespace webbind {

IdentityCredentialDisconnectOptions::IdentityCredentialDisconnectOptions(Handle h) noexcept : IdentityProviderConfig(emlite::Val::take_ownership(h)) {}
IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions::take_ownership(Handle h) noexcept {
        return IdentityCredentialDisconnectOptions(h);
    }
IdentityCredentialDisconnectOptions::IdentityCredentialDisconnectOptions(const emlite::Val &val) noexcept: IdentityProviderConfig(val) {}
IdentityCredentialDisconnectOptions::IdentityCredentialDisconnectOptions() noexcept: IdentityProviderConfig(emlite::Val::object()) {}
IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions::clone() const noexcept { return *this; }

jsbind::String IdentityCredentialDisconnectOptions::accountHint() const {
    return emlite::Val::get("accountHint").as<jsbind::String>();
}

void IdentityCredentialDisconnectOptions::accountHint(const jsbind::String& value) {
    emlite::Val::set("accountHint", value);
}


} // namespace webbind