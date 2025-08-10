#include <webbind/RTCEncodedAudioFrameMetadata.hpp>

using emlite::Val;
namespace webbind {

RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata(Handle h) noexcept : RTCEncodedFrameMetadata(emlite::Val::take_ownership(h)) {}
RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata::take_ownership(Handle h) noexcept {
        return RTCEncodedAudioFrameMetadata(h);
    }
RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata(const emlite::Val &val) noexcept: RTCEncodedFrameMetadata(val) {}
RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata() noexcept: RTCEncodedFrameMetadata(emlite::Val::object()) {}
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


} // namespace webbind