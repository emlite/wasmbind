#include <webbind/UnknownCredentialOptions.hpp>

using emlite::Val;
namespace webbind {

UnknownCredentialOptions::UnknownCredentialOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UnknownCredentialOptions UnknownCredentialOptions::take_ownership(Handle h) noexcept {
        return UnknownCredentialOptions(h);
    }
UnknownCredentialOptions::UnknownCredentialOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
UnknownCredentialOptions::UnknownCredentialOptions() noexcept: emlite::Val(emlite::Val::object()) {}
UnknownCredentialOptions UnknownCredentialOptions::clone() const noexcept { return *this; }

jsbind::String UnknownCredentialOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void UnknownCredentialOptions::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Any UnknownCredentialOptions::credentialId() const {
    return emlite::Val::get("credentialId").as<jsbind::Any>();
}

void UnknownCredentialOptions::credentialId(const jsbind::Any& value) {
    emlite::Val::set("credentialId", value);
}


} // namespace webbind