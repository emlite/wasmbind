#include <webbind/PublicKeyCredentialRpEntity.hpp>

namespace webbind {

PublicKeyCredentialRpEntity::PublicKeyCredentialRpEntity(Handle h) noexcept : PublicKeyCredentialEntity(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialRpEntity PublicKeyCredentialRpEntity::take_ownership(Handle h) noexcept {
    return PublicKeyCredentialRpEntity(h);
}

PublicKeyCredentialRpEntity::PublicKeyCredentialRpEntity(const emlite::Val &val) noexcept: PublicKeyCredentialEntity(val) {}

PublicKeyCredentialRpEntity::PublicKeyCredentialRpEntity() noexcept: PublicKeyCredentialEntity(emlite::Val::object()) {}

PublicKeyCredentialRpEntity PublicKeyCredentialRpEntity::clone() const noexcept { return *this; }

jsbind::String PublicKeyCredentialRpEntity::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void PublicKeyCredentialRpEntity::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}


} // namespace webbind