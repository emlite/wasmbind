#include <webbind/DeviceOrientationEvent.hpp>
#include <webbind/DeviceOrientationEventInit.hpp>

namespace webbind {

DeviceOrientationEvent DeviceOrientationEvent::take_ownership(Handle h) noexcept {
    return DeviceOrientationEvent(h);
}

DeviceOrientationEvent DeviceOrientationEvent::clone() const noexcept { return *this; }

emlite::Val DeviceOrientationEvent::instance() noexcept { return emlite::Val::global("DeviceOrientationEvent"); }

DeviceOrientationEvent::DeviceOrientationEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

DeviceOrientationEvent::DeviceOrientationEvent(const emlite::Val &val) noexcept: Event(val) {}

DeviceOrientationEvent::DeviceOrientationEvent(const jsbind::String& type) : Event(emlite::Val::global("DeviceOrientationEvent").new_(type)) {}

DeviceOrientationEvent::DeviceOrientationEvent(const jsbind::String& type, const DeviceOrientationEventInit& eventInitDict) : Event(emlite::Val::global("DeviceOrientationEvent").new_(type, eventInitDict)) {}

double DeviceOrientationEvent::alpha() const {
    return Event::get("alpha").as<double>();
}

double DeviceOrientationEvent::beta() const {
    return Event::get("beta").as<double>();
}

double DeviceOrientationEvent::gamma() const {
    return Event::get("gamma").as<double>();
}

bool DeviceOrientationEvent::absolute() const {
    return Event::get("absolute").as<bool>();
}

jsbind::Promise<PermissionState> DeviceOrientationEvent::requestPermission() {
    return emlite::Val::global("deviceorientationevent").call("requestPermission").as<jsbind::Promise<PermissionState>>();
}

jsbind::Promise<PermissionState> DeviceOrientationEvent::requestPermission(bool absolute) {
    return emlite::Val::global("deviceorientationevent").call("requestPermission", absolute).as<jsbind::Promise<PermissionState>>();
}


} // namespace webbind