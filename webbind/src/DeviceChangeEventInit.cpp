#include <webbind/DeviceChangeEventInit.hpp>
#include <webbind/MediaDeviceInfo.hpp>

namespace webbind {

DeviceChangeEventInit::DeviceChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
DeviceChangeEventInit DeviceChangeEventInit::take_ownership(Handle h) noexcept {
    return DeviceChangeEventInit(h);
}

DeviceChangeEventInit::DeviceChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

DeviceChangeEventInit::DeviceChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}

DeviceChangeEventInit DeviceChangeEventInit::clone() const noexcept { return *this; }

jsbind::TypedArray<MediaDeviceInfo> DeviceChangeEventInit::devices() const {
    return emlite::Val::get("devices").as<jsbind::TypedArray<MediaDeviceInfo>>();
}

void DeviceChangeEventInit::devices(const jsbind::TypedArray<MediaDeviceInfo>& value) {
    emlite::Val::set("devices", value);
}


} // namespace webbind