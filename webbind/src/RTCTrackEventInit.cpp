#include <webbind/RTCTrackEventInit.hpp>
#include <webbind/RTCRtpReceiver.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/RTCRtpTransceiver.hpp>

namespace webbind {

RTCTrackEventInit::RTCTrackEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
RTCTrackEventInit RTCTrackEventInit::take_ownership(Handle h) noexcept {
    return RTCTrackEventInit(h);
}

RTCTrackEventInit::RTCTrackEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

RTCTrackEventInit::RTCTrackEventInit() noexcept: EventInit(emlite::Val::object()) {}

RTCTrackEventInit RTCTrackEventInit::clone() const noexcept { return *this; }

RTCRtpReceiver RTCTrackEventInit::receiver() const {
    return emlite::Val::get("receiver").as<RTCRtpReceiver>();
}

void RTCTrackEventInit::receiver(const RTCRtpReceiver& value) {
    emlite::Val::set("receiver", value);
}

MediaStreamTrack RTCTrackEventInit::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

void RTCTrackEventInit::track(const MediaStreamTrack& value) {
    emlite::Val::set("track", value);
}

jsbind::TypedArray<MediaStream> RTCTrackEventInit::streams() const {
    return emlite::Val::get("streams").as<jsbind::TypedArray<MediaStream>>();
}

void RTCTrackEventInit::streams(const jsbind::TypedArray<MediaStream>& value) {
    emlite::Val::set("streams", value);
}

RTCRtpTransceiver RTCTrackEventInit::transceiver() const {
    return emlite::Val::get("transceiver").as<RTCRtpTransceiver>();
}

void RTCTrackEventInit::transceiver(const RTCRtpTransceiver& value) {
    emlite::Val::set("transceiver", value);
}


} // namespace webbind