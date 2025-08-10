#include <webbind/VideoEncoder.hpp>
#include <webbind/VideoEncoderInit.hpp>
#include <webbind/VideoEncoderConfig.hpp>
#include <webbind/VideoFrame.hpp>
#include <webbind/VideoEncoderEncodeOptions.hpp>
#include <webbind/VideoEncoderSupport.hpp>

namespace webbind {

VideoEncoder VideoEncoder::take_ownership(Handle h) noexcept {
        return VideoEncoder(h);
    }
VideoEncoder VideoEncoder::clone() const noexcept { return *this; }
emlite::Val VideoEncoder::instance() noexcept { return emlite::Val::global("VideoEncoder"); }
VideoEncoder::VideoEncoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
VideoEncoder::VideoEncoder(const emlite::Val &val) noexcept: EventTarget(val) {}

VideoEncoder::VideoEncoder(const VideoEncoderInit& init) : EventTarget(emlite::Val::global("VideoEncoder").new_(init)) {}

CodecState VideoEncoder::state() const {
    return EventTarget::get("state").as<CodecState>();
}

unsigned long VideoEncoder::encodeQueueSize() const {
    return EventTarget::get("encodeQueueSize").as<unsigned long>();
}

jsbind::Any VideoEncoder::ondequeue() const {
    return EventTarget::get("ondequeue").as<jsbind::Any>();
}

void VideoEncoder::ondequeue(const jsbind::Any& value) {
    EventTarget::set("ondequeue", value);
}

jsbind::Undefined VideoEncoder::configure(const VideoEncoderConfig& config) {
    return EventTarget::call("configure", config).as<jsbind::Undefined>();
}

jsbind::Undefined VideoEncoder::encode(const VideoFrame& frame) {
    return EventTarget::call("encode", frame).as<jsbind::Undefined>();
}

jsbind::Undefined VideoEncoder::encode(const VideoFrame& frame, const VideoEncoderEncodeOptions& options) {
    return EventTarget::call("encode", frame, options).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> VideoEncoder::flush() {
    return EventTarget::call("flush").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined VideoEncoder::reset() {
    return EventTarget::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined VideoEncoder::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Promise<VideoEncoderSupport> VideoEncoder::isConfigSupported(const VideoEncoderConfig& config) {
    return emlite::Val::global("videoencoder").call("isConfigSupported", config).as<jsbind::Promise<VideoEncoderSupport>>();
}


} // namespace webbind