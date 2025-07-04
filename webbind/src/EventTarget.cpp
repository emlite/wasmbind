#include <webbind/EventTarget.hpp>
#include <webbind/Event.hpp>
#include <webbind/Observable.hpp>


ObservableEventListenerOptions::ObservableEventListenerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ObservableEventListenerOptions ObservableEventListenerOptions::take_ownership(Handle h) noexcept {
        return ObservableEventListenerOptions(h);
    }
ObservableEventListenerOptions::ObservableEventListenerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ObservableEventListenerOptions::ObservableEventListenerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ObservableEventListenerOptions ObservableEventListenerOptions::clone() const noexcept { return *this; }

bool ObservableEventListenerOptions::capture() const {
    return emlite::Val::get("capture").as<bool>();
}

void ObservableEventListenerOptions::capture(bool value) {
    emlite::Val::set("capture", value);
}

bool ObservableEventListenerOptions::passive() const {
    return emlite::Val::get("passive").as<bool>();
}

void ObservableEventListenerOptions::passive(bool value) {
    emlite::Val::set("passive", value);
}

EventTarget EventTarget::take_ownership(Handle h) noexcept {
        return EventTarget(h);
    }
EventTarget EventTarget::clone() const noexcept { return *this; }
EventTarget::EventTarget(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EventTarget::EventTarget(const emlite::Val &val) noexcept: emlite::Val(val) {}


EventTarget::EventTarget(): emlite::Val(emlite::Val::global("EventTarget").new_()) {}

jsbind::Undefined EventTarget::addEventListener(const jsbind::DOMString& type, const jsbind::Function& callback, const jsbind::Any& options) {
    return emlite::Val::call("addEventListener", type, callback, options).as<jsbind::Undefined>();
}

jsbind::Undefined EventTarget::removeEventListener(const jsbind::DOMString& type, const jsbind::Function& callback, const jsbind::Any& options) {
    return emlite::Val::call("removeEventListener", type, callback, options).as<jsbind::Undefined>();
}

bool EventTarget::dispatchEvent(const Event& event) {
    return emlite::Val::call("dispatchEvent", event).as<bool>();
}

Observable EventTarget::when(const jsbind::DOMString& type, const ObservableEventListenerOptions& options) {
    return emlite::Val::call("when", type, options).as<Observable>();
}

