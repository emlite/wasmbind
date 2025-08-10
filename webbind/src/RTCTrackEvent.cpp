#include "webbind/RTCTrackEvent.hpp"
#include "webbind/RTCTrackEventInit.hpp"
#include "webbind/RTCRtpReceiver.hpp"
#include "webbind/MediaStreamTrack.hpp"
#include "webbind/MediaStream.hpp"
#include "webbind/RTCRtpTransceiver.hpp"

namespace webbind {

RTCTrackEvent RTCTrackEvent::take_ownership(Handle h) noexcept {
        return RTCTrackEvent(h);
    }
RTCTrackEvent RTCTrackEvent::clone() const noexcept { return *this; }
emlite::Val RTCTrackEvent::instance() noexcept { return emlite::Val::global("RTCTrackEvent"); }
RTCTrackEvent::RTCTrackEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCTrackEvent::RTCTrackEvent(const emlite::Val &val) noexcept: Event(val) {}

RTCTrackEvent::RTCTrackEvent(const jsbind::String& type, const RTCTrackEventInit& eventInitDict) : Event(emlite::Val::global("RTCTrackEvent").new_(type, eventInitDict)) {}

RTCRtpReceiver RTCTrackEvent::receiver() const {
    return Event::get("receiver").as<RTCRtpReceiver>();
}

MediaStreamTrack RTCTrackEvent::track() const {
    return Event::get("track").as<MediaStreamTrack>();
}

jsbind::TypedArray<MediaStream> RTCTrackEvent::streams() const {
    return Event::get("streams").as<jsbind::TypedArray<MediaStream>>();
}

RTCRtpTransceiver RTCTrackEvent::transceiver() const {
    return Event::get("transceiver").as<RTCRtpTransceiver>();
}


} // namespace webbind