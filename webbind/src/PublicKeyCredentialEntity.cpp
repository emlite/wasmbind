#include <webbind/PublicKeyCredentialEntity.hpp>

using emlite::Val;
namespace webbind {

PublicKeyCredentialEntity::PublicKeyCredentialEntity(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialEntity PublicKeyCredentialEntity::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialEntity(h);
    }
PublicKeyCredentialEntity::PublicKeyCredentialEntity(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialEntity::PublicKeyCredentialEntity() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialEntity PublicKeyCredentialEntity::clone() const noexcept { return *this; }

jsbind::String PublicKeyCredentialEntity::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void PublicKeyCredentialEntity::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind