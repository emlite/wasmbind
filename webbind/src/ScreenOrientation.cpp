#include <webbind/ScreenOrientation.hpp>


ScreenOrientation ScreenOrientation::take_ownership(Handle h) noexcept {
        return ScreenOrientation(h);
    }
ScreenOrientation ScreenOrientation::clone() const noexcept { return *this; }
ScreenOrientation::ScreenOrientation(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
ScreenOrientation::ScreenOrientation(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise ScreenOrientation::lock(const OrientationLockType& orientation) {
    return EventTarget::call("lock", orientation).as<jsbind::Promise>();
}

jsbind::Undefined ScreenOrientation::unlock() {
    return EventTarget::call("unlock").as<jsbind::Undefined>();
}

OrientationType ScreenOrientation::type() const {
    return EventTarget::get("type").as<OrientationType>();
}

unsigned short ScreenOrientation::angle() const {
    return EventTarget::get("angle").as<unsigned short>();
}

jsbind::Any ScreenOrientation::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void ScreenOrientation::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

