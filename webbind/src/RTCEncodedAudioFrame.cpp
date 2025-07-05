#include <webbind/RTCEncodedAudioFrame.hpp>


RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata::take_ownership(Handle h) noexcept {
        return RTCEncodedAudioFrameMetadata(h);
    }
RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata::clone() const noexcept { return *this; }

short RTCEncodedAudioFrameMetadata::sequenceNumber() const {
    return emlite::Val::get("sequenceNumber").as<short>();
}

void RTCEncodedAudioFrameMetadata::sequenceNumber(short value) {
    emlite::Val::set("sequenceNumber", value);
}

double RTCEncodedAudioFrameMetadata::audioLevel() const {
    return emlite::Val::get("audioLevel").as<double>();
}

void RTCEncodedAudioFrameMetadata::audioLevel(double value) {
    emlite::Val::set("audioLevel", value);
}

RTCEncodedAudioFrame RTCEncodedAudioFrame::take_ownership(Handle h) noexcept {
        return RTCEncodedAudioFrame(h);
    }
RTCEncodedAudioFrame RTCEncodedAudioFrame::clone() const noexcept { return *this; }
RTCEncodedAudioFrame::RTCEncodedAudioFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCEncodedAudioFrame::RTCEncodedAudioFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}


RTCEncodedAudioFrame::RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame) : emlite::Val(emlite::Val::global("RTCEncodedAudioFrame").new_(originalFrame)) {}

RTCEncodedAudioFrame::RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame, const jsbind::Any& options) : emlite::Val(emlite::Val::global("RTCEncodedAudioFrame").new_(originalFrame, options)) {}

jsbind::ArrayBuffer RTCEncodedAudioFrame::data() const {
    return emlite::Val::get("data").as<jsbind::ArrayBuffer>();
}

void RTCEncodedAudioFrame::data(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("data", value);
}

RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame::getMetadata() {
    return emlite::Val::call("getMetadata").as<RTCEncodedAudioFrameMetadata>();
}

