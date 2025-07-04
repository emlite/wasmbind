#include <webbind/ScreenDetails.hpp>
#include <webbind/ScreenDetailed.hpp>


ScreenDetails ScreenDetails::take_ownership(Handle h) noexcept {
        return ScreenDetails(h);
    }
ScreenDetails ScreenDetails::clone() const noexcept { return *this; }
ScreenDetails::ScreenDetails(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
ScreenDetails::ScreenDetails(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::FrozenArray<ScreenDetailed> ScreenDetails::screens() const {
    return EventTarget::get("screens").as<jsbind::FrozenArray<ScreenDetailed>>();
}

ScreenDetailed ScreenDetails::currentScreen() const {
    return EventTarget::get("currentScreen").as<ScreenDetailed>();
}

jsbind::Any ScreenDetails::onscreenschange() const {
    return EventTarget::get("onscreenschange").as<jsbind::Any>();
}

void ScreenDetails::onscreenschange(const jsbind::Any& value) {
    EventTarget::set("onscreenschange", value);
}

jsbind::Any ScreenDetails::oncurrentscreenchange() const {
    return EventTarget::get("oncurrentscreenchange").as<jsbind::Any>();
}

void ScreenDetails::oncurrentscreenchange(const jsbind::Any& value) {
    EventTarget::set("oncurrentscreenchange", value);
}

