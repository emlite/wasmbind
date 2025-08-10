#include <webbind/PublicKeyCredentialUserEntity.hpp>

namespace webbind {

PublicKeyCredentialUserEntity::PublicKeyCredentialUserEntity(Handle h) noexcept : PublicKeyCredentialEntity(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialUserEntity PublicKeyCredentialUserEntity::take_ownership(Handle h) noexcept {
    return PublicKeyCredentialUserEntity(h);
}

PublicKeyCredentialUserEntity::PublicKeyCredentialUserEntity(const emlite::Val &val) noexcept: PublicKeyCredentialEntity(val) {}

PublicKeyCredentialUserEntity::PublicKeyCredentialUserEntity() noexcept: PublicKeyCredentialEntity(emlite::Val::object()) {}

PublicKeyCredentialUserEntity PublicKeyCredentialUserEntity::clone() const noexcept { return *this; }

jsbind::Any PublicKeyCredentialUserEntity::id() const {
    return emlite::Val::get("id").as<jsbind::Any>();
}

void PublicKeyCredentialUserEntity::id(const jsbind::Any& value) {
    emlite::Val::set("id", value);
}

jsbind::String PublicKeyCredentialUserEntity::displayName() const {
    return emlite::Val::get("displayName").as<jsbind::String>();
}

void PublicKeyCredentialUserEntity::displayName(const jsbind::String& value) {
    emlite::Val::set("displayName", value);
}


} // namespace webbind