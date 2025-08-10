#include "webbind/PrivateNetworkAccessPermissionDescriptor.hpp"

using emlite::Val;
namespace webbind {

PrivateNetworkAccessPermissionDescriptor::PrivateNetworkAccessPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
PrivateNetworkAccessPermissionDescriptor PrivateNetworkAccessPermissionDescriptor::take_ownership(Handle h) noexcept {
        return PrivateNetworkAccessPermissionDescriptor(h);
    }
PrivateNetworkAccessPermissionDescriptor::PrivateNetworkAccessPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
PrivateNetworkAccessPermissionDescriptor::PrivateNetworkAccessPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
PrivateNetworkAccessPermissionDescriptor PrivateNetworkAccessPermissionDescriptor::clone() const noexcept { return *this; }

jsbind::String PrivateNetworkAccessPermissionDescriptor::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void PrivateNetworkAccessPermissionDescriptor::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}


} // namespace webbind