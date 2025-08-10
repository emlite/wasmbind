#include "webbind/PreferenceObject.hpp"

namespace webbind {

PreferenceObject PreferenceObject::take_ownership(Handle h) noexcept {
        return PreferenceObject(h);
    }
PreferenceObject PreferenceObject::clone() const noexcept { return *this; }
emlite::Val PreferenceObject::instance() noexcept { return emlite::Val::global("PreferenceObject"); }
PreferenceObject::PreferenceObject(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PreferenceObject::PreferenceObject(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String PreferenceObject::override() const {
    return EventTarget::get("override").as<jsbind::String>();
}

jsbind::String PreferenceObject::value() const {
    return EventTarget::get("value").as<jsbind::String>();
}

jsbind::TypedArray<jsbind::String> PreferenceObject::validValues() const {
    return EventTarget::get("validValues").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Undefined PreferenceObject::clearOverride() {
    return EventTarget::call("clearOverride").as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> PreferenceObject::requestOverride(const jsbind::String& value) {
    return EventTarget::call("requestOverride", value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any PreferenceObject::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void PreferenceObject::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}


} // namespace webbind