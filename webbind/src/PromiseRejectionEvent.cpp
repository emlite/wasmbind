#include <webbind/PromiseRejectionEvent.hpp>


PromiseRejectionEvent PromiseRejectionEvent::take_ownership(Handle h) noexcept {
        return PromiseRejectionEvent(h);
    }
PromiseRejectionEvent PromiseRejectionEvent::clone() const noexcept { return *this; }
PromiseRejectionEvent::PromiseRejectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PromiseRejectionEvent::PromiseRejectionEvent(const emlite::Val &val) noexcept: Event(val) {}


PromiseRejectionEvent::PromiseRejectionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("PromiseRejectionEvent").new_(type, eventInitDict)) {}

jsbind::Object PromiseRejectionEvent::promise() const {
    return Event::get("promise").as<jsbind::Object>();
}

jsbind::Any PromiseRejectionEvent::reason() const {
    return Event::get("reason").as<jsbind::Any>();
}

