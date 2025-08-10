#include "webbind/USBPermissionDescriptor.hpp"
#include "webbind/USBDeviceFilter.hpp"

using emlite::Val;
namespace webbind {

USBPermissionDescriptor::USBPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
USBPermissionDescriptor USBPermissionDescriptor::take_ownership(Handle h) noexcept {
        return USBPermissionDescriptor(h);
    }
USBPermissionDescriptor::USBPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
USBPermissionDescriptor::USBPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
USBPermissionDescriptor USBPermissionDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<USBDeviceFilter> USBPermissionDescriptor::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<USBDeviceFilter>>();
}

void USBPermissionDescriptor::filters(const jsbind::TypedArray<USBDeviceFilter>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<USBDeviceFilter> USBPermissionDescriptor::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::TypedArray<USBDeviceFilter>>();
}

void USBPermissionDescriptor::exclusionFilters(const jsbind::TypedArray<USBDeviceFilter>& value) {
    emlite::Val::set("exclusionFilters", value);
}


} // namespace webbind