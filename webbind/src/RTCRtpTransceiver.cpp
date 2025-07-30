#include <webbind/RTCRtpTransceiver.hpp>
#include <webbind/RTCRtpSender.hpp>
#include <webbind/RTCRtpReceiver.hpp>


RTCRtpCodec::RTCRtpCodec(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpCodec RTCRtpCodec::take_ownership(Handle h) noexcept {
        return RTCRtpCodec(h);
    }
RTCRtpCodec::RTCRtpCodec(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpCodec::RTCRtpCodec() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpCodec RTCRtpCodec::clone() const noexcept { return *this; }

jsbind::String RTCRtpCodec::mimeType() const {
    return emlite::Val::get("mimeType").as<jsbind::String>();
}

void RTCRtpCodec::mimeType(const jsbind::String& value) {
    emlite::Val::set("mimeType", value);
}

unsigned long RTCRtpCodec::clockRate() const {
    return emlite::Val::get("clockRate").as<unsigned long>();
}

void RTCRtpCodec::clockRate(unsigned long value) {
    emlite::Val::set("clockRate", value);
}

unsigned short RTCRtpCodec::channels() const {
    return emlite::Val::get("channels").as<unsigned short>();
}

void RTCRtpCodec::channels(unsigned short value) {
    emlite::Val::set("channels", value);
}

jsbind::String RTCRtpCodec::sdpFmtpLine() const {
    return emlite::Val::get("sdpFmtpLine").as<jsbind::String>();
}

void RTCRtpCodec::sdpFmtpLine(const jsbind::String& value) {
    emlite::Val::set("sdpFmtpLine", value);
}

RTCRtpTransceiver RTCRtpTransceiver::take_ownership(Handle h) noexcept {
        return RTCRtpTransceiver(h);
    }
RTCRtpTransceiver RTCRtpTransceiver::clone() const noexcept { return *this; }
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

