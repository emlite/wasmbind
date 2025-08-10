#include <webbind/PublicKeyCredentialUserEntityJSON.hpp>

using emlite::Val;
namespace webbind {

PublicKeyCredentialUserEntityJSON::PublicKeyCredentialUserEntityJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialUserEntityJSON PublicKeyCredentialUserEntityJSON::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialUserEntityJSON(h);
    }
PublicKeyCredentialUserEntityJSON::PublicKeyCredentialUserEntityJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialUserEntityJSON::PublicKeyCredentialUserEntityJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialUserEntityJSON PublicKeyCredentialUserEntityJSON::clone() const noexcept { return *this; }

jsbind::Any PublicKeyCredentialUserEntityJSON::id() const {
    return emlite::Val::get("id").as<jsbind::Any>();
}

void PublicKeyCredentialUserEntityJSON::id(const jsbind::Any& value) {
    emlite::Val::set("id", value);
}

jsbind::String PublicKeyCredentialUserEntityJSON::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void PublicKeyCredentialUserEntityJSON::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String PublicKeyCredentialUserEntityJSON::displayName() const {
    return emlite::Val::get("displayName").as<jsbind::String>();
}

void PublicKeyCredentialUserEntityJSON::displayName(const jsbind::String& value) {
    emlite::Val::set("displayName", value);
}


} // namespace webbind