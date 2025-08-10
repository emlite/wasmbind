#include <webbind/XRPermissionDescriptor.hpp>

namespace webbind {

XRPermissionDescriptor::XRPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
XRPermissionDescriptor XRPermissionDescriptor::take_ownership(Handle h) noexcept {
    return XRPermissionDescriptor(h);
}

XRPermissionDescriptor::XRPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}

XRPermissionDescriptor::XRPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}

XRPermissionDescriptor XRPermissionDescriptor::clone() const noexcept { return *this; }

XRSessionMode XRPermissionDescriptor::mode() const {
    return emlite::Val::get("mode").as<XRSessionMode>();
}

void XRPermissionDescriptor::mode(const XRSessionMode& value) {
    emlite::Val::set("mode", value);
}

jsbind::TypedArray<jsbind::String> XRPermissionDescriptor::requiredFeatures() const {
    return emlite::Val::get("requiredFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

void XRPermissionDescriptor::requiredFeatures(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("requiredFeatures", value);
}

jsbind::TypedArray<jsbind::String> XRPermissionDescriptor::optionalFeatures() const {
    return emlite::Val::get("optionalFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

void XRPermissionDescriptor::optionalFeatures(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("optionalFeatures", value);
}


} // namespace webbind