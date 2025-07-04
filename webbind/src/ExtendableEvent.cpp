#include <webbind/ExtendableEvent.hpp>


ExtendableEvent ExtendableEvent::take_ownership(Handle h) noexcept {
        return ExtendableEvent(h);
    }
ExtendableEvent ExtendableEvent::clone() const noexcept { return *this; }
ExtendableEvent::ExtendableEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ExtendableEvent::ExtendableEvent(const emlite::Val &val) noexcept: Event(val) {}


ExtendableEvent::ExtendableEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("ExtendableEvent").new_(type, eventInitDict)) {}

jsbind::Undefined ExtendableEvent::waitUntil(const jsbind::Promise& f) {
    return Event::call("waitUntil", f).as<jsbind::Undefined>();
}

