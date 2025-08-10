#include <webbind/IdentityUserInfo.hpp>

using emlite::Val;
namespace webbind {

IdentityUserInfo::IdentityUserInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityUserInfo IdentityUserInfo::take_ownership(Handle h) noexcept {
        return IdentityUserInfo(h);
    }
IdentityUserInfo::IdentityUserInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityUserInfo::IdentityUserInfo() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityUserInfo IdentityUserInfo::clone() const noexcept { return *this; }

jsbind::String IdentityUserInfo::email() const {
    return emlite::Val::get("email").as<jsbind::String>();
}

void IdentityUserInfo::email(const jsbind::String& value) {
    emlite::Val::set("email", value);
}

jsbind::String IdentityUserInfo::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IdentityUserInfo::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String IdentityUserInfo::givenName() const {
    return emlite::Val::get("givenName").as<jsbind::String>();
}

void IdentityUserInfo::givenName(const jsbind::String& value) {
    emlite::Val::set("givenName", value);
}

jsbind::String IdentityUserInfo::picture() const {
    return emlite::Val::get("picture").as<jsbind::String>();
}

void IdentityUserInfo::picture(const jsbind::String& value) {
    emlite::Val::set("picture", value);
}


} // namespace webbind