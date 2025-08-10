#include <webbind/RTCEncodedAudioFrame.hpp>
#include <webbind/RTCEncodedAudioFrame.hpp>
#include <webbind/RTCEncodedAudioFrameOptions.hpp>
#include <webbind/RTCEncodedAudioFrameMetadata.hpp>

namespace webbind {

RTCEncodedAudioFrame RTCEncodedAudioFrame::take_ownership(Handle h) noexcept {
    return RTCEncodedAudioFrame(h);
}

RTCEncodedAudioFrame RTCEncodedAudioFrame::clone() const noexcept { return *this; }

emlite::Val RTCEncodedAudioFrame::instance() noexcept { return emlite::Val::global("RTCEncodedAudioFrame"); }

RTCEncodedAudioFrame::RTCEncodedAudioFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

RTCEncodedAudioFrame::RTCEncodedAudioFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCEncodedAudioFrame::RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame) : emlite::Val(emlite::Val::global("RTCEncodedAudioFrame").new_(originalFrame)) {}

RTCEncodedAudioFrame::RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame, const RTCEncodedAudioFrameOptions& options) : emlite::Val(emlite::Val::global("RTCEncodedAudioFrame").new_(originalFrame, options)) {}

jsbind::ArrayBuffer RTCEncodedAudioFrame::data() const {
    return emlite::Val::get("data").as<jsbind::ArrayBuffer>();
}

void RTCEncodedAudioFrame::data(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("data", value);
}

RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame::getMetadata() {
    return emlite::Val::call("getMetadata").as<RTCEncodedAudioFrameMetadata>();
}


} // namespace webbind