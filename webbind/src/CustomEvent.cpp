#include <webbind/CustomEvent.hpp>
#include <webbind/CustomEventInit.hpp>

namespace webbind {

CustomEvent CustomEvent::take_ownership(Handle h) noexcept {
    return CustomEvent(h);
}

CustomEvent CustomEvent::clone() const noexcept { return *this; }

emlite::Val CustomEvent::instance() noexcept { return emlite::Val::global("CustomEvent"); }

CustomEvent::CustomEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

CustomEvent::CustomEvent(const emlite::Val &val) noexcept: Event(val) {}

CustomEvent::CustomEvent(const jsbind::String& type) : Event(emlite::Val::global("CustomEvent").new_(type)) {}

CustomEvent::CustomEvent(const jsbind::String& type, const CustomEventInit& eventInitDict) : Event(emlite::Val::global("CustomEvent").new_(type, eventInitDict)) {}

jsbind::Any CustomEvent::detail() const {
    return Event::get("detail").as<jsbind::Any>();
}

jsbind::Undefined CustomEvent::initCustomEvent(const jsbind::String& type) {
    return Event::call("initCustomEvent", type).as<jsbind::Undefined>();
}

jsbind::Undefined CustomEvent::initCustomEvent(const jsbind::String& type, bool bubbles) {
    return Event::call("initCustomEvent", type, bubbles).as<jsbind::Undefined>();
}

jsbind::Undefined CustomEvent::initCustomEvent(const jsbind::String& type, bool bubbles, bool cancelable) {
    return Event::call("initCustomEvent", type, bubbles, cancelable).as<jsbind::Undefined>();
}

jsbind::Undefined CustomEvent::initCustomEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& detail) {
    return Event::call("initCustomEvent", type, bubbles, cancelable, detail).as<jsbind::Undefined>();
}


} // namespace webbind