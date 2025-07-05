#include <webbind/DeviceChangeEvent.hpp>
#include <webbind/MediaDeviceInfo.hpp>


DeviceChangeEvent DeviceChangeEvent::take_ownership(Handle h) noexcept {
        return DeviceChangeEvent(h);
    }
DeviceChangeEvent DeviceChangeEvent::clone() const noexcept { return *this; }
DeviceChangeEvent::DeviceChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
DeviceChangeEvent::DeviceChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


DeviceChangeEvent::DeviceChangeEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("DeviceChangeEvent").new_(type)) {}

DeviceChangeEvent::DeviceChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("DeviceChangeEvent").new_(type, eventInitDict)) {}

jsbind::FrozenArray<MediaDeviceInfo> DeviceChangeEvent::devices() const {
    return Event::get("devices").as<jsbind::FrozenArray<MediaDeviceInfo>>();
}

jsbind::FrozenArray<MediaDeviceInfo> DeviceChangeEvent::userInsertedDevices() const {
    return Event::get("userInsertedDevices").as<jsbind::FrozenArray<MediaDeviceInfo>>();
}

