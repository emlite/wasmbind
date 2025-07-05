#include <webbind/VideoDecoder.hpp>
#include <webbind/EncodedVideoChunk.hpp>
#include <webbind/VideoColorSpace.hpp>


VideoDecoderConfig::VideoDecoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoDecoderConfig VideoDecoderConfig::take_ownership(Handle h) noexcept {
        return VideoDecoderConfig(h);
    }
VideoDecoderConfig::VideoDecoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoDecoderConfig::VideoDecoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
VideoDecoderConfig VideoDecoderConfig::clone() const noexcept { return *this; }

jsbind::DOMString VideoDecoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::DOMString>();
}

void VideoDecoderConfig::codec(const jsbind::DOMString& value) {
    emlite::Val::set("codec", value);
}

jsbind::Any VideoDecoderConfig::description() const {
    return emlite::Val::get("description").as<jsbind::Any>();
}

void VideoDecoderConfig::description(const jsbind::Any& value) {
    emlite::Val::set("description", value);
}

unsigned long VideoDecoderConfig::codedWidth() const {
    return emlite::Val::get("codedWidth").as<unsigned long>();
}

void VideoDecoderConfig::codedWidth(unsigned long value) {
    emlite::Val::set("codedWidth", value);
}

unsigned long VideoDecoderConfig::codedHeight() const {
    return emlite::Val::get("codedHeight").as<unsigned long>();
}

void VideoDecoderConfig::codedHeight(unsigned long value) {
    emlite::Val::set("codedHeight", value);
}

unsigned long VideoDecoderConfig::displayAspectWidth() const {
    return emlite::Val::get("displayAspectWidth").as<unsigned long>();
}

void VideoDecoderConfig::displayAspectWidth(unsigned long value) {
    emlite::Val::set("displayAspectWidth", value);
}

unsigned long VideoDecoderConfig::displayAspectHeight() const {
    return emlite::Val::get("displayAspectHeight").as<unsigned long>();
}

void VideoDecoderConfig::displayAspectHeight(unsigned long value) {
    emlite::Val::set("displayAspectHeight", value);
}

VideoColorSpaceInit VideoDecoderConfig::colorSpace() const {
    return emlite::Val::get("colorSpace").as<VideoColorSpaceInit>();
}

void VideoDecoderConfig::colorSpace(const VideoColorSpaceInit& value) {
    emlite::Val::set("colorSpace", value);
}

HardwareAcceleration VideoDecoderConfig::hardwareAcceleration() const {
    return emlite::Val::get("hardwareAcceleration").as<HardwareAcceleration>();
}

void VideoDecoderConfig::hardwareAcceleration(const HardwareAcceleration& value) {
    emlite::Val::set("hardwareAcceleration", value);
}

bool VideoDecoderConfig::optimizeForLatency() const {
    return emlite::Val::get("optimizeForLatency").as<bool>();
}

void VideoDecoderConfig::optimizeForLatency(bool value) {
    emlite::Val::set("optimizeForLatency", value);
}

double VideoDecoderConfig::rotation() const {
    return emlite::Val::get("rotation").as<double>();
}

void VideoDecoderConfig::rotation(double value) {
    emlite::Val::set("rotation", value);
}

bool VideoDecoderConfig::flip() const {
    return emlite::Val::get("flip").as<bool>();
}

void VideoDecoderConfig::flip(bool value) {
    emlite::Val::set("flip", value);
}

VideoDecoderSupport::VideoDecoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoDecoderSupport VideoDecoderSupport::take_ownership(Handle h) noexcept {
        return VideoDecoderSupport(h);
    }
VideoDecoderSupport::VideoDecoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoDecoderSupport::VideoDecoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}
VideoDecoderSupport VideoDecoderSupport::clone() const noexcept { return *this; }

bool VideoDecoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void VideoDecoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

VideoDecoderConfig VideoDecoderSupport::config() const {
    return emlite::Val::get("config").as<VideoDecoderConfig>();
}

void VideoDecoderSupport::config(const VideoDecoderConfig& value) {
    emlite::Val::set("config", value);
}

VideoDecoder VideoDecoder::take_ownership(Handle h) noexcept {
        return VideoDecoder(h);
    }
VideoDecoder VideoDecoder::clone() const noexcept { return *this; }
VideoDecoder::VideoDecoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
VideoDecoder::VideoDecoder(const emlite::Val &val) noexcept: EventTarget(val) {}


VideoDecoder::VideoDecoder(const jsbind::Any& init) : EventTarget(emlite::Val::global("VideoDecoder").new_(init)) {}

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

jsbind::Promise VideoDecoder::flush() {
    return EventTarget::call("flush").as<jsbind::Promise>();
}

jsbind::Undefined VideoDecoder::reset() {
    return EventTarget::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined VideoDecoder::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Promise VideoDecoder::isConfigSupported(const VideoDecoderConfig& config) {
    return emlite::Val::global("videodecoder").call("isConfigSupported", config).as<jsbind::Promise>();
}

