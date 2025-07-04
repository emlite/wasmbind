#include <webbind/RTCDTMFSender.hpp>


RTCDTMFSender RTCDTMFSender::take_ownership(Handle h) noexcept {
        return RTCDTMFSender(h);
    }
RTCDTMFSender RTCDTMFSender::clone() const noexcept { return *this; }
RTCDTMFSender::RTCDTMFSender(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RTCDTMFSender::RTCDTMFSender(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Undefined RTCDTMFSender::insertDTMF(const jsbind::DOMString& tones, unsigned long duration, unsigned long interToneGap) {
    return EventTarget::call("insertDTMF", tones, duration, interToneGap).as<jsbind::Undefined>();
}

jsbind::Any RTCDTMFSender::ontonechange() const {
    return EventTarget::get("ontonechange").as<jsbind::Any>();
}

void RTCDTMFSender::ontonechange(const jsbind::Any& value) {
    EventTarget::set("ontonechange", value);
}

bool RTCDTMFSender::canInsertDTMF() const {
    return EventTarget::get("canInsertDTMF").as<bool>();
}

jsbind::DOMString RTCDTMFSender::toneBuffer() const {
    return EventTarget::get("toneBuffer").as<jsbind::DOMString>();
}

