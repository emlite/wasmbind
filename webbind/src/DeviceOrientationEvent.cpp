#include <webbind/DeviceOrientationEvent.hpp>


DeviceOrientationEvent DeviceOrientationEvent::take_ownership(Handle h) noexcept {
        return DeviceOrientationEvent(h);
    }
DeviceOrientationEvent DeviceOrientationEvent::clone() const noexcept { return *this; }
DeviceOrientationEvent::DeviceOrientationEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
DeviceOrientationEvent::DeviceOrientationEvent(const emlite::Val &val) noexcept: Event(val) {}


DeviceOrientationEvent::DeviceOrientationEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("DeviceOrientationEvent").new_(type)) {}

DeviceOrientationEvent::DeviceOrientationEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("DeviceOrientationEvent").new_(type, eventInitDict)) {}

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

jsbind::Promise DeviceOrientationEvent::requestPermission() {
    return emlite::Val::global("deviceorientationevent").call("requestPermission").as<jsbind::Promise>();
}

jsbind::Promise DeviceOrientationEvent::requestPermission(bool absolute) {
    return emlite::Val::global("deviceorientationevent").call("requestPermission", absolute).as<jsbind::Promise>();
}

