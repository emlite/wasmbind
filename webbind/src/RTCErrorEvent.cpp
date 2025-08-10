#include "webbind/RTCErrorEvent.hpp"
#include "webbind/RTCErrorEventInit.hpp"
#include "webbind/RTCError.hpp"

namespace webbind {

RTCErrorEvent RTCErrorEvent::take_ownership(Handle h) noexcept {
        return RTCErrorEvent(h);
    }
RTCErrorEvent RTCErrorEvent::clone() const noexcept { return *this; }
emlite::Val RTCErrorEvent::instance() noexcept { return emlite::Val::global("RTCErrorEvent"); }
RTCErrorEvent::RTCErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCErrorEvent::RTCErrorEvent(const emlite::Val &val) noexcept: Event(val) {}

RTCErrorEvent::RTCErrorEvent(const jsbind::String& type, const RTCErrorEventInit& eventInitDict) : Event(emlite::Val::global("RTCErrorEvent").new_(type, eventInitDict)) {}

RTCError RTCErrorEvent::error() const {
    return Event::get("error").as<RTCError>();
}


} // namespace webbind