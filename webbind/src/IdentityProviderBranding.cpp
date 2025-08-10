#include <webbind/IdentityProviderBranding.hpp>
#include <webbind/IdentityProviderIcon.hpp>

namespace webbind {

IdentityProviderBranding::IdentityProviderBranding(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderBranding IdentityProviderBranding::take_ownership(Handle h) noexcept {
    return IdentityProviderBranding(h);
}

IdentityProviderBranding::IdentityProviderBranding(const emlite::Val &val) noexcept: emlite::Val(val) {}

IdentityProviderBranding::IdentityProviderBranding() noexcept: emlite::Val(emlite::Val::object()) {}

IdentityProviderBranding IdentityProviderBranding::clone() const noexcept { return *this; }

jsbind::String IdentityProviderBranding::background_color() const {
    return emlite::Val::get("background_color").as<jsbind::String>();
}

void IdentityProviderBranding::background_color(const jsbind::String& value) {
    emlite::Val::set("background_color", value);
}

jsbind::String IdentityProviderBranding::color() const {
    return emlite::Val::get("color").as<jsbind::String>();
}

void IdentityProviderBranding::color(const jsbind::String& value) {
    emlite::Val::set("color", value);
}

jsbind::TypedArray<IdentityProviderIcon> IdentityProviderBranding::icons() const {
    return emlite::Val::get("icons").as<jsbind::TypedArray<IdentityProviderIcon>>();
}

void IdentityProviderBranding::icons(const jsbind::TypedArray<IdentityProviderIcon>& value) {
    emlite::Val::set("icons", value);
}

jsbind::String IdentityProviderBranding::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IdentityProviderBranding::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind