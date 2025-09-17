#include <webbind/EventTarget.hpp>
#include <webbind/EventListener.hpp>
#include <webbind/Event.hpp>
#include <webbind/Observable.hpp>
#include <webbind/ObservableEventListenerOptions.hpp>

namespace webbind {

EventTarget EventTarget::take_ownership(Handle h) noexcept {
    return EventTarget(h);
}

EventTarget EventTarget::clone() const noexcept { return *this; }

emlite::Val EventTarget::instance() noexcept { return emlite::Val::global("EventTarget"); }

EventTarget::EventTarget(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EventTarget::EventTarget(const emlite::Val &val) noexcept: emlite::Val(val) {}

EventTarget::EventTarget() : emlite::Val(emlite::Val::global("EventTarget").new_()) {}

jsbind::Undefined EventTarget::addEventListener(const jsbind::String& type, const EventListener& callback) {
    return emlite::Val::call("addEventListener", type, callback).as<jsbind::Undefined>();
}

jsbind::Undefined EventTarget::addEventListener(const jsbind::String& type, const EventListener& callback, const jsbind::Any& options) {
    return emlite::Val::call("addEventListener", type, callback, options).as<jsbind::Undefined>();
}

jsbind::Undefined EventTarget::removeEventListener(const jsbind::String& type, const EventListener& callback) {
    return emlite::Val::call("removeEventListener", type, callback).as<jsbind::Undefined>();
}

jsbind::Undefined EventTarget::removeEventListener(const jsbind::String& type, const EventListener& callback, const jsbind::Any& options) {
    return emlite::Val::call("removeEventListener", type, callback, options).as<jsbind::Undefined>();
}

bool EventTarget::dispatchEvent(const Event& event) {
    return emlite::Val::call("dispatchEvent", event).as<bool>();
}

Observable EventTarget::when(const jsbind::String& type) {
    return emlite::Val::call("when", type).as<Observable>();
}

Observable EventTarget::when(const jsbind::String& type, const ObservableEventListenerOptions& options) {
    return emlite::Val::call("when", type, options).as<Observable>();
}


} // namespace webbind