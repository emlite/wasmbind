#include <webbind/XRPermissionStatus.hpp>


XRPermissionStatus XRPermissionStatus::take_ownership(Handle h) noexcept {
        return XRPermissionStatus(h);
    }
XRPermissionStatus XRPermissionStatus::clone() const noexcept { return *this; }
XRPermissionStatus::XRPermissionStatus(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
XRPermissionStatus::XRPermissionStatus(const emlite::Val &val) noexcept: PermissionStatus(val) {}


jsbind::TypedArray<jsbind::String> XRPermissionStatus::granted() const {
    return PermissionStatus::get("granted").as<jsbind::TypedArray<jsbind::String>>();
}

void XRPermissionStatus::granted(const jsbind::TypedArray<jsbind::String>& value) {
    PermissionStatus::set("granted", value);
}

