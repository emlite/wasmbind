#include <webbind/TopLevelStorageAccessPermissionDescriptor.hpp>

using emlite::Val;
namespace webbind {

TopLevelStorageAccessPermissionDescriptor::TopLevelStorageAccessPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
TopLevelStorageAccessPermissionDescriptor TopLevelStorageAccessPermissionDescriptor::take_ownership(Handle h) noexcept {
        return TopLevelStorageAccessPermissionDescriptor(h);
    }
TopLevelStorageAccessPermissionDescriptor::TopLevelStorageAccessPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
TopLevelStorageAccessPermissionDescriptor::TopLevelStorageAccessPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
TopLevelStorageAccessPermissionDescriptor TopLevelStorageAccessPermissionDescriptor::clone() const noexcept { return *this; }

jsbind::String TopLevelStorageAccessPermissionDescriptor::requestedOrigin() const {
    return emlite::Val::get("requestedOrigin").as<jsbind::String>();
}

void TopLevelStorageAccessPermissionDescriptor::requestedOrigin(const jsbind::String& value) {
    emlite::Val::set("requestedOrigin", value);
}


} // namespace webbind