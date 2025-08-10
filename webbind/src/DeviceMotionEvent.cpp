#include <webbind/DeviceMotionEvent.hpp>
#include <webbind/DeviceMotionEventInit.hpp>
#include <webbind/DeviceMotionEventAcceleration.hpp>
#include <webbind/DeviceMotionEventRotationRate.hpp>

namespace webbind {

DeviceMotionEvent DeviceMotionEvent::take_ownership(Handle h) noexcept {
    return DeviceMotionEvent(h);
}

DeviceMotionEvent DeviceMotionEvent::clone() const noexcept { return *this; }

emlite::Val DeviceMotionEvent::instance() noexcept { return emlite::Val::global("DeviceMotionEvent"); }

DeviceMotionEvent::DeviceMotionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

DeviceMotionEvent::DeviceMotionEvent(const emlite::Val &val) noexcept: Event(val) {}

DeviceMotionEvent::DeviceMotionEvent(const jsbind::String& type) : Event(emlite::Val::global("DeviceMotionEvent").new_(type)) {}

DeviceMotionEvent::DeviceMotionEvent(const jsbind::String& type, const DeviceMotionEventInit& eventInitDict) : Event(emlite::Val::global("DeviceMotionEvent").new_(type, eventInitDict)) {}

DeviceMotionEventAcceleration DeviceMotionEvent::acceleration() const {
    return Event::get("acceleration").as<DeviceMotionEventAcceleration>();
}

DeviceMotionEventAcceleration DeviceMotionEvent::accelerationIncludingGravity() const {
    return Event::get("accelerationIncludingGravity").as<DeviceMotionEventAcceleration>();
}

DeviceMotionEventRotationRate DeviceMotionEvent::rotationRate() const {
    return Event::get("rotationRate").as<DeviceMotionEventRotationRate>();
}

double DeviceMotionEvent::interval() const {
    return Event::get("interval").as<double>();
}

jsbind::Promise<PermissionState> DeviceMotionEvent::requestPermission() {
    return emlite::Val::global("devicemotionevent").call("requestPermission").as<jsbind::Promise<PermissionState>>();
}


} // namespace webbind