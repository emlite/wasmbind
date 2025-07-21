#include <webbind/PreferenceObject.hpp>


PreferenceObject PreferenceObject::take_ownership(Handle h) noexcept {
        return PreferenceObject(h);
    }
PreferenceObject PreferenceObject::clone() const noexcept { return *this; }
PreferenceObject::PreferenceObject(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PreferenceObject::PreferenceObject(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::DOMString PreferenceObject::override() const {
    return EventTarget::get("override").as<jsbind::DOMString>();
}

jsbind::DOMString PreferenceObject::value() const {
    return EventTarget::get("value").as<jsbind::DOMString>();
}

jsbind::FrozenArray<jsbind::DOMString> PreferenceObject::validValues() const {
    return EventTarget::get("validValues").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::Undefined PreferenceObject::clearOverride() {
    return EventTarget::call("clearOverride").as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> PreferenceObject::requestOverride(const jsbind::DOMString& value) {
    return EventTarget::call("requestOverride", value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any PreferenceObject::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void PreferenceObject::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

