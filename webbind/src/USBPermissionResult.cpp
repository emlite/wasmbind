#include <webbind/USBPermissionResult.hpp>
#include <webbind/USBDevice.hpp>


USBPermissionResult USBPermissionResult::take_ownership(Handle h) noexcept {
        return USBPermissionResult(h);
    }
USBPermissionResult USBPermissionResult::clone() const noexcept { return *this; }
emlite::Val USBPermissionResult::instance() noexcept { return emlite::Val::global("USBPermissionResult"); }
USBPermissionResult::USBPermissionResult(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
USBPermissionResult::USBPermissionResult(const emlite::Val &val) noexcept: PermissionStatus(val) {}


jsbind::TypedArray<USBDevice> USBPermissionResult::devices() const {
    return PermissionStatus::get("devices").as<jsbind::TypedArray<USBDevice>>();
}

void USBPermissionResult::devices(const jsbind::TypedArray<USBDevice>& value) {
    PermissionStatus::set("devices", value);
}

