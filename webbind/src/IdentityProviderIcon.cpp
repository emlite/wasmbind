#include <webbind/IdentityProviderIcon.hpp>

using emlite::Val;
namespace webbind {

IdentityProviderIcon::IdentityProviderIcon(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderIcon IdentityProviderIcon::take_ownership(Handle h) noexcept {
        return IdentityProviderIcon(h);
    }
IdentityProviderIcon::IdentityProviderIcon(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityProviderIcon::IdentityProviderIcon() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityProviderIcon IdentityProviderIcon::clone() const noexcept { return *this; }

jsbind::String IdentityProviderIcon::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void IdentityProviderIcon::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

unsigned long IdentityProviderIcon::size() const {
    return emlite::Val::get("size").as<unsigned long>();
}

void IdentityProviderIcon::size(unsigned long value) {
    emlite::Val::set("size", value);
}


} // namespace webbind