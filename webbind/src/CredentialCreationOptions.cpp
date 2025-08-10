#include "webbind/CredentialCreationOptions.hpp"
#include "webbind/PublicKeyCredentialCreationOptions.hpp"

using emlite::Val;
namespace webbind {

CredentialCreationOptions::CredentialCreationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialCreationOptions CredentialCreationOptions::take_ownership(Handle h) noexcept {
        return CredentialCreationOptions(h);
    }
CredentialCreationOptions::CredentialCreationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CredentialCreationOptions::CredentialCreationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CredentialCreationOptions CredentialCreationOptions::clone() const noexcept { return *this; }

PublicKeyCredentialCreationOptions CredentialCreationOptions::publicKey() const {
    return emlite::Val::get("publicKey").as<PublicKeyCredentialCreationOptions>();
}

void CredentialCreationOptions::publicKey(const PublicKeyCredentialCreationOptions& value) {
    emlite::Val::set("publicKey", value);
}


} // namespace webbind