#include "webbind/VideoDecoder.hpp"
#include "webbind/VideoDecoderInit.hpp"
#include "webbind/VideoDecoderConfig.hpp"
#include "webbind/EncodedVideoChunk.hpp"
#include "webbind/VideoDecoderSupport.hpp"

namespace webbind {

VideoDecoder VideoDecoder::take_ownership(Handle h) noexcept {
        return VideoDecoder(h);
    }
VideoDecoder VideoDecoder::clone() const noexcept { return *this; }
emlite::Val VideoDecoder::instance() noexcept { return emlite::Val::global("VideoDecoder"); }
VideoDecoder::VideoDecoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
VideoDecoder::VideoDecoder(const emlite::Val &val) noexcept: EventTarget(val) {}

VideoDecoder::VideoDecoder(const VideoDecoderInit& init) : EventTarget(emlite::Val::global("VideoDecoder").new_(init)) {}

CodecState VideoDecoder::state() const {
    return EventTarget::get("state").as<CodecState>();
}

unsigned long VideoDecoder::decodeQueueSize() const {
    return EventTarget::get("decodeQueueSize").as<unsigned long>();
}

jsbind::Any VideoDecoder::ondequeue() const {
    return EventTarget::get("ondequeue").as<jsbind::Any>();
}

void VideoDecoder::ondequeue(const jsbind::Any& value) {
    EventTarget::set("ondequeue", value);
}

jsbind::Undefined VideoDecoder::configure(const VideoDecoderConfig& config) {
    return EventTarget::call("configure", config).as<jsbind::Undefined>();
}

jsbind::Undefined VideoDecoder::decode(const EncodedVideoChunk& chunk) {
    return EventTarget::call("decode", chunk).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> VideoDecoder::flush() {
    return EventTarget::call("flush").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined VideoDecoder::reset() {
    return EventTarget::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined VideoDecoder::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Promise<VideoDecoderSupport> VideoDecoder::isConfigSupported(const VideoDecoderConfig& config) {
    return emlite::Val::global("videodecoder").call("isConfigSupported", config).as<jsbind::Promise<VideoDecoderSupport>>();
}


} // namespace webbind