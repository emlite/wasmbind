#include <webbind/Permissions.hpp>
#include <webbind/PermissionStatus.hpp>


Permissions Permissions::take_ownership(Handle h) noexcept {
        return Permissions(h);
    }
Permissions Permissions::clone() const noexcept { return *this; }
Permissions::Permissions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Permissions::Permissions(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise Permissions::query(const jsbind::Object& permissionDesc) {
    return emlite::Val::call("query", permissionDesc).as<jsbind::Promise>();
}

jsbind::Promise Permissions::request(const jsbind::Object& permissionDesc) {
    return emlite::Val::call("request", permissionDesc).as<jsbind::Promise>();
}

jsbind::Promise Permissions::revoke(const jsbind::Object& permissionDesc) {
    return emlite::Val::call("revoke", permissionDesc).as<jsbind::Promise>();
}

