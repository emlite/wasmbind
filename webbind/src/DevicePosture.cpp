#include <webbind/DevicePosture.hpp>


DevicePosture DevicePosture::take_ownership(Handle h) noexcept {
        return DevicePosture(h);
    }
DevicePosture DevicePosture::clone() const noexcept { return *this; }
DevicePosture::DevicePosture(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
DevicePosture::DevicePosture(const emlite::Val &val) noexcept: EventTarget(val) {}


DevicePostureType DevicePosture::type() const {
    return EventTarget::get("type").as<DevicePostureType>();
}

jsbind::Any DevicePosture::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void DevicePosture::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

