#include <webbind/RTCErrorEvent.hpp>
#include <webbind/RTCError.hpp>


RTCErrorEvent RTCErrorEvent::take_ownership(Handle h) noexcept {
        return RTCErrorEvent(h);
    }
RTCErrorEvent RTCErrorEvent::clone() const noexcept { return *this; }
RTCErrorEvent::RTCErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCErrorEvent::RTCErrorEvent(const emlite::Val &val) noexcept: Event(val) {}


RTCErrorEvent::RTCErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("RTCErrorEvent").new_(type, eventInitDict)) {}

RTCError RTCErrorEvent::error() const {
    return Event::get("error").as<RTCError>();
}

