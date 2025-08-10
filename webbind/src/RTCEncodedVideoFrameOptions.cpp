#include "webbind/RTCEncodedVideoFrameOptions.hpp"
#include "webbind/RTCEncodedVideoFrameMetadata.hpp"

using emlite::Val;
namespace webbind {

RTCEncodedVideoFrameOptions::RTCEncodedVideoFrameOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions::take_ownership(Handle h) noexcept {
        return RTCEncodedVideoFrameOptions(h);
    }
RTCEncodedVideoFrameOptions::RTCEncodedVideoFrameOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCEncodedVideoFrameOptions::RTCEncodedVideoFrameOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions::clone() const noexcept { return *this; }

RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameOptions::metadata() const {
    return emlite::Val::get("metadata").as<RTCEncodedVideoFrameMetadata>();
}

void RTCEncodedVideoFrameOptions::metadata(const RTCEncodedVideoFrameMetadata& value) {
    emlite::Val::set("metadata", value);
}


} // namespace webbind