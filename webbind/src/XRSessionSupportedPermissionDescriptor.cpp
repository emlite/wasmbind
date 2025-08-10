#include <webbind/XRSessionSupportedPermissionDescriptor.hpp>

namespace webbind {

XRSessionSupportedPermissionDescriptor::XRSessionSupportedPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
XRSessionSupportedPermissionDescriptor XRSessionSupportedPermissionDescriptor::take_ownership(Handle h) noexcept {
    return XRSessionSupportedPermissionDescriptor(h);
}

XRSessionSupportedPermissionDescriptor::XRSessionSupportedPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}

XRSessionSupportedPermissionDescriptor::XRSessionSupportedPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}

XRSessionSupportedPermissionDescriptor XRSessionSupportedPermissionDescriptor::clone() const noexcept { return *this; }

XRSessionMode XRSessionSupportedPermissionDescriptor::mode() const {
    return emlite::Val::get("mode").as<XRSessionMode>();
}

void XRSessionSupportedPermissionDescriptor::mode(const XRSessionMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind