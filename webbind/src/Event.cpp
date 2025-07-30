#include <webbind/Event.hpp>
#include <webbind/EventTarget.hpp>


Event Event::take_ownership(Handle h) noexcept {
        return Event(h);
    }
Event Event::clone() const noexcept { return *this; }
Event::Event(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Event::Event(const emlite::Val &val) noexcept: emlite::Val(val) {}


Event::Event(const jsbind::String& type) : emlite::Val(emlite::Val::global("Event").new_(type)) {}

Event::Event(const jsbind::String& type, const jsbind::Any& eventInitDict) : emlite::Val(emlite::Val::global("Event").new_(type, eventInitDict)) {}

jsbind::String Event::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

EventTarget Event::target() const {
    return emlite::Val::get("target").as<EventTarget>();
}

EventTarget Event::srcElement() const {
    return emlite::Val::get("srcElement").as<EventTarget>();
}

EventTarget Event::currentTarget() const {
    return emlite::Val::get("currentTarget").as<EventTarget>();
}

jsbind::TypedArray<EventTarget> Event::composedPath() {
    return emlite::Val::call("composedPath").as<jsbind::TypedArray<EventTarget>>();
}

unsigned short Event::eventPhase() const {
    return emlite::Val::get("eventPhase").as<unsigned short>();
}

jsbind::Undefined Event::stopPropagation() {
    return emlite::Val::call("stopPropagation").as<jsbind::Undefined>();
}

bool Event::cancelBubble() const {
    return emlite::Val::get("cancelBubble").as<bool>();
}

void Event::cancelBubble(bool value) {
    emlite::Val::set("cancelBubble", value);
}

jsbind::Undefined Event::stopImmediatePropagation() {
    return emlite::Val::call("stopImmediatePropagation").as<jsbind::Undefined>();
}

bool Event::bubbles() const {
    return emlite::Val::get("bubbles").as<bool>();
}

bool Event::cancelable() const {
    return emlite::Val::get("cancelable").as<bool>();
}

bool Event::returnValue() const {
    return emlite::Val::get("returnValue").as<bool>();
}

void Event::returnValue(bool value) {
    emlite::Val::set("returnValue", value);
}

jsbind::Undefined Event::preventDefault() {
    return emlite::Val::call("preventDefault").as<jsbind::Undefined>();
}

bool Event::defaultPrevented() const {
    return emlite::Val::get("defaultPrevented").as<bool>();
}

bool Event::composed() const {
    return emlite::Val::get("composed").as<bool>();
}

bool Event::isTrusted() const {
    return emlite::Val::get("isTrusted").as<bool>();
}

jsbind::Any Event::timeStamp() const {
    return emlite::Val::get("timeStamp").as<jsbind::Any>();
}

jsbind::Undefined Event::initEvent(const jsbind::String& type) {
    return emlite::Val::call("initEvent", type).as<jsbind::Undefined>();
}

jsbind::Undefined Event::initEvent(const jsbind::String& type, bool bubbles) {
    return emlite::Val::call("initEvent", type, bubbles).as<jsbind::Undefined>();
}

jsbind::Undefined Event::initEvent(const jsbind::String& type, bool bubbles, bool cancelable) {
    return emlite::Val::call("initEvent", type, bubbles, cancelable).as<jsbind::Undefined>();
}

