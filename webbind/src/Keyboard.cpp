#include <webbind/Keyboard.hpp>
#include <webbind/KeyboardLayoutMap.hpp>


Keyboard Keyboard::take_ownership(Handle h) noexcept {
        return Keyboard(h);
    }
Keyboard Keyboard::clone() const noexcept { return *this; }
Keyboard::Keyboard(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Keyboard::Keyboard(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise Keyboard::lock() {
    return EventTarget::call("lock").as<jsbind::Promise>();
}

jsbind::Promise Keyboard::lock(const jsbind::Sequence<jsbind::DOMString>& keyCodes) {
    return EventTarget::call("lock", keyCodes).as<jsbind::Promise>();
}

jsbind::Undefined Keyboard::unlock() {
    return EventTarget::call("unlock").as<jsbind::Undefined>();
}

jsbind::Promise Keyboard::getLayoutMap() {
    return EventTarget::call("getLayoutMap").as<jsbind::Promise>();
}

jsbind::Any Keyboard::onlayoutchange() const {
    return EventTarget::get("onlayoutchange").as<jsbind::Any>();
}

void Keyboard::onlayoutchange(const jsbind::Any& value) {
    EventTarget::set("onlayoutchange", value);
}

