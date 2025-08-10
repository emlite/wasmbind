#include <webbind/RTCDTMFSender.hpp>

namespace webbind {

RTCDTMFSender RTCDTMFSender::take_ownership(Handle h) noexcept {
    return RTCDTMFSender(h);
}

RTCDTMFSender RTCDTMFSender::clone() const noexcept { return *this; }

emlite::Val RTCDTMFSender::instance() noexcept { return emlite::Val::global("RTCDTMFSender"); }

RTCDTMFSender::RTCDTMFSender(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

RTCDTMFSender::RTCDTMFSender(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Undefined RTCDTMFSender::insertDTMF(const jsbind::String& tones) {
    return EventTarget::call("insertDTMF", tones).as<jsbind::Undefined>();
}

jsbind::Undefined RTCDTMFSender::insertDTMF(const jsbind::String& tones, unsigned long duration) {
    return EventTarget::call("insertDTMF", tones, duration).as<jsbind::Undefined>();
}

jsbind::Undefined RTCDTMFSender::insertDTMF(const jsbind::String& tones, unsigned long duration, unsigned long interToneGap) {
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

jsbind::String RTCDTMFSender::toneBuffer() const {
    return EventTarget::get("toneBuffer").as<jsbind::String>();
}


} // namespace webbind