#include "webbind/CredentialData.hpp"

using emlite::Val;
namespace webbind {

CredentialData::CredentialData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialData CredentialData::take_ownership(Handle h) noexcept {
        return CredentialData(h);
    }
CredentialData::CredentialData(const emlite::Val &val) noexcept: emlite::Val(val) {}
CredentialData::CredentialData() noexcept: emlite::Val(emlite::Val::object()) {}
CredentialData CredentialData::clone() const noexcept { return *this; }

jsbind::String CredentialData::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void CredentialData::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}


} // namespace webbind