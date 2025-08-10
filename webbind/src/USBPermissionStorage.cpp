#include <webbind/USBPermissionStorage.hpp>
#include <webbind/AllowedUSBDevice.hpp>

namespace webbind {

USBPermissionStorage::USBPermissionStorage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBPermissionStorage USBPermissionStorage::take_ownership(Handle h) noexcept {
    return USBPermissionStorage(h);
}

USBPermissionStorage::USBPermissionStorage(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBPermissionStorage::USBPermissionStorage() noexcept: emlite::Val(emlite::Val::object()) {}

USBPermissionStorage USBPermissionStorage::clone() const noexcept { return *this; }

jsbind::TypedArray<AllowedUSBDevice> USBPermissionStorage::allowedDevices() const {
    return emlite::Val::get("allowedDevices").as<jsbind::TypedArray<AllowedUSBDevice>>();
}

void USBPermissionStorage::allowedDevices(const jsbind::TypedArray<AllowedUSBDevice>& value) {
    emlite::Val::set("allowedDevices", value);
}


} // namespace webbind