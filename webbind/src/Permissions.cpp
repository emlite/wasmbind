#include <webbind/Permissions.hpp>
#include <webbind/PermissionStatus.hpp>

namespace webbind {

Permissions Permissions::take_ownership(Handle h) noexcept {
        return Permissions(h);
    }
Permissions Permissions::clone() const noexcept { return *this; }
emlite::Val Permissions::instance() noexcept { return emlite::Val::global("Permissions"); }
Permissions::Permissions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Permissions::Permissions(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<PermissionStatus> Permissions::query(const jsbind::Object& permissionDesc) {
    return emlite::Val::call("query", permissionDesc).as<jsbind::Promise<PermissionStatus>>();
}

jsbind::Promise<PermissionStatus> Permissions::request(const jsbind::Object& permissionDesc) {
    return emlite::Val::call("request", permissionDesc).as<jsbind::Promise<PermissionStatus>>();
}

jsbind::Promise<PermissionStatus> Permissions::revoke(const jsbind::Object& permissionDesc) {
    return emlite::Val::call("revoke", permissionDesc).as<jsbind::Promise<PermissionStatus>>();
}


} // namespace webbind