#include <webbind/Keyboard.hpp>
#include <webbind/KeyboardLayoutMap.hpp>


Keyboard Keyboard::take_ownership(Handle h) noexcept {
        return Keyboard(h);
    }
Keyboard Keyboard::clone() const noexcept { return *this; }
Keyboard::Keyboard(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Keyboard::Keyboard(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise<jsbind::Undefined> Keyboard::lock() {
    return EventTarget::call("lock").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Keyboard::lock(const jsbind::TypedArray<jsbind::String>& keyCodes) {
    return EventTarget::call("lock", keyCodes).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined Keyboard::unlock() {
    return EventTarget::call("unlock").as<jsbind::Undefined>();
}

jsbind::Promise<KeyboardLayoutMap> Keyboard::getLayoutMap() {
    return EventTarget::call("getLayoutMap").as<jsbind::Promise<KeyboardLayoutMap>>();
}

jsbind::Any Keyboard::onlayoutchange() const {
    return EventTarget::get("onlayoutchange").as<jsbind::Any>();
}

void Keyboard::onlayoutchange(const jsbind::Any& value) {
    EventTarget::set("onlayoutchange", value);
}

