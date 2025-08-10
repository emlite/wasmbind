#include "webbind/RTCEncodedAudioFrameOptions.hpp"
#include "webbind/RTCEncodedAudioFrameMetadata.hpp"

using emlite::Val;
namespace webbind {

RTCEncodedAudioFrameOptions::RTCEncodedAudioFrameOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions::take_ownership(Handle h) noexcept {
        return RTCEncodedAudioFrameOptions(h);
    }
RTCEncodedAudioFrameOptions::RTCEncodedAudioFrameOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCEncodedAudioFrameOptions::RTCEncodedAudioFrameOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions::clone() const noexcept { return *this; }

RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameOptions::metadata() const {
    return emlite::Val::get("metadata").as<RTCEncodedAudioFrameMetadata>();
}

void RTCEncodedAudioFrameOptions::metadata(const RTCEncodedAudioFrameMetadata& value) {
    emlite::Val::set("metadata", value);
}


} // namespace webbind