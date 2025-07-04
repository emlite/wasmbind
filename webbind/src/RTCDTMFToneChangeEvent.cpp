#include <webbind/RTCDTMFToneChangeEvent.hpp>


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent::take_ownership(Handle h) noexcept {
        return RTCDTMFToneChangeEvent(h);
    }
RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent::clone() const noexcept { return *this; }
RTCDTMFToneChangeEvent::RTCDTMFToneChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCDTMFToneChangeEvent::RTCDTMFToneChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


RTCDTMFToneChangeEvent::RTCDTMFToneChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("RTCDTMFToneChangeEvent").new_(type, eventInitDict)) {}

jsbind::DOMString RTCDTMFToneChangeEvent::tone() const {
    return Event::get("tone").as<jsbind::DOMString>();
}

