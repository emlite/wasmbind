#include <webbind/RTCEncodedVideoFrame.hpp>
#include <webbind/RTCEncodedVideoFrame.hpp>
#include <webbind/RTCEncodedVideoFrameOptions.hpp>
#include <webbind/RTCEncodedVideoFrameMetadata.hpp>

namespace webbind {

RTCEncodedVideoFrame RTCEncodedVideoFrame::take_ownership(Handle h) noexcept {
    return RTCEncodedVideoFrame(h);
}

RTCEncodedVideoFrame RTCEncodedVideoFrame::clone() const noexcept { return *this; }

emlite::Val RTCEncodedVideoFrame::instance() noexcept { return emlite::Val::global("RTCEncodedVideoFrame"); }

RTCEncodedVideoFrame::RTCEncodedVideoFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

RTCEncodedVideoFrame::RTCEncodedVideoFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCEncodedVideoFrame::RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame) : emlite::Val(emlite::Val::global("RTCEncodedVideoFrame").new_(originalFrame)) {}

RTCEncodedVideoFrame::RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame, const RTCEncodedVideoFrameOptions& options) : emlite::Val(emlite::Val::global("RTCEncodedVideoFrame").new_(originalFrame, options)) {}

RTCEncodedVideoFrameType RTCEncodedVideoFrame::type() const {
    return emlite::Val::get("type").as<RTCEncodedVideoFrameType>();
}

jsbind::ArrayBuffer RTCEncodedVideoFrame::data() const {
    return emlite::Val::get("data").as<jsbind::ArrayBuffer>();
}

void RTCEncodedVideoFrame::data(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("data", value);
}

RTCEncodedVideoFrameMetadata RTCEncodedVideoFrame::getMetadata() {
    return emlite::Val::call("getMetadata").as<RTCEncodedVideoFrameMetadata>();
}


} // namespace webbind