#include <webbind/CurrentUserDetailsOptions.hpp>

namespace webbind {

CurrentUserDetailsOptions::CurrentUserDetailsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CurrentUserDetailsOptions CurrentUserDetailsOptions::take_ownership(Handle h) noexcept {
    return CurrentUserDetailsOptions(h);
}

CurrentUserDetailsOptions::CurrentUserDetailsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CurrentUserDetailsOptions::CurrentUserDetailsOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CurrentUserDetailsOptions CurrentUserDetailsOptions::clone() const noexcept { return *this; }

jsbind::String CurrentUserDetailsOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void CurrentUserDetailsOptions::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Any CurrentUserDetailsOptions::userId() const {
    return emlite::Val::get("userId").as<jsbind::Any>();
}

void CurrentUserDetailsOptions::userId(const jsbind::Any& value) {
    emlite::Val::set("userId", value);
}

jsbind::String CurrentUserDetailsOptions::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CurrentUserDetailsOptions::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CurrentUserDetailsOptions::displayName() const {
    return emlite::Val::get("displayName").as<jsbind::String>();
}

void CurrentUserDetailsOptions::displayName(const jsbind::String& value) {
    emlite::Val::set("displayName", value);
}


} // namespace webbind