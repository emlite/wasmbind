#include <webbind/RTCRtpTransceiver.hpp>
#include <webbind/RTCRtpSender.hpp>
#include <webbind/RTCRtpReceiver.hpp>
#include <webbind/RTCRtpCodec.hpp>

namespace webbind {

RTCRtpTransceiver RTCRtpTransceiver::take_ownership(Handle h) noexcept {
    return RTCRtpTransceiver(h);
}

RTCRtpTransceiver RTCRtpTransceiver::clone() const noexcept { return *this; }

emlite::Val RTCRtpTransceiver::instance() noexcept { return emlite::Val::global("RTCRtpTransceiver"); }

RTCRtpTransceiver::RTCRtpTransceiver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

RTCRtpTransceiver::RTCRtpTransceiver(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String RTCRtpTransceiver::mid() const {
    return emlite::Val::get("mid").as<jsbind::String>();
}

RTCRtpSender RTCRtpTransceiver::sender() const {
    return emlite::Val::get("sender").as<RTCRtpSender>();
}

RTCRtpReceiver RTCRtpTransceiver::receiver() const {
    return emlite::Val::get("receiver").as<RTCRtpReceiver>();
}

RTCRtpTransceiverDirection RTCRtpTransceiver::direction() const {
    return emlite::Val::get("direction").as<RTCRtpTransceiverDirection>();
}

void RTCRtpTransceiver::direction(const RTCRtpTransceiverDirection& value) {
    emlite::Val::set("direction", value);
}

RTCRtpTransceiverDirection RTCRtpTransceiver::currentDirection() const {
    return emlite::Val::get("currentDirection").as<RTCRtpTransceiverDirection>();
}

jsbind::Undefined RTCRtpTransceiver::stop() {
    return emlite::Val::call("stop").as<jsbind::Undefined>();
}

jsbind::Undefined RTCRtpTransceiver::setCodecPreferences(const jsbind::TypedArray<RTCRtpCodec>& codecs) {
    return emlite::Val::call("setCodecPreferences", codecs).as<jsbind::Undefined>();
}


} // namespace webbind