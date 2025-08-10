#include <webbind/PermissionDescriptor.hpp>

namespace webbind {

PermissionDescriptor::PermissionDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PermissionDescriptor PermissionDescriptor::take_ownership(Handle h) noexcept {
    return PermissionDescriptor(h);
}

PermissionDescriptor::PermissionDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}

PermissionDescriptor::PermissionDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}

PermissionDescriptor PermissionDescriptor::clone() const noexcept { return *this; }

jsbind::String PermissionDescriptor::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void PermissionDescriptor::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind