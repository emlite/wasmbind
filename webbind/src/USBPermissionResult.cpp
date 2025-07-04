#include <webbind/USBPermissionResult.hpp>
#include <webbind/USBDevice.hpp>


USBPermissionResult USBPermissionResult::take_ownership(Handle h) noexcept {
        return USBPermissionResult(h);
    }
USBPermissionResult USBPermissionResult::clone() const noexcept { return *this; }
USBPermissionResult::USBPermissionResult(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
USBPermissionResult::USBPermissionResult(const emlite::Val &val) noexcept: PermissionStatus(val) {}


jsbind::FrozenArray<USBDevice> USBPermissionResult::devices() const {
    return PermissionStatus::get("devices").as<jsbind::FrozenArray<USBDevice>>();
}

void USBPermissionResult::devices(const jsbind::FrozenArray<USBDevice>& value) {
    PermissionStatus::set("devices", value);
}

